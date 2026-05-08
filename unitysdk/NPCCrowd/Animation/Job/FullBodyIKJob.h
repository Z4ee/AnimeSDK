#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/Job/FullBodyIKJob_BodyEffectorHandle.h"
#include "unitysdk/NPCCrowd/Animation/Job/FullBodyIKJob_EffectorHandle.h"
#include "unitysdk/NPCCrowd/Animation/Job/FullBodyIKJob_HintEffectorHandle.h"
#include "unitysdk/NPCCrowd/Animation/Job/FullBodyIKJob_IKLimbHandle.h"
#include "unitysdk/NPCCrowd/Animation/Job/FullBodyIKJob_LookEffectorHandle.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/AvatarIKGoal.h"
#include "unitysdk/UnityEngine/AvatarIKHint.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define NPCCROWD_ANIMATION_JOB_FULLBODYIKJOB_GETEFFECTORHANDLE_OFFSET UNITYSDK_OFFSET(0x72F6E0)
#define NPCCROWD_ANIMATION_JOB_FULLBODYIKJOB_GETIKLIMBHANDLE_OFFSET UNITYSDK_OFFSET(0x72F700)
#define NPCCROWD_ANIMATION_JOB_FULLBODYIKJOB_PREPARESOLVEPULL_OFFSET UNITYSDK_OFFSET(0x72F860)
#define NPCCROWD_ANIMATION_JOB_FULLBODYIKJOB_PROCESSANIMATION_OFFSET UNITYSDK_OFFSET(0x72F980)
#define NPCCROWD_ANIMATION_JOB_FULLBODYIKJOB_PROCESSROOTMOTION_OFFSET UNITYSDK_OFFSET(0x72F940)
#define NPCCROWD_ANIMATION_JOB_FULLBODYIKJOB_SETBODYEFFECTOR_OFFSET UNITYSDK_OFFSET(0x72F7E0)
#define NPCCROWD_ANIMATION_JOB_FULLBODYIKJOB_SETEFFECTOR_OFFSET UNITYSDK_OFFSET(0x72F720)
#define NPCCROWD_ANIMATION_JOB_FULLBODYIKJOB_SETHINTEFFECTOR_OFFSET UNITYSDK_OFFSET(0x72F760)
#define NPCCROWD_ANIMATION_JOB_FULLBODYIKJOB_SETLOOKATEFFECTOR_OFFSET UNITYSDK_OFFSET(0x72F7A0)
#define NPCCROWD_ANIMATION_JOB_FULLBODYIKJOB_SETMAXIMUMEXTENSION_OFFSET UNITYSDK_OFFSET(0x72F820)
#define NPCCROWD_ANIMATION_JOB_FULLBODYIKJOB_SOLVEPULL_OFFSET UNITYSDK_OFFSET(0x72F8B0)
#define NPCCROWD_ANIMATION_JOB_FULLBODYIKJOB_SOLVE_OFFSET UNITYSDK_OFFSET(0x72F900)

namespace NPCCrowd::Animation::Job
{
	inline static constexpr unsigned int FullBodyIKJob_TypeDefinitionIndex = 40399;

	struct alignas(4) FullBodyIKJob
	{
		::NPCCrowd::Animation::Job::FullBodyIKJob_EffectorHandle leftFootEffector; // 0x10
		::NPCCrowd::Animation::Job::FullBodyIKJob_EffectorHandle rightFootEffector; // 0x30
		::NPCCrowd::Animation::Job::FullBodyIKJob_EffectorHandle leftHandEffector; // 0x50
		::NPCCrowd::Animation::Job::FullBodyIKJob_EffectorHandle rightHandEffector; // 0x70
		::NPCCrowd::Animation::Job::FullBodyIKJob_HintEffectorHandle leftKneeHintEffector; // 0x90
		::NPCCrowd::Animation::Job::FullBodyIKJob_HintEffectorHandle rightKneeHintEffector; // 0xA0
		::NPCCrowd::Animation::Job::FullBodyIKJob_HintEffectorHandle leftElbowHintEffector; // 0xB0
		::NPCCrowd::Animation::Job::FullBodyIKJob_HintEffectorHandle rightElbowHintEffector; // 0xC0
		::NPCCrowd::Animation::Job::FullBodyIKJob_LookEffectorHandle lookAtEffector; // 0xD0
		::NPCCrowd::Animation::Job::FullBodyIKJob_BodyEffectorHandle bodyEffector; // 0xF8
		::UnityEngine::Vector3 bodyPosition; // 0x100
		::NPCCrowd::Animation::Job::FullBodyIKJob_IKLimbHandle leftArm; // 0x10C
		::NPCCrowd::Animation::Job::FullBodyIKJob_IKLimbHandle rightArm; // 0x134
		::NPCCrowd::Animation::Job::FullBodyIKJob_IKLimbHandle leftLeg; // 0x15C
		::NPCCrowd::Animation::Job::FullBodyIKJob_IKLimbHandle rightLeg; // 0x184
		::System::Single stiffness; // 0x1AC
		::System::Int32 maxPullIteration; // 0x1B0

