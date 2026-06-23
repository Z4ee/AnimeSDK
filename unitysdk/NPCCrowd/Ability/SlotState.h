#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int SlotState_TypeDefinitionIndex = 55092;

	enum class SlotState : ::System::Int32
	{
		Released = 0,
		Releasing = 3,
		Occupied = 2,
		Occupying = 1,
	};
}
