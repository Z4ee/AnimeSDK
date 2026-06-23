#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_AdjustmentBlendingControlData.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_AdjustmentBlendingMotionTarget.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_AdjustmentBlendingPerBoneCollection_1.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_AdjustmentBlendingWarpingPerBoneConfig.h"
#include "unitysdk/NPCCrowd/Animation/CPUStateMachine/AnimationStateDataMultiLayer.h"
#include "unitysdk/NPCCrowd/Animation/CPUStateMachine/AnimationTickData.h"
#include "unitysdk/NPCCrowd/Chunk/ChunkView_1.h"
#include "unitysdk/NPCCrowd/Chunk/ReadOnlyChunkView2D_1.h"
#include "unitysdk/NPCCrowd/Chunk/ReadOnlyChunkView_1.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnityEngine/NapTransformData.h"

namespace NPCCrowd::Animation { class AnimationSubManager_AvatarArchetypeData; }

#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_REQUESTADJUSTMENTBLENDINGBYMOTIONPROCESSOR_LEGACYJOB_BUILDCONTROLDATA_OFFSET UNITYSDK_OFFSET(0x5B2860)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_REQUESTADJUSTMENTBLENDINGBYMOTIONPROCESSOR_LEGACYJOB_CLEARCONTROLDATA_OFFSET UNITYSDK_OFFSET(0xD5CBF30)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_REQUESTADJUSTMENTBLENDINGBYMOTIONPROCESSOR_LEGACYJOB_CREATEJOB_OFFSET UNITYSDK_OFFSET(0xD5C8F80)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_REQUESTADJUSTMENTBLENDINGBYMOTIONPROCESSOR_LEGACYJOB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x5B2700)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_REQUESTADJUSTMENTBLENDINGBYMOTIONPROCESSOR_LEGACYJOB_FETCHTRANSFORM_OFFSET UNITYSDK_OFFSET(0xD5CBFA0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_REQUESTADJUSTMENTBLENDINGBYMOTIONPROCESSOR_LEGACYJOB_GET_CHUNKCOUNT_OFFSET UNITYSDK_OFFSET(0x5B26F0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_REQUESTADJUSTMENTBLENDINGBYMOTIONPROCESSOR_LEGACYJOB_HANDLE_OFFSET UNITYSDK_OFFSET(0x5B2720)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_REQUESTADJUSTMENTBLENDINGBYMOTIONPROCESSOR_LEGACYJOB_ISVALID_OFFSET UNITYSDK_OFFSET(0x5B2710)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_RequestAdjustmentBlendingByMotionProcessor_LegacyJob_TypeDefinitionIndex = 57410;

	struct alignas(8) AnimationSubManager_RequestAdjustmentBlendingByMotionProcessor_LegacyJob
	{
		// static const ::System::Single DefaultAdjustmentThreshold; // 0x0
		::System::Int32 _avatarId; // 0x10
		::System::Int32 _boneCount; // 0x14
		::System::Double _timestamp; // 0x18
		::System::Int32 _rootBoneIndex; // 0x20
		::System::Int32 _bip001BoneIndex; // 0x24
		::System::Single _adjustmentThreshold; // 0x28
		::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingPerBoneCollection_1<::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingWarpingPerBoneConfig> _config; // 0x2C
		::Unity::Collections::NativeArray_1<::System::Int32> _skeleton; // 0x108
		::NPCCrowd::Chunk::ReadOnlyChunkView_1<::System::UInt32> _entityIds; // 0x118
		::NPCCrowd::Chunk::ReadOnlyChunkView_1<::NPCCrowd::Animation::CPUStateMachine::AnimationStateDataMultiLayer> _animationState; // 0x138
		::NPCCrowd::Chunk::ReadOnlyChunkView_1<::NPCCrowd::Animation::CPUStateMachine::AnimationTickData> _animationTickData; // 0x158
		::NPCCrowd::Chunk::ReadOnlyChunkView_1<::UnityEngine::NapTransformData> _entityTransforms; // 0x178
		::NPCCrowd::Chunk::ReadOnlyChunkView2D_1<::UnityEngine::NapTransformData> _bones; // 0x198
		::NPCCrowd::Chunk::ChunkView_1<::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingMotionTarget> _warpingTarget; // 0x1C8
		::NPCCrowd::Chunk::ChunkView_1<::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingControlData> _controlData; // 0x1E8

		/*
		static ::System::Nullable_1<::NPCCrowd::Animation::AnimationSubManager_RequestAdjustmentBlendingByMotionProcessor_LegacyJob> CreateJob(::NPCCrowd::Animation::AnimationSubManager_AvatarArchetypeData* avatar, ::System::Double timestamp)
		{
			return ((::System::Nullable_1<::NPCCrowd::Animation::AnimationSubManager_RequestAdjustmentBlendingByMotionProcessor_LegacyJob>(*)(::NPCCrowd::Animation::AnimationSubManager_AvatarArchetypeData*, ::System::Double))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_REQUESTADJUSTMENTBLENDINGBYMOTIONPROCESSOR_LEGACYJOB_CREATEJOB_OFFSET))(avatar, timestamp);
		}
		*/

		::System::Int32 get_ChunkCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_REQUESTADJUSTMENTBLENDINGBYMOTIONPROCESSOR_LEGACYJOB_GET_CHUNKCOUNT_OFFSET))(this);
		}

		::System::Void Execute(::System::Int32 chunkIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_REQUESTADJUSTMENTBLENDINGBYMOTIONPROCESSOR_LEGACYJOB_EXECUTE_OFFSET))(this, chunkIndex);
		}

		::System::Boolean IsValid(::System::Int32& count)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_REQUESTADJUSTMENTBLENDINGBYMOTIONPROCESSOR_LEGACYJOB_ISVALID_OFFSET))(this, count);
		}

		/*
		::System::Void Handle(::System::UInt32 entityId, ::UnityEngine::NapTransformData entityTransform, ::NPCCrowd::Animation::CPUStateMachine::AnimationTickData tickData, ::System::ReadOnlySpan_1<::System::Int32> skeleton, ::System::ReadOnlySpan_1<::UnityEngine::NapTransformData> bones, ::NPCCrowd::Animation::CPUStateMachine::AnimationStateData state, ::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingControlData& controlData, ::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingMotionTarget& target, ::Unity::Collections::NativeArray_1<::UnityEngine::NapTransformData> boneBuffer)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::NapTransformData, ::NPCCrowd::Animation::CPUStateMachine::AnimationTickData, ::System::ReadOnlySpan_1<::System::Int32>, ::System::ReadOnlySpan_1<::UnityEngine::NapTransformData>, ::NPCCrowd::Animation::CPUStateMachine::AnimationStateData, ::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingControlData&, ::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingMotionTarget&, ::Unity::Collections::NativeArray_1<::UnityEngine::NapTransformData>))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_REQUESTADJUSTMENTBLENDINGBYMOTIONPROCESSOR_LEGACYJOB_HANDLE_OFFSET))(this, entityId, entityTransform, tickData, skeleton, bones, state, controlData, target, boneBuffer);
		}
		*/

		static ::System::Void ClearControlData(::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingControlData& controlData)
		{
			return ((::System::Void(*)(::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingControlData&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_REQUESTADJUSTMENTBLENDINGBYMOTIONPROCESSOR_LEGACYJOB_CLEARCONTROLDATA_OFFSET))(controlData);
		}

		/*
		::System::Void BuildControlData(::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingControlData& controlData, ::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingMotionTarget& target, ::System::Double timestamp, ::UnityEngine::NapTransformData entityTransform, ::NPCCrowd::Animation::CPUStateMachine::AnimationTickData tickData, ::System::ReadOnlySpan_1<::System::Int32> skeleton, ::System::ReadOnlySpan_1<::UnityEngine::NapTransformData> bones, ::Unity::Collections::NativeArray_1<::UnityEngine::NapTransformData> boneBuffer)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingControlData&, ::NPCCrowd::Animation::AnimationSubManager_AdjustmentBlendingMotionTarget&, ::System::Double, ::UnityEngine::NapTransformData, ::NPCCrowd::Animation::CPUStateMachine::AnimationTickData, ::System::ReadOnlySpan_1<::System::Int32>, ::System::ReadOnlySpan_1<::UnityEngine::NapTransformData>, ::Unity::Collections::NativeArray_1<::UnityEngine::NapTransformData>))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_REQUESTADJUSTMENTBLENDINGBYMOTIONPROCESSOR_LEGACYJOB_BUILDCONTROLDATA_OFFSET))(this, controlData, target, timestamp, entityTransform, tickData, skeleton, bones, boneBuffer);
		}
		*/

		static ::UnityEngine::NapTransformData FetchTransform(::System::Single* ptr)
		{
			return ((::UnityEngine::NapTransformData(*)(::System::Single*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_REQUESTADJUSTMENTBLENDINGBYMOTIONPROCESSOR_LEGACYJOB_FETCHTRANSFORM_OFFSET))(ptr);
		}
	};
}
