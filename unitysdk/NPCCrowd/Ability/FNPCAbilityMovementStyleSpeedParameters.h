#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FGameplayTagContainer.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::Ability { class NPCStateMachineRandomIntInitConfig; }
namespace System::Collections::Generic { template <typename T> class List_1; }

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int FNPCAbilityMovementStyleSpeedParameters_TypeDefinitionIndex = 61780;

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
		::System::Collections::Generic::List_1<::NPCCrowd::Ability::NPCStateMachineRandomIntInitConfig*>* StateMachineRandomIntInitConfigs; // 0xA0
	};
}
