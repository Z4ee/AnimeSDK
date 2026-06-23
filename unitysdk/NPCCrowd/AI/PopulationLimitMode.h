#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int PopulationLimitMode_TypeDefinitionIndex = 49116;

	enum class PopulationLimitMode : ::System::Int32
	{
		PopulationWeight = 1,
		PopulationCount = 0,
	};
}
