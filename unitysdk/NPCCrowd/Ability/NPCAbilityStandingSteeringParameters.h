#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define NPCCROWD_ABILITY_NPCABILITYSTANDINGSTEERINGPARAMETERS__CTOR_OFFSET UNITYSDK_OFFSET(0xFB530B0)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int NPCAbilityStandingSteeringParameters_TypeDefinitionIndex = 53265;

	class NPCAbilityStandingSteeringParameters : public ::System::Object
	{
	public:
		::System::Single ReactionTime; // 0x10
		::System::Single TargetMoveThreshold; // 0x14
		::System::Single TargetMoveThresholdVariance; // 0x18
		::System::Single LowSpeedThreshold; // 0x1C
		::System::Single TargetSpeedHysteresisScale; // 0x20
		::System::Single TargetSelectionCooldown; // 0x24
		::System::Single TargetSelectionCooldownVariance; // 0x28
		::System::Single DeadZoneRadius; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYSTANDINGSTEERINGPARAMETERS__CTOR_OFFSET))(this);
		}
	};
}
