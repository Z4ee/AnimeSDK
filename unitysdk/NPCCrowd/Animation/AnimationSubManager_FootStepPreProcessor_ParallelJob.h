#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Lod/ELODLevel.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/PhysicsScene.h"

namespace NPCCrowd::Animation { class AnimationSubManager_AvatarArchetypeData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPREPROCESSOR_PARALLELJOB_BUILDREQUEST_OFFSET UNITYSDK_OFFSET(0x12D1E7C0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPREPROCESSOR_PARALLELJOB_CALCULATEGROUNDNORMAL_OFFSET UNITYSDK_OFFSET(0x7C06B0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPREPROCESSOR_PARALLELJOB_CHECKANDUPDATEFOOTSEGMENTS_OFFSET UNITYSDK_OFFSET(0x7C0650)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPREPROCESSOR_PARALLELJOB_DOORDINARYRAYCAST_OFFSET UNITYSDK_OFFSET(0x7C0530)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPREPROCESSOR_PARALLELJOB_DOPREDICTRAYCAST_OFFSET UNITYSDK_OFFSET(0x7C0540)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPREPROCESSOR_PARALLELJOB_DORAYCASTONSTAIR_OFFSET UNITYSDK_OFFSET(0x7C04C0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPREPROCESSOR_PARALLELJOB_DORAYCAST_OFFSET UNITYSDK_OFFSET(0x7C02F0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPREPROCESSOR_PARALLELJOB_EXECUTE_OFFSET UNITYSDK_OFFSET(0x7C02E0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPREPROCESSOR_PARALLELJOB_GET__AVATARID_OFFSET UNITYSDK_OFFSET(0x7C02B0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPREPROCESSOR_PARALLELJOB_GET__LEFTFOOTIKWEIGHTCURVEID_OFFSET UNITYSDK_OFFSET(0x7C02C0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPREPROCESSOR_PARALLELJOB_GET__RIGHTFOOTIKWEIGHTCURVEID_OFFSET UNITYSDK_OFFSET(0x7C02D0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPREPROCESSOR_PARALLELJOB_GET__SETTING_OFFSET UNITYSDK_OFFSET(0x7C0290)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPREPROCESSOR_PARALLELJOB_HITGROUNDFORSLOPE_OFFSET UNITYSDK_OFFSET(0x7C0610)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPREPROCESSOR_PARALLELJOB_HITGROUND_OFFSET UNITYSDK_OFFSET(0x7C05D0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPREPROCESSOR_PARALLELJOB_PREPROCESS_OFFSET UNITYSDK_OFFSET(0x7C04B0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPREPROCESSOR_PARALLELJOB_PROCESSFADEINOUT_OFFSET UNITYSDK_OFFSET(0x7C03D0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPREPROCESSOR_PARALLELJOB_RESET_OFFSET UNITYSDK_OFFSET(0x7C03E0)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPREPROCESSOR_PARALLELJOB_SAMPLECURVE_OFFSET UNITYSDK_OFFSET(0x7C0410)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPREPROCESSOR_PARALLELJOB_TRYINITIALIZE_OFFSET UNITYSDK_OFFSET(0x7C0450)
#define NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPREPROCESSOR_PARALLELJOB_TRYRESOLVEDISPATCHINDEX_OFFSET UNITYSDK_OFFSET(0x12D194E0)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimationSubManager_FootStepPreProcessor_ParallelJob_TypeDefinitionIndex = 88328;

	struct alignas(4) AnimationSubManager_FootStepPreProcessor_ParallelJob
	{
		static ::System::Collections::Generic::List_1<::NPCCrowd::Animation::AnimationSubManager_AvatarArchetypeData*>** StaticGet_s_avatars()
		{
			return (::System::Collections::Generic::List_1<::NPCCrowd::Animation::AnimationSubManager_AvatarArchetypeData*>**)Il2CppClass::FromTypeDefinitionIndex(AnimationSubManager_FootStepPreProcessor_ParallelJob_TypeDefinitionIndex)->GetStaticField(0x43280);
		}
		static ::System::Double* StaticGet_s_timestamp()
		{
			return (::System::Double*)Il2CppClass::FromTypeDefinitionIndex(AnimationSubManager_FootStepPreProcessor_ParallelJob_TypeDefinitionIndex)->GetStaticField(0xFAC0);
		}
		::System::Single _deltaTime; // 0x10
		::UnityEngine::PhysicsScene _physicsScene; // 0x14
		::System::Int32 _sourceIndex; // 0x18

		/*
		::NPCCrowd::Animation::AnimationSubManager_FootStepSetting get__setting()
		{
			return ((::NPCCrowd::Animation::AnimationSubManager_FootStepSetting(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPREPROCESSOR_PARALLELJOB_GET__SETTING_OFFSET))(this);
		}
		*/

		::System::Int32 get__avatarId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPREPROCESSOR_PARALLELJOB_GET__AVATARID_OFFSET))(this);
		}

		::System::Int32 get__leftFootIkWeightCurveId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPREPROCESSOR_PARALLELJOB_GET__LEFTFOOTIKWEIGHTCURVEID_OFFSET))(this);
		}

		::System::Int32 get__rightFootIkWeightCurveId()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPREPROCESSOR_PARALLELJOB_GET__RIGHTFOOTIKWEIGHTCURVEID_OFFSET))(this);
		}

		/*
		static ::System::Boolean TryResolveDispatchIndex(::System::Int32 chunkIndex, ::NPCCrowd::Animation::AnimationSubManager_FootStepPreProcessor_ParallelJob_DispatchIndex& dispatchIndex)
		{
			return ((::System::Boolean(*)(::System::Int32, ::NPCCrowd::Animation::AnimationSubManager_FootStepPreProcessor_ParallelJob_DispatchIndex&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPREPROCESSOR_PARALLELJOB_TRYRESOLVEDISPATCHINDEX_OFFSET))(chunkIndex, dispatchIndex);
		}
		*/

		::System::Void Execute(::System::Int32 chunkIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPREPROCESSOR_PARALLELJOB_EXECUTE_OFFSET))(this, chunkIndex);
		}

		/*
		::System::Void DoRaycast(::System::UInt32 entityId, ::NPCCrowd::Lod::ELODLevel lodLevel, ::NPCCrowd::Animation::CPUStateMachine::AnimationTickData tickData, ::NPCCrowd::Animation::AnimationSubManager_FootStepControlData& footStepControl, ::UnityEngine::NapTransformData entityTransform, ::NPCCrowd::Animation::FRefPose pose)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::NPCCrowd::Lod::ELODLevel, ::NPCCrowd::Animation::CPUStateMachine::AnimationTickData, ::NPCCrowd::Animation::AnimationSubManager_FootStepControlData&, ::UnityEngine::NapTransformData, ::NPCCrowd::Animation::FRefPose))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPREPROCESSOR_PARALLELJOB_DORAYCAST_OFFSET))(this, entityId, lodLevel, tickData, footStepControl, entityTransform, pose);
		}
		*/

		/*
		::System::Void ProcessFadeInOut(::System::UInt32 entityId, ::NPCCrowd::Animation::AnimationSubManager_FootStepControlData& footStepControl)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::NPCCrowd::Animation::AnimationSubManager_FootStepControlData&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPREPROCESSOR_PARALLELJOB_PROCESSFADEINOUT_OFFSET))(this, entityId, footStepControl);
		}
		*/

		/*
		::System::Void Reset(::NPCCrowd::Animation::AnimationSubManager_FootStepControlData& footStepControl, ::UnityEngine::Vector3 entityPos)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::AnimationSubManager_FootStepControlData&, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPREPROCESSOR_PARALLELJOB_RESET_OFFSET))(this, footStepControl, entityPos);
		}
		*/

		/*
		::System::ValueTuple_2<::System::Single, ::System::Single> SampleCurve(::System::UInt32 entityId, ::NPCCrowd::Animation::CPUStateMachine::AnimationTickData tickData)
		{
			return ((::System::ValueTuple_2<::System::Single, ::System::Single>(*)(::PVOID, ::System::UInt32, ::NPCCrowd::Animation::CPUStateMachine::AnimationTickData))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPREPROCESSOR_PARALLELJOB_SAMPLECURVE_OFFSET))(this, entityId, tickData);
		}
		*/

		/*
		static ::UnityEngine::NapAnimator_SampleAnimationJobRequest BuildRequest(::System::Int32 animationId, ::System::Single time, ::System::Int32* idPtr, ::System::Single* curvePtr, ::System::Int32 curveCount)
		{
			return ((::UnityEngine::NapAnimator_SampleAnimationJobRequest(*)(::System::Int32, ::System::Single, ::System::Int32*, ::System::Single*, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPREPROCESSOR_PARALLELJOB_BUILDREQUEST_OFFSET))(animationId, time, idPtr, curvePtr, curveCount);
		}
		*/

		/*
		::System::Void TryInitialize(::NPCCrowd::Animation::FRefPose pose, ::NPCCrowd::Animation::AnimationSubManager_FootStepControlData& footStepControl)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::FRefPose, ::NPCCrowd::Animation::AnimationSubManager_FootStepControlData&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPREPROCESSOR_PARALLELJOB_TRYINITIALIZE_OFFSET))(this, pose, footStepControl);
		}
		*/

		/*
		::System::Void Preprocess(::NPCCrowd::Animation::AnimationSubManager_FootStepControlData& footStepControl)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::AnimationSubManager_FootStepControlData&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPREPROCESSOR_PARALLELJOB_PREPROCESS_OFFSET))(this, footStepControl);
		}
		*/

		/*
		::System::Void DoRaycastOnStair(::System::UInt32 entityId, ::NPCCrowd::Animation::CPUStateMachine::AnimationTickData tickData, ::UnityEngine::NapTransformData entityTransform, ::NPCCrowd::Animation::AnimationSubManager_FootStepControlData& footStepControl)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::NPCCrowd::Animation::CPUStateMachine::AnimationTickData, ::UnityEngine::NapTransformData, ::NPCCrowd::Animation::AnimationSubManager_FootStepControlData&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPREPROCESSOR_PARALLELJOB_DORAYCASTONSTAIR_OFFSET))(this, entityId, tickData, entityTransform, footStepControl);
		}
		*/

		/*
		::System::Void DoOrdinaryRaycast(::System::UInt32 entityId, ::NPCCrowd::Animation::AnimationSubManager_FootStepControlData& footStepControl)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::NPCCrowd::Animation::AnimationSubManager_FootStepControlData&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPREPROCESSOR_PARALLELJOB_DOORDINARYRAYCAST_OFFSET))(this, entityId, footStepControl);
		}
		*/

		/*
		::System::Void DoPredictRaycast(::System::UInt32 entityId, ::System::Boolean enablePikLastFrame, ::System::Int32 animIndex, ::NPCCrowd::Animation::CPUStateMachine::AnimationTickData tickData, ::UnityEngine::NapTransformData entityTransform, ::NPCCrowd::Animation::AnimationSubManager_FootStepControlData& footStepControl)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean, ::System::Int32, ::NPCCrowd::Animation::CPUStateMachine::AnimationTickData, ::UnityEngine::NapTransformData, ::NPCCrowd::Animation::AnimationSubManager_FootStepControlData&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPREPROCESSOR_PARALLELJOB_DOPREDICTRAYCAST_OFFSET))(this, entityId, enablePikLastFrame, animIndex, tickData, entityTransform, footStepControl);
		}
		*/

		/*
		::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Vector3> HitGround(::System::UInt32 entityId, ::UnityEngine::NapTransformData footWorldSpace)
		{
			return ((::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Vector3>(*)(::PVOID, ::System::UInt32, ::UnityEngine::NapTransformData))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPREPROCESSOR_PARALLELJOB_HITGROUND_OFFSET))(this, entityId, footWorldSpace);
		}
		*/

		/*
		::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Vector3> HitGroundForSlope(::System::UInt32 entityId, ::UnityEngine::NapTransformData footWorldSpace)
		{
			return ((::System::ValueTuple_2<::UnityEngine::Vector3, ::UnityEngine::Vector3>(*)(::PVOID, ::System::UInt32, ::UnityEngine::NapTransformData))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPREPROCESSOR_PARALLELJOB_HITGROUNDFORSLOPE_OFFSET))(this, entityId, footWorldSpace);
		}
		*/

		/*
		::System::ValueTuple_4<::System::Boolean, ::System::Boolean, ::System::Single, ::UnityEngine::Vector3> CheckAndUpdateFootSegments(::System::UInt32 entityId, ::NPCCrowd::Animation::CPUStateMachine::AnimationTickData tickData, ::System::Int32 footIndex, ::System::Int32 animIndex)
		{
			return ((::System::ValueTuple_4<::System::Boolean, ::System::Boolean, ::System::Single, ::UnityEngine::Vector3>(*)(::PVOID, ::System::UInt32, ::NPCCrowd::Animation::CPUStateMachine::AnimationTickData, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPREPROCESSOR_PARALLELJOB_CHECKANDUPDATEFOOTSEGMENTS_OFFSET))(this, entityId, tickData, footIndex, animIndex);
		}
		*/

		/*
		::UnityEngine::Vector3 CalculateGroundNormal(::System::UInt32 entityId, ::NPCCrowd::Animation::AnimationSubManager_FootStepControlData footStepControl, ::UnityEngine::Vector3 groundNormal, ::System::Int32 footIndex)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::System::UInt32, ::NPCCrowd::Animation::AnimationSubManager_FootStepControlData, ::UnityEngine::Vector3, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_ANIMATIONSUBMANAGER_FOOTSTEPPREPROCESSOR_PARALLELJOB_CALCULATEGROUNDNORMAL_OFFSET))(this, entityId, footStepControl, groundNormal, footIndex);
		}
		*/
	};
}
