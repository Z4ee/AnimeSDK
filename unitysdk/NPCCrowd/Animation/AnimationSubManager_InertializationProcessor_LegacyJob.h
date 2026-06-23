#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_PoseInertializationBoneDeltaData16.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_PoseInertializationCacheAdditionalData.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_PoseInertializationInstanceData.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_PoseInertializationRequest.h"
#include "unitysdk/NPCCrowd/Chunk/ChunkView2D_1.h"
#include "unitysdk/NPCCrowd/Chunk/ChunkView_1.h"
#include "unitysdk/NPCCrowd/Chunk/ReadOnlyChunkView2D_1.h"
#include "unitysdk/NPCCrowd/Chunk/ReadOnlyChunkView_1.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/NapTransformData.h"

#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_INERTIALIZATIONPROCESSOR_LEGACYJOB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x411E80)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_INERTIALIZATIONPROCESSOR_LEGACYJOB_GET_CHUNKCOUNT_OFFSET UNITYSDK_OFFSET(0x411E70)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_INERTIALIZATIONPROCESSOR_LEGACYJOB__CTOR_OFFSET UNITYSDK_OFFSET(0x411C50)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_InertializationProcessor_LegacyJob_TypeDefinitionIndex = 57422;

	struct alignas(8) AnimationSubManager_InertializationProcessor_LegacyJob
	{
		::NPCCrowd::Chunk::ReadOnlyChunkView_1<::System::UInt32> _entityIds; // 0x10
		::NPCCrowd::Chunk::ReadOnlyChunkView_1<::NPCCrowd::Animation::AnimationSubManager_PoseInertializationCacheAdditionalData> _lastAdditionalData; // 0x30
		::NPCCrowd::Chunk::ReadOnlyChunkView2D_1<::UnityEngine::NapTransformData> _lastPose; // 0x50
		::NPCCrowd::Chunk::ReadOnlyChunkView_1<::NPCCrowd::Animation::AnimationSubManager_PoseInertializationRequest> _request; // 0x80
		::NPCCrowd::Chunk::ReadOnlyChunkView_1<::UnityEngine::NapTransformData> _entityLocation; // 0xA0
		::NPCCrowd::Chunk::ChunkView_1<::NPCCrowd::Animation::AnimationSubManager_PoseInertializationCacheAdditionalData> _additionalDataCache; // 0xC0
		::NPCCrowd::Chunk::ChunkView2D_1<::UnityEngine::NapTransformData> _poseCache; // 0xE0
		::NPCCrowd::Chunk::ChunkView2D_1<::NPCCrowd::Animation::AnimationSubManager_PoseInertializationBoneDeltaData16> _delta; // 0x110
		::NPCCrowd::Chunk::ChunkView2D_1<::UnityEngine::NapTransformData> _pose; // 0x140
		::NPCCrowd::Chunk::ChunkView_1<::NPCCrowd::Animation::AnimationSubManager_PoseInertializationInstanceData> _instanceData; // 0x170
		::System::Int32 _indexBip001; // 0x190
		::System::Single _deltaTime; // 0x194
		::System::Int32 _frameCount; // 0x198

		::System::Void _ctor(::System::Int32 indexBip001, ::System::Single deltaTime, ::System::Int32 frameCount, ::NPCCrowd::Chunk::ReadOnlyChunkView_1<::System::UInt32> entityIds, ::NPCCrowd::Chunk::ReadOnlyChunkView_1<::UnityEngine::NapTransformData> entityLocation, ::NPCCrowd::Chunk::ReadOnlyChunkView_1<::NPCCrowd::Animation::AnimationSubManager_PoseInertializationCacheAdditionalData> lastAdditionalData, ::NPCCrowd::Chunk::ReadOnlyChunkView2D_1<::UnityEngine::NapTransformData> lastPose, ::NPCCrowd::Chunk::ReadOnlyChunkView_1<::NPCCrowd::Animation::AnimationSubManager_PoseInertializationRequest> request, ::NPCCrowd::Chunk::ChunkView_1<::NPCCrowd::Animation::AnimationSubManager_PoseInertializationInstanceData> instanceData, ::NPCCrowd::Chunk::ChunkView_1<::NPCCrowd::Animation::AnimationSubManager_PoseInertializationCacheAdditionalData> additionalDataCache, ::NPCCrowd::Chunk::ChunkView2D_1<::UnityEngine::NapTransformData> poseCache, ::NPCCrowd::Chunk::ChunkView2D_1<::NPCCrowd::Animation::AnimationSubManager_PoseInertializationBoneDeltaData16> delta, ::NPCCrowd::Chunk::ChunkView2D_1<::UnityEngine::NapTransformData> pose)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Int32, ::NPCCrowd::Chunk::ReadOnlyChunkView_1<::System::UInt32>, ::NPCCrowd::Chunk::ReadOnlyChunkView_1<::UnityEngine::NapTransformData>, ::NPCCrowd::Chunk::ReadOnlyChunkView_1<::NPCCrowd::Animation::AnimationSubManager_PoseInertializationCacheAdditionalData>, ::NPCCrowd::Chunk::ReadOnlyChunkView2D_1<::UnityEngine::NapTransformData>, ::NPCCrowd::Chunk::ReadOnlyChunkView_1<::NPCCrowd::Animation::AnimationSubManager_PoseInertializationRequest>, ::NPCCrowd::Chunk::ChunkView_1<::NPCCrowd::Animation::AnimationSubManager_PoseInertializationInstanceData>, ::NPCCrowd::Chunk::ChunkView_1<::NPCCrowd::Animation::AnimationSubManager_PoseInertializationCacheAdditionalData>, ::NPCCrowd::Chunk::ChunkView2D_1<::UnityEngine::NapTransformData>, ::NPCCrowd::Chunk::ChunkView2D_1<::NPCCrowd::Animation::AnimationSubManager_PoseInertializationBoneDeltaData16>, ::NPCCrowd::Chunk::ChunkView2D_1<::UnityEngine::NapTransformData>))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_INERTIALIZATIONPROCESSOR_LEGACYJOB__CTOR_OFFSET))(this, indexBip001, deltaTime, frameCount, entityIds, entityLocation, lastAdditionalData, lastPose, request, instanceData, additionalDataCache, poseCache, delta, pose);
		}

		::System::Int32 get_ChunkCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_INERTIALIZATIONPROCESSOR_LEGACYJOB_GET_CHUNKCOUNT_OFFSET))(this);
		}

		::System::Void Execute(::System::Int32 chunkIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_INERTIALIZATIONPROCESSOR_LEGACYJOB_EXECUTE_OFFSET))(this, chunkIndex);
		}
	};
}
