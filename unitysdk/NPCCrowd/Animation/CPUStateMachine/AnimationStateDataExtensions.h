#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/CPUStateMachine/AnimationStateData.h"
#include "unitysdk/NPCCrowd/Animation/CPUStateMachine/AnimationStateDataMultiLayer.h"
#include "unitysdk/System/Object.h"

#define NPCCROWD_ANIMATION_CPUSTATEMACHINE_ANIMATIONSTATEDATAEXTENSIONS_GETLAYERSTATEREF_OFFSET UNITYSDK_OFFSET(0xE026920)

namespace NPCCrowd::Animation::CPUStateMachine
{
	inline static constexpr unsigned int AnimationStateDataExtensions_TypeDefinitionIndex = 42883;

	class AnimationStateDataExtensions : public ::System::Object
	{
	public:
		static ::NPCCrowd::Animation::CPUStateMachine::AnimationStateData& GetLayerStateRef(::NPCCrowd::Animation::CPUStateMachine::AnimationStateDataMultiLayer& state, ::System::Int32 index)
		{
			return ((::NPCCrowd::Animation::CPUStateMachine::AnimationStateData&(*)(::NPCCrowd::Animation::CPUStateMachine::AnimationStateDataMultiLayer&, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_CPUSTATEMACHINE_ANIMATIONSTATEDATAEXTENSIONS_GETLAYERSTATEREF_OFFSET))(state, index);
		}
	};
}
