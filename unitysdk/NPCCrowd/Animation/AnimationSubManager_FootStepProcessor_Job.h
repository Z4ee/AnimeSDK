#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENPCAvatarGender.h"
#include "unitysdk/ENPCAvatarSize.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_FootStepControlData.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_FootStepSetting.h"
#include "unitysdk/NPCCrowd/Animation/AnimationSubManager_MotionControlData.h"
#include "unitysdk/NPCCrowd/Animation/CPUStateMachine/AnimationTickData.h"
#include "unitysdk/NPCCrowd/Chunk/ChunkView2D_1.h"
#include "unitysdk/NPCCrowd/Chunk/ChunkView_1.h"
#include "unitysdk/NPCCrowd/Chunk/ReadOnlyChunkView_1.h"
#include "unitysdk/NPCCrowd/Lod/ELODLevel.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeSlice_1.h"
#include "unitysdk/UnityEngine/NapTransformData.h"
#include "unitysdk/UnityEngine/Rendering/Universal/Internal/FootPrintManager_FootPrintSpawnerType.h"

namespace NPCCrowd::Animation { class AnimationSubManager_AvatarArchetypeData; }

#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPROCESSOR_JOB_CALCULATEFOOTTARGETFORPREDICT_OFFSET UNITYSDK_OFFSET(0x73C780)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPROCESSOR_JOB_CALCULATEFOOTTARGETONSLOPE_OFFSET UNITYSDK_OFFSET(0x73C6F0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPROCESSOR_JOB_CALCULATEFOOTTARGET_OFFSET UNITYSDK_OFFSET(0x73C610)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPROCESSOR_JOB_CALCULATEPELVISDELTA_OFFSET UNITYSDK_OFFSET(0x73C970)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPROCESSOR_JOB_CHECKCURRENTFOOTSTEPSEGMENT_OFFSET UNITYSDK_OFFSET(0x73C140)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPROCESSOR_JOB_CREATEJOB_OFFSET UNITYSDK_OFFSET(0x11D87240)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPROCESSOR_JOB_DOFOOTPRINT_OFFSET UNITYSDK_OFFSET(0x73C0B0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPROCESSOR_JOB_DOFOOTSTEPFORPREDICT_OFFSET UNITYSDK_OFFSET(0x73C4F0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPROCESSOR_JOB_DOFOOTSTEPIK_OFFSET UNITYSDK_OFFSET(0x73C1A0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPROCESSOR_JOB_DOFOOTSTEPONSLOPE_OFFSET UNITYSDK_OFFSET(0x73C3E0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPROCESSOR_JOB_DOFOOTSTEPONSTAIR_OFFSET UNITYSDK_OFFSET(0x73C250)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPROCESSOR_JOB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x73C090)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPROCESSOR_JOB_GETFOOTPRINTSPAWNERTYPE_OFFSET UNITYSDK_OFFSET(0x73C130)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPROCESSOR_JOB_GET_CHUNKCOUNT_OFFSET UNITYSDK_OFFSET(0x73C080)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPROCESSOR_JOB_HIPHEIGHTLIFTINGDELTABYLIMITDIST_OFFSET UNITYSDK_OFFSET(0x11D91960)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPROCESSOR_JOB_ISVALID_OFFSET UNITYSDK_OFFSET(0x73C0A0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPROCESSOR_JOB_PELVISPD_OFFSET UNITYSDK_OFFSET(0x73C810)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPROCESSOR_JOB_PRECALCULATEPELVISDELTA_OFFSET UNITYSDK_OFFSET(0x73C900)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPROCESSOR_JOB_RESET_OFFSET UNITYSDK_OFFSET(0x73C600)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPROCESSOR_JOB_SAMPLEPARABOLA_OFFSET UNITYSDK_OFFSET(0x73C820)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPROCESSOR_JOB_SETCONTROLDATA_OFFSET UNITYSDK_OFFSET(0x73C8C0)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_FootStepProcessor_Job_TypeDefinitionIndex = 70527;

	struct alignas(8) AnimationSubManager_FootStepProcessor_Job
	{
		::System::Double _timestamp; // 0x10
		::System::Single _deltaTime; // 0x18
		::ENPCAvatarGender _gender; // 0x1C
		::ENPCAvatarSize _size; // 0x20
		::NPCCrowd::Chunk::ChunkView_1<::NPCCrowd::Animation::AnimationSubManager_FootStepControlData> _control; // 0x28
		::NPCCrowd::Animation::AnimationSubManager_FootStepSetting _setting; // 0x48
		::NPCCrowd::Chunk::ChunkView2D_1<::UnityEngine::NapTransformData> _bones; // 0xF8
		::NPCCrowd::Chunk::ReadOnlyChunkView_1<::System::UInt32> _entityIds; // 0x128
		::NPCCrowd::Chunk::ReadOnlyChunkView_1<::NPCCrowd::Lod::ELODLevel> _entityLods; // 0x148
		::Unity::Collections::NativeSlice_1<::System::Int32> _boneParents; // 0x168
		::NPCCrowd::Chunk::ReadOnlyChunkView_1<::UnityEngine::NapTransformData> _entityTransforms; // 0x178
		::NPCCrowd::Chunk::ChunkView_1<::NPCCrowd::Animation::AnimationSubManager_MotionControlData> _motionControl; // 0x198
		::NPCCrowd::Chunk::ReadOnlyChunkView_1<::NPCCrowd::Animation::CPUStateMachine::AnimationTickData> _tickData; // 0x1B8

		/*
		static ::System::Nullable_1<::NPCCrowd::Animation::AnimationSubManager_FootStepProcessor_Job> CreateJob(::NPCCrowd::Animation::AnimationSubManager_AvatarArchetypeData* avatar, ::System::Double timestamp)
		{
			return ((::System::Nullable_1<::NPCCrowd::Animation::AnimationSubManager_FootStepProcessor_Job>(*)(::NPCCrowd::Animation::AnimationSubManager_AvatarArchetypeData*, ::System::Double))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPROCESSOR_JOB_CREATEJOB_OFFSET))(avatar, timestamp);
		}
		*/

		::System::Int32 get_ChunkCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPROCESSOR_JOB_GET_CHUNKCOUNT_OFFSET))(this);
		}

		::System::Void Execute(::System::Int32 chunkIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPROCESSOR_JOB_EXECUTE_OFFSET))(this, chunkIndex);
		}

		::System::Boolean IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPROCESSOR_JOB_ISVALID_OFFSET))(this);
		}

		::System::Void DoFootPrint(::System::UInt32 entityId, ::NPCCrowd::Lod::ELODLevel lodLevel, ::NPCCrowd::Animation::CPUStateMachine::AnimationTickData tickData, ::UnityEngine::NapTransformData entityTransform, ::NPCCrowd::Animation::AnimationSubManager_FootStepControlData& footStepControl)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::NPCCrowd::Lod::ELODLevel, ::NPCCrowd::Animation::CPUStateMachine::AnimationTickData, ::UnityEngine::NapTransformData, ::NPCCrowd::Animation::AnimationSubManager_FootStepControlData&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPROCESSOR_JOB_DOFOOTPRINT_OFFSET))(this, entityId, lodLevel, tickData, entityTransform, footStepControl);
		}

		::UnityEngine::Rendering::Universal::Internal::FootPrintManager_FootPrintSpawnerType GetFootPrintSpawnerType()
		{
			return ((::UnityEngine::Rendering::Universal::Internal::FootPrintManager_FootPrintSpawnerType(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPROCESSOR_JOB_GETFOOTPRINTSPAWNERTYPE_OFFSET))(this);
		}

		/*
		::System::ValueTuple_2<::System::Boolean, ::UnityEngine::Vector3> CheckCurrentFootStepSegment(::System::UInt32 entityId, ::NPCCrowd::Animation::CPUStateMachine::AnimationTickData tickData, ::System::Int32 footIndex, ::System::Int32 animIndex)
		{
			return ((::System::ValueTuple_2<::System::Boolean, ::UnityEngine::Vector3>(*)(::PVOID, ::System::UInt32, ::NPCCrowd::Animation::CPUStateMachine::AnimationTickData, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPROCESSOR_JOB_CHECKCURRENTFOOTSTEPSEGMENT_OFFSET))(this, entityId, tickData, footIndex, animIndex);
		}
		*/

		/*
		::System::Void DoFootStepIk(::System::UInt32 entityId, ::NPCCrowd::Lod::ELODLevel lodLevel, ::NPCCrowd::Animation::AnimationSubManager_MotionControlData& motionControl, ::NPCCrowd::Animation::AnimationSubManager_FootStepControlData& footStepControl, ::UnityEngine::NapTransformData entityTransform, ::NPCCrowd::Animation::FRefPose pose)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::NPCCrowd::Lod::ELODLevel, ::NPCCrowd::Animation::AnimationSubManager_MotionControlData&, ::NPCCrowd::Animation::AnimationSubManager_FootStepControlData&, ::UnityEngine::NapTransformData, ::NPCCrowd::Animation::FRefPose))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPROCESSOR_JOB_DOFOOTSTEPIK_OFFSET))(this, entityId, lodLevel, motionControl, footStepControl, entityTransform, pose);
		}
		*/

		/*
		::System::Void DoFootStepOnStair(::System::UInt32 entityId, ::UnityEngine::NapTransformData leftFootAnimDataEntitySpace, ::UnityEngine::NapTransformData leftToeAnimDataLocalSpace, ::UnityEngine::NapTransformData rightFootAnimDataEntitySpace, ::UnityEngine::NapTransformData rightToeAnimDataLocalSpace, ::UnityEngine::NapTransformData entityTransform, ::NPCCrowd::Animation::FRefPose pose, ::NPCCrowd::Animation::AnimationSubManager_FootStepControlData& footStepControl, ::NPCCrowd::Animation::AnimationSubManager_MotionControlData& motionControl)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::NapTransformData, ::UnityEngine::NapTransformData, ::UnityEngine::NapTransformData, ::UnityEngine::NapTransformData, ::UnityEngine::NapTransformData, ::NPCCrowd::Animation::FRefPose, ::NPCCrowd::Animation::AnimationSubManager_FootStepControlData&, ::NPCCrowd::Animation::AnimationSubManager_MotionControlData&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPROCESSOR_JOB_DOFOOTSTEPONSTAIR_OFFSET))(this, entityId, leftFootAnimDataEntitySpace, leftToeAnimDataLocalSpace, rightFootAnimDataEntitySpace, rightToeAnimDataLocalSpace, entityTransform, pose, footStepControl, motionControl);
		}
		*/

		/*
		::System::Void DoFootStepOnSlope(::System::UInt32 entityId, ::UnityEngine::NapTransformData leftFootAnimDataEntitySpace, ::UnityEngine::NapTransformData rightFootAnimDataEntitySpace, ::UnityEngine::NapTransformData entityTransform, ::NPCCrowd::Animation::FRefPose pose, ::NPCCrowd::Animation::AnimationSubManager_FootStepControlData& footStepControl, ::NPCCrowd::Animation::AnimationSubManager_MotionControlData& motionControl)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::NapTransformData, ::UnityEngine::NapTransformData, ::UnityEngine::NapTransformData, ::NPCCrowd::Animation::FRefPose, ::NPCCrowd::Animation::AnimationSubManager_FootStepControlData&, ::NPCCrowd::Animation::AnimationSubManager_MotionControlData&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPROCESSOR_JOB_DOFOOTSTEPONSLOPE_OFFSET))(this, entityId, leftFootAnimDataEntitySpace, rightFootAnimDataEntitySpace, entityTransform, pose, footStepControl, motionControl);
		}
		*/

		/*
		::System::Void DoFootStepForPredict(::System::UInt32 entityId, ::UnityEngine::NapTransformData leftFootAnimDataEntitySpace, ::UnityEngine::NapTransformData rightFootAnimDataEntitySpace, ::UnityEngine::NapTransformData entityTransform, ::NPCCrowd::Animation::FRefPose pose, ::NPCCrowd::Animation::AnimationSubManager_FootStepControlData& footStepControl, ::NPCCrowd::Animation::AnimationSubManager_MotionControlData& motionControl)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::UnityEngine::NapTransformData, ::UnityEngine::NapTransformData, ::UnityEngine::NapTransformData, ::NPCCrowd::Animation::FRefPose, ::NPCCrowd::Animation::AnimationSubManager_FootStepControlData&, ::NPCCrowd::Animation::AnimationSubManager_MotionControlData&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPROCESSOR_JOB_DOFOOTSTEPFORPREDICT_OFFSET))(this, entityId, leftFootAnimDataEntitySpace, rightFootAnimDataEntitySpace, entityTransform, pose, footStepControl, motionControl);
		}
		*/

		::System::Void Reset(::NPCCrowd::Animation::AnimationSubManager_MotionControlData& motionControl, ::NPCCrowd::Animation::AnimationSubManager_FootStepControlData& footStepControl)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::AnimationSubManager_MotionControlData&, ::NPCCrowd::Animation::AnimationSubManager_FootStepControlData&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPROCESSOR_JOB_RESET_OFFSET))(this, motionControl, footStepControl);
		}

		::UnityEngine::NapTransformData CalculateFootTarget(::System::UInt32 entityId, ::UnityEngine::NapTransformData footAnimDataEntitySpace, ::UnityEngine::NapTransformData toeAnimDataLocalSpace, ::UnityEngine::NapTransformData entityTransform, ::NPCCrowd::Animation::AnimationSubManager_FootStepControlData& footStepControl, ::System::Single pelvisDelta, ::System::Int32 i)
		{
			return ((::UnityEngine::NapTransformData(*)(::PVOID, ::System::UInt32, ::UnityEngine::NapTransformData, ::UnityEngine::NapTransformData, ::UnityEngine::NapTransformData, ::NPCCrowd::Animation::AnimationSubManager_FootStepControlData&, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPROCESSOR_JOB_CALCULATEFOOTTARGET_OFFSET))(this, entityId, footAnimDataEntitySpace, toeAnimDataLocalSpace, entityTransform, footStepControl, pelvisDelta, i);
		}

		::UnityEngine::NapTransformData CalculateFootTargetOnSlope(::System::UInt32 entityId, ::UnityEngine::NapTransformData footAnimDataEntitySpace, ::UnityEngine::NapTransformData entityTransform, ::NPCCrowd::Animation::AnimationSubManager_FootStepControlData& footStepControl, ::System::Int32 i)
		{
			return ((::UnityEngine::NapTransformData(*)(::PVOID, ::System::UInt32, ::UnityEngine::NapTransformData, ::UnityEngine::NapTransformData, ::NPCCrowd::Animation::AnimationSubManager_FootStepControlData&, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPROCESSOR_JOB_CALCULATEFOOTTARGETONSLOPE_OFFSET))(this, entityId, footAnimDataEntitySpace, entityTransform, footStepControl, i);
		}

		::UnityEngine::NapTransformData CalculateFootTargetForPredict(::System::UInt32 entityId, ::UnityEngine::NapTransformData footAnimDataEntitySpace, ::UnityEngine::NapTransformData entityTransform, ::NPCCrowd::Animation::AnimationSubManager_FootStepControlData& footStepControl, ::System::Int32 i)
		{
			return ((::UnityEngine::NapTransformData(*)(::PVOID, ::System::UInt32, ::UnityEngine::NapTransformData, ::UnityEngine::NapTransformData, ::NPCCrowd::Animation::AnimationSubManager_FootStepControlData&, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPROCESSOR_JOB_CALCULATEFOOTTARGETFORPREDICT_OFFSET))(this, entityId, footAnimDataEntitySpace, entityTransform, footStepControl, i);
		}

		::System::Single PelvisPd(::System::UInt32 entityId, ::System::Single targetHipDelta, ::NPCCrowd::Animation::AnimationSubManager_FootStepControlData& footStepControl)
		{
			return ((::System::Single(*)(::PVOID, ::System::UInt32, ::System::Single, ::NPCCrowd::Animation::AnimationSubManager_FootStepControlData&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPROCESSOR_JOB_PELVISPD_OFFSET))(this, entityId, targetHipDelta, footStepControl);
		}

		/*
		::System::Single SampleParabola(::System::UInt32 entityId, ::UnityEngine::NapTransformData entityTransform, ::UnityEngine::Vector3 footAnimPosWorldSpace, ::UnityEngine::Vector3 curr, ::UnityEngine::Vector3 next)
		{
			return ((::System::Single(*)(::PVOID, ::System::UInt32, ::UnityEngine::NapTransformData, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPROCESSOR_JOB_SAMPLEPARABOLA_OFFSET))(this, entityId, entityTransform, footAnimPosWorldSpace, curr, next);
		}
		*/

		/*
		::System::Void SetControlData(::NPCCrowd::Animation::AnimationSubManager_TwoBonesIKControl& controlData, ::UnityEngine::NapTransformData target, ::System::Single weight)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::AnimationSubManager_TwoBonesIKControl&, ::UnityEngine::NapTransformData, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPROCESSOR_JOB_SETCONTROLDATA_OFFSET))(this, controlData, target, weight);
		}
		*/

		/*
		::System::Single PreCalculatePelvisDelta(::System::UInt32 entityId, ::NPCCrowd::Animation::AnimationSubManager_FootStepControlData& controlData, ::UnityEngine::Vector3 supportFootAnimPos, ::UnityEngine::Vector3 supportFootTarget, ::UnityEngine::Vector3 pelvis)
		{
			return ((::System::Single(*)(::PVOID, ::System::UInt32, ::NPCCrowd::Animation::AnimationSubManager_FootStepControlData&, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPROCESSOR_JOB_PRECALCULATEPELVISDELTA_OFFSET))(this, entityId, controlData, supportFootAnimPos, supportFootTarget, pelvis);
		}
		*/

		/*
		::System::Single CalculatePelvisDelta(::System::UInt32 entityId, ::NPCCrowd::Animation::AnimationSubManager_FootStepControlData& controlData, ::UnityEngine::Vector3 leftTarget, ::UnityEngine::Vector3 rightTarget, ::UnityEngine::Vector3 pelvis, ::System::Single pelvisDelta)
		{
			return ((::System::Single(*)(::PVOID, ::System::UInt32, ::NPCCrowd::Animation::AnimationSubManager_FootStepControlData&, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPROCESSOR_JOB_CALCULATEPELVISDELTA_OFFSET))(this, entityId, controlData, leftTarget, rightTarget, pelvis, pelvisDelta);
		}
		*/

		/*
		static ::System::Single HipHeightLiftingDeltaByLimitDist(::UnityEngine::Vector3 footPos, ::UnityEngine::Vector3 pelvisPos, ::System::Single legLenLimit, ::System::Boolean isMax)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPROCESSOR_JOB_HIPHEIGHTLIFTINGDELTABYLIMITDIST_OFFSET))(footPos, pelvisPos, legLenLimit, isMax);
		}
		*/
	};
}
