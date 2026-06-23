#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Foundation::Unreal { class SerializableGameplayTagContainer; }

#define NPCCROWD_ABILITY_NPCABILITYMOVEMENTSTYLESPEEDPARAMETERS__CTOR_OFFSET UNITYSDK_OFFSET(0x8C28B60)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int NPCAbilityMovementStyleSpeedParameters_TypeDefinitionIndex = 46581;

	class NPCAbilityMovementStyleSpeedParameters : public ::System::Object
	{
	public:
		::System::Single Speed; // 0x10
		::System::Single Variance; // 0x14
		::System::Single StopDistance; // 0x18
		::System::Single StartDistance; // 0x1C
		::System::Single Probability; // 0x20
		::System::Single ProbabilityThreshold; // 0x24
		::System::Int32 WalkAnimClipID; // 0x28
		::System::Int32 StandAnimClipID; // 0x2C
		::Foundation::Unreal::SerializableGameplayTagContainer* movementTags; // 0x30
		::System::Int32 StateMachineInstanceIndex; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYMOVEMENTSTYLESPEEDPARAMETERS__CTOR_OFFSET))(this);
		}
	};
}
