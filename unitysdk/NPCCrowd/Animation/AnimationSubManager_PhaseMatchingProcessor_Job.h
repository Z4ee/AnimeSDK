#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Container/NativeVector_1.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_Node_1.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_PoseInertializationRequest.h"
#include "unitysdk/NPCCrowd/Animation/CPUStateMachine/AnimationClipDataMultiLayer.h"
#include "unitysdk/NPCCrowd/Animation/CPUStateMachine/AnimationSampleData.h"
#include "unitysdk/NPCCrowd/Animation/CPUStateMachine/AnimationStateDataMultiLayer.h"
#include "unitysdk/NPCCrowd/Animation/CPUStateMachine/AnimationTickData.h"
#include "unitysdk/NPCCrowd/Chunk/ChunkView_1.h"
#include "unitysdk/NPCCrowd/Chunk/ReadOnlyChunkView_1.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::Animation { class AnimationSubManager_AnimationSharedData; }
namespace NPCCrowd::Animation { class AnimationSubManager_AvatarArchetypeData; }

#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_PHASEMATCHINGPROCESSOR_JOB_BUILDREQUEST_OFFSET UNITYSDK_OFFSET(0xD0D2D50)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_PHASEMATCHINGPROCESSOR_JOB_CREATEJOB_OFFSET UNITYSDK_OFFSET(0xD0CF800)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_PHASEMATCHINGPROCESSOR_JOB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x582930)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_PHASEMATCHINGPROCESSOR_JOB_FETCHSECTION_OFFSET UNITYSDK_OFFSET(0x582A40)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_PHASEMATCHINGPROCESSOR_JOB_FOOTMATCHING_OFFSET UNITYSDK_OFFSET(0xD0D1660)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_PHASEMATCHINGPROCESSOR_JOB_GETADDITIONALANIMATIONCOUNT_OFFSET UNITYSDK_OFFSET(0x582BA0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_PHASEMATCHINGPROCESSOR_JOB_GETCURRENTSTATUS_OFFSET UNITYSDK_OFFSET(0x582A00)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_PHASEMATCHINGPROCESSOR_JOB_GETSAMPLETIME_OFFSET UNITYSDK_OFFSET(0xD0D2260)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_PHASEMATCHINGPROCESSOR_JOB_GET_CHUNKCOUNT_OFFSET UNITYSDK_OFFSET(0x582910)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_PHASEMATCHINGPROCESSOR_JOB_ISCHUNKVALID_OFFSET UNITYSDK_OFFSET(0x582920)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_PHASEMATCHINGPROCESSOR_JOB_PHASEMATCHINGADDITIONALANIMATION_OFFSET UNITYSDK_OFFSET(0x582B30)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_PHASEMATCHINGPROCESSOR_JOB_PHASEMATCHINGANIMATION_OFFSET UNITYSDK_OFFSET(0x582A50)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_PHASEMATCHINGPROCESSOR_JOB_PHASEMATCHINGDEFAULTANIMATION_OFFSET UNITYSDK_OFFSET(0x582AF0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_PHASEMATCHINGPROCESSOR_JOB_PHASEMATCHINGINSTANCE_OFFSET UNITYSDK_OFFSET(0x582A90)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_PHASEMATCHINGPROCESSOR_JOB_PHASEMATCHING_OFFSET UNITYSDK_OFFSET(0x582940)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_PhaseMatchingProcessor_Job_TypeDefinitionIndex = 70498;

	struct alignas(8) AnimationSubManager_PhaseMatchingProcessor_Job
	{
		// static const ::System::Single Epsilon; // 0x0
		::NPCCrowd::Chunk::ReadOnlyChunkView_1<::System::UInt32> _entityIds; // 0x10
		::NPCCrowd::Chunk::ChunkView_1<::NPCCrowd::Animation::CPUStateMachine::AnimationStateDataMultiLayer> _states; // 0x30
		::NPCCrowd::Chunk::ReadOnlyChunkView_1<::NPCCrowd::Animation::CPUStateMachine::AnimationTickData> _tickData; // 0x50
		::NPCCrowd::Chunk::ChunkView_1<::NPCCrowd::Animation::CPUStateMachine::AnimationClipDataMultiLayer> _clipData; // 0x70
		::NPCCrowd::Chunk::ChunkView_1<::NPCCrowd::Animation::AnimationSubManager_PoseInertializationRequest> _blendingRequest; // 0x90
		::Foundation::Container::NativeVector_1<::NPCCrowd::Animation::AnimationSubManager_Node_1<::NPCCrowd::Animation::CPUStateMachine::AnimationSampleData>> _additionalAnimation; // 0xB0
		::System::Int32 _avatarId; // 0xC0
		::System::Int32 _areaCurveId; // 0xC4
		::System::Int32 _areaDerivativeCurveId; // 0xC8
		::System::Int32 _areaSectionCurveId; // 0xCC
		::System::Int32 _footStatusCurveId; // 0xD0
		::System::Int32 _frameCount; // 0xD4

		::System::Int32 get_ChunkCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_PHASEMATCHINGPROCESSOR_JOB_GET_CHUNKCOUNT_OFFSET))(this);
		}

		/*
		static ::System::Nullable_1<::NPCCrowd::Animation::AnimationSubManager_PhaseMatchingProcessor_Job> CreateJob(::System::Int32 frameCount, ::NPCCrowd::Animation::AnimationSubManager_AvatarArchetypeData* avatar, ::NPCCrowd::Animation::AnimationSubManager_AnimationSharedData* sharedData)
		{
			return ((::System::Nullable_1<::NPCCrowd::Animation::AnimationSubManager_PhaseMatchingProcessor_Job>(*)(::System::Int32, ::NPCCrowd::Animation::AnimationSubManager_AvatarArchetypeData*, ::NPCCrowd::Animation::AnimationSubManager_AnimationSharedData*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_PHASEMATCHINGPROCESSOR_JOB_CREATEJOB_OFFSET))(frameCount, avatar, sharedData);
		}
		*/

		::System::Boolean IsChunkValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_PHASEMATCHINGPROCESSOR_JOB_ISCHUNKVALID_OFFSET))(this);
		}

		::System::Void Execute(::System::Int32 chunkIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_PHASEMATCHINGPROCESSOR_JOB_EXECUTE_OFFSET))(this, chunkIndex);
		}

		/*
		::System::Void PhaseMatching(::System::Span_1<::NPCCrowd::Animation::CPUStateMachine::AnimationStateDataMultiLayer> states, ::System::ReadOnlySpan_1<::NPCCrowd::Animation::CPUStateMachine::AnimationTickData> tickData, ::System::Span_1<::NPCCrowd::Animation::CPUStateMachine::AnimationClipDataMultiLayer> clipData, ::System::Span_1<::NPCCrowd::Animation::AnimationSubManager_PoseInertializationRequest> blendingRequests, ::System::ReadOnlySpan_1<::System::UInt32> entities)
		{
			return ((::System::Void(*)(::PVOID, ::System::Span_1<::NPCCrowd::Animation::CPUStateMachine::AnimationStateDataMultiLayer>, ::System::ReadOnlySpan_1<::NPCCrowd::Animation::CPUStateMachine::AnimationTickData>, ::System::Span_1<::NPCCrowd::Animation::CPUStateMachine::AnimationClipDataMultiLayer>, ::System::Span_1<::NPCCrowd::Animation::AnimationSubManager_PoseInertializationRequest>, ::System::ReadOnlySpan_1<::System::UInt32>))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_PHASEMATCHINGPROCESSOR_JOB_PHASEMATCHING_OFFSET))(this, states, tickData, clipData, blendingRequests, entities);
		}
		*/

		/*
		::System::Void GetCurrentStatus(::NPCCrowd::Animation::CPUStateMachine::AnimationTickData tickData, ::NPCCrowd::Animation::PhaseMatchingTarget& target)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::CPUStateMachine::AnimationTickData, ::NPCCrowd::Animation::PhaseMatchingTarget&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_PHASEMATCHINGPROCESSOR_JOB_GETCURRENTSTATUS_OFFSET))(this, tickData, target);
		}
		*/

		/*
		::System::Int32 FetchSection(::System::Int32 clipId, ::NPCCrowd::Animation::AnimationSubManager_PhaseMatchingProcessor_Buffer& buffer)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::NPCCrowd::Animation::AnimationSubManager_PhaseMatchingProcessor_Buffer&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_PHASEMATCHINGPROCESSOR_JOB_FETCHSECTION_OFFSET))(this, clipId, buffer);
		}
		*/

		/*
		static ::NPCCrowd::Animation::PhaseMatchingResult FootMatching(::NPCCrowd::Animation::PhaseMatchingTarget target, ::Unity::Collections::NativeSlice_1<::NPCCrowd::Animation::PhaseSection> sections)
		{
			return ((::NPCCrowd::Animation::PhaseMatchingResult(*)(::NPCCrowd::Animation::PhaseMatchingTarget, ::Unity::Collections::NativeSlice_1<::NPCCrowd::Animation::PhaseSection>))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_PHASEMATCHINGPROCESSOR_JOB_FOOTMATCHING_OFFSET))(target, sections);
		}
		*/

		/*
		::NPCCrowd::Animation::PhaseMatchingResult PhaseMatchingAnimation(::System::Int32 clipId, ::NPCCrowd::Animation::PhaseMatchingTarget target, ::NPCCrowd::Animation::AnimationSubManager_PhaseMatchingProcessor_Buffer& buffer)
		{
			return ((::NPCCrowd::Animation::PhaseMatchingResult(*)(::PVOID, ::System::Int32, ::NPCCrowd::Animation::PhaseMatchingTarget, ::NPCCrowd::Animation::AnimationSubManager_PhaseMatchingProcessor_Buffer&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_PHASEMATCHINGPROCESSOR_JOB_PHASEMATCHINGANIMATION_OFFSET))(this, clipId, target, buffer);
		}
		*/

		/*
		::System::Void PhaseMatchingInstance(::NPCCrowd::Animation::CPUStateMachine::AnimationStateData& state, ::NPCCrowd::Animation::CPUStateMachine::AnimationTickData tickData, ::NPCCrowd::Animation::CPUStateMachine::AnimationClipData& clipData, ::NPCCrowd::Animation::AnimationSubManager_PoseInertializationRequest& blendingRequest, ::System::UInt32 entityId, ::NPCCrowd::Animation::AnimationSubManager_PhaseMatchingProcessor_Buffer& buffer)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::CPUStateMachine::AnimationStateData&, ::NPCCrowd::Animation::CPUStateMachine::AnimationTickData, ::NPCCrowd::Animation::CPUStateMachine::AnimationClipData&, ::NPCCrowd::Animation::AnimationSubManager_PoseInertializationRequest&, ::System::UInt32, ::NPCCrowd::Animation::AnimationSubManager_PhaseMatchingProcessor_Buffer&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_PHASEMATCHINGPROCESSOR_JOB_PHASEMATCHINGINSTANCE_OFFSET))(this, state, tickData, clipData, blendingRequest, entityId, buffer);
		}
		*/

		static ::System::Single GetSampleTime(::System::Single* buffer, ::System::Int32 count)
		{
			return ((::System::Single(*)(::System::Single*, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_PHASEMATCHINGPROCESSOR_JOB_GETSAMPLETIME_OFFSET))(buffer, count);
		}

		/*
		::System::ValueTuple_2<::NPCCrowd::Animation::PhaseMatchingResult, ::System::Single> PhaseMatchingDefaultAnimation(::NPCCrowd::Animation::CPUStateMachine::AnimationClipData& state, ::NPCCrowd::Animation::PhaseMatchingTarget target, ::NPCCrowd::Animation::AnimationSubManager_PhaseMatchingProcessor_Buffer& buffer)
		{
			return ((::System::ValueTuple_2<::NPCCrowd::Animation::PhaseMatchingResult, ::System::Single>(*)(::PVOID, ::NPCCrowd::Animation::CPUStateMachine::AnimationClipData&, ::NPCCrowd::Animation::PhaseMatchingTarget, ::NPCCrowd::Animation::AnimationSubManager_PhaseMatchingProcessor_Buffer&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_PHASEMATCHINGPROCESSOR_JOB_PHASEMATCHINGDEFAULTANIMATION_OFFSET))(this, state, target, buffer);
		}
		*/

		/*
		::NPCCrowd::Animation::PhaseMatchingResult PhaseMatchingAdditionalAnimation(::NPCCrowd::Animation::CPUStateMachine::AnimationClipData& state, ::NPCCrowd::Animation::PhaseMatchingResult result, ::System::Single animLength, ::NPCCrowd::Animation::PhaseMatchingTarget target, ::NPCCrowd::Animation::AnimationSubManager_PhaseMatchingProcessor_Buffer& buffer)
		{
			return ((::NPCCrowd::Animation::PhaseMatchingResult(*)(::PVOID, ::NPCCrowd::Animation::CPUStateMachine::AnimationClipData&, ::NPCCrowd::Animation::PhaseMatchingResult, ::System::Single, ::NPCCrowd::Animation::PhaseMatchingTarget, ::NPCCrowd::Animation::AnimationSubManager_PhaseMatchingProcessor_Buffer&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_PHASEMATCHINGPROCESSOR_JOB_PHASEMATCHINGADDITIONALANIMATION_OFFSET))(this, state, result, animLength, target, buffer);
		}
		*/

		::System::Int32 GetAdditionalAnimationCount(::System::Int32 index)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_PHASEMATCHINGPROCESSOR_JOB_GETADDITIONALANIMATIONCOUNT_OFFSET))(this, index);
		}

		/*
		static ::UnityEngine::NapAnimator_SampleAnimationJobRequest BuildRequest(::System::Int32 animationId, ::System::Single time, ::System::Int32* idPtr, ::System::Single* curvePtr, ::System::Int32 curveCount)
		{
			return ((::UnityEngine::NapAnimator_SampleAnimationJobRequest(*)(::System::Int32, ::System::Single, ::System::Int32*, ::System::Single*, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_PHASEMATCHINGPROCESSOR_JOB_BUILDREQUEST_OFFSET))(animationId, time, idPtr, curvePtr, curveCount);
		}
		*/
	};
}
