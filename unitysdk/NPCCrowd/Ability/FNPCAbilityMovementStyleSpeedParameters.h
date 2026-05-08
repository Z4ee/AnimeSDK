#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FGameplayTagContainer.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int FNPCAbilityMovementStyleSpeedParameters_TypeDefinitionIndex = 58805;

	struct alignas(8) FNPCAbilityMovementStyleSpeedParameters
	{
		::System::Int32 StandAnimClipID; // 0x10
		::System::Int32 WalkAnimClipID; // 0x14
		::System::Single DesiredSpeed; // 0x18
		::System::Single DesiredSpeedVariance; // 0x1C
		::System::Single StopDistance; // 0x20
		::System::Single StartDistance; // 0x24
		::Foundation::Unreal::FGameplayTagContainer movementTags; // 0x28
		::System::Int32 StateMachineInstanceIndex; // 0x98
	};
}
