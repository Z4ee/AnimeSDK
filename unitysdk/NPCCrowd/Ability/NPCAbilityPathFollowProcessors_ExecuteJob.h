#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/ENPCAbilityMovementAction.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAbilityMoveTargetFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAbilityPathFollowFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCCPUAnimatorFragment.h"
#include "unitysdk/NPCCrowd/Ability/FTransformFragment.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"

#define NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSORS_EXECUTEJOB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x696FF0)
#define NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSORS_EXECUTEJOB_PROCESSMOVEACTION_OFFSET UNITYSDK_OFFSET(0xF84D870)
#define NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSORS_EXECUTEJOB_SETMOVEACTION_OFFSET UNITYSDK_OFFSET(0xF84D710)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int NPCAbilityPathFollowProcessors_ExecuteJob_TypeDefinitionIndex = 44395;

	struct alignas(8) NPCAbilityPathFollowProcessors_ExecuteJob
	{
		::System::Single deltaTime; // 0x10
		::System::Single currentTime; // 0x14
		::Unity::Collections::NativeArray_1<::System::Boolean> runtime_bIsUsing; // 0x18
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FTransformFragment> runtime_transform; // 0x28
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCAbilityPathFollowFragment> runtime_pathFollow; // 0x38
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCAbilityMoveTargetFragment> runtime_moveTarget; // 0x48
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCCPUAnimatorFragment> runtime_animatorBufferData; // 0x58

		static ::System::Boolean SetMoveAction(::NPCCrowd::Ability::FNPCAbilityMoveTargetFragment& moveTarget, ::NPCCrowd::Ability::ENPCAbilityMovementAction action, ::System::Single currentTime)
		{
			return ((::System::Boolean(*)(::NPCCrowd::Ability::FNPCAbilityMoveTargetFragment&, ::NPCCrowd::Ability::ENPCAbilityMovementAction, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSORS_EXECUTEJOB_SETMOVEACTION_OFFSET))(moveTarget, action, currentTime);
		}

		static ::System::Boolean ProcessMoveAction(::NPCCrowd::Ability::FNPCAbilityMoveTargetFragment& moveTarget, ::NPCCrowd::Ability::FNPCAbilityPathFollowFragment& pathFollow, ::NPCCrowd::Ability::FNPCCPUAnimatorFragment& animation, ::System::Single currentTime)
		{
			return ((::System::Boolean(*)(::NPCCrowd::Ability::FNPCAbilityMoveTargetFragment&, ::NPCCrowd::Ability::FNPCAbilityPathFollowFragment&, ::NPCCrowd::Ability::FNPCCPUAnimatorFragment&, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSORS_EXECUTEJOB_PROCESSMOVEACTION_OFFSET))(moveTarget, pathFollow, animation, currentTime);
		}

		::System::Void Execute(::System::Int32 idx)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSORS_EXECUTEJOB_EXECUTE_OFFSET))(this, idx);
		}
	};
}
