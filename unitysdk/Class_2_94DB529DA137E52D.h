#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/RoadRash/CarControlConfig_1.h"

class Class_2_3EF1BFF67865C800;
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

#define CLASS_2_94DB529DA137E52D_GET_CENTERLERPCURVE_OFFSET UNITYSDK_OFFSET(0xBB7BC30)
#define CLASS_2_94DB529DA137E52D_GET_CENTERLERPDURATION_OFFSET UNITYSDK_OFFSET(0xBB7BC10)
#define CLASS_2_94DB529DA137E52D_GET_CHARGEINTERRUPTMINENERGYPERCENT_OFFSET UNITYSDK_OFFSET(0xBB7BBB0)
#define CLASS_2_94DB529DA137E52D_GET_CURRENTTIME_OFFSET UNITYSDK_OFFSET(0xBB7BBF0)
#define CLASS_2_94DB529DA137E52D_GET_DURATION_OFFSET UNITYSDK_OFFSET(0xBB7BBD0)
#define CLASS_2_94DB529DA137E52D_GET_ENERGYDECREASESPEED_OFFSET UNITYSDK_OFFSET(0xBB7BB90)
#define CLASS_2_94DB529DA137E52D_GET_ENHANCEQTEMODIFIERNAME_OFFSET UNITYSDK_OFFSET(0xBB7BCD0)
#define CLASS_2_94DB529DA137E52D_GET_HASSENTCHARGEINTERRUPTNOTIFY_OFFSET UNITYSDK_OFFSET(0xBB7BD10)
#define CLASS_2_94DB529DA137E52D_GET_SPEEDLERPCURVE_OFFSET UNITYSDK_OFFSET(0xBB7BC90)
#define CLASS_2_94DB529DA137E52D_GET_SPEEDLERPDURATION_OFFSET UNITYSDK_OFFSET(0xBB7BC70)
#define CLASS_2_94DB529DA137E52D_GET_SPEED_OFFSET UNITYSDK_OFFSET(0xBB7BB70)
#define CLASS_2_94DB529DA137E52D_GET_STARTOFFSET_OFFSET UNITYSDK_OFFSET(0xBB7BC50)
#define CLASS_2_94DB529DA137E52D_GET_TARGETBASEMAXSPEED_OFFSET UNITYSDK_OFFSET(0xBB7BCB0)
#define CLASS_2_94DB529DA137E52D_GET_TASKUNLOCK_OFFSET UNITYSDK_OFFSET(0xBB7BCF0)
#define CLASS_2_94DB529DA137E52D_SET_CENTERLERPCURVE_OFFSET UNITYSDK_OFFSET(0xBB7BC40)
#define CLASS_2_94DB529DA137E52D_SET_CENTERLERPDURATION_OFFSET UNITYSDK_OFFSET(0xBB7BC20)
#define CLASS_2_94DB529DA137E52D_SET_CHARGEINTERRUPTMINENERGYPERCENT_OFFSET UNITYSDK_OFFSET(0xBB7BBC0)
#define CLASS_2_94DB529DA137E52D_SET_CURRENTTIME_OFFSET UNITYSDK_OFFSET(0xBB7BC00)
#define CLASS_2_94DB529DA137E52D_SET_DURATION_OFFSET UNITYSDK_OFFSET(0xBB7BBE0)
#define CLASS_2_94DB529DA137E52D_SET_ENERGYDECREASESPEED_OFFSET UNITYSDK_OFFSET(0xBB7BBA0)
#define CLASS_2_94DB529DA137E52D_SET_ENHANCEQTEMODIFIERNAME_OFFSET UNITYSDK_OFFSET(0xBB7BCE0)
#define CLASS_2_94DB529DA137E52D_SET_HASSENTCHARGEINTERRUPTNOTIFY_OFFSET UNITYSDK_OFFSET(0xBB7BD20)
#define CLASS_2_94DB529DA137E52D_SET_SPEEDLERPCURVE_OFFSET UNITYSDK_OFFSET(0xBB7BCA0)
#define CLASS_2_94DB529DA137E52D_SET_SPEEDLERPDURATION_OFFSET UNITYSDK_OFFSET(0xBB7BC80)
#define CLASS_2_94DB529DA137E52D_SET_SPEED_OFFSET UNITYSDK_OFFSET(0xBB7BB80)
#define CLASS_2_94DB529DA137E52D_SET_STARTOFFSET_OFFSET UNITYSDK_OFFSET(0xBB7BC60)
#define CLASS_2_94DB529DA137E52D_SET_TARGETBASEMAXSPEED_OFFSET UNITYSDK_OFFSET(0xBB7BCC0)
#define CLASS_2_94DB529DA137E52D_SET_TASKUNLOCK_OFFSET UNITYSDK_OFFSET(0xBB7BD00)
#define CLASS_2_94DB529DA137E52D__CTOR_OFFSET UNITYSDK_OFFSET(0xBB7BD30)

inline static constexpr unsigned int Class_2_94DB529DA137E52D_TypeDefinitionIndex = 75839;

