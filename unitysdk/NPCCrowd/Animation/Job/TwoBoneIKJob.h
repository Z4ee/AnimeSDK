#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Animations/TransformSceneHandle.h"
#include "unitysdk/UnityEngine/Animations/TransformStreamHandle.h"

namespace UnityEngine { class Animator; }
namespace UnityEngine { class Transform; }

#define NPCCROWD_ANIMATION_JOB_TWOBONEIKJOB_PROCESSANIMATION_OFFSET UNITYSDK_OFFSET(0x5A1750)
#define NPCCROWD_ANIMATION_JOB_TWOBONEIKJOB_PROCESSROOTMOTION_OFFSET UNITYSDK_OFFSET(0x5A1710)
#define NPCCROWD_ANIMATION_JOB_TWOBONEIKJOB_SETUP_OFFSET UNITYSDK_OFFSET(0x5A1700)
#define NPCCROWD_ANIMATION_JOB_TWOBONEIKJOB_SOLVE_OFFSET UNITYSDK_OFFSET(0xD4524C0)
#define NPCCROWD_ANIMATION_JOB_TWOBONEIKJOB_TRIANGLEANGLE_OFFSET UNITYSDK_OFFSET(0xD452ED0)

namespace NPCCrowd::Animation::Job
{
	inline static constexpr unsigned int TwoBoneIKJob_TypeDefinitionIndex = 62380;

	struct alignas(4) TwoBoneIKJob
	{
		::UnityEngine::Animations::TransformSceneHandle effector; // 0x10
		::UnityEngine::Animations::TransformStreamHandle top; // 0x18
		::UnityEngine::Animations::TransformStreamHandle mid; // 0x24
		::UnityEngine::Animations::TransformStreamHandle low; // 0x30

		::System::Void Setup(::UnityEngine::Animator* animator, ::UnityEngine::Transform* topX, ::UnityEngine::Transform* midX, ::UnityEngine::Transform* lowX, ::UnityEngine::Transform* effectorX)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animator*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*, ::UnityEngine::Transform*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_JOB_TWOBONEIKJOB_SETUP_OFFSET))(this, animator, topX, midX, lowX, effectorX);
		}

		/*
		::System::Void ProcessRootMotion(::UnityEngine::Animations::AnimationStream stream)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_JOB_TWOBONEIKJOB_PROCESSROOTMOTION_OFFSET))(this, stream);
		}
		*/

		/*
		::System::Void ProcessAnimation(::UnityEngine::Animations::AnimationStream stream)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_JOB_TWOBONEIKJOB_PROCESSANIMATION_OFFSET))(this, stream);
		}
		*/

		/*
		static ::System::Single TriangleAngle(::System::Single aLen, ::UnityEngine::Vector3 v1, ::UnityEngine::Vector3 v2)
		{
			return ((::System::Single(*)(::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_JOB_TWOBONEIKJOB_TRIANGLEANGLE_OFFSET))(aLen, v1, v2);
		}
		*/

		/*
		static ::System::Void Solve(::UnityEngine::Animations::AnimationStream stream, ::UnityEngine::Animations::TransformStreamHandle topHandle, ::UnityEngine::Animations::TransformStreamHandle midHandle, ::UnityEngine::Animations::TransformStreamHandle lowHandle, ::UnityEngine::Animations::TransformSceneHandle effectorHandle)
		{
			return ((::System::Void(*)(::UnityEngine::Animations::AnimationStream, ::UnityEngine::Animations::TransformStreamHandle, ::UnityEngine::Animations::TransformStreamHandle, ::UnityEngine::Animations::TransformStreamHandle, ::UnityEngine::Animations::TransformSceneHandle))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_JOB_TWOBONEIKJOB_SOLVE_OFFSET))(stream, topHandle, midHandle, lowHandle, effectorHandle);
		}
		*/
	};
}
