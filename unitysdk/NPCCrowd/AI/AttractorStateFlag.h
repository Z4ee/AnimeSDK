#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int AttractorStateFlag_TypeDefinitionIndex = 54979;

	enum class AttractorStateFlag : ::System::Int32
	{
		Claimed = 4,
		InValid = 1,
		Valid = 2,
		Occupied = 8,
	};
}
