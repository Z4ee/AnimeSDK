#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int EAttractorSlotState_TypeDefinitionIndex = 71647;

	enum class EAttractorSlotState : ::System::Int32
	{
		Claimed = 2,
		Valid = 1,
		Occupied = 3,
		InValid = 0,
	};
}
