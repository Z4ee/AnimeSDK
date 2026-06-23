#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAbilityMoveTargetFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAbilityMovementStyleSpeedParameters.h"
#include "unitysdk/NPCCrowd/Ability/FNPCCPUAnimatorFragment.h"
#include "unitysdk/NPCCrowd/Ability/FTransformFragment.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/Unity/Jobs/JobHandle.h"

namespace NPCCrowd::Ability { class NPCAbilityRuntimeData; }

#define NPCCROWD_ABILITY_NPCABILITYANIMATEPROCESSORS_EXECUTE_1_OFFSET UNITYSDK_OFFSET(0xEBC5A80)
#define NPCCROWD_ABILITY_NPCABILITYANIMATEPROCESSORS_EXECUTE_OFFSET UNITYSDK_OFFSET(0xEBC5490)
#define NPCCROWD_ABILITY_NPCABILITYANIMATEPROCESSORS_INITDEFAULTANIMATIONDATA_OFFSET UNITYSDK_OFFSET(0xEBC51B0)
#define NPCCROWD_ABILITY_NPCABILITYANIMATEPROCESSORS_INITPATHFOLLOWANIMATIONDATA_OFFSET UNITYSDK_OFFSET(0xEBC4E90)
#define NPCCROWD_ABILITY_NPCABILITYANIMATEPROCESSORS__CTOR_OFFSET UNITYSDK_OFFSET(0xEBC5C90)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int NPCAbilityAnimateProcessors_TypeDefinitionIndex = 67464;

	class NPCAbilityAnimateProcessors : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYANIMATEPROCESSORS__CTOR_OFFSET))(this);
		}

		::System::Void InitPathFollowAnimationData(::NPCCrowd::Ability::NPCAbilityRuntimeData* runtime, ::System::Int32 idx, ::NPCCrowd::Ability::FNPCAbilityMovementStyleSpeedParameters moveParams, ::System::Single randDesiredSpeed)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::NPCAbilityRuntimeData*, ::System::Int32, ::NPCCrowd::Ability::FNPCAbilityMovementStyleSpeedParameters, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYANIMATEPROCESSORS_INITPATHFOLLOWANIMATIONDATA_OFFSET))(this, runtime, idx, moveParams, randDesiredSpeed);
		}

		::System::Void InitDefaultAnimationData(::NPCCrowd::Ability::NPCAbilityRuntimeData* runtime, ::System::Int32 idx, ::NPCCrowd::Ability::FNPCAbilityMovementStyleSpeedParameters moveParams)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::NPCAbilityRuntimeData*, ::System::Int32, ::NPCCrowd::Ability::FNPCAbilityMovementStyleSpeedParameters))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYANIMATEPROCESSORS_INITDEFAULTANIMATIONDATA_OFFSET))(this, runtime, idx, moveParams);
		}

		static ::System::Void Execute(::System::Int32 index, ::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FTransformFragment>& TransformFragments, ::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCCPUAnimatorFragment> AnimationFragments, ::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCAbilityMoveTargetFragment> MoveTargetsFragments, ::Unity::Collections::NativeArray_1<::System::UInt32> EntityID)
		{
			return ((::System::Void(*)(::System::Int32, ::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FTransformFragment>&, ::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCCPUAnimatorFragment>, ::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCAbilityMoveTargetFragment>, ::Unity::Collections::NativeArray_1<::System::UInt32>))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYANIMATEPROCESSORS_EXECUTE_OFFSET))(index, TransformFragments, AnimationFragments, MoveTargetsFragments, EntityID);
		}

		::Unity::Jobs::JobHandle Execute_1(::NPCCrowd::Ability::NPCAbilityRuntimeData* runtime, ::System::Single deltaTime, ::Unity::Jobs::JobHandle dependsOn)
		{
			return ((::Unity::Jobs::JobHandle(*)(::PVOID, ::NPCCrowd::Ability::NPCAbilityRuntimeData*, ::System::Single, ::Unity::Jobs::JobHandle))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYANIMATEPROCESSORS_EXECUTE_1_OFFSET))(this, runtime, deltaTime, dependsOn);
		}
	};
}
