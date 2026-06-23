#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAbilityGhostLocationFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAbilityMoveTargetFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAbilityMovementFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAbilityStandingSteeringFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAbilitySteeringFragment.h"
#include "unitysdk/NPCCrowd/Ability/FTransformFragment.h"
#include "unitysdk/NPCCrowd/Ability/NPCAbilitySteerToMoveTargetProcessor_RuntimeParameters.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"

#define NPCCROWD_ABILITY_NPCABILITYSTEERTOMOVETARGETPROCESSOR_EXECUTEJOB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x748610)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int NPCAbilitySteerToMoveTargetProcessor_ExecuteJob_TypeDefinitionIndex = 85935;

	struct alignas(8) NPCAbilitySteerToMoveTargetProcessor_ExecuteJob
	{
		::System::Single deltaTime; // 0x10
		::Unity::Collections::NativeArray_1<::System::Boolean> runtime_bIsUsing; // 0x18
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCAbilitySteeringFragment> runtime_steering; // 0x28
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCAbilityStandingSteeringFragment> runtime_standingSteering; // 0x38
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCAbilityGhostLocationFragment> runtime_ghost; // 0x48
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCAbilityMovementFragment> runtime_movement; // 0x58
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCAbilityMoveTargetFragment> runtime_moveTarget; // 0x68
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FTransformFragment> runtime_transform; // 0x78
		::Unity::Collections::NativeArray_1<::System::UInt32> EntityIDs; // 0x88
		::NPCCrowd::Ability::NPCAbilitySteerToMoveTargetProcessor_RuntimeParameters runtime_parameters; // 0x98

		::System::Void Execute(::System::Int32 idx)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYSTEERTOMOVETARGETPROCESSOR_EXECUTEJOB_EXECUTE_OFFSET))(this, idx);
		}
	};
}
