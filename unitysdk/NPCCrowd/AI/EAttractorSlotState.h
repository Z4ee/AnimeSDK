#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int EAttractorSlotState_TypeDefinitionIndex = 44078;

	enum class EAttractorSlotState : ::System::Int32
	{
		Valid = 1,
		Claimed = 2,
		Occupied = 3,
		InValid = 0,
	};
}
