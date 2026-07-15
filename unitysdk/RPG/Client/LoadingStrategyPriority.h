#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int LoadingStrategyPriority_TypeDefinitionIndex = 57741;

	enum class LoadingStrategyPriority : ::System::Int32
	{
		Low = 0,
		Middle = 1,
		High = 2,
		VeryHigh = 3,
		Highest = 4,
		Exclusive = 5,
	};
}
