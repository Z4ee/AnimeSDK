#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/Job/LookAtJob.h"
#include "unitysdk/NPCCrowd/Animation/NPCCPUAnimator_LookAtIKFadeJob.h"
#include "unitysdk/NPCCrowd/Animation/NPCCPUJobPassBase.h"
#include "unitysdk/UnityEngine/Animations/AnimationScriptPlayable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace NPCCrowd::Animation { class NPCCPUAnimationLookAtIKInfo; }
namespace NPCCrowd::Animation { class NPCCPUAnimator; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationCurve; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }

#define NPCCROWD_ANIMATION_NPCCPULOOKATPASS_CLEARLOOKATTARGET_OFFSET UNITYSDK_OFFSET(0x13DF5420)
#define NPCCROWD_ANIMATION_NPCCPULOOKATPASS_DESTROY_OFFSET UNITYSDK_OFFSET(0x13DF5530)
#define NPCCROWD_ANIMATION_NPCCPULOOKATPASS_DISABLELOOKATIK_OFFSET UNITYSDK_OFFSET(0x13DF5030)
#define NPCCROWD_ANIMATION_NPCCPULOOKATPASS_ENABLELOOKATIK_OFFSET UNITYSDK_OFFSET(0x13DF4910)
#define NPCCROWD_ANIMATION_NPCCPULOOKATPASS_ENDLOOKATIKJOB_OFFSET UNITYSDK_OFFSET(0x13DF52E0)
#define NPCCROWD_ANIMATION_NPCCPULOOKATPASS_INITIKJOBS_OFFSET UNITYSDK_OFFSET(0x13DF3F30)
#define NPCCROWD_ANIMATION_NPCCPULOOKATPASS_INIT_OFFSET UNITYSDK_OFFSET(0x13DF4C60)
#define NPCCROWD_ANIMATION_NPCCPULOOKATPASS_INNERDISABLELOOKATIK_OFFSET UNITYSDK_OFFSET(0x13DF4B10)
#define NPCCROWD_ANIMATION_NPCCPULOOKATPASS_ISRUNNINGLOOKATIK_OFFSET UNITYSDK_OFFSET(0x13DF51E0)
#define NPCCROWD_ANIMATION_NPCCPULOOKATPASS_SETLOOKATTARGET_1_OFFSET UNITYSDK_OFFSET(0x13DF54D0)
#define NPCCROWD_ANIMATION_NPCCPULOOKATPASS_SETLOOKATTARGET_OFFSET UNITYSDK_OFFSET(0x13DF4BE0)
#define NPCCROWD_ANIMATION_NPCCPULOOKATPASS_SETLOOKATWEIGHT_OFFSET UNITYSDK_OFFSET(0x13DF4B60)
#define NPCCROWD_ANIMATION_NPCCPULOOKATPASS_STARTLOOKATIKJOB_OFFSET UNITYSDK_OFFSET(0x13DF5230)
#define NPCCROWD_ANIMATION_NPCCPULOOKATPASS_UPDATE_OFFSET UNITYSDK_OFFSET(0x13DF4EB0)
#define NPCCROWD_ANIMATION_NPCCPULOOKATPASS__CTOR_OFFSET UNITYSDK_OFFSET(0x13DF3940)
#define NPCCROWD_ANIMATION_NPCCPULOOKATPASS___BASE_DESTROY_OFFSET UNITYSDK_OFFSET(0x13DF55B0)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int NPCCPULookAtPass_TypeDefinitionIndex = 84852;

	class NPCCPULookAtPass : public ::NPCCrowd::Animation::NPCCPUJobPassBase
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* eyeBones; // 0x38
		::UnityEngine::Animator* animator; // 0x40
		::UnityEngine::Transform* headBone; // 0x48
		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* spineBones; // 0x50
		::NPCCrowd::Animation::NPCCPUAnimator_LookAtIKFadeJob lookAtIKAnimStateJob; // 0x58
		::NPCCrowd::Animation::NPCCPUAnimationLookAtIKInfo* IKInfo; // 0xE8
		::NPCCrowd::Animation::Job::LookAtJob _lookAtJob; // 0xF0
		::UnityEngine::Playables::PlayableGraph graph; // 0x1C0
		::UnityEngine::Animations::AnimationScriptPlayable _lookAtPlayable; // 0x1D0
		::System::Boolean _bIsEnableLookAtIK; // 0x1E0
		::System::Boolean bPendingDisableLookAtIK; // 0x1E1
		::System::Boolean bIsRunningLookAtIK; // 0x1E2

		::System::Void _ctor(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::Animator* animator, ::NPCCrowd::Animation::NPCCPUAnimationLookAtIKInfo* lookAtIK, ::NPCCrowd::Animation::NPCCPUAnimator* npccpuAnimator)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::Animator*, ::NPCCrowd::Animation::NPCCPUAnimationLookAtIKInfo*, ::NPCCrowd::Animation::NPCCPUAnimator*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPULOOKATPASS__CTOR_OFFSET))(this, graph, animator, lookAtIK, npccpuAnimator);
		}

		::System::Void EnableLookAtIK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPULOOKATPASS_ENABLELOOKATIK_OFFSET))(this);
		}

		::System::Void InitIKJobs(::Il2CppArray<::UnityEngine::Transform*>* spineJoints, ::UnityEngine::Transform* headJoint, ::Il2CppArray<::UnityEngine::Transform*>* eyeJoints, ::UnityEngine::Vector3 spineAxis, ::UnityEngine::Vector3 headAxis, ::UnityEngine::Vector3 eyeAxis, ::System::Single bodyWeight, ::System::Single headWeight, ::System::Single eyesWeight, ::System::Single clampWeight, ::System::Single clampWeightHead, ::System::Single clampWeightEyes, ::System::Int32 clampSmoothing, ::UnityEngine::AnimationCurve* spineWeightCurve)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::UnityEngine::Transform*>*, ::UnityEngine::Transform*, ::Il2CppArray<::UnityEngine::Transform*>*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Int32, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPULOOKATPASS_INITIKJOBS_OFFSET))(this, spineJoints, headJoint, eyeJoints, spineAxis, headAxis, eyeAxis, bodyWeight, headWeight, eyesWeight, clampWeight, clampWeightHead, clampWeightEyes, clampSmoothing, spineWeightCurve);
		}

		::System::Void InnerDisableLookAtIK()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPULOOKATPASS_INNERDISABLELOOKATIK_OFFSET))(this);
		}

		::System::Void SetLookAtWeight(::System::Single weight)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPULOOKATPASS_SETLOOKATWEIGHT_OFFSET))(this, weight);
		}

		::System::Void SetLookAtTarget(::UnityEngine::Vector3 pos)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPULOOKATPASS_SETLOOKATTARGET_OFFSET))(this, pos);
		}

		::System::Void Init(::UnityEngine::Transform* spineBase, ::UnityEngine::Transform* pivot, ::UnityEngine::Vector3 spineAxis, ::UnityEngine::Vector3 pivotAxis, ::System::Single speedOnGetTarget, ::System::Single speedOnChangeTarget, ::System::Single speedOnMissTarget, ::System::Single speedOnLockTarget, ::System::Single pitchUp, ::System::Single pitchDown, ::System::Single yawLeft, ::System::Single yawRight)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPULOOKATPASS_INIT_OFFSET))(this, spineBase, pivot, spineAxis, pivotAxis, speedOnGetTarget, speedOnChangeTarget, speedOnMissTarget, speedOnLockTarget, pitchUp, pitchDown, yawLeft, yawRight);
		}

		::System::Void Update(::System::Single deltaTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPULOOKATPASS_UPDATE_OFFSET))(this, deltaTime);
		}

		::System::Void DisableLookAtIK(::System::Boolean immediate)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPULOOKATPASS_DISABLELOOKATIK_OFFSET))(this, immediate);
		}

		::System::Boolean IsRunningLookAtIK()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPULOOKATPASS_ISRUNNINGLOOKATIK_OFFSET))(this);
		}

		::System::Void StartLookAtIKJob()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPULOOKATPASS_STARTLOOKATIKJOB_OFFSET))(this);
		}

		::System::Void EndLookAtIKJob(::System::Boolean immediate)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPULOOKATPASS_ENDLOOKATIKJOB_OFFSET))(this, immediate);
		}

		::System::Void ClearLookAtTarget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPULOOKATPASS_CLEARLOOKATTARGET_OFFSET))(this);
		}

		::System::Void SetLookAtTarget_1(::UnityEngine::Transform* target)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPULOOKATPASS_SETLOOKATTARGET_1_OFFSET))(this, target);
		}

		::System::Void Destroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPULOOKATPASS_DESTROY_OFFSET))(this);
		}

		::System::Void __base_Destroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPULOOKATPASS___BASE_DESTROY_OFFSET))(this);
		}
	};
}
