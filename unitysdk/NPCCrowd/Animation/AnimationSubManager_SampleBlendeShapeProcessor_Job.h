#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/BitSet256.h"
#include "unitysdk/NPCCrowd/Animation/BlendShapeSampleData.h"
#include "unitysdk/NPCCrowd/Animation/CPUStateMachine/AnimationClipDataMultiLayer.h"
#include "unitysdk/NPCCrowd/Animation/CPUStateMachine/AnimationTickData.h"
#include "unitysdk/NPCCrowd/Chunk/ChunkView2D_1.h"
#include "unitysdk/NPCCrowd/Chunk/ChunkView_1.h"
#include "unitysdk/NPCCrowd/Chunk/ReadOnlyChunkView_1.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"

namespace NPCCrowd::Animation { class AnimationSubManager_AvatarArchetypeData; }

#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SAMPLEBLENDESHAPEPROCESSOR_JOB_CREATEJOB_OFFSET UNITYSDK_OFFSET(0xF853690)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SAMPLEBLENDESHAPEPROCESSOR_JOB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x697DA0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SAMPLEBLENDESHAPEPROCESSOR_JOB_EXTRACTPOSE_OFFSET UNITYSDK_OFFSET(0xF854570)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SAMPLEBLENDESHAPEPROCESSOR_JOB_GET_CHUNKCOUNT_OFFSET UNITYSDK_OFFSET(0x697C90)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_SampleBlendeShapeProcessor_Job_TypeDefinitionIndex = 70472;

	struct alignas(8) AnimationSubManager_SampleBlendeShapeProcessor_Job
	{
		::NPCCrowd::Chunk::ReadOnlyChunkView_1<::NPCCrowd::Animation::CPUStateMachine::AnimationClipDataMultiLayer> _clipData; // 0x10
		::NPCCrowd::Chunk::ReadOnlyChunkView_1<::System::UInt32> _entityId; // 0x30
		::NPCCrowd::Chunk::ChunkView2D_1<::System::Int32> _blendShapeCurveIDs; // 0x50
		::NPCCrowd::Chunk::ChunkView2D_1<::System::Single> _output; // 0x80
		::NPCCrowd::Chunk::ChunkView_1<::NPCCrowd::Animation::BlendShapeSampleData> _blendShapeData; // 0xB0
		::System::Int32 _avatarId; // 0xD0
		::System::Int32 _blendShapeCount; // 0xD4
		::Unity::Collections::NativeArray_1<::Foundation::BitSet256> _layerMaskList; // 0xD8
		::NPCCrowd::Chunk::ChunkView_1<::NPCCrowd::Animation::CPUStateMachine::AnimationClipDataMultiLayer> _animations; // 0xE8
		::NPCCrowd::Chunk::ChunkView_1<::NPCCrowd::Animation::CPUStateMachine::AnimationTickData> _tickData; // 0x108

		::System::Int32 get_ChunkCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SAMPLEBLENDESHAPEPROCESSOR_JOB_GET_CHUNKCOUNT_OFFSET))(this);
		}

		/*
		static ::System::Nullable_1<::NPCCrowd::Animation::AnimationSubManager_SampleBlendeShapeProcessor_Job> CreateJob(::NPCCrowd::Animation::AnimationSubManager_AvatarArchetypeData* avatar)
		{
			return ((::System::Nullable_1<::NPCCrowd::Animation::AnimationSubManager_SampleBlendeShapeProcessor_Job>(*)(::NPCCrowd::Animation::AnimationSubManager_AvatarArchetypeData*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SAMPLEBLENDESHAPEPROCESSOR_JOB_CREATEJOB_OFFSET))(avatar);
		}
		*/

		::System::Void Execute(::System::Int32 chunkIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SAMPLEBLENDESHAPEPROCESSOR_JOB_EXECUTE_OFFSET))(this, chunkIndex);
		}

		/*
		static ::System::Void ExtractPose(::System::Int32 avatarId, ::System::Int32 blendShapeCount, ::System::ReadOnlySpan_1<::NPCCrowd::Animation::CPUStateMachine::AnimationClipDataMultiLayer> data, ::NPCCrowd::Chunk::Span2D_1<::System::Int32> curveIDs, ::NPCCrowd::Chunk::Span2D_1<::System::Single> result, ::System::ReadOnlySpan_1<::System::UInt32> instanceId, ::System::ReadOnlySpan_1<::NPCCrowd::Animation::BlendShapeSampleData> blendShapeDatas, ::Unity::Collections::NativeArray_1<::Foundation::BitSet256> layerMaskList)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::ReadOnlySpan_1<::NPCCrowd::Animation::CPUStateMachine::AnimationClipDataMultiLayer>, ::NPCCrowd::Chunk::Span2D_1<::System::Int32>, ::NPCCrowd::Chunk::Span2D_1<::System::Single>, ::System::ReadOnlySpan_1<::System::UInt32>, ::System::ReadOnlySpan_1<::NPCCrowd::Animation::BlendShapeSampleData>, ::Unity::Collections::NativeArray_1<::Foundation::BitSet256>))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SAMPLEBLENDESHAPEPROCESSOR_JOB_EXTRACTPOSE_OFFSET))(avatarId, blendShapeCount, data, curveIDs, result, instanceId, blendShapeDatas, layerMaskList);
		}
		*/
	};
}
