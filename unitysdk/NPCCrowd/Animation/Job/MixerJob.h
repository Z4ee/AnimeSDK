#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/NativeArray_1.h"
#include "unitysdk/UnityEngine/Animations/TransformStreamHandle.h"

#define NPCCROWD_ANIMATION_JOB_MIXERJOB_PROCESSANIMATION_OFFSET UNITYSDK_OFFSET(0x5EF2F0)
#define NPCCROWD_ANIMATION_JOB_MIXERJOB_PROCESSROOTMOTION_OFFSET UNITYSDK_OFFSET(0x5EF2B0)

namespace NPCCrowd::Animation::Job
{
	inline static constexpr unsigned int MixerJob_TypeDefinitionIndex = 60481;

	struct alignas(8) MixerJob
	{
		::Unity::Collections::NativeArray_1<::UnityEngine::Animations::TransformStreamHandle> handles; // 0x10
		::Unity::Collections::NativeArray_1<::System::Single> boneWeights; // 0x20
		::System::Single weight; // 0x30

		/*
		::System::Void ProcessRootMotion(::UnityEngine::Animations::AnimationStream stream)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_JOB_MIXERJOB_PROCESSROOTMOTION_OFFSET))(this, stream);
		}
		*/

		/*
		::System::Void ProcessAnimation(::UnityEngine::Animations::AnimationStream stream)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Animations::AnimationStream))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_JOB_MIXERJOB_PROCESSANIMATION_OFFSET))(this, stream);
		}
		*/
	};
}
