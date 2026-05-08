#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/NapTransformData.h"

#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGPOSEWARPINGPROCESSOR_JOB_FLUSHER_APPLYLOOPCOUNT_OFFSET UNITYSDK_OFFSET(0x72EE60)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGPOSEWARPINGPROCESSOR_JOB_FLUSHER_FOUNDATION_IIN_OFFSET UNITYSDK_OFFSET(0x72EE50)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGPOSEWARPINGPROCESSOR_JOB_FLUSHER__CTOR_OFFSET UNITYSDK_OFFSET(0x72ED30)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_AdjustmentBlendingPoseWarpingProcessor_Job_Flusher_TypeDefinitionIndex = 70502;

	struct alignas(8) AnimationSubManager_AdjustmentBlendingPoseWarpingProcessor_Job_Flusher
	{
		::System::Single* _valueBuffer; // 0x10
		::System::Int32 _valueCount; // 0x18
		::System::Int32* _skeleton; // 0x20
		::System::Int32 _boneCount; // 0x28
		::UnityEngine::NapTransformData* _bones; // 0x30
		::UnityEngine::NapTransformData _loop; // 0x38
		::UnityEngine::NapTransformData _origin; // 0x68
		::System::Single _loopCount; // 0x98

		/*
		::System::Void _ctor(::System::Single* buffer, ::System::Int32 capacity, ::Unity::Collections::NativeArray_1<::System::Int32> skeleton, ::UnityEngine::NapTransformData* bones, ::UnityEngine::NapTransformData loop, ::UnityEngine::NapTransformData origin, ::System::Int32 loopCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single*, ::System::Int32, ::Unity::Collections::NativeArray_1<::System::Int32>, ::UnityEngine::NapTransformData*, ::UnityEngine::NapTransformData, ::UnityEngine::NapTransformData, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGPOSEWARPINGPROCESSOR_JOB_FLUSHER__CTOR_OFFSET))(this, buffer, capacity, skeleton, bones, loop, origin, loopCount);
		}
		*/

		/*
		::System::Void Foundation_IIn(::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingWarpingPerBoneConfig& config, ::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingPerBoneControlData& controlData, ::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingWarpingPerBoneSampleData& sampleData)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingWarpingPerBoneConfig&, ::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingPerBoneControlData&, ::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingWarpingPerBoneSampleData&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGPOSEWARPINGPROCESSOR_JOB_FLUSHER_FOUNDATION_IIN_OFFSET))(this, config, controlData, sampleData);
		}
		*/

		/*
		::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingTransformData_1<::System::Single> ApplyLoopCount(::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingTransformData_1<::System::Single> ratios)
		{
			return ((::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingTransformData_1<::System::Single>(*)(::PVOID, ::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingTransformData_1<::System::Single>))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGPOSEWARPINGPROCESSOR_JOB_FLUSHER_APPLYLOOPCOUNT_OFFSET))(this, ratios);
		}
		*/
	};
}
