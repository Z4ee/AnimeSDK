#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/NapTransformData.h"

#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_REQUESTADJUSTMENTBLENDINGBYMOTIONPROCESSOR_LEGACYJOB_FLUSHER_FOUNDATION_IINVOCABLEBYREF_NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGWARPINGPERBONECONFIG_NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGPERBONECONTROLDATA__INVOKE_OFFSET UNITYSDK_OFFSET(0x6267B0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_REQUESTADJUSTMENTBLENDINGBYMOTIONPROCESSOR_LEGACYJOB_FLUSHER_GET_SUCCEED_OFFSET UNITYSDK_OFFSET(0x626640)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_REQUESTADJUSTMENTBLENDINGBYMOTIONPROCESSOR_LEGACYJOB_FLUSHER__CTOR_OFFSET UNITYSDK_OFFSET(0x626650)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_RequestAdjustmentBlendingByMotionProcessor_LegacyJob_Flusher_TypeDefinitionIndex = 57411;

	struct alignas(8) AnimationSubManager_RequestAdjustmentBlendingByMotionProcessor_LegacyJob_Flusher
	{
		::UnityEngine::NapTransformData _animationBeginMeshTransform; // 0x10
		::UnityEngine::NapTransformData _animationEndMeshTransform; // 0x40
		::UnityEngine::NapTransformData _actualBeginGlobalTransform; // 0x70
		::UnityEngine::NapTransformData _actualEndGlobalTransform; // 0xA0
		::System::Single* _beginValues; // 0xD0
		::System::Single* _endValues; // 0xD8
		::System::Int32 _valueCount; // 0xE0
		::System::Boolean _succeed; // 0xE4
		::System::Int32* _skeleton; // 0xE8
		::System::Int32 _boneCount; // 0xF0
		::UnityEngine::NapTransformData* _endLocalPose; // 0xF8
		::System::Int32 _loopCount; // 0x100
		::System::Single _threshold; // 0x104

		/*
		::System::Void _ctor(::UnityEngine::NapTransformData beginMeshTransform, ::UnityEngine::NapTransformData endMeshTransform, ::UnityEngine::NapTransformData beginGlobalTransform, ::UnityEngine::NapTransformData endGlobalTransform, ::System::Single* beginValues, ::System::Single* endValues, ::System::Int32 capacity, ::Unity::Collections::NativeArray_1<::System::Int32> skeleton, ::UnityEngine::NapTransformData* pose, ::System::Int32 loopCount, ::System::Single threshold)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::NapTransformData, ::UnityEngine::NapTransformData, ::UnityEngine::NapTransformData, ::UnityEngine::NapTransformData, ::System::Single*, ::System::Single*, ::System::Int32, ::Unity::Collections::NativeArray_1<::System::Int32>, ::UnityEngine::NapTransformData*, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_REQUESTADJUSTMENTBLENDINGBYMOTIONPROCESSOR_LEGACYJOB_FLUSHER__CTOR_OFFSET))(this, beginMeshTransform, endMeshTransform, beginGlobalTransform, endGlobalTransform, beginValues, endValues, capacity, skeleton, pose, loopCount, threshold);
		}
		*/

		::System::Boolean get_Succeed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_REQUESTADJUSTMENTBLENDINGBYMOTIONPROCESSOR_LEGACYJOB_FLUSHER_GET_SUCCEED_OFFSET))(this);
		}

		/*
		::System::Void Foundation_IInvocableByRef_NPCCrowd_Animation_AnimationSubManager_AdjustmentBlendingWarpingPerBoneConfig_NPCCrowd_Animation_AnimationSubManager_AdjustmentBlendingPerBoneControlData__Invoke(::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingWarpingPerBoneConfig& config, ::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingPerBoneControlData& result)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingWarpingPerBoneConfig&, ::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingPerBoneControlData&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_REQUESTADJUSTMENTBLENDINGBYMOTIONPROCESSOR_LEGACYJOB_FLUSHER_FOUNDATION_IINVOCABLEBYREF_NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGWARPINGPERBONECONFIG_NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGPERBONECONTROLDATA__INVOKE_OFFSET))(this, config, result);
		}
		*/
	};
}
