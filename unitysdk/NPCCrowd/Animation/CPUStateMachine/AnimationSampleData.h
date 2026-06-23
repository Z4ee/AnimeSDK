#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/NPCAnimationLib_AnimationId.h"
#include "unitysdk/System/ValueType.h"

#define NPCCROWD_ANIMATION_CPUSTATEMACHINE_ANIMATIONSAMPLEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x748960)

namespace NPCCrowd::Animation::CPUStateMachine
{
	inline static constexpr unsigned int AnimationSampleData_TypeDefinitionIndex = 81338;

	struct alignas(4) AnimationSampleData
	{
		::System::Int32 AnimationId; // 0x10
		::NPCCrowd::Animation::NPCAnimationLib_AnimationId SampleId; // 0x14
		::System::Single Length; // 0x1C

		::System::Void _ctor(::System::Int32 animationId, ::NPCCrowd::Animation::NPCAnimationLib_AnimationId sampleId, ::System::Single length)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::NPCCrowd::Animation::NPCAnimationLib_AnimationId, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_CPUSTATEMACHINE_ANIMATIONSAMPLEDATA__CTOR_OFFSET))(this, animationId, sampleId, length);
		}
	};
}
