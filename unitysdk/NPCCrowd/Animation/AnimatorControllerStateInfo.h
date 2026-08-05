#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/CPUStateMachine/AnimationFlags.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int AnimatorControllerStateInfo_TypeDefinitionIndex = 54624;

	struct alignas(4) AnimatorControllerStateInfo
	{
		::System::Int32 stateHash; // 0x10
		::System::Int32 stateIndex; // 0x14
		::System::Int32 clipIndex; // 0x18
		::System::Int32 layerIndex; // 0x1C
		::NPCCrowd::Animation::CPUStateMachine::AnimationFlags flag; // 0x20
	};
}
