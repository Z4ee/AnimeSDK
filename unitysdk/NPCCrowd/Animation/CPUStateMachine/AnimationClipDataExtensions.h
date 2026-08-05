#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/CPUStateMachine/AnimationClipData.h"
#include "unitysdk/NPCCrowd/Animation/CPUStateMachine/AnimationClipDataMultiLayer.h"
#include "unitysdk/System/Object.h"

#define NPCCROWD_ANIMATION_CPUSTATEMACHINE_ANIMATIONCLIPDATAEXTENSIONS_GETLAYERCLIPDATAREF_OFFSET UNITYSDK_OFFSET(0xE93C280)

namespace NPCCrowd::Animation::CPUStateMachine
{
	inline static constexpr unsigned int AnimationClipDataExtensions_TypeDefinitionIndex = 71970;

	class AnimationClipDataExtensions : public ::System::Object
	{
	public:
		static ::NPCCrowd::Animation::CPUStateMachine::AnimationClipData& GetLayerClipDataRef(::NPCCrowd::Animation::CPUStateMachine::AnimationClipDataMultiLayer& clipData, ::System::Int32 index)
		{
			return ((::NPCCrowd::Animation::CPUStateMachine::AnimationClipData&(*)(::NPCCrowd::Animation::CPUStateMachine::AnimationClipDataMultiLayer&, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_CPUSTATEMACHINE_ANIMATIONCLIPDATAEXTENSIONS_GETLAYERCLIPDATAREF_OFFSET))(clipData, index);
		}
	};
}
