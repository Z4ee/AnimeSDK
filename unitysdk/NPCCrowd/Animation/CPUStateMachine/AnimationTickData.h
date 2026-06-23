#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/CPUStateMachine/AnimationData.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/NapAnimator_PlayModeEnum.h"

#define NPCCROWD_ANIMATION_CPUSTATEMACHINE_ANIMATIONTICKDATA_GET_HASROOTMOTION_OFFSET UNITYSDK_OFFSET(0x4121A0)
#define NPCCROWD_ANIMATION_CPUSTATEMACHINE_ANIMATIONTICKDATA_GET_ISLOOP_OFFSET UNITYSDK_OFFSET(0x412170)
#define NPCCROWD_ANIMATION_CPUSTATEMACHINE_ANIMATIONTICKDATA_GET_PLAYMODE_OFFSET UNITYSDK_OFFSET(0x412160)
#define NPCCROWD_ANIMATION_CPUSTATEMACHINE_ANIMATIONTICKDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x412180)

namespace NPCCrowd::Animation::CPUStateMachine
{
	inline static constexpr unsigned int AnimationTickData_TypeDefinitionIndex = 46503;

	struct alignas(8) AnimationTickData
	{
		::System::Double PreviousTime; // 0x10
		::System::Double CurrentTime; // 0x18
		::NPCCrowd::Animation::CPUStateMachine::AnimationData Clip; // 0x20

		::System::Void _ctor(::NPCCrowd::Animation::CPUStateMachine::AnimationData clip, ::System::Double previousTime, ::System::Double currentTime)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::CPUStateMachine::AnimationData, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_CPUSTATEMACHINE_ANIMATIONTICKDATA__CTOR_OFFSET))(this, clip, previousTime, currentTime);
		}

		::UnityEngine::NapAnimator_PlayModeEnum get_PlayMode()
		{
			return ((::UnityEngine::NapAnimator_PlayModeEnum(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_CPUSTATEMACHINE_ANIMATIONTICKDATA_GET_PLAYMODE_OFFSET))(this);
		}

		::System::Boolean get_IsLoop()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_CPUSTATEMACHINE_ANIMATIONTICKDATA_GET_ISLOOP_OFFSET))(this);
		}

		::System::Boolean get_HasRootMotion()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_CPUSTATEMACHINE_ANIMATIONTICKDATA_GET_HASROOTMOTION_OFFSET))(this);
		}
	};
}
