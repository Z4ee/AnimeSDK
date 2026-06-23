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

#define NPCCROWD_ANIMATION_NPCCPULOOKATPASS_CLEARLOOKATTARGET_OFFSET UNITYSDK_OFFSET(0x11371B60)
#define NPCCROWD_ANIMATION_NPCCPULOOKATPASS_DESTROY_OFFSET UNITYSDK_OFFSET(0x11371C70)
#define NPCCROWD_ANIMATION_NPCCPULOOKATPASS_DISABLELOOKATIK_OFFSET UNITYSDK_OFFSET(0x11371770)
#define NPCCROWD_ANIMATION_NPCCPULOOKATPASS_ENABLELOOKATIK_OFFSET UNITYSDK_OFFSET(0x11371060)
#define NPCCROWD_ANIMATION_NPCCPULOOKATPASS_ENDLOOKATIKJOB_OFFSET UNITYSDK_OFFSET(0x11371A20)
#define NPCCROWD_ANIMATION_NPCCPULOOKATPASS_INITIKJOBS_OFFSET UNITYSDK_OFFSET(0x11370690)
#define NPCCROWD_ANIMATION_NPCCPULOOKATPASS_INIT_OFFSET UNITYSDK_OFFSET(0x113713B0)
#define NPCCROWD_ANIMATION_NPCCPULOOKATPASS_INNERDISABLELOOKATIK_OFFSET UNITYSDK_OFFSET(0x11371260)
#define NPCCROWD_ANIMATION_NPCCPULOOKATPASS_ISRUNNINGLOOKATIK_OFFSET UNITYSDK_OFFSET(0x11371920)
#define NPCCROWD_ANIMATION_NPCCPULOOKATPASS_SETLOOKATTARGET_1_OFFSET UNITYSDK_OFFSET(0x11371C10)
#define NPCCROWD_ANIMATION_NPCCPULOOKATPASS_SETLOOKATTARGET_OFFSET UNITYSDK_OFFSET(0x11371330)
#define NPCCROWD_ANIMATION_NPCCPULOOKATPASS_SETLOOKATWEIGHT_OFFSET UNITYSDK_OFFSET(0x113712B0)
#define NPCCROWD_ANIMATION_NPCCPULOOKATPASS_STARTLOOKATIKJOB_OFFSET UNITYSDK_OFFSET(0x11371970)
#define NPCCROWD_ANIMATION_NPCCPULOOKATPASS_UPDATE_OFFSET UNITYSDK_OFFSET(0x113715F0)
#define NPCCROWD_ANIMATION_NPCCPULOOKATPASS__CTOR_OFFSET UNITYSDK_OFFSET(0x11370090)
#define NPCCROWD_ANIMATION_NPCCPULOOKATPASS___BASE_DESTROY_OFFSET UNITYSDK_OFFSET(0x11371CF0)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int NPCCPULookAtPass_TypeDefinitionIndex = 49916;

	class NPCCPULookAtPass : public ::NPCCrowd::Animation::NPCCPUJobPassBase
	{
	public:
		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* spineBones; // 0x38
		::NPCCrowd::Animation::NPCCPUAnimator_LookAtIKFadeJob lookAtIKAnimStateJob; // 0x40
		::NPCCrowd::Animation::NPCCPUAnimationLookAtIKInfo* IKInfo; // 0xD0
		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* eyeBones; // 0xD8
		::UnityEngine::Transform* headBone; // 0xE0
		::UnityEngine::Animator* animator; // 0xE8
		::System::Boolean bIsRunningLookAtIK; // 0xF0
		::System::Boolean _bIsEnableLookAtIK; // 0xF1
		::System::Boolean bPendingDisableLookAtIK; // 0xF2
		::UnityEngine::Animations::AnimationScriptPlayable _lookAtPlayable; // 0xF8
		::NPCCrowd::Animation::Job::LookAtJob _lookAtJob; // 0x108
		::UnityEngine::Playables::PlayableGraph graph; // 0x1D8

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
