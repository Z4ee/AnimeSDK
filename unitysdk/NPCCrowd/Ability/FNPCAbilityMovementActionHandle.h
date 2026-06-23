#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/ENPCAbilityMovementAction.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int FNPCAbilityMovementActionHandle_TypeDefinitionIndex = 72488;

	struct alignas(4) FNPCAbilityMovementActionHandle
	{
		::NPCCrowd::Ability::ENPCAbilityMovementAction action; // 0x10
		::System::UInt16 actionID; // 0x14
		::System::Single startTime; // 0x18
	};
}
