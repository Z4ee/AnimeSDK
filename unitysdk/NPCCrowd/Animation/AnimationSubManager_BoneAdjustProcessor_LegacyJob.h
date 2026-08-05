#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_BoneAdjustSetting.h"
#include "unitysdk/NPCCrowd/Animation/CPUStateMachine/AnimationTickData.h"
#include "unitysdk/NPCCrowd/Chunk/ChunkView2D_1.h"
#include "unitysdk/NPCCrowd/Chunk/ChunkView_1.h"
#include "unitysdk/NPCCrowd/Chunk/ReadOnlyChunkView_1.h"
#include "unitysdk/NPCCrowd/Lod/ELODLevel.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeSlice_1.h"
#include "unitysdk/UnityEngine/NapTransformData.h"
#include "unitysdk/UnityEngine/Quaternion.h"

namespace NPCCrowd::Animation { class AnimationSubManager_AvatarArchetypeData; }

#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_BONEADJUSTPROCESSOR_LEGACYJOB_ADJUSTBONETRANSFORMBYONEBONELAYERDATAWITH2TARGETPOSE_OFFSET UNITYSDK_OFFSET(0x7E3C60)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_BONEADJUSTPROCESSOR_LEGACYJOB_ADJUSTBONETRANSFORMBYSCATTER2DBLEND_OFFSET UNITYSDK_OFFSET(0x7E3B40)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_BONEADJUSTPROCESSOR_LEGACYJOB_BLEND2DCOMPUTECHILDNODEWEIGHTS_OFFSET UNITYSDK_OFFSET(0x7E3D90)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_BONEADJUSTPROCESSOR_LEGACYJOB_CREATEJOB_OFFSET UNITYSDK_OFFSET(0x13DE8B30)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_BONEADJUSTPROCESSOR_LEGACYJOB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x7E3B30)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_BONEADJUSTPROCESSOR_LEGACYJOB_GET_CHUNKCOUNT_OFFSET UNITYSDK_OFFSET(0x7E3B10)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_BONEADJUSTPROCESSOR_LEGACYJOB_ISVALID_OFFSET UNITYSDK_OFFSET(0x7E3B20)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_BoneAdjustProcessor_LegacyJob_TypeDefinitionIndex = 88252;

	struct alignas(8) AnimationSubManager_BoneAdjustProcessor_LegacyJob
	{
		::System::Int32 _avatarId; // 0x10
		::NPCCrowd::Chunk::ReadOnlyChunkView_1<::NPCCrowd::Animation::CPUStateMachine::AnimationTickData> _tickData; // 0x18
		::NPCCrowd::Chunk::ChunkView2D_1<::UnityEngine::NapTransformData> _bones; // 0x38
		::NPCCrowd::Chunk::ReadOnlyChunkView_1<::System::UInt32> _entityIds; // 0x68
		::NPCCrowd::Chunk::ReadOnlyChunkView_1<::NPCCrowd::Lod::ELODLevel> _entityLods; // 0x88
		::Unity::Collections::NativeSlice_1<::System::Int32> _boneParents; // 0xA8
		::NPCCrowd::Chunk::ReadOnlyChunkView_1<::UnityEngine::NapTransformData> _entityTransforms; // 0xB8
		::NPCCrowd::Animation::AnimationSubManager_BoneAdjustSetting _setting; // 0xD8
		::NPCCrowd::Chunk::ChunkView_1<::System::Boolean> _enabled; // 0x1B8
		::NPCCrowd::Chunk::ChunkView2D_1<::UnityEngine::Quaternion> _masterBoneAnimPoseLocalRot; // 0x1D8
		::NPCCrowd::Chunk::ChunkView2D_1<::UnityEngine::NapTransformData> _animDrivenPose; // 0x208
		::NPCCrowd::Chunk::ChunkView2D_1<::UnityEngine::NapTransformData> _ikDrivenPose; // 0x238

		/*
		static ::System::Nullable_1<::NPCCrowd::Animation::AnimationSubManager_BoneAdjustProcessor_LegacyJob> CreateJob(::NPCCrowd::Animation::AnimationSubManager_AvatarArchetypeData* avatar, ::System::Double timestamp)
		{
			return ((::System::Nullable_1<::NPCCrowd::Animation::AnimationSubManager_BoneAdjustProcessor_LegacyJob>(*)(::NPCCrowd::Animation::AnimationSubManager_AvatarArchetypeData*, ::System::Double))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_BONEADJUSTPROCESSOR_LEGACYJOB_CREATEJOB_OFFSET))(avatar, timestamp);
		}
		*/

		::System::Int32 get_ChunkCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_BONEADJUSTPROCESSOR_LEGACYJOB_GET_CHUNKCOUNT_OFFSET))(this);
		}

		::System::Boolean IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_BONEADJUSTPROCESSOR_LEGACYJOB_ISVALID_OFFSET))(this);
		}

		::System::Void Execute(::System::Int32 chunkIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_BONEADJUSTPROCESSOR_LEGACYJOB_EXECUTE_OFFSET))(this, chunkIndex);
		}

		/*
		::System::Void AdjustBoneTransformByScatter2dBlend(::System::UInt32 entityId, ::NPCCrowd::Animation::CPUStateMachine::AnimationTickData tickData, ::NPCCrowd::Animation::FRefPose pose, ::System::Span_1<::UnityEngine::Quaternion> masterBoneAnimPoseLocalRot, ::System::Span_1<::UnityEngine::NapTransformData> animDrivenPose, ::System::Span_1<::UnityEngine::NapTransformData> ikDrivenPose)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::NPCCrowd::Animation::CPUStateMachine::AnimationTickData, ::NPCCrowd::Animation::FRefPose, ::System::Span_1<::UnityEngine::Quaternion>, ::System::Span_1<::UnityEngine::NapTransformData>, ::System::Span_1<::UnityEngine::NapTransformData>))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_BONEADJUSTPROCESSOR_LEGACYJOB_ADJUSTBONETRANSFORMBYSCATTER2DBLEND_OFFSET))(this, entityId, tickData, pose, masterBoneAnimPoseLocalRot, animDrivenPose, ikDrivenPose);
		}
		*/

		/*
		::System::Void AdjustBoneTransformByOneBoneLayerDataWith2TargetPose(::System::Int32 masterBoneIndex, ::UnityEngine::Vector3 inputDirVec, ::System::ReadOnlySpan_1<::System::Int32> drivenBoneCounts, ::System::Int32 maxDrivenBoneCount, ::System::Int32 maxTargetPoseCount, ::System::ReadOnlySpan_1<::UnityEngine::Vector3> dirVec, ::System::ReadOnlySpan_1<::UnityEngine::Vector3> drivenBonePosDelta, ::System::ReadOnlySpan_1<::UnityEngine::Quaternion> drivenBoneRotDelta, ::System::ReadOnlySpan_1<::UnityEngine::Vector3> drivenBoneScaleDelta, ::System::Span_1<::UnityEngine::NapTransformData>& resultPose)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Vector3, ::System::ReadOnlySpan_1<::System::Int32>, ::System::Int32, ::System::Int32, ::System::ReadOnlySpan_1<::UnityEngine::Vector3>, ::System::ReadOnlySpan_1<::UnityEngine::Vector3>, ::System::ReadOnlySpan_1<::UnityEngine::Quaternion>, ::System::ReadOnlySpan_1<::UnityEngine::Vector3>, ::System::Span_1<::UnityEngine::NapTransformData>&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_BONEADJUSTPROCESSOR_LEGACYJOB_ADJUSTBONETRANSFORMBYONEBONELAYERDATAWITH2TARGETPOSE_OFFSET))(this, masterBoneIndex, inputDirVec, drivenBoneCounts, maxDrivenBoneCount, maxTargetPoseCount, dirVec, drivenBonePosDelta, drivenBoneRotDelta, drivenBoneScaleDelta, resultPose);
		}
		*/

		/*
		::System::Void Blend2dComputeChildNodeWeights(::System::UInt32 entityId, ::System::Int32 masterBoneIndex, ::UnityEngine::Vector3 inputDirVec, ::System::ReadOnlySpan_1<::System::Int32> drivenBoneCounts, ::System::Int32 maxDrivenBoneCount, ::System::Int32 maxTriangleCount, ::System::ReadOnlySpan_1<::System::Int32> triangleIndices, ::System::Int32 maxEdgesCount, ::System::ReadOnlySpan_1<::System::Int32> exteriorEdges, ::System::Int32 maxTargetPoseCount, ::System::ReadOnlySpan_1<::UnityEngine::Vector3> dirVec, ::System::ReadOnlySpan_1<::UnityEngine::Vector3> drivenBonePosDelta, ::System::ReadOnlySpan_1<::UnityEngine::Quaternion> drivenBoneRotDelta, ::System::ReadOnlySpan_1<::UnityEngine::Vector3> drivenBoneScaleDelta, ::System::Span_1<::UnityEngine::NapTransformData>& resultPose)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Int32, ::UnityEngine::Vector3, ::System::ReadOnlySpan_1<::System::Int32>, ::System::Int32, ::System::Int32, ::System::ReadOnlySpan_1<::System::Int32>, ::System::Int32, ::System::ReadOnlySpan_1<::System::Int32>, ::System::Int32, ::System::ReadOnlySpan_1<::UnityEngine::Vector3>, ::System::ReadOnlySpan_1<::UnityEngine::Vector3>, ::System::ReadOnlySpan_1<::UnityEngine::Quaternion>, ::System::ReadOnlySpan_1<::UnityEngine::Vector3>, ::System::Span_1<::UnityEngine::NapTransformData>&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_BONEADJUSTPROCESSOR_LEGACYJOB_BLEND2DCOMPUTECHILDNODEWEIGHTS_OFFSET))(this, entityId, masterBoneIndex, inputDirVec, drivenBoneCounts, maxDrivenBoneCount, maxTriangleCount, triangleIndices, maxEdgesCount, exteriorEdges, maxTargetPoseCount, dirVec, drivenBonePosDelta, drivenBoneRotDelta, drivenBoneScaleDelta, resultPose);
		}
		*/
	};
}
