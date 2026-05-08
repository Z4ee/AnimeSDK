#pragma once
#include "unitysdk/unitysdk.h"

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int SlotState_TypeDefinitionIndex = 39985;

	enum class SlotState : ::System::Int32
	{
		Released = 0,
		Releasing = 3,
		Occupying = 1,
		Occupied = 2,
	};
}
