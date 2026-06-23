#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/CPUStateMachine/AnimationData.h"
#include "unitysdk/System/ValueType.h"

#define NPCCROWD_ANIMATION_CPUSTATEMACHINE_SHAREDSTATEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x6DBC10)

namespace NPCCrowd::Animation::CPUStateMachine
{
	inline static constexpr unsigned int SharedStateData_TypeDefinitionIndex = 54168;

	struct alignas(4) SharedStateData
	{
		::NPCCrowd::Animation::CPUStateMachine::AnimationData Animation; // 0x10
		::System::Int32 Next; // 0x28
		::System::Int32 LayerIndex; // 0x2C

		::System::Void _ctor(::NPCCrowd::Animation::CPUStateMachine::AnimationData animation, ::System::Int32 next, ::System::Int32 layerIndex)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::CPUStateMachine::AnimationData, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_CPUSTATEMACHINE_SHAREDSTATEDATA__CTOR_OFFSET))(this, animation, next, layerIndex);
		}
	};
}
