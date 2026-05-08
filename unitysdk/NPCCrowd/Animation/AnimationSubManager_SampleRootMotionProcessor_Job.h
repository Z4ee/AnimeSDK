#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/CPUStateMachine/AnimationTickData.h"
#include "unitysdk/NPCCrowd/Chunk/ChunkView_1.h"
#include "unitysdk/NPCCrowd/Chunk/ReadOnlyChunkView_1.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/NapTransformData.h"

#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SAMPLEROOTMOTIONPROCESSOR_JOB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x5A16E0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SAMPLEROOTMOTIONPROCESSOR_JOB_EXTRACTROOTMOTION_OFFSET UNITYSDK_OFFSET(0xD4502C0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SAMPLEROOTMOTIONPROCESSOR_JOB_FETCHTRANSFORM_OFFSET UNITYSDK_OFFSET(0xD4500F0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SAMPLEROOTMOTIONPROCESSOR_JOB_GET_CHUNKCOUNT_OFFSET UNITYSDK_OFFSET(0x5A16D0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SAMPLEROOTMOTIONPROCESSOR_JOB__CTOR_OFFSET UNITYSDK_OFFSET(0x5A1650)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_SampleRootMotionProcessor_Job_TypeDefinitionIndex = 70441;

	struct alignas(8) AnimationSubManager_SampleRootMotionProcessor_Job
	{
		// static const ::System::Int32 RootMotionParamCount = 0x7; // 0x0
		::NPCCrowd::Chunk::ReadOnlyChunkView_1<::NPCCrowd::Animation::CPUStateMachine::AnimationTickData> _sampleData; // 0x10
		::NPCCrowd::Chunk::ReadOnlyChunkView_1<::System::UInt32> _entityIds; // 0x30
		::NPCCrowd::Chunk::ChunkView_1<::UnityEngine::NapTransformData> _output; // 0x50
		::System::Int32 _avatarId; // 0x70
		::System::Int32 _boneCount; // 0x74

		::System::Void _ctor(::System::Int32 avatarId, ::System::Int32 boneCount, ::NPCCrowd::Chunk::ReadOnlyChunkView_1<::NPCCrowd::Animation::CPUStateMachine::AnimationTickData> sampleData, ::NPCCrowd::Chunk::ChunkView_1<::UnityEngine::NapTransformData> output, ::NPCCrowd::Chunk::ReadOnlyChunkView_1<::System::UInt32> entityIds)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::NPCCrowd::Chunk::ReadOnlyChunkView_1<::NPCCrowd::Animation::CPUStateMachine::AnimationTickData>, ::NPCCrowd::Chunk::ChunkView_1<::UnityEngine::NapTransformData>, ::NPCCrowd::Chunk::ReadOnlyChunkView_1<::System::UInt32>))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SAMPLEROOTMOTIONPROCESSOR_JOB__CTOR_OFFSET))(this, avatarId, boneCount, sampleData, output, entityIds);
		}

		::System::Int32 get_ChunkCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SAMPLEROOTMOTIONPROCESSOR_JOB_GET_CHUNKCOUNT_OFFSET))(this);
		}

		::System::Void Execute(::System::Int32 chunkIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SAMPLEROOTMOTIONPROCESSOR_JOB_EXECUTE_OFFSET))(this, chunkIndex);
		}

		static ::UnityEngine::NapTransformData FetchTransform(::System::Single* ptr)
		{
			return ((::UnityEngine::NapTransformData(*)(::System::Single*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SAMPLEROOTMOTIONPROCESSOR_JOB_FETCHTRANSFORM_OFFSET))(ptr);
		}

		/*
		static ::System::Void ExtractRootMotion(::System::Int32 avatarId, ::System::Int32 boneCount, ::System::ReadOnlySpan_1<::NPCCrowd::Animation::CPUStateMachine::AnimationTickData> data, ::System::Span_1<::UnityEngine::NapTransformData> result, ::System::ReadOnlySpan_1<::System::UInt32> entityIds)
		{
			return ((::System::Void(*)(::System::Int32, ::System::Int32, ::System::ReadOnlySpan_1<::NPCCrowd::Animation::CPUStateMachine::AnimationTickData>, ::System::Span_1<::UnityEngine::NapTransformData>, ::System::ReadOnlySpan_1<::System::UInt32>))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_SAMPLEROOTMOTIONPROCESSOR_JOB_EXTRACTROOTMOTION_OFFSET))(avatarId, boneCount, data, result, entityIds);
		}
		*/
	};
}
