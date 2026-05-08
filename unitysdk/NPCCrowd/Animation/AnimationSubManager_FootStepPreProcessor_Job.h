#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_FootStepControlData.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_FootStepSetting.h"
#include "unitysdk/NPCCrowd/Animation/CPUStateMachine/AnimationTickData.h"
#include "unitysdk/NPCCrowd/Chunk/ChunkView2D_1.h"
#include "unitysdk/NPCCrowd/Chunk/ChunkView_1.h"
#include "unitysdk/NPCCrowd/Chunk/ReadOnlyChunkView_1.h"
#include "unitysdk/NPCCrowd/Lod/ELODLevel.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeSlice_1.h"
#include "unitysdk/UnityEngine/NapTransformData.h"
#include "unitysdk/UnityEngine/PhysicsScene.h"

namespace NPCCrowd::Animation { class AnimationSubManager_AvatarArchetypeData; }

#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPREPROCESSOR_JOB_BUILDREQUEST_OFFSET UNITYSDK_OFFSET(0xD0CCEC0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPREPROCESSOR_JOB_CALCULATEGROUNDNORMAL_OFFSET UNITYSDK_OFFSET(0x582870)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPREPROCESSOR_JOB_CHECKANDUPDATEFOOTSEGMENTS_OFFSET UNITYSDK_OFFSET(0x582810)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPREPROCESSOR_JOB_CREATEJOB_OFFSET UNITYSDK_OFFSET(0xD0C7C40)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPREPROCESSOR_JOB_DOORDINARYRAYCAST_OFFSET UNITYSDK_OFFSET(0x5826F0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPREPROCESSOR_JOB_DOPREDICTRAYCAST_OFFSET UNITYSDK_OFFSET(0x582700)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPREPROCESSOR_JOB_DORAYCASTONSTAIR_OFFSET UNITYSDK_OFFSET(0x582680)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPREPROCESSOR_JOB_DORAYCAST_OFFSET UNITYSDK_OFFSET(0x5824B0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPREPROCESSOR_JOB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x5824A0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPREPROCESSOR_JOB_GET_CHUNKCOUNT_OFFSET UNITYSDK_OFFSET(0x582480)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPREPROCESSOR_JOB_HITGROUNDFORSLOPE_OFFSET UNITYSDK_OFFSET(0x5827D0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPREPROCESSOR_JOB_HITGROUND_OFFSET UNITYSDK_OFFSET(0x582790)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPREPROCESSOR_JOB_ISVALID_OFFSET UNITYSDK_OFFSET(0x582490)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPREPROCESSOR_JOB_PREPROCESS_OFFSET UNITYSDK_OFFSET(0x582670)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPREPROCESSOR_JOB_PROCESSFADEINOUT_OFFSET UNITYSDK_OFFSET(0x582590)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPREPROCESSOR_JOB_RESET_OFFSET UNITYSDK_OFFSET(0x5825A0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPREPROCESSOR_JOB_SAMPLECURVE_OFFSET UNITYSDK_OFFSET(0x5825D0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPREPROCESSOR_JOB_TRYINITIALIZE_OFFSET UNITYSDK_OFFSET(0x582610)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_FootStepPreProcessor_Job_TypeDefinitionIndex = 70481;

	struct alignas(8) AnimationSubManager_FootStepPreProcessor_Job
	{
		::System::Int32 _avatarId; // 0x10
		::System::Single _deltaTime; // 0x14
		::UnityEngine::PhysicsScene _physicsScene; // 0x18
		::NPCCrowd::Chunk::ChunkView_1<::NPCCrowd::Animation::AnimationSubManager_FootStepControlData> _control; // 0x20
		::NPCCrowd::Animation::AnimationSubManager_FootStepSetting _setting; // 0x40
		::NPCCrowd::Chunk::ChunkView2D_1<::UnityEngine::NapTransformData> _bones; // 0xF0
		::NPCCrowd::Chunk::ReadOnlyChunkView_1<::System::UInt32> _entityIds; // 0x120
		::NPCCrowd::Chunk::ReadOnlyChunkView_1<::NPCCrowd::Lod::ELODLevel> _entityLods; // 0x140
		::Unity::Collections::NativeSlice_1<::System::Int32> _boneParents; // 0x160
		::NPCCrowd::Chunk::ReadOnlyChunkView_1<::UnityEngine::NapTransformData> _entityTransforms; // 0x170
		::NPCCrowd::Chunk::ReadOnlyChunkView_1<::NPCCrowd::Animation::CPUStateMachine::AnimationTickData> _tickData; // 0x190
		::System::Int32 _leftFootIkWeightCurveId; // 0x1B0
		::System::Int32 _rightFootIkWeightCurveId; // 0x1B4

		/*
		static ::System::Nullable_1<::NPCCrowd::Animation::AnimationSubManager_FootStepPreProcessor_Job> CreateJob(::NPCCrowd::Animation::AnimationSubManager_AvatarArchetypeData* avatar, ::System::Double timestamp)
		{
			return ((::System::Nullable_1<::NPCCrowd::Animation::AnimationSubManager_FootStepPreProcessor_Job>(*)(::NPCCrowd::Animation::AnimationSubManager_AvatarArchetypeData*, ::System::Double))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPREPROCESSOR_JOB_CREATEJOB_OFFSET))(avatar, timestamp);
		}
		*/

		::System::Int32 get_ChunkCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPREPROCESSOR_JOB_GET_CHUNKCOUNT_OFFSET))(this);
		}

		::System::Boolean IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPREPROCESSOR_JOB_ISVALID_OFFSET))(this);
		}

		::System::Void Execute(::System::Int32 chunkIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPREPROCESSOR_JOB_EXECUTE_OFFSET))(this, chunkIndex);
		}

		/*
		::System::Void DoRaycast(::System::UInt32 entityId, ::NPCCrowd::Lod::ELODLevel lodLevel, ::NPCCrowd::Animation::CPUStateMachine::AnimationTickData tickData, ::NPCCrowd::Animation::AnimationSubManager_FootStepControlData& footStepControl, ::UnityEngine::NapTransformData entityTransform, ::NPCCrowd::Animation::FRefPose pose)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::NPCCrowd::Lod::ELODLevel, ::NPCCrowd::Animation::CPUStateMachine::AnimationTickData, ::NPCCrowd::Animation::AnimationSubManager_FootStepControlData&, ::UnityEngine::NapTransformData, ::NPCCrowd::Animation::FRefPose))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPREPROCESSOR_JOB_DORAYCAST_OFFSET))(this, entityId, lodLevel, tickData, footStepControl, entityTransform, pose);
		}
		*/

		::System::Void ProcessFadeInOut(::System::UInt32 entityId, ::NPCCrowd::Animation::AnimationSubManager_FootStepControlData& footStepControl)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::NPCCrowd::Animation::AnimationSubManager_FootStepControlData&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPREPROCESSOR_JOB_PROCESSFADEINOUT_OFFSET))(this, entityId, footStepControl);
		}

		/*
		::System::Void Reset(::NPCCrowd::Animation::AnimationSubManager_FootStepControlData& footStepControl, ::UnityEngine::Vector3 entityPos)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::AnimationSubManager_FootStepControlData&, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPREPROCESSOR_JOB_RESET_OFFSET))(this, footStepControl, entityPos);
		}
		*/

		/*
		::System::ValueTuple_2<::System::Single, ::System::Single> SampleCurve(::System::UInt32 entityId, ::NPCCrowd::Animation::CPUStateMachine::AnimationTickData tickData)
		{
			return ((::System::ValueTuple_2<::System::Single, ::System::Single>(*)(::PVOID, ::System::UInt32, ::NPCCrowd::Animation::CPUStateMachine::AnimationTickData))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPREPROCESSOR_JOB_SAMPLECURVE_OFFSET))(this, entityId, tickData);
		}
		*/

		/*
		static ::UnityEngine::NapAnimator_SampleAnimationJobRequest BuildRequest(::System::Int32 animationId, ::System::Single time, ::System::Int32* idPtr, ::System::Single* curvePtr, ::System::Int32 curveCount)
		{
			return ((::UnityEngine::NapAnimator_SampleAnimationJobRequest(*)(::System::Int32, ::System::Single, ::System::Int32*, ::System::Single*, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPREPROCESSOR_JOB_BUILDREQUEST_OFFSET))(animationId, time, idPtr, curvePtr, curveCount);
		}
		*/

		/*
		::System::Void TryInitialize(::NPCCrowd::Animation::FRefPose pose, ::NPCCrowd::Animation::AnimationSubManager_FootStepControlData& footStepControl)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::FRefPose, ::NPCCrowd::Animation::AnimationSubManager_FootStepControlData&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPREPROCESSOR_JOB_TRYINITIALIZE_OFFSET))(this, pose, footStepControl);
		}
		*/

		::System::Void Preprocess(::NPCCrowd::Animation::AnimationSubManager_FootStepControlData& footStepControl)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::AnimationSubManager_FootStepControlData&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPREPROCESSOR_JOB_PREPROCESS_OFFSET))(this, footStepControl);
		}

		::System::Void DoRaycastOnStair(::System::UInt32 entityId, ::NPCCrowd::Animation::CPUStateMachine::AnimationTickData tickData, ::UnityEngine::NapTransformData entityTransform, ::NPCCrowd::Animation::AnimationSubManager_FootStepControlData& footStepControl)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::NPCCrowd::Animation::CPUStateMachine::AnimationTickData, ::UnityEngine::NapTransformData, ::NPCCrowd::Animation::AnimationSubManager_FootStepControlData&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPREPROCESSOR_JOB_DORAYCASTONSTAIR_OFFSET))(this, entityId, tickData, entityTransform, footStepControl);
		}

		::System::Void DoOrdinaryRaycast(::System::UInt32 entityId, ::NPCCrowd::Animation::AnimationSubManager_FootStepControlData& footStepControl)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::NPCCrowd::Animation::AnimationSubManager_FootStepControlData&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPREPROCESSOR_JOB_DOORDINARYRAYCAST_OFFSET))(this, entityId, footStepControl);
		}

		::System::Void DoPredictRaycast(::System::UInt32 entityId, ::System::Boolean enablePikLastFrame, ::System::Int32 animIndex, ::NPCCrowd::Animation::CPUStateMachine::AnimationTickData tickData, ::UnityEngine::NapTransformData entityTransform, ::NPCCrowd::Animation::AnimationSubManager_FootStepControlData& footStepControl)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::Int32, ::NPCCrowd::Animation::CPUStateMachine::AnimationTickData, ::UnityEngine::NapTransformData, ::NPCCrowd::Animation::AnimationSubManager_FootStepControlData&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPREPROCESSOR_JOB_DOPREDICTRAYCAST_OFFSET))(this, entityId, enablePikLastFrame, animIndex, tickData, entityTransform, footStepControl);
		}

		/*
		::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Vector3> HitGround(::System::UInt32 entityId, ::UnityEngine::NapTransformData footWorldSpace)
		{
			return ((::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Vector3>(*)(::PVOID, ::System::UInt32, ::UnityEngine::NapTransformData))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPREPROCESSOR_JOB_HITGROUND_OFFSET))(this, entityId, footWorldSpace);
		}
		*/

		/*
		::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Vector3> HitGroundForSlope(::System::UInt32 entityId, ::UnityEngine::NapTransformData footWorldSpace)
		{
			return ((::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Vector3>(*)(::PVOID, ::System::UInt32, ::UnityEngine::NapTransformData))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPREPROCESSOR_JOB_HITGROUNDFORSLOPE_OFFSET))(this, entityId, footWorldSpace);
		}
		*/

		/*
		::System::ValueTuple_4<::System::Boolean, ::System::Boolean, ::System::Single, ::UnityEngine::Vector3> CheckAndUpdateFootSegments(::System::UInt32 entityId, ::NPCCrowd::Animation::CPUStateMachine::AnimationTickData tickData, ::System::Int32 footIndex, ::System::Int32 animIndex)
		{
			return ((::System::ValueTuple_4<::System::Boolean, ::System::Boolean, ::System::Single, ::UnityEngine::Vector3>(*)(::PVOID, ::System::UInt32, ::NPCCrowd::Animation::CPUStateMachine::AnimationTickData, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPREPROCESSOR_JOB_CHECKANDUPDATEFOOTSEGMENTS_OFFSET))(this, entityId, tickData, footIndex, animIndex);
		}
		*/

		/*
		::UnityEngine::Vector3 CalculateGroundNormal(::System::UInt32 entityId, ::NPCCrowd::Animation::AnimationSubManager_FootStepControlData footStepControl, ::UnityEngine::Vector3 groundNormal, ::System::Int32 footIndex)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::UInt32, ::NPCCrowd::Animation::AnimationSubManager_FootStepControlData, ::UnityEngine::Vector3, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPREPROCESSOR_JOB_CALCULATEGROUNDNORMAL_OFFSET))(this, entityId, footStepControl, groundNormal, footIndex);
		}
		*/
	};
}
