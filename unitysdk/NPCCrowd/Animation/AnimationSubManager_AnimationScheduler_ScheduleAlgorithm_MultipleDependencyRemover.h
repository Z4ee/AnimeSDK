#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/BitSet64.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_AnimationScheduler_Node.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"

#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONSCHEDULER_SCHEDULEALGORITHM_MULTIPLEDEPENDENCYREMOVER_INVOKE_OFFSET UNITYSDK_OFFSET(0x5EEDD0)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_AnimationScheduler_ScheduleAlgorithm_MultipleDependencyRemover_TypeDefinitionIndex = 57456;

	struct alignas(8) AnimationSubManager_AnimationScheduler_ScheduleAlgorithm_MultipleDependencyRemover
	{
		::Foundation::BitSet64 Result; // 0x10
		::Unity::Collections::NativeArray_1<::Foundation::BitSet64> Prerequisite; // 0x18
		::Unity::Collections::NativeArray_1<::NPCCrowd::Animation::AnimationSubManager_AnimationScheduler_Node> Nodes; // 0x28
		::Unity::Collections::NativeArray_1<::System::Int32> Order; // 0x38

		::System::Void Invoke(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONSCHEDULER_SCHEDULEALGORITHM_MULTIPLEDEPENDENCYREMOVER_INVOKE_OFFSET))(this, index);
		}
	};
}
