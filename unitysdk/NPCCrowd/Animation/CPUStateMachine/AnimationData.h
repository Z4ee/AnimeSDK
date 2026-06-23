#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/CPUStateMachine/AnimationFlags.h"
#include "unitysdk/NPCCrowd/Animation/NPCAnimationLib_AnimationId.h"
#include "unitysdk/System/ValueType.h"

#define NPCCROWD_ANIMATION_CPUSTATEMACHINE_ANIMATIONDATA_EXTRACTROOTMOTION_OFFSET UNITYSDK_OFFSET(0x67FE50)
#define NPCCROWD_ANIMATION_CPUSTATEMACHINE_ANIMATIONDATA_GETNORMALIZEDTIME_OFFSET UNITYSDK_OFFSET(0x67FDD0)
#define NPCCROWD_ANIMATION_CPUSTATEMACHINE_ANIMATIONDATA_GETSAMPLETIME_OFFSET UNITYSDK_OFFSET(0x67FE00)
#define NPCCROWD_ANIMATION_CPUSTATEMACHINE_ANIMATIONDATA_GET_HASADJUSTMENTBLENDING_OFFSET UNITYSDK_OFFSET(0x67FD60)
#define NPCCROWD_ANIMATION_CPUSTATEMACHINE_ANIMATIONDATA_GET_HASPHASEMATCHING_OFFSET UNITYSDK_OFFSET(0x67FD50)
#define NPCCROWD_ANIMATION_CPUSTATEMACHINE_ANIMATIONDATA_GET_HASROOTMOTION_OFFSET UNITYSDK_OFFSET(0x67FD40)
#define NPCCROWD_ANIMATION_CPUSTATEMACHINE_ANIMATIONDATA_GET_ISLOOPING_OFFSET UNITYSDK_OFFSET(0x67FD30)
#define NPCCROWD_ANIMATION_CPUSTATEMACHINE_ANIMATIONDATA_GET_STRIPBIPMOTION_OFFSET UNITYSDK_OFFSET(0x67FD70)
#define NPCCROWD_ANIMATION_CPUSTATEMACHINE_ANIMATIONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0x67FD80)

namespace NPCCrowd::Animation::CPUStateMachine
{
	inline static constexpr unsigned int AnimationData_TypeDefinitionIndex = 54428;

	struct alignas(4) AnimationData
	{
		::System::Int32 Id; // 0x10
		::NPCCrowd::Animation::NPCAnimationLib_AnimationId SampleId; // 0x14
		::System::Single InverseLength; // 0x1C
		::System::Single Length; // 0x20
		::NPCCrowd::Animation::CPUStateMachine::AnimationFlags Flags; // 0x24

		::System::Void _ctor(::System::Int32 id, ::NPCCrowd::Animation::NPCAnimationLib_AnimationId sampleId, ::System::Single length, ::NPCCrowd::Animation::CPUStateMachine::AnimationFlags flags)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::NPCCrowd::Animation::NPCAnimationLib_AnimationId, ::System::Single, ::NPCCrowd::Animation::CPUStateMachine::AnimationFlags))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_CPUSTATEMACHINE_ANIMATIONDATA__CTOR_OFFSET))(this, id, sampleId, length, flags);
		}

		::System::Boolean get_IsLooping()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_CPUSTATEMACHINE_ANIMATIONDATA_GET_ISLOOPING_OFFSET))(this);
		}

		::System::Boolean get_HasRootMotion()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_CPUSTATEMACHINE_ANIMATIONDATA_GET_HASROOTMOTION_OFFSET))(this);
		}

		::System::Boolean get_HasPhaseMatching()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_CPUSTATEMACHINE_ANIMATIONDATA_GET_HASPHASEMATCHING_OFFSET))(this);
		}

		::System::Boolean get_HasAdjustmentBlending()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_CPUSTATEMACHINE_ANIMATIONDATA_GET_HASADJUSTMENTBLENDING_OFFSET))(this);
		}

		::System::Boolean get_StripBipMotion()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_CPUSTATEMACHINE_ANIMATIONDATA_GET_STRIPBIPMOTION_OFFSET))(this);
		}

		::System::Double GetNormalizedTime(::System::Double time)
		{
			return ((::System::Double(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_CPUSTATEMACHINE_ANIMATIONDATA_GETNORMALIZEDTIME_OFFSET))(this, time);
		}

		::System::Single GetSampleTime(::System::Double time)
		{
			return ((::System::Single(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_CPUSTATEMACHINE_ANIMATIONDATA_GETSAMPLETIME_OFFSET))(this, time);
		}

		/*
		::NPCCrowd::Animation::CPUStateMachine::AnimationTickData ExtractRootMotion(::System::Double fromTime, ::System::Double toTime)
		{
			return ((::NPCCrowd::Animation::CPUStateMachine::AnimationTickData(*)(::PVOID, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_CPUSTATEMACHINE_ANIMATIONDATA_EXTRACTROOTMOTION_OFFSET))(this, fromTime, toTime);
		}
		*/
	};
}