		::NPCCrowd::Animation::Job::FullBodyIKJob_EffectorHandle GetEffectorHandle(::UnityEngine::AvatarIKGoal goal)
		{
			return ((::NPCCrowd::Animation::Job::FullBodyIKJob_EffectorHandle(*)(::PVOID, ::UnityEngine::AvatarIKGoal))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_JOB_FULLBODYIKJOB_GETEFFECTORHANDLE_OFFSET))(this, goal);
		}

		::NPCCrowd::Animation::Job::FullBodyIKJob_IKLimbHandle GetIKLimbHandle(::UnityEngine::AvatarIKGoal goal)
		{
			return ((::NPCCrowd::Animation::Job::FullBodyIKJob_IKLimbHandle(*)(::PVOID, ::UnityEngine::AvatarIKGoal))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_JOB_FULLBODYIKJOB_GETIKLIMBHANDLE_OFFSET))(this, goal);
		}

		/*
		::System::Void SetEffector(::UnityEngine::Animations::AnimationStream stream, ::UnityEngine::AvatarIKGoal goal, ::NPCCrowd::Animation::Job::FullBodyIKJob_EffectorHandle& handle)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animations::AnimationStream, ::UnityEngine::AvatarIKGoal, ::NPCCrowd::Animation::Job::FullBodyIKJob_EffectorHandle&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_JOB_FULLBODYIKJOB_SETEFFECTOR_OFFSET))(this, stream, goal, handle);
		}
		*/

		/*
		::System::Void SetHintEffector(::UnityEngine::Animations::AnimationStream stream, ::UnityEngine::AvatarIKHint goal, ::NPCCrowd::Animation::Job::FullBodyIKJob_HintEffectorHandle& handle)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animations::AnimationStream, ::UnityEngine::AvatarIKHint, ::NPCCrowd::Animation::Job::FullBodyIKJob_HintEffectorHandle&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_JOB_FULLBODYIKJOB_SETHINTEFFECTOR_OFFSET))(this, stream, goal, handle);
		}
		*/

		/*
		::System::Void SetLookAtEffector(::UnityEngine::Animations::AnimationStream stream, ::NPCCrowd::Animation::Job::FullBodyIKJob_LookEffectorHandle& handle)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animations::AnimationStream, ::NPCCrowd::Animation::Job::FullBodyIKJob_LookEffectorHandle&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_JOB_FULLBODYIKJOB_SETLOOKATEFFECTOR_OFFSET))(this, stream, handle);
		}
		*/

		/*
		::System::Void SetBodyEffector(::UnityEngine::Animations::AnimationStream stream, ::NPCCrowd::Animation::Job::FullBodyIKJob_BodyEffectorHandle& handle)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animations::AnimationStream, ::NPCCrowd::Animation::Job::FullBodyIKJob_BodyEffectorHandle&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_JOB_FULLBODYIKJOB_SETBODYEFFECTOR_OFFSET))(this, stream, handle);
		}
		*/

		/*
		::System::Void SetMaximumExtension(::UnityEngine::Animations::AnimationStream stream, ::NPCCrowd::Animation::Job::FullBodyIKJob_IKLimbHandle& handle)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animations::AnimationStream, ::NPCCrowd::Animation::Job::FullBodyIKJob_IKLimbHandle&))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_JOB_FULLBODYIKJOB_SETMAXIMUMEXTENSION_OFFSET))(this, stream, handle);
		}
		*/

		/*
		::System::Void PrepareSolvePull(::UnityEngine::Animations::AnimationStream stream, ::Unity::Collections::NativeArray_1<::NPCCrowd::Animation::Job::FullBodyIKJob_LimbPart> limbParts)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animations::AnimationStream, ::Unity::Collections::NativeArray_1<::NPCCrowd::Animation::Job::FullBodyIKJob_LimbPart>))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_JOB_FULLBODYIKJOB_PREPARESOLVEPULL_OFFSET))(this, stream, limbParts);
		}
		*/

		/*
		::UnityEngine::Vector3 SolvePull(::UnityEngine::Animations::AnimationStream stream)
		{
			return ((::UnityEngine::Vector3(*)(::PVOID, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_JOB_FULLBODYIKJOB_SOLVEPULL_OFFSET))(this, stream);
		}
		*/

		/*
		::System::Void Solve(::UnityEngine::Animations::AnimationStream stream)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_JOB_FULLBODYIKJOB_SOLVE_OFFSET))(this, stream);
		}
		*/

		/*
		::System::Void ProcessRootMotion(::UnityEngine::Animations::AnimationStream stream)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_JOB_FULLBODYIKJOB_PROCESSROOTMOTION_OFFSET))(this, stream);
		}
		*/

		/*
		::System::Void ProcessAnimation(::UnityEngine::Animations::AnimationStream stream)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_JOB_FULLBODYIKJOB_PROCESSANIMATION_OFFSET))(this, stream);
		}
		*/
	};
}
