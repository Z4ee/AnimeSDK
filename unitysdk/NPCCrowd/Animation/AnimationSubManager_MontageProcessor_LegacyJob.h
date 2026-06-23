#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Adapter/ReadOnlyChunkListView_1.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_PoseInertializationRequest.h"
#include "unitysdk/NPCCrowd/Animation/CPUStateMachine/AnimationClipDataMultiLayer.h"
#include "unitysdk/NPCCrowd/Animation/CPUStateMachine/AnimationTickData.h"
#include "unitysdk/NPCCrowd/Animation/MontageChunkData.h"
#include "unitysdk/NPCCrowd/Animation/MontageTickLayerData.h"
#include "unitysdk/NPCCrowd/Chunk/ChunkView_1.h"
#include "unitysdk/NPCCrowd/Chunk/ReadOnlyChunkView_1.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::Animation { class AnimationSubManager_MontageArchetypeData; }

#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_MONTAGEPROCESSOR_LEGACYJOB_CREATEJOB_OFFSET UNITYSDK_OFFSET(0x11791720)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_MONTAGEPROCESSOR_LEGACYJOB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x748930)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_MONTAGEPROCESSOR_LEGACYJOB_GET_CHUNKCOUNT_OFFSET UNITYSDK_OFFSET(0x748920)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_MontageProcessor_LegacyJob_TypeDefinitionIndex = 57379;

	struct alignas(8) AnimationSubManager_MontageProcessor_LegacyJob
	{
		::NPCCrowd::Chunk::ReadOnlyChunkView_1<::System::UInt32> _entityId; // 0x10
		::NPCCrowd::Chunk::ChunkView_1<::NPCCrowd::Animation::CPUStateMachine::AnimationClipDataMultiLayer> _animations; // 0x30
		::NPCCrowd::Chunk::ChunkView_1<::NPCCrowd::Animation::CPUStateMachine::AnimationTickData> _tickData; // 0x50
		::NPCCrowd::Chunk::ChunkView_1<::NPCCrowd::Animation::MontageTickLayerData> _montageData; // 0x70
		::NPCCrowd::Chunk::ChunkView_1<::NPCCrowd::Animation::AnimationSubManager_PoseInertializationRequest> _blendingRequests; // 0x90
		::Foundation::Adapter::ReadOnlyChunkListView_1<::NPCCrowd::Animation::MontageChunkData> _sharedData; // 0xB0
		::System::Single _deltaTime; // 0xC8
		::System::Int32 _frameCount; // 0xCC

		/*
		static ::System::Nullable_1<::NPCCrowd::Animation::AnimationSubManager_MontageProcessor_LegacyJob> CreateJob(::System::Single deltaTime, ::System::Int32 frameCount, ::NPCCrowd::Animation::AnimationSubManager_MontageArchetypeData* montage)
		{
			return ((::System::Nullable_1<::NPCCrowd::Animation::AnimationSubManager_MontageProcessor_LegacyJob>(*)(::System::Single, ::System::Int32, ::NPCCrowd::Animation::AnimationSubManager_MontageArchetypeData*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_MONTAGEPROCESSOR_LEGACYJOB_CREATEJOB_OFFSET))(deltaTime, frameCount, montage);
		}
		*/

		::System::Int32 get_ChunkCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_MONTAGEPROCESSOR_LEGACYJOB_GET_CHUNKCOUNT_OFFSET))(this);
		}

		::System::Void Execute(::System::Int32 chunkIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_MONTAGEPROCESSOR_LEGACYJOB_EXECUTE_OFFSET))(this, chunkIndex);
		}
	};
}
