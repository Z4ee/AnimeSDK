#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/StateMachine/StateId.h"
#include "unitysdk/NPCCrowd/Animation/CPUStateMachine/AnimationData.h"
#include "unitysdk/System/ValueType.h"

#define NPCCROWD_ANIMATION_CPUSTATEMACHINE_ANIMATIONSTATEDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x6AA580)

namespace NPCCrowd::Animation::CPUStateMachine
{
	inline static constexpr unsigned int AnimationStateData_TypeDefinitionIndex = 44950;

	struct alignas(8) AnimationStateData
	{
		::NPCCrowd::Animation::CPUStateMachine::AnimationData Clip; // 0x10
		::System::Double Time; // 0x28
		::System::Single Speed; // 0x30
		::System::Double TimeSinceEnterState; // 0x38
		::System::Int32 SharedDataIndex; // 0x40
		::Foundation::StateMachine::StateId State; // 0x44
		::Foundation::StateMachine::StateId PreviousState; // 0x45

		::System::Void _ctor(::Foundation::StateMachine::StateId state, ::System::Int32 sharedDataIndex)
		{
			return ((::System::Void(*)(::PVOID, ::Foundation::StateMachine::StateId, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_CPUSTATEMACHINE_ANIMATIONSTATEDATA__CTOR_OFFSET))(this, state, sharedDataIndex);
		}
	};
}
