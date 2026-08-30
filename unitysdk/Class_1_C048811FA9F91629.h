#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class AnimationCurve; }

#define CLASS_1_C048811FA9F91629_GET_ADDITIVEDURATION_OFFSET UNITYSDK_OFFSET(0xB9606C0)
#define CLASS_1_C048811FA9F91629_GET_ADDITIVEMAXDURATION_OFFSET UNITYSDK_OFFSET(0xB960680)
#define CLASS_1_C048811FA9F91629_GET_ADDITIVEMAXSPEED_OFFSET UNITYSDK_OFFSET(0xB9606A0)
#define CLASS_1_C048811FA9F91629_GET_ADDITIVESPEEDCURVE_OFFSET UNITYSDK_OFFSET(0xB960660)
#define CLASS_1_C048811FA9F91629_GET_ADDITIVESPEED_OFFSET UNITYSDK_OFFSET(0xB9606E0)
#define CLASS_1_C048811FA9F91629_GET_BLURFEATHER_OFFSET UNITYSDK_OFFSET(0xB960800)
#define CLASS_1_C048811FA9F91629_GET_BLURRADIUS_OFFSET UNITYSDK_OFFSET(0xB9607C0)
#define CLASS_1_C048811FA9F91629_GET_BLURSTART_OFFSET UNITYSDK_OFFSET(0xB9607E0)
#define CLASS_1_C048811FA9F91629_GET_DIRECTIONCORRECTIONSTARTTIME_OFFSET UNITYSDK_OFFSET(0xB960700)
#define CLASS_1_C048811FA9F91629_GET_FOVBLENDINCURVE_OFFSET UNITYSDK_OFFSET(0xB960740)
#define CLASS_1_C048811FA9F91629_GET_FOVBLENDINTIME_OFFSET UNITYSDK_OFFSET(0xB960760)
#define CLASS_1_C048811FA9F91629_GET_FOVBLENDOUTCURVE_OFFSET UNITYSDK_OFFSET(0xB960780)
#define CLASS_1_C048811FA9F91629_GET_FOVBLENDOUTTIME_OFFSET UNITYSDK_OFFSET(0xB9607A0)
#define CLASS_1_C048811FA9F91629_GET_FOV_OFFSET UNITYSDK_OFFSET(0xB960720)
#define CLASS_1_C048811FA9F91629_GET_REQUIRECHARGEVALUE_OFFSET UNITYSDK_OFFSET(0xB960640)
#define CLASS_1_C048811FA9F91629_METHOD_1_C4BFBB1BE6C0430A_OFFSET UNITYSDK_OFFSET(0xB960820)
#define CLASS_1_C048811FA9F91629_SET_ADDITIVEDURATION_OFFSET UNITYSDK_OFFSET(0xB9606D0)
#define CLASS_1_C048811FA9F91629_SET_ADDITIVEMAXDURATION_OFFSET UNITYSDK_OFFSET(0xB960690)
#define CLASS_1_C048811FA9F91629_SET_ADDITIVEMAXSPEED_OFFSET UNITYSDK_OFFSET(0xB9606B0)
#define CLASS_1_C048811FA9F91629_SET_ADDITIVESPEEDCURVE_OFFSET UNITYSDK_OFFSET(0xB960670)
#define CLASS_1_C048811FA9F91629_SET_ADDITIVESPEED_OFFSET UNITYSDK_OFFSET(0xB9606F0)
#define CLASS_1_C048811FA9F91629_SET_BLURFEATHER_OFFSET UNITYSDK_OFFSET(0xB960810)
#define CLASS_1_C048811FA9F91629_SET_BLURRADIUS_OFFSET UNITYSDK_OFFSET(0xB9607D0)
#define CLASS_1_C048811FA9F91629_SET_BLURSTART_OFFSET UNITYSDK_OFFSET(0xB9607F0)
#define CLASS_1_C048811FA9F91629_SET_DIRECTIONCORRECTIONSTARTTIME_OFFSET UNITYSDK_OFFSET(0xB960710)
#define CLASS_1_C048811FA9F91629_SET_FOVBLENDINCURVE_OFFSET UNITYSDK_OFFSET(0xB960750)
#define CLASS_1_C048811FA9F91629_SET_FOVBLENDINTIME_OFFSET UNITYSDK_OFFSET(0xB960770)
#define CLASS_1_C048811FA9F91629_SET_FOVBLENDOUTCURVE_OFFSET UNITYSDK_OFFSET(0xB960790)
#define CLASS_1_C048811FA9F91629_SET_FOVBLENDOUTTIME_OFFSET UNITYSDK_OFFSET(0xB9607B0)
#define CLASS_1_C048811FA9F91629_SET_FOV_OFFSET UNITYSDK_OFFSET(0xB960730)
#define CLASS_1_C048811FA9F91629_SET_REQUIRECHARGEVALUE_OFFSET UNITYSDK_OFFSET(0xB960650)
#define CLASS_1_C048811FA9F91629__CTOR_OFFSET UNITYSDK_OFFSET(0xB9608A0)

