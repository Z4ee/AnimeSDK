#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int LoadingStrategyPriority_TypeDefinitionIndex = 48955;

	enum class LoadingStrategyPriority : ::System::Int32
	{
		Low = 0,
		Middle = 1,
		High = 2,
		VeryHigh = 3,
		Exclusive = 4,
	};
}
