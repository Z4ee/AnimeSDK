#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int EAttractorSlotState_TypeDefinitionIndex = 74827;

	enum class EAttractorSlotState : ::System::Int32
	{
		Valid = 1,
		Occupied = 3,
		Claimed = 2,
		InValid = 0,
	};
}
