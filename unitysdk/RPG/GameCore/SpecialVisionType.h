#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int SpecialVisionType_TypeDefinitionIndex = 23644;

	enum class SpecialVisionType : ::System::Int32
	{
		PuppySearchProp = 0,
		PlayerSearchSneakMonster = 1,
		MissionPerform = 2,
		SmellPath = 3,
		MemoryVision = 4,
		Performance = 5,
	};
}
