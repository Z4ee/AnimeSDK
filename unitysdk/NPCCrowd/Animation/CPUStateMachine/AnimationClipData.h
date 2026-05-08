#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/CPUStateMachine/AnimationData.h"
#include "unitysdk/System/ValueType.h"

#define NPCCROWD_ANIMATION_CPUSTATEMACHINE_ANIMATIONCLIPDATA_GET_HASADDITIONALANIMATION_OFFSET UNITYSDK_OFFSET(0x570C10)
#define NPCCROWD_ANIMATION_CPUSTATEMACHINE_ANIMATIONCLIPDATA_GET_SAMPLETIME_OFFSET UNITYSDK_OFFSET(0x570BC0)
#define NPCCROWD_ANIMATION_CPUSTATEMACHINE_ANIMATIONCLIPDATA__CTOR_1_OFFSET UNITYSDK_OFFSET(0x570C60)
#define NPCCROWD_ANIMATION_CPUSTATEMACHINE_ANIMATIONCLIPDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x570C30)

namespace NPCCrowd::Animation::CPUStateMachine
{
	inline static constexpr unsigned int AnimationClipData_TypeDefinitionIndex = 76122;

	struct alignas(8) AnimationClipData
	{
		::System::Double Time; // 0x10
		::System::Single Speed; // 0x18
		::NPCCrowd::Animation::CPUStateMachine::AnimationData Clip; // 0x1C
		::System::Int32 Next; // 0x34
		::System::Int32 LayerIndex; // 0x38

		::System::Void _ctor(::NPCCrowd::Animation::CPUStateMachine::AnimationData clip, ::System::Double time, ::System::Single speed, ::System::Int32 next, ::System::Int32 layerIndex)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::CPUStateMachine::AnimationData, ::System::Double, ::System::Single, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_CPUSTATEMACHINE_ANIMATIONCLIPDATA__CTOR_OFFSET))(this, clip, time, speed, next, layerIndex);
		}

		/*
		::System::Void _ctor_1(::NPCCrowd::Animation::CPUStateMachine::SharedStateData sharedState)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::CPUStateMachine::SharedStateData))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_CPUSTATEMACHINE_ANIMATIONCLIPDATA__CTOR_1_OFFSET))(this, sharedState);
		}
		*/

		::System::Single get_SampleTime()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_CPUSTATEMACHINE_ANIMATIONCLIPDATA_GET_SAMPLETIME_OFFSET))(this);
		}

		::System::Boolean get_HasAdditionalAnimation()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_CPUSTATEMACHINE_ANIMATIONCLIPDATA_GET_HASADDITIONALANIMATION_OFFSET))(this);
		}
	};
}
