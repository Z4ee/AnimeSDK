#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_AdjustmentBlendingBone.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_AdjustmentBlendingPerBoneCollection_1.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_AdjustmentBlendingWarpingPerBoneConfig.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::Animation { class AnimationSubManager_AvatarArchetypeData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGPOSEWARPINGPROCESSOR_PARALLELJOB_CLEARCONTROLDATA_1_OFFSET UNITYSDK_OFFSET(0x66A950)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGPOSEWARPINGPROCESSOR_PARALLELJOB_CLEARCONTROLDATA_OFFSET UNITYSDK_OFFSET(0x66A940)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGPOSEWARPINGPROCESSOR_PARALLELJOB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x66A4E0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGPOSEWARPINGPROCESSOR_PARALLELJOB_GETPOSE_OFFSET UNITYSDK_OFFSET(0x66A5E0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGPOSEWARPINGPROCESSOR_PARALLELJOB_GET__SKELETON_OFFSET UNITYSDK_OFFSET(0x66A4C0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGPOSEWARPINGPROCESSOR_PARALLELJOB_SAMPLEPOSE_1_OFFSET UNITYSDK_OFFSET(0x66A4F0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGPOSEWARPINGPROCESSOR_PARALLELJOB_SAMPLEPOSE_OFFSET UNITYSDK_OFFSET(0xF86C2C0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGPOSEWARPINGPROCESSOR_PARALLELJOB_SETBONEDATA_OFFSET UNITYSDK_OFFSET(0x66A7D0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGPOSEWARPINGPROCESSOR_PARALLELJOB_SETCONTROLDATA_OFFSET UNITYSDK_OFFSET(0x66A890)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGPOSEWARPINGPROCESSOR_PARALLELJOB_TRYRESOLVEDISPATCHINDEX_OFFSET UNITYSDK_OFFSET(0xF869350)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGPOSEWARPINGPROCESSOR_PARALLELJOB_WARPPOSE_OFFSET UNITYSDK_OFFSET(0x66A6F0)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_AdjustmentBlendingPoseWarpingProcessor_ParallelJob_TypeDefinitionIndex = 88273;

	struct alignas(8) AnimationSubManager_AdjustmentBlendingPoseWarpingProcessor_ParallelJob
	{
		static ::System::Collections::Generic::List_1<::NPCCrowd::Animation::AnimationSubManager_AvatarArchetypeData*>** StaticGet_s_sources()
		{
			return (::System::Collections::Generic::List_1<::NPCCrowd::Animation::AnimationSubManager_AvatarArchetypeData*>**)Il2CppClass::FromTypeDefinitionIndex(AnimationSubManager_AdjustmentBlendingPoseWarpingProcessor_ParallelJob_TypeDefinitionIndex)->GetStaticField(0x40F80);
		}
		::System::Double _timestamp; // 0x10
		::System::Int32 _sourceIndex; // 0x18
		::System::Int32 _avatarId; // 0x1C
		::System::Int32 _boneCount; // 0x20
		::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingPerBoneCollection_1<::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingWarpingPerBoneConfig> _config; // 0x24

		/*
		::Unity::Collections::NativeArray_1<::System::Int32> get__skeleton()
		{
			return ((::Unity::Collections::NativeArray_1<::System::Int32>(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGPOSEWARPINGPROCESSOR_PARALLELJOB_GET__SKELETON_OFFSET))(this);
		}
		*/

		static ::System::Boolean TryResolveDispatchIndex(::System::Int32 chunkIndex, ::System::Int32& sourceIndex, ::System::Int32& localChunkIndex)
		{
			return ((::System::Boolean(*)(::System::Int32, ::System::Int32&, ::System::Int32&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGPOSEWARPINGPROCESSOR_PARALLELJOB_TRYRESOLVEDISPATCHINDEX_OFFSET))(chunkIndex, sourceIndex, localChunkIndex);
		}

		::System::Void Execute(::System::Int32 chunkIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGPOSEWARPINGPROCESSOR_PARALLELJOB_EXECUTE_OFFSET))(this, chunkIndex);
		}

		/*
		static ::System::Void SamplePose(::Foundation::EnumAsFlag_1<::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingBone> previousFlags, ::Foundation::EnumAsFlag_1<::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingBone> currentFlags, ::NPCCrowd::Animation::CPUStateMachine::AnimationTickData sampleData, ::Foundation::Unreal::Interval_1<::System::Double> sampleInterval, ::System::Int32 boneCount, ::System::Int32 avatarId, ::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingPerBoneCollection_1<::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingWarpingPerBoneConfig> config, ::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingControlData controlData, ::UnityEngine::NapTransformData* bones, ::System::Single* curveValues)
		{
			return ((::System::Void(*)(::Foundation::EnumAsFlag_1<::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingBone>, ::Foundation::EnumAsFlag_1<::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingBone>, ::NPCCrowd::Animation::CPUStateMachine::AnimationTickData, ::Foundation::Unreal::Interval_1<::System::Double>, ::System::Int32, ::System::Int32, ::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingPerBoneCollection_1<::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingWarpingPerBoneConfig>, ::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingControlData, ::UnityEngine::NapTransformData*, ::System::Single*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGPOSEWARPINGPROCESSOR_PARALLELJOB_SAMPLEPOSE_OFFSET))(previousFlags, currentFlags, sampleData, sampleInterval, boneCount, avatarId, config, controlData, bones, curveValues);
		}
		*/

		/*
		::System::Void SamplePose_1(::Foundation::EnumAsFlag_1<::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingBone> previousFlags, ::Foundation::EnumAsFlag_1<::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingBone> currentFlags, ::NPCCrowd::Animation::CPUStateMachine::AnimationTickData sampleData, ::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingControlData controlData, ::Foundation::Unreal::Interval_1<::System::Double> sampleInterval, ::Unity::Collections::NativeArray_1<::UnityEngine::NapTransformData> poses, ::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingPerBoneCollection_1<::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingWarpingPerBoneSampleData>& previous, ::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingPerBoneCollection_1<::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingWarpingPerBoneSampleData>& current)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::EnumAsFlag_1<::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingBone>, ::Foundation::EnumAsFlag_1<::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingBone>, ::NPCCrowd::Animation::CPUStateMachine::AnimationTickData, ::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingControlData, ::Foundation::Unreal::Interval_1<::System::Double>, ::Unity::Collections::NativeArray_1<::UnityEngine::NapTransformData>, ::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingPerBoneCollection_1<::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingWarpingPerBoneSampleData>&, ::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingPerBoneCollection_1<::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingWarpingPerBoneSampleData>&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGPOSEWARPINGPROCESSOR_PARALLELJOB_SAMPLEPOSE_1_OFFSET))(this, previousFlags, currentFlags, sampleData, controlData, sampleInterval, poses, previous, current);
		}
		*/

		/*
		::System::Void GetPose(::Foundation::EnumAsFlag_1<::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingBone> previousFlags, ::Foundation::EnumAsFlag_1<::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingBone> currentFlags, ::NPCCrowd::Animation::CPUStateMachine::AnimationTickData sampleData, ::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingControlData controlData, ::Foundation::Unreal::Interval_1<::System::Double> sampleInterval, ::System::Span_1<::UnityEngine::NapTransformData> poses, ::Unity::Collections::NativeArray_1<::UnityEngine::NapTransformData> lastPoses, ::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingPerBoneCollection_1<::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingWarpingPerBoneSampleData>& previous, ::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingPerBoneCollection_1<::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingWarpingPerBoneSampleData>& current)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::EnumAsFlag_1<::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingBone>, ::Foundation::EnumAsFlag_1<::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingBone>, ::NPCCrowd::Animation::CPUStateMachine::AnimationTickData, ::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingControlData, ::Foundation::Unreal::Interval_1<::System::Double>, ::System::Span_1<::UnityEngine::NapTransformData>, ::Unity::Collections::NativeArray_1<::UnityEngine::NapTransformData>, ::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingPerBoneCollection_1<::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingWarpingPerBoneSampleData>&, ::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingPerBoneCollection_1<::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingWarpingPerBoneSampleData>&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGPOSEWARPINGPROCESSOR_PARALLELJOB_GETPOSE_OFFSET))(this, previousFlags, currentFlags, sampleData, controlData, sampleInterval, poses, lastPoses, previous, current);
		}
		*/

		/*
		::System::Boolean WarpPose(::System::UInt32 entityId, ::NPCCrowd::Animation::CPUStateMachine::AnimationTickData sampleData, ::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingControlData& controlData, ::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingWarpingTickData& warpingData, ::UnityEngine::NapTransformData entityTransform, ::UnityEngine::NapTransformData& rootMotion, ::NPCCrowd::Animation::AnimationSubManager_MotionControlData& motionControl, ::System::Span_1<::UnityEngine::NapTransformData> pose, ::Unity::Collections::NativeArray_1<::UnityEngine::NapTransformData> bonesBuffer)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::NPCCrowd::Animation::CPUStateMachine::AnimationTickData, ::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingControlData&, ::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingWarpingTickData&, ::UnityEngine::NapTransformData, ::UnityEngine::NapTransformData&, ::NPCCrowd::Animation::AnimationSubManager_MotionControlData&, ::System::Span_1<::UnityEngine::NapTransformData>, ::Unity::Collections::NativeArray_1<::UnityEngine::NapTransformData>))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGPOSEWARPINGPROCESSOR_PARALLELJOB_WARPPOSE_OFFSET))(this, entityId, sampleData, controlData, warpingData, entityTransform, rootMotion, motionControl, pose, bonesBuffer);
		}
		*/

		/*
		::System::Void SetBoneData(::NPCCrowd::Animation::FRefPose pose, ::System::Int32 boneIndex, ::System::Boolean enabled, ::UnityEngine::NapTransformData desiredAdjusted, ::UnityEngine::NapTransformData rootAdjusted)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::FRefPose, ::System::Int32, ::System::Boolean, ::UnityEngine::NapTransformData, ::UnityEngine::NapTransformData))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGPOSEWARPINGPROCESSOR_PARALLELJOB_SETBONEDATA_OFFSET))(this, pose, boneIndex, enabled, desiredAdjusted, rootAdjusted);
		}
		*/

		/*
		::System::Void SetControlData(::NPCCrowd::Animation::AnimationSubManager_TwoBonesIKControl& controlData, ::System::Boolean enabled, ::UnityEngine::NapTransformData desiredAdjusted, ::UnityEngine::NapTransformData rootAdjusted, ::UnityEngine::NapTransformData entityTransform)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::AnimationSubManager_TwoBonesIKControl&, ::System::Boolean, ::UnityEngine::NapTransformData, ::UnityEngine::NapTransformData, ::UnityEngine::NapTransformData))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGPOSEWARPINGPROCESSOR_PARALLELJOB_SETCONTROLDATA_OFFSET))(this, controlData, enabled, desiredAdjusted, rootAdjusted, entityTransform);
		}
		*/

		/*
		::System::Void ClearControlData(::NPCCrowd::Animation::AnimationSubManager_MotionControlData& controlData)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::AnimationSubManager_MotionControlData&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGPOSEWARPINGPROCESSOR_PARALLELJOB_CLEARCONTROLDATA_OFFSET))(this, controlData);
		}
		*/

		/*
		::System::Void ClearControlData_1(::NPCCrowd::Animation::AnimationSubManager_TwoBonesIKControl& controlData)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::AnimationSubManager_TwoBonesIKControl&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGPOSEWARPINGPROCESSOR_PARALLELJOB_CLEARCONTROLDATA_1_OFFSET))(this, controlData);
		}
		*/
	};
}
