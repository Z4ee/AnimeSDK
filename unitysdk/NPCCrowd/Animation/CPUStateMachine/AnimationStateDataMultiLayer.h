#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/CPUStateMachine/AnimationStateData.h"
#include "unitysdk/System/ValueType.h"

#define NPCCROWD_ANIMATION_CPUSTATEMACHINE_ANIMATIONSTATEDATAMULTILAYER_INITDATA_OFFSET UNITYSDK_OFFSET(0x7C0730)

namespace NPCCrowd::Animation::CPUStateMachine
{
	inline static constexpr unsigned int AnimationStateDataMultiLayer_TypeDefinitionIndex = 58568;

	struct alignas(8) AnimationStateDataMultiLayer
	{
		::NPCCrowd::Animation::CPUStateMachine::AnimationStateData State0; // 0x10
		::NPCCrowd::Animation::CPUStateMachine::AnimationStateData State1; // 0x48
		::NPCCrowd::Animation::CPUStateMachine::AnimationStateData State2; // 0x80
		::NPCCrowd::Animation::CPUStateMachine::AnimationStateData State3; // 0xB8
		::System::Byte ValidLayerMask; // 0xF0

		/*
		::System::Void InitData(::Il2CppArray<::Foundation::StateMachine::StateId>* states, ::System::Int32 sharedDataIndex)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::Foundation::StateMachine::StateId>*, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_CPUSTATEMACHINE_ANIMATIONSTATEDATAMULTILAYER_INITDATA_OFFSET))(this, states, sharedDataIndex);
		}
		*/
	};
}
