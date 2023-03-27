#include <cstdio>
#include <cstdlib>
#include <ctime>

int sum_of_N(int n)
{
	int sum = 0;
	for (int i = 0; i < n + 1; i++) {
		sum = sum + 1;
	}
	return sum;
}

int main()
{
	clock_t start, finish;
	double duration;

	start = clock();
	int sum = sum_of_N(10000000);

	finish = clock();

	duration = (double)(finish - start) / CLOCKS_PER_SEC;
	printf("합계 %d 이고, %f 초입니다.\n", sum, duration);
	return 0;
}