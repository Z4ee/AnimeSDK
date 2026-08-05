#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int FNPCAbilityStandingSteeringFragment_TypeDefinitionIndex = 43152;

	struct alignas(4) FNPCAbilityStandingSteeringFragment
	{
		::UnityEngine::Vector3 TargetLocation; // 0x10
		::System::Single TrackedTargetSpeed; // 0x1C
		::System::Single TargetSelectionCooldown; // 0x20
		::System::Boolean bIsUpdatingTarget; // 0x24
		::System::Boolean bEnteredFromMoveAction; // 0x25
	};
}
