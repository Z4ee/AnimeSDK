#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::CustomRP
{
	inline static constexpr unsigned int RuntimeProfiler_AndroidMemoryMetricType_TypeDefinitionIndex = 37926;

	enum class RuntimeProfiler_AndroidMemoryMetricType : ::System::Int32
	{
		Rss = 0,
		Pss = 1,
		GoogleMetric = 2,
	};
}
