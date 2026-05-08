#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAbilityGhostLocationFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAbilityMoveTargetFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAbilityMovementFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAbilityStandingSteeringFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAbilitySteeringFragment.h"
#include "unitysdk/NPCCrowd/Ability/FTransformFragment.h"
#include "unitysdk/NPCCrowd/Ability/NPCAbilitySteerToMoveTargetProcessor_RuntimeParameters.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"

namespace NPCCrowd::Ability { class NPCAbilityRuntimeData; }

#define NPCCROWD_ABILITY_NPCABILITYSTEERTOMOVETARGETPROCESSOR_EXECUTE_1_OFFSET UNITYSDK_OFFSET(0x11B14070)
#define NPCCROWD_ABILITY_NPCABILITYSTEERTOMOVETARGETPROCESSOR_EXECUTE_OFFSET UNITYSDK_OFFSET(0x11B12230)
#define NPCCROWD_ABILITY_NPCABILITYSTEERTOMOVETARGETPROCESSOR__CTOR_OFFSET UNITYSDK_OFFSET(0x11B14470)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int NPCAbilitySteerToMoveTargetProcessor_TypeDefinitionIndex = 41971;

	class NPCAbilitySteerToMoveTargetProcessor : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYSTEERTOMOVETARGETPROCESSOR__CTOR_OFFSET))(this);
		}

		static ::System::Void Execute(::System::Int32 idx, ::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCAbilitySteeringFragment>& runtime_steering, ::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCAbilityStandingSteeringFragment>& runtime_standingSteering, ::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCAbilityGhostLocationFragment>& runtime_ghost, ::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCAbilityMovementFragment>& runtime_movement, ::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCAbilityMoveTargetFragment>& runtime_moveTarget, ::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FTransformFragment>& runtime_transform, ::Unity::Collections::NativeArray_1<::System::UInt32> EntityIDs, ::NPCCrowd::Ability::NPCAbilitySteerToMoveTargetProcessor_RuntimeParameters runtime_parameters, ::System::Single deltaTime)
		{
			return ((::System::Void(*)(::System::Int32, ::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCAbilitySteeringFragment>&, ::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCAbilityStandingSteeringFragment>&, ::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCAbilityGhostLocationFragment>&, ::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCAbilityMovementFragment>&, ::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCAbilityMoveTargetFragment>&, ::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FTransformFragment>&, ::Unity::Collections::NativeArray_1<::System::UInt32>, ::NPCCrowd::Ability::NPCAbilitySteerToMoveTargetProcessor_RuntimeParameters, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYSTEERTOMOVETARGETPROCESSOR_EXECUTE_OFFSET))(idx, runtime_steering, runtime_standingSteering, runtime_ghost, runtime_movement, runtime_moveTarget, runtime_transform, EntityIDs, runtime_parameters, deltaTime);
		}

		::Unity::Jobs::JobHandle Execute_1(::NPCCrowd::Ability::NPCAbilityRuntimeData* runtime, ::System::Single deltaTime, ::Unity::Jobs::JobHandle dependsOn)
		{
			return ((::Unity::Jobs::JobHandle(*)(::PVOID, ::NPCCrowd::Ability::NPCAbilityRuntimeData*, ::System::Single, ::Unity::Jobs::JobHandle))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYSTEERTOMOVETARGETPROCESSOR_EXECUTE_1_OFFSET))(this, runtime, deltaTime, dependsOn);
		}
	};
}
