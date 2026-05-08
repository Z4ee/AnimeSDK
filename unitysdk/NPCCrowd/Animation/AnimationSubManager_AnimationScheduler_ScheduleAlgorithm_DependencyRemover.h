#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/BitSet64.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"

#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONSCHEDULER_SCHEDULEALGORITHM_DEPENDENCYREMOVER_INVOKE_OFFSET UNITYSDK_OFFSET(0x573880)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_AnimationScheduler_ScheduleAlgorithm_DependencyRemover_TypeDefinitionIndex = 70428;

	struct alignas(8) AnimationSubManager_AnimationScheduler_ScheduleAlgorithm_DependencyRemover
	{
		::Foundation::BitSet64 Result; // 0x10
		::Unity::Collections::NativeArray_1<::Foundation::BitSet64> Prerequisite; // 0x18
		::Unity::Collections::NativeArray_1<::System::Int32> Order; // 0x28
		::System::UInt32 NodeIndex; // 0x38

		::System::Void Invoke(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ANIMATIONSCHEDULER_SCHEDULEALGORITHM_DEPENDENCYREMOVER_INVOKE_OFFSET))(this, index);
		}
	};
}
