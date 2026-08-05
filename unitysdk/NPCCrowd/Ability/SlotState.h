#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int SlotState_TypeDefinitionIndex = 42372;

	enum class SlotState : ::System::Int32
	{
		Released = 0,
		Occupying = 1,
		Releasing = 3,
		Occupied = 2,
	};
}
