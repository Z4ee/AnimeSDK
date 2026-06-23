#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAbilityMoveTargetFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCCPUAnimatorFragment.h"
#include "unitysdk/NPCCrowd/Ability/FTransformFragment.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"

#define NPCCROWD_ABILITY_NPCABILITYANIMATEPROCESSORS_EXECUTEJOB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x67EF30)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int NPCAbilityAnimateProcessors_ExecuteJob_TypeDefinitionIndex = 67465;

	struct alignas(8) NPCAbilityAnimateProcessors_ExecuteJob
	{
		::Unity::Collections::NativeArray_1<::System::Boolean> IsUsing; // 0x10
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCCPUAnimatorFragment> AnimationFragments; // 0x20
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCAbilityMoveTargetFragment> MoveTargetsFragments; // 0x30
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FTransformFragment> TransformFragments; // 0x40
		::Unity::Collections::NativeArray_1<::System::UInt32> EntityIDs; // 0x50

		::System::Void Execute(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYANIMATEPROCESSORS_EXECUTEJOB_EXECUTE_OFFSET))(this, index);
		}
	};
}
