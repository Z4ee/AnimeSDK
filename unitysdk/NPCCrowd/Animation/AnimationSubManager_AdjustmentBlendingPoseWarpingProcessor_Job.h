#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_AdjustmentBlendingBone.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_AdjustmentBlendingControlData.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_AdjustmentBlendingPerBoneCollection_1.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_AdjustmentBlendingWarpingPerBoneConfig.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_AdjustmentBlendingWarpingTickData.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_MotionControlData.h"
#include "unitysdk/NPCCrowd/Animation/CPUStateMachine/AnimationTickData.h"
#include "unitysdk/NPCCrowd/Chunk/ChunkView2D_1.h"
#include "unitysdk/NPCCrowd/Chunk/ChunkView_1.h"
#include "unitysdk/NPCCrowd/Chunk/ReadOnlyChunkView_1.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnityEngine/NapTransformData.h"

namespace NPCCrowd::Animation { class AnimationSubManager_AvatarArchetypeData; }

#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGPOSEWARPINGPROCESSOR_JOB_CLEARCONTROLDATA_1_OFFSET UNITYSDK_OFFSET(0x5737E0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGPOSEWARPINGPROCESSOR_JOB_CLEARCONTROLDATA_OFFSET UNITYSDK_OFFSET(0x5737D0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGPOSEWARPINGPROCESSOR_JOB_CREATEJOB_OFFSET UNITYSDK_OFFSET(0xCE59390)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGPOSEWARPINGPROCESSOR_JOB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x573380)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGPOSEWARPINGPROCESSOR_JOB_GETPOSE_OFFSET UNITYSDK_OFFSET(0x573470)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGPOSEWARPINGPROCESSOR_JOB_GET_CHUNKCOUNT_OFFSET UNITYSDK_OFFSET(0x573370)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGPOSEWARPINGPROCESSOR_JOB_ISVALID_OFFSET UNITYSDK_OFFSET(0x5737F0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGPOSEWARPINGPROCESSOR_JOB_SAMPLEPOSE_1_OFFSET UNITYSDK_OFFSET(0x573390)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGPOSEWARPINGPROCESSOR_JOB_SAMPLEPOSE_OFFSET UNITYSDK_OFFSET(0xCE5C560)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGPOSEWARPINGPROCESSOR_JOB_SETBONEDATA_OFFSET UNITYSDK_OFFSET(0x573660)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGPOSEWARPINGPROCESSOR_JOB_SETCONTROLDATA_OFFSET UNITYSDK_OFFSET(0x573720)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGPOSEWARPINGPROCESSOR_JOB_WARPPOSE_OFFSET UNITYSDK_OFFSET(0x573580)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_AdjustmentBlendingPoseWarpingProcessor_Job_TypeDefinitionIndex = 70501;

	struct alignas(8) AnimationSubManager_AdjustmentBlendingPoseWarpingProcessor_Job
	{
		::System::Int32 _avatarId; // 0x10
		::System::Int32 _boneCount; // 0x14
		::System::Double _timestamp; // 0x18
		::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingPerBoneCollection_1<::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingWarpingPerBoneConfig> _config; // 0x20
		::Unity::Collections::NativeArray_1<::System::Int32> _skeleton; // 0x100
		::NPCCrowd::Chunk::ReadOnlyChunkView_1<::System::UInt32> _entityIds; // 0x110
		::NPCCrowd::Chunk::ReadOnlyChunkView_1<::UnityEngine::NapTransformData> _entityTransform; // 0x130
		::NPCCrowd::Chunk::ReadOnlyChunkView_1<::NPCCrowd::Animation::CPUStateMachine::AnimationTickData> _sampleData; // 0x150
		::NPCCrowd::Chunk::ChunkView_1<::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingControlData> _controlData; // 0x170
		::NPCCrowd::Chunk::ChunkView_1<::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingWarpingTickData> _warpingData; // 0x190
		::NPCCrowd::Chunk::ChunkView_1<::NPCCrowd::Animation::AnimationSubManager_MotionControlData> _motionControl; // 0x1B0
		::NPCCrowd::Chunk::ChunkView_1<::UnityEngine::NapTransformData> _rootMotion; // 0x1D0
		::NPCCrowd::Chunk::ChunkView2D_1<::UnityEngine::NapTransformData> _poses; // 0x1F0

		/*
		static ::System::Nullable_1<::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingPoseWarpingProcessor_Job> CreateJob(::NPCCrowd::Animation::AnimationSubManager_AvatarArchetypeData* avatar, ::System::Double timestamp)
		{
			return ((::System::Nullable_1<::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingPoseWarpingProcessor_Job>(*)(::NPCCrowd::Animation::AnimationSubManager_AvatarArchetypeData*, ::System::Double))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGPOSEWARPINGPROCESSOR_JOB_CREATEJOB_OFFSET))(avatar, timestamp);
		}
		*/

		::System::Int32 get_ChunkCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGPOSEWARPINGPROCESSOR_JOB_GET_CHUNKCOUNT_OFFSET))(this);
		}

		::System::Void Execute(::System::Int32 chunkIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGPOSEWARPINGPROCESSOR_JOB_EXECUTE_OFFSET))(this, chunkIndex);
		}

		/*
		static ::System::Void SamplePose(::Foundation::EnumAsFlag_1<::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingBone> previousFlags, ::Foundation::EnumAsFlag_1<::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingBone> currentFlags, ::NPCCrowd::Animation::CPUStateMachine::AnimationTickData sampleData, ::Foundation::Unreal::Interval_1<::System::Double> sampleInterval, ::System::Int32 boneCount, ::System::Int32 avatarId, ::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingPerBoneCollection_1<::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingWarpingPerBoneConfig> config, ::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingControlData controlData, ::UnityEngine::NapTransformData* bones, ::System::Single* curveValues)
		{
			return ((::System::Void(*)(::Foundation::EnumAsFlag_1<::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingBone>, ::Foundation::EnumAsFlag_1<::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingBone>, ::NPCCrowd::Animation::CPUStateMachine::AnimationTickData, ::Foundation::Unreal::Interval_1<::System::Double>, ::System::Int32, ::System::Int32, ::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingPerBoneCollection_1<::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingWarpingPerBoneConfig>, ::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingControlData, ::UnityEngine::NapTransformData*, ::System::Single*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGPOSEWARPINGPROCESSOR_JOB_SAMPLEPOSE_OFFSET))(previousFlags, currentFlags, sampleData, sampleInterval, boneCount, avatarId, config, controlData, bones, curveValues);
		}
		*/

		/*
		::System::Void SamplePose_1(::Foundation::EnumAsFlag_1<::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingBone> previousFlags, ::Foundation::EnumAsFlag_1<::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingBone> currentFlags, ::NPCCrowd::Animation::CPUStateMachine::AnimationTickData sampleData, ::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingControlData controlData, ::Foundation::Unreal::Interval_1<::System::Double> sampleInterval, ::Unity::Collections::NativeArray_1<::UnityEngine::NapTransformData> poses, ::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingPerBoneCollection_1<::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingWarpingPerBoneSampleData>& previous, ::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingPerBoneCollection_1<::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingWarpingPerBoneSampleData>& current)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::EnumAsFlag_1<::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingBone>, ::Foundation::EnumAsFlag_1<::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingBone>, ::NPCCrowd::Animation::CPUStateMachine::AnimationTickData, ::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingControlData, ::Foundation::Unreal::Interval_1<::System::Double>, ::Unity::Collections::NativeArray_1<::UnityEngine::NapTransformData>, ::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingPerBoneCollection_1<::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingWarpingPerBoneSampleData>&, ::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingPerBoneCollection_1<::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingWarpingPerBoneSampleData>&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGPOSEWARPINGPROCESSOR_JOB_SAMPLEPOSE_1_OFFSET))(this, previousFlags, currentFlags, sampleData, controlData, sampleInterval, poses, previous, current);
		}
		*/

		/*
		::System::Void GetPose(::Foundation::EnumAsFlag_1<::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingBone> previousFlags, ::Foundation::EnumAsFlag_1<::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingBone> currentFlags, ::NPCCrowd::Animation::CPUStateMachine::AnimationTickData sampleData, ::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingControlData controlData, ::Foundation::Unreal::Interval_1<::System::Double> sampleInterval, ::System::Span_1<::UnityEngine::NapTransformData> poses, ::Unity::Collections::NativeArray_1<::UnityEngine::NapTransformData> lastPoses, ::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingPerBoneCollection_1<::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingWarpingPerBoneSampleData>& previous, ::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingPerBoneCollection_1<::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingWarpingPerBoneSampleData>& current)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::EnumAsFlag_1<::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingBone>, ::Foundation::EnumAsFlag_1<::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingBone>, ::NPCCrowd::Animation::CPUStateMachine::AnimationTickData, ::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingControlData, ::Foundation::Unreal::Interval_1<::System::Double>, ::System::Span_1<::UnityEngine::NapTransformData>, ::Unity::Collections::NativeArray_1<::UnityEngine::NapTransformData>, ::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingPerBoneCollection_1<::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingWarpingPerBoneSampleData>&, ::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingPerBoneCollection_1<::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingWarpingPerBoneSampleData>&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGPOSEWARPINGPROCESSOR_JOB_GETPOSE_OFFSET))(this, previousFlags, currentFlags, sampleData, controlData, sampleInterval, poses, lastPoses, previous, current);
		}
		*/

		/*
		::System::Boolean WarpPose(::System::UInt32 entityId, ::NPCCrowd::Animation::CPUStateMachine::AnimationTickData sampleData, ::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingControlData& controlData, ::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingWarpingTickData& warpingData, ::UnityEngine::NapTransformData entityTransform, ::UnityEngine::NapTransformData& rootMotion, ::NPCCrowd::Animation::AnimationSubManager_MotionControlData& motionControl, ::System::Span_1<::UnityEngine::NapTransformData> pose, ::Unity::Collections::NativeArray_1<::UnityEngine::NapTransformData> bonesBuffer)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32, ::NPCCrowd::Animation::CPUStateMachine::AnimationTickData, ::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingControlData&, ::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingWarpingTickData&, ::UnityEngine::NapTransformData, ::UnityEngine::NapTransformData&, ::NPCCrowd::Animation::AnimationSubManager_MotionControlData&, ::System::Span_1<::UnityEngine::NapTransformData>, ::Unity::Collections::NativeArray_1<::UnityEngine::NapTransformData>))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGPOSEWARPINGPROCESSOR_JOB_WARPPOSE_OFFSET))(this, entityId, sampleData, controlData, warpingData, entityTransform, rootMotion, motionControl, pose, bonesBuffer);
		}
		*/

		/*
		::System::Void SetBoneData(::NPCCrowd::Animation::FRefPose pose, ::System::Int32 boneIndex, ::System::Boolean enabled, ::UnityEngine::NapTransformData desiredAdjusted, ::UnityEngine::NapTransformData rootAdjusted)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::FRefPose, ::System::Int32, ::System::Boolean, ::UnityEngine::NapTransformData, ::UnityEngine::NapTransformData))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGPOSEWARPINGPROCESSOR_JOB_SETBONEDATA_OFFSET))(this, pose, boneIndex, enabled, desiredAdjusted, rootAdjusted);
		}
		*/

		/*
		::System::Void SetControlData(::NPCCrowd::Animation::AnimationSubManager_TwoBonesIKControl& controlData, ::System::Boolean enabled, ::UnityEngine::NapTransformData desiredAdjusted, ::UnityEngine::NapTransformData rootAdjusted, ::UnityEngine::NapTransformData entityTransform)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::AnimationSubManager_TwoBonesIKControl&, ::System::Boolean, ::UnityEngine::NapTransformData, ::UnityEngine::NapTransformData, ::UnityEngine::NapTransformData))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGPOSEWARPINGPROCESSOR_JOB_SETCONTROLDATA_OFFSET))(this, controlData, enabled, desiredAdjusted, rootAdjusted, entityTransform);
		}
		*/

		::System::Void ClearControlData(::NPCCrowd::Animation::AnimationSubManager_MotionControlData& controlData)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::AnimationSubManager_MotionControlData&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGPOSEWARPINGPROCESSOR_JOB_CLEARCONTROLDATA_OFFSET))(this, controlData);
		}

		/*
		::System::Void ClearControlData_1(::NPCCrowd::Animation::AnimationSubManager_TwoBonesIKControl& controlData)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::AnimationSubManager_TwoBonesIKControl&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGPOSEWARPINGPROCESSOR_JOB_CLEARCONTROLDATA_1_OFFSET))(this, controlData);
		}
		*/

		::System::Boolean IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_ADJUSTMENTBLENDINGPOSEWARPINGPROCESSOR_JOB_ISVALID_OFFSET))(this);
		}
	};
}
