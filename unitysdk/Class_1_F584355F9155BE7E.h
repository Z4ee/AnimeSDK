#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class AnimationCurve; }

#define CLASS_1_F584355F9155BE7E_GET_ACCEL_OFFSET UNITYSDK_OFFSET(0x9036000)
#define CLASS_1_F584355F9155BE7E_GET_CURRENTSPEED_OFFSET UNITYSDK_OFFSET(0x9036040)
#define CLASS_1_F584355F9155BE7E_GET_CURRENTVALUE_OFFSET UNITYSDK_OFFSET(0x9036060)
#define CLASS_1_F584355F9155BE7E_GET_DECEL_OFFSET UNITYSDK_OFFSET(0x9036020)
#define CLASS_1_F584355F9155BE7E_GET_MAXRECOVERSPEED_OFFSET UNITYSDK_OFFSET(0x9035FE0)
#define CLASS_1_F584355F9155BE7E_GET_MAXSPEED_OFFSET UNITYSDK_OFFSET(0x9035FC0)
#define CLASS_1_F584355F9155BE7E_GET_MAXVALUE_OFFSET UNITYSDK_OFFSET(0x9035FA0)
#define CLASS_1_F584355F9155BE7E_GET_ROTATESIGN_OFFSET UNITYSDK_OFFSET(0x9035F60)
#define CLASS_1_F584355F9155BE7E_GET_SCALECURVE_OFFSET UNITYSDK_OFFSET(0x9035F80)
#define CLASS_1_F584355F9155BE7E_METHOD_1_82B2BADB6C94DC6B_1_OFFSET UNITYSDK_OFFSET(0x9035D70)
#define CLASS_1_F584355F9155BE7E_METHOD_1_82B2BADB6C94DC6B_OFFSET UNITYSDK_OFFSET(0x9035E60)
#define CLASS_1_F584355F9155BE7E_METHOD_1_AEAE04752EDD65F9_OFFSET UNITYSDK_OFFSET(0x9035800)
#define CLASS_1_F584355F9155BE7E_METHOD_1_F3044C7F0F775E6E_OFFSET UNITYSDK_OFFSET(0x90358E0)
#define CLASS_1_F584355F9155BE7E_SET_ACCEL_OFFSET UNITYSDK_OFFSET(0x9036010)
#define CLASS_1_F584355F9155BE7E_SET_CURRENTSPEED_OFFSET UNITYSDK_OFFSET(0x9036050)
#define CLASS_1_F584355F9155BE7E_SET_CURRENTVALUE_OFFSET UNITYSDK_OFFSET(0x9036070)
#define CLASS_1_F584355F9155BE7E_SET_DECEL_OFFSET UNITYSDK_OFFSET(0x9036030)
#define CLASS_1_F584355F9155BE7E_SET_MAXRECOVERSPEED_OFFSET UNITYSDK_OFFSET(0x9035FF0)
#define CLASS_1_F584355F9155BE7E_SET_MAXSPEED_OFFSET UNITYSDK_OFFSET(0x9035FD0)
#define CLASS_1_F584355F9155BE7E_SET_MAXVALUE_OFFSET UNITYSDK_OFFSET(0x9035FB0)
#define CLASS_1_F584355F9155BE7E_SET_ROTATESIGN_OFFSET UNITYSDK_OFFSET(0x9035F70)
#define CLASS_1_F584355F9155BE7E_SET_SCALECURVE_OFFSET UNITYSDK_OFFSET(0x9035F90)
#define CLASS_1_F584355F9155BE7E__CTOR_OFFSET UNITYSDK_OFFSET(0x90357C0)

inline static constexpr unsigned int Class_1_F584355F9155BE7E_TypeDefinitionIndex = 63432;

