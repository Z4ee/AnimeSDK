#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAbilityMoveTargetFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAbilityPathFollowFragmentV2.h"
#include "unitysdk/NPCCrowd/Ability/FTransformFragment.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"

#define NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_EXECUTEJOB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x652520)

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int NPCAbilityPathFollowProcessor_ExecuteJob_TypeDefinitionIndex = 68221;

	struct alignas(8) NPCAbilityPathFollowProcessor_ExecuteJob
	{
		::System::Single deltaTime; // 0x10
		::System::Single currentTime; // 0x14
		::Unity::Collections::NativeArray_1<::System::Boolean> runtime_bIsUsing; // 0x18
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FTransformFragment> runtime_transform; // 0x28
		::Unity::Collections::NativeArray_1<::System::UInt32> EntityIds; // 0x38
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2> runtime_pathFollow; // 0x48
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCAbilityMoveTargetFragment> runtime_moveTarget; // 0x58

		::System::Void Execute(::System::Int32 idx)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ABILITY_NPCABILITYPATHFOLLOWPROCESSOR_EXECUTEJOB_EXECUTE_OFFSET))(this, idx);
		}
	};
}
