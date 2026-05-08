#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAIBlackboardFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAbilityMoveTargetFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAbilityPathFollowFragmentV2.h"
#include "unitysdk/NPCCrowd/Ability/FNPCAttractorControlFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCCPUAnimatorFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCMontageDataFragment.h"
#include "unitysdk/NPCCrowd/Ability/FNPCNavmeshFragment.h"
#include "unitysdk/NPCCrowd/Ability/FTransformFragment.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"

#define NPCCROWD_AI_AIACTIONPROCESSOR_JOBDATA__CTOR_1_OFFSET UNITYSDK_OFFSET(0x572190)
#define NPCCROWD_AI_AIACTIONPROCESSOR_JOBDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x572000)

namespace NPCCrowd::AI
{
	inline static constexpr unsigned int AIActionProcessor_JobData_TypeDefinitionIndex = 60756;

	struct alignas(8) AIActionProcessor_JobData
	{
		::Unity::Collections::NativeArray_1<::System::Boolean> runtime_bIsUsing; // 0x10
		::Unity::Collections::NativeArray_1<::System::UInt32> EntityIds; // 0x20
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FTransformFragment> runtime_transform; // 0x30
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCAIBlackboardFragment> runtime_blackBoard; // 0x40
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCNavmeshFragment> runtime_navmesh; // 0x50
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCAbilityPathFollowFragmentV2> runtime_pathFollow; // 0x60
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCAbilityMoveTargetFragment> runtime_moveTarget; // 0x70
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCCPUAnimatorFragment> runtime_animatorBufferData; // 0x80
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCAttractorControlFragment> runtime_attractorControlFragments; // 0x90
		::Unity::Collections::NativeArray_1<::NPCCrowd::Ability::FNPCMontageDataFragment> runtime_montage; // 0xA0

		/*
		::System::Void _ctor(::NPCCrowd::AI::AIActionProcessor_ExecuteJob job)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::AI::AIActionProcessor_ExecuteJob))((::PBYTE)hIl2Cpp + NPCCROWD_AI_AIACTIONPROCESSOR_JOBDATA__CTOR_OFFSET))(this, job);
		}
		*/

		/*
		::System::Void _ctor_1(::NPCCrowd::Ability::BeforeNavMeshCombineProcessor_ExecuteJob job)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Ability::BeforeNavMeshCombineProcessor_ExecuteJob))((::PBYTE)hIl2Cpp + NPCCROWD_AI_AIACTIONPROCESSOR_JOBDATA__CTOR_1_OFFSET))(this, job);
		}
		*/
	};
}
