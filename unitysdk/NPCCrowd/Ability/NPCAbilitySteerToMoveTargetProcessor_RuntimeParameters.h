#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int NPCAbilitySteerToMoveTargetProcessor_RuntimeParameters_TypeDefinitionIndex = 43212;

	struct alignas(4) NPCAbilitySteerToMoveTargetProcessor_RuntimeParameters
	{
		::System::Single steerK; // 0x10
		::System::Single moveSteering_LookAheadTime; // 0x14
		::System::Single movement_MaxSpeed; // 0x18
		::System::Single standingSteering_TargetMoveThreshold; // 0x1C
		::System::Single standingSteering_TargetMoveThresholdVariance; // 0x20
		::System::Single standingSteering_TargetSelectionCooldown; // 0x24
		::System::Single standingSteering_TargetSelectionCooldownVariance; // 0x28
		::System::Single standingSteering_TargetSpeedHysteresisScale; // 0x2C
		::System::Single standingSteering_DeadZoneRadius; // 0x30
		::System::Single standingSteering_LowSpeedThreshold; // 0x34
	};
}