class Class_1_F584355F9155BE7E : public ::System::Object
{
public:
	::UnityEngine::AnimationCurve* _ScaleCurve_k__BackingField; // 0x10
	::System::Single _CurrentSpeed_k__BackingField; // 0x18
	::System::Single _MaxRecoverSpeed_k__BackingField; // 0x1C
	::System::Single _Accel_k__BackingField; // 0x20
	::System::Single _CurrentValue_k__BackingField; // 0x24
	::System::Single _MaxSpeed_k__BackingField; // 0x28
	::System::Single _MaxValue_k__BackingField; // 0x2C
	::System::Single _RotateSign_k__BackingField; // 0x30
	::System::Single _Decel_k__BackingField; // 0x34

	::System::Void _ctor(::UnityEngine::AnimationCurve* a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5, ::System::Single a6)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationCurve*, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F584355F9155BE7E__CTOR_OFFSET))(this, a1, a2, a3, a4, a5, a6);
	}

	::System::Void Method_1_AEAE04752EDD65F9(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F584355F9155BE7E_METHOD_1_AEAE04752EDD65F9_OFFSET))(this, a1, a2, a3, a4, a5);
	}

	::System::Void Method_1_F3044C7F0F775E6E(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F584355F9155BE7E_METHOD_1_F3044C7F0F775E6E_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_82B2BADB6C94DC6B(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F584355F9155BE7E_METHOD_1_82B2BADB6C94DC6B_OFFSET))(this, a1, a2, a3);
	}

	::System::Single Method_1_82B2BADB6C94DC6B_1(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Single(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F584355F9155BE7E_METHOD_1_82B2BADB6C94DC6B_1_OFFSET))(this, a1, a2, a3);
	}

	::System::Single get_RotateSign()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F584355F9155BE7E_GET_ROTATESIGN_OFFSET))(this);
	}

	::System::Void set_RotateSign(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F584355F9155BE7E_SET_ROTATESIGN_OFFSET))(this, value);
	}

	::UnityEngine::AnimationCurve* get_ScaleCurve()
	{
		return ((::UnityEngine::AnimationCurve*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F584355F9155BE7E_GET_SCALECURVE_OFFSET))(this);
	}

	::System::Void set_ScaleCurve(::UnityEngine::AnimationCurve* value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::AnimationCurve*))((::PBYTE)hIl2Cpp + CLASS_1_F584355F9155BE7E_SET_SCALECURVE_OFFSET))(this, value);
	}

	::System::Single get_MaxValue()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F584355F9155BE7E_GET_MAXVALUE_OFFSET))(this);
	}

	::System::Void set_MaxValue(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F584355F9155BE7E_SET_MAXVALUE_OFFSET))(this, value);
	}

	::System::Single get_MaxSpeed()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F584355F9155BE7E_GET_MAXSPEED_OFFSET))(this);
	}

	::System::Void set_MaxSpeed(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F584355F9155BE7E_SET_MAXSPEED_OFFSET))(this, value);
	}

	::System::Single get_MaxRecoverSpeed()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F584355F9155BE7E_GET_MAXRECOVERSPEED_OFFSET))(this);
	}

	::System::Void set_MaxRecoverSpeed(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F584355F9155BE7E_SET_MAXRECOVERSPEED_OFFSET))(this, value);
	}

	::System::Single get_Accel()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F584355F9155BE7E_GET_ACCEL_OFFSET))(this);
	}

	::System::Void set_Accel(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F584355F9155BE7E_SET_ACCEL_OFFSET))(this, value);
	}

	::System::Single get_Decel()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F584355F9155BE7E_GET_DECEL_OFFSET))(this);
	}

	::System::Void set_Decel(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F584355F9155BE7E_SET_DECEL_OFFSET))(this, value);
	}

	::System::Single get_CurrentSpeed()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F584355F9155BE7E_GET_CURRENTSPEED_OFFSET))(this);
	}

	::System::Void set_CurrentSpeed(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F584355F9155BE7E_SET_CURRENTSPEED_OFFSET))(this, value);
	}

	::System::Single get_CurrentValue()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F584355F9155BE7E_GET_CURRENTVALUE_OFFSET))(this);
	}

	::System::Void set_CurrentValue(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_F584355F9155BE7E_SET_CURRENTVALUE_OFFSET))(this, value);
	}
};