inline static constexpr unsigned int Class_1_C048811FA9F91629_TypeDefinitionIndex = 75415;

class Class_1_C048811FA9F91629 : public ::System::Object
{
public:
	::UnityEngine::AnimationCurve* _FOVBlendOutCurve_k__BackingField; // 0x10
	::UnityEngine::AnimationCurve* _AdditiveSpeedCurve_k__BackingField; // 0x18
	::UnityEngine::AnimationCurve* _FOVBlendInCurve_k__BackingField; // 0x20
	::System::Single _BlurRadius_k__BackingField; // 0x28
	::System::Single _DirectionCorrectionStartTime_k__BackingField; // 0x2C
	::System::Single _AdditiveMaxSpeed_k__BackingField; // 0x30
	::System::Single _FOVBlendInTime_k__BackingField; // 0x34
	::System::Single _FOVBlendOutTime_k__BackingField; // 0x38
	::System::Single _AdditiveMaxDuration_k__BackingField; // 0x3C
	::System::Single _AdditiveSpeed_k__BackingField; // 0x40
	::System::Single _RequireChargeValue_k__BackingField; // 0x44
	::System::Single _AdditiveDuration_k__BackingField; // 0x48
	::System::Single _BlurStart_k__BackingField; // 0x4C
	::System::Single _FOV_k__BackingField; // 0x50
	::System::Single _BlurFeather_k__BackingField; // 0x54

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C048811FA9F91629__CTOR_OFFSET))(this);
	}

	::System::Single get_RequireChargeValue()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C048811FA9F91629_GET_REQUIRECHARGEVALUE_OFFSET))(this);
	}

	::System::Void set_RequireChargeValue(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C048811FA9F91629_SET_REQUIRECHARGEVALUE_OFFSET))(this, a1);
	}

	::UnityEngine::AnimationCurve* get_AdditiveSpeedCurve()
	{
		return ((::UnityEngine::AnimationCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C048811FA9F91629_GET_ADDITIVESPEEDCURVE_OFFSET))(this);
	}

	::System::Void set_AdditiveSpeedCurve(::UnityEngine::AnimationCurve* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + CLASS_1_C048811FA9F91629_SET_ADDITIVESPEEDCURVE_OFFSET))(this, a1);
	}

	::System::Single get_AdditiveMaxDuration()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C048811FA9F91629_GET_ADDITIVEMAXDURATION_OFFSET))(this);
	}

	::System::Void set_AdditiveMaxDuration(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C048811FA9F91629_SET_ADDITIVEMAXDURATION_OFFSET))(this, a1);
	}

	::System::Single get_AdditiveMaxSpeed()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C048811FA9F91629_GET_ADDITIVEMAXSPEED_OFFSET))(this);
	}

	::System::Void set_AdditiveMaxSpeed(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C048811FA9F91629_SET_ADDITIVEMAXSPEED_OFFSET))(this, a1);
	}

	::System::Single get_AdditiveDuration()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C048811FA9F91629_GET_ADDITIVEDURATION_OFFSET))(this);
	}

	::System::Void set_AdditiveDuration(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C048811FA9F91629_SET_ADDITIVEDURATION_OFFSET))(this, a1);
	}

	::System::Single get_AdditiveSpeed()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C048811FA9F91629_GET_ADDITIVESPEED_OFFSET))(this);
	}

	::System::Void set_AdditiveSpeed(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C048811FA9F91629_SET_ADDITIVESPEED_OFFSET))(this, a1);
	}

	::System::Single get_DirectionCorrectionStartTime()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C048811FA9F91629_GET_DIRECTIONCORRECTIONSTARTTIME_OFFSET))(this);
	}

	::System::Void set_DirectionCorrectionStartTime(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C048811FA9F91629_SET_DIRECTIONCORRECTIONSTARTTIME_OFFSET))(this, a1);
	}

	::System::Single get_FOV()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C048811FA9F91629_GET_FOV_OFFSET))(this);
	}

	::System::Void set_FOV(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C048811FA9F91629_SET_FOV_OFFSET))(this, a1);
	}

	::UnityEngine::AnimationCurve* get_FOVBlendInCurve()
	{
		return ((::UnityEngine::AnimationCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C048811FA9F91629_GET_FOVBLENDINCURVE_OFFSET))(this);
	}

	::System::Void set_FOVBlendInCurve(::UnityEngine::AnimationCurve* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + CLASS_1_C048811FA9F91629_SET_FOVBLENDINCURVE_OFFSET))(this, a1);
	}

	::System::Single get_FOVBlendInTime()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C048811FA9F91629_GET_FOVBLENDINTIME_OFFSET))(this);
	}

	::System::Void set_FOVBlendInTime(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C048811FA9F91629_SET_FOVBLENDINTIME_OFFSET))(this, a1);
	}

	::UnityEngine::AnimationCurve* get_FOVBlendOutCurve()
	{
		return ((::UnityEngine::AnimationCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C048811FA9F91629_GET_FOVBLENDOUTCURVE_OFFSET))(this);
	}

	::System::Void set_FOVBlendOutCurve(::UnityEngine::AnimationCurve* a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + CLASS_1_C048811FA9F91629_SET_FOVBLENDOUTCURVE_OFFSET))(this, a1);
	}

	::System::Single get_FOVBlendOutTime()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C048811FA9F91629_GET_FOVBLENDOUTTIME_OFFSET))(this);
	}

	::System::Void set_FOVBlendOutTime(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C048811FA9F91629_SET_FOVBLENDOUTTIME_OFFSET))(this, a1);
	}

	::System::Single get_BlurRadius()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C048811FA9F91629_GET_BLURRADIUS_OFFSET))(this);
	}

	::System::Void set_BlurRadius(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C048811FA9F91629_SET_BLURRADIUS_OFFSET))(this, a1);
	}

	::System::Single get_BlurStart()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C048811FA9F91629_GET_BLURSTART_OFFSET))(this);
	}

	::System::Void set_BlurStart(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C048811FA9F91629_SET_BLURSTART_OFFSET))(this, a1);
	}

	::System::Single get_BlurFeather()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C048811FA9F91629_GET_BLURFEATHER_OFFSET))(this);
	}

	::System::Void set_BlurFeather(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_C048811FA9F91629_SET_BLURFEATHER_OFFSET))(this, a1);
	}

	static ::Class_1_C048811FA9F91629* Method_1_C4BFBB1BE6C0430A()
	{
		return ((::Class_1_C048811FA9F91629*(*)())((::PBYTE)hIl2Cpp + CLASS_1_C048811FA9F91629_METHOD_1_C4BFBB1BE6C0430A_OFFSET))();
	}
};
