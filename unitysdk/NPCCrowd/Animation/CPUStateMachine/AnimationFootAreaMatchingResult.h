#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define NPCCROWD_ANIMATION_CPUSTATEMACHINE_ANIMATIONFOOTAREAMATCHINGRESULT_GET_DELTAAREA_OFFSET UNITYSDK_OFFSET(0x40C5C0)
#define NPCCROWD_ANIMATION_CPUSTATEMACHINE_ANIMATIONFOOTAREAMATCHINGRESULT_GET_DELTADERIVATIVE_OFFSET UNITYSDK_OFFSET(0x416EC0)
#define NPCCROWD_ANIMATION_CPUSTATEMACHINE_ANIMATIONFOOTAREAMATCHINGRESULT_GET_TIME_OFFSET UNITYSDK_OFFSET(0x45B300)
#define NPCCROWD_ANIMATION_CPUSTATEMACHINE_ANIMATIONFOOTAREAMATCHINGRESULT_NEW_OFFSET UNITYSDK_OFFSET(0xD9394D0)
#define NPCCROWD_ANIMATION_CPUSTATEMACHINE_ANIMATIONFOOTAREAMATCHINGRESULT_SET_DELTAAREA_OFFSET UNITYSDK_OFFSET(0x55FE70)
#define NPCCROWD_ANIMATION_CPUSTATEMACHINE_ANIMATIONFOOTAREAMATCHINGRESULT_SET_DELTADERIVATIVE_OFFSET UNITYSDK_OFFSET(0x5CC490)
#define NPCCROWD_ANIMATION_CPUSTATEMACHINE_ANIMATIONFOOTAREAMATCHINGRESULT_SET_TIME_OFFSET UNITYSDK_OFFSET(0x55FE60)
#define NPCCROWD_ANIMATION_CPUSTATEMACHINE_ANIMATIONFOOTAREAMATCHINGRESULT_UPDATE_OFFSET UNITYSDK_OFFSET(0x5CC4A0)

namespace NPCCrowd::Animation::CPUStateMachine
{
	inline static constexpr unsigned int AnimationFootAreaMatchingResult_TypeDefinitionIndex = 49295;

	struct alignas(4) AnimationFootAreaMatchingResult
	{
		::System::Single _Time_k__BackingField; // 0x10
		::System::Single _DeltaArea_k__BackingField; // 0x14
		::System::Single _DeltaDerivative_k__BackingField; // 0x18

		::System::Single get_Time()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_CPUSTATEMACHINE_ANIMATIONFOOTAREAMATCHINGRESULT_GET_TIME_OFFSET))(this);
		}

		::System::Void set_Time(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_CPUSTATEMACHINE_ANIMATIONFOOTAREAMATCHINGRESULT_SET_TIME_OFFSET))(this, value);
		}

		::System::Single get_DeltaArea()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_CPUSTATEMACHINE_ANIMATIONFOOTAREAMATCHINGRESULT_GET_DELTAAREA_OFFSET))(this);
		}

		::System::Void set_DeltaArea(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_CPUSTATEMACHINE_ANIMATIONFOOTAREAMATCHINGRESULT_SET_DELTAAREA_OFFSET))(this, value);
		}

		::System::Single get_DeltaDerivative()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_CPUSTATEMACHINE_ANIMATIONFOOTAREAMATCHINGRESULT_GET_DELTADERIVATIVE_OFFSET))(this);
		}

		::System::Void set_DeltaDerivative(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_CPUSTATEMACHINE_ANIMATIONFOOTAREAMATCHINGRESULT_SET_DELTADERIVATIVE_OFFSET))(this, value);
		}

		static ::NPCCrowd::Animation::CPUStateMachine::AnimationFootAreaMatchingResult New()
		{
			return ((::NPCCrowd::Animation::CPUStateMachine::AnimationFootAreaMatchingResult(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_CPUSTATEMACHINE_ANIMATIONFOOTAREAMATCHINGRESULT_NEW_OFFSET))();
		}

		::System::Void Update(::System::Single time, ::System::Single deltaArea, ::System::Single deltaDerivative)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_CPUSTATEMACHINE_ANIMATIONFOOTAREAMATCHINGRESULT_UPDATE_OFFSET))(this, time, deltaArea, deltaDerivative);
		}
	};
}