class Class_2_94DB529DA137E52D : public ::RPG::Client::RoadRash::CarControlConfig_1<::Class_2_3EF1BFF67865C800*>
{
public:
	::System::String* _EnhanceQTEModifierName_k__BackingField; // 0x18
	::UnityEngine::AnimationCurve* _SpeedLerpCurve_k__BackingField; // 0x20
	::System::String* _TaskUnlock_k__BackingField; // 0x28
	::UnityEngine::AnimationCurve* _CenterLerpCurve_k__BackingField; // 0x30
	::System::Single _ChargeInterruptMinEnergyPercent_k__BackingField; // 0x38
	::System::Single _CurrentTime_k__BackingField; // 0x3C
	::System::Single _Duration_k__BackingField; // 0x40
	::System::Single _StartOffset_k__BackingField; // 0x44
	::System::Single _TargetBaseMaxSpeed_k__BackingField; // 0x48
	::System::Single _SpeedLerpDuration_k__BackingField; // 0x4C
	::System::Boolean _HasSentChargeInterruptNotify_k__BackingField; // 0x50
	::System::Single _EnergyDecreaseSpeed_k__BackingField; // 0x54
	::System::Single _CenterLerpDuration_k__BackingField; // 0x58
	::System::Single _Speed_k__BackingField; // 0x5C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_94DB529DA137E52D__CTOR_OFFSET))(this);
	}

	::System::Single get_Speed()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_94DB529DA137E52D_GET_SPEED_OFFSET))(this);
	}

	::System::Void set_Speed(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_94DB529DA137E52D_SET_SPEED_OFFSET))(this, a1);
	}

	::System::Single get_EnergyDecreaseSpeed()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_94DB529DA137E52D_GET_ENERGYDECREASESPEED_OFFSET))(this);
	}

	::System::Void set_EnergyDecreaseSpeed(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_94DB529DA137E52D_SET_ENERGYDECREASESPEED_OFFSET))(this, a1);
	}

	::System::Single get_ChargeInterruptMinEnergyPercent()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_94DB529DA137E52D_GET_CHARGEINTERRUPTMINENERGYPERCENT_OFFSET))(this);
	}

	::System::Void set_ChargeInterruptMinEnergyPercent(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_94DB529DA137E52D_SET_CHARGEINTERRUPTMINENERGYPERCENT_OFFSET))(this, a1);
	}

	::System::Single get_Duration()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_94DB529DA137E52D_GET_DURATION_OFFSET))(this);
	}

	::System::Void set_Duration(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_94DB529DA137E52D_SET_DURATION_OFFSET))(this, a1);
	}

	::System::Single get_CurrentTime()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_94DB529DA137E52D_GET_CURRENTTIME_OFFSET))(this);
	}

	::System::Void set_CurrentTime(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_94DB529DA137E52D_SET_CURRENTTIME_OFFSET))(this, a1);
	}

	::System::Single get_CenterLerpDuration()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_94DB529DA137E52D_GET_CENTERLERPDURATION_OFFSET))(this);
	}

	::System::Void set_CenterLerpDuration(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_94DB529DA137E52D_SET_CENTERLERPDURATION_OFFSET))(this, a1);
	}

	::UnityEngine::AnimationCurve* get_CenterLerpCurve()
	{
		return ((::UnityEngine::AnimationCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_94DB529DA137E52D_GET_CENTERLERPCURVE_OFFSET))(this);
	}

	::System::Void set_CenterLerpCurve(::UnityEngine::AnimationCurve* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + CLASS_2_94DB529DA137E52D_SET_CENTERLERPCURVE_OFFSET))(this, a1);
	}

	::System::Single get_StartOffset()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_94DB529DA137E52D_GET_STARTOFFSET_OFFSET))(this);
	}

	::System::Void set_StartOffset(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_94DB529DA137E52D_SET_STARTOFFSET_OFFSET))(this, a1);
	}

	::System::Single get_SpeedLerpDuration()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_94DB529DA137E52D_GET_SPEEDLERPDURATION_OFFSET))(this);
	}

	::System::Void set_SpeedLerpDuration(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_94DB529DA137E52D_SET_SPEEDLERPDURATION_OFFSET))(this, a1);
	}

	::UnityEngine::AnimationCurve* get_SpeedLerpCurve()
	{
		return ((::UnityEngine::AnimationCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_94DB529DA137E52D_GET_SPEEDLERPCURVE_OFFSET))(this);
	}

	::System::Void set_SpeedLerpCurve(::UnityEngine::AnimationCurve* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + CLASS_2_94DB529DA137E52D_SET_SPEEDLERPCURVE_OFFSET))(this, a1);
	}

	::System::Single get_TargetBaseMaxSpeed()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_94DB529DA137E52D_GET_TARGETBASEMAXSPEED_OFFSET))(this);
	}

	::System::Void set_TargetBaseMaxSpeed(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_2_94DB529DA137E52D_SET_TARGETBASEMAXSPEED_OFFSET))(this, a1);
	}

	::System::String* get_EnhanceQTEModifierName()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_94DB529DA137E52D_GET_ENHANCEQTEMODIFIERNAME_OFFSET))(this);
	}

	::System::Void set_EnhanceQTEModifierName(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_94DB529DA137E52D_SET_ENHANCEQTEMODIFIERNAME_OFFSET))(this, a1);
	}

	::System::String* get_TaskUnlock()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_94DB529DA137E52D_GET_TASKUNLOCK_OFFSET))(this);
	}

	::System::Void set_TaskUnlock(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + CLASS_2_94DB529DA137E52D_SET_TASKUNLOCK_OFFSET))(this, a1);
	}

	::System::Boolean get_HasSentChargeInterruptNotify()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_94DB529DA137E52D_GET_HASSENTCHARGEINTERRUPTNOTIFY_OFFSET))(this);
	}

	::System::Void set_HasSentChargeInterruptNotify(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_94DB529DA137E52D_SET_HASSENTCHARGEINTERRUPTNOTIFY_OFFSET))(this, a1);
	}
};
