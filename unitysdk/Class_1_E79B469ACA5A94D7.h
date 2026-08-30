#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CloudGame/MailBox/GameControl/Gyroscope.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_E79B469ACA5A94D7_GET_ATTITUDE_OFFSET UNITYSDK_OFFSET(0x17F88F80)
#define CLASS_1_E79B469ACA5A94D7_GET_GRAVITY_OFFSET UNITYSDK_OFFSET(0x17F88F20)
#define CLASS_1_E79B469ACA5A94D7_GET_ROTATIONRATEUNBIASED_OFFSET UNITYSDK_OFFSET(0x17F88EF0)
#define CLASS_1_E79B469ACA5A94D7_GET_ROTATIONRATE_OFFSET UNITYSDK_OFFSET(0x17F88EC0)
#define CLASS_1_E79B469ACA5A94D7_GET_USERACCELERATION_OFFSET UNITYSDK_OFFSET(0x17F88F50)
#define CLASS_1_E79B469ACA5A94D7_METHOD_1_C081D0F1BA12AC56_OFFSET UNITYSDK_OFFSET(0x17F88C80)
#define CLASS_1_E79B469ACA5A94D7_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x17F88C70)
#define CLASS_1_E79B469ACA5A94D7_METHOD_1_F5504CECAFBA99EF_OFFSET UNITYSDK_OFFSET(0x17F88BC0)
#define CLASS_1_E79B469ACA5A94D7_SET_ATTITUDE_OFFSET UNITYSDK_OFFSET(0x17F88F90)
#define CLASS_1_E79B469ACA5A94D7_SET_GRAVITY_OFFSET UNITYSDK_OFFSET(0x17F88F40)
#define CLASS_1_E79B469ACA5A94D7_SET_ROTATIONRATEUNBIASED_OFFSET UNITYSDK_OFFSET(0x17F88F10)
#define CLASS_1_E79B469ACA5A94D7_SET_ROTATIONRATE_OFFSET UNITYSDK_OFFSET(0x17F88EE0)
#define CLASS_1_E79B469ACA5A94D7_SET_USERACCELERATION_OFFSET UNITYSDK_OFFSET(0x17F88F70)
#define CLASS_1_E79B469ACA5A94D7__CTOR_OFFSET UNITYSDK_OFFSET(0x17F88BB0)

inline static constexpr unsigned int Class_1_E79B469ACA5A94D7_TypeDefinitionIndex = 68265;

class Class_1_E79B469ACA5A94D7 : public ::System::Object
{
public:
	::UnityEngine::Vector3 _Gravity_k__BackingField; // 0x10
	::UnityEngine::Quaternion _Attitude_k__BackingField; // 0x1C
	::UnityEngine::Vector3 _RotationRate_k__BackingField; // 0x2C
	::System::Boolean MHEAIOMEGCA; // 0x38
	::UnityEngine::Vector3 _RotationRateUnbiased_k__BackingField; // 0x3C
	::UnityEngine::Vector3 _UserAcceleration_k__BackingField; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E79B469ACA5A94D7__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_F5504CECAFBA99EF(::CloudGame::MailBox::GameControl::Gyroscope a1)
	{
		return ((::System::Void(*)(::PVOID, ::CloudGame::MailBox::GameControl::Gyroscope))((::PBYTE)hIl2Cpp + CLASS_1_E79B469ACA5A94D7_METHOD_1_F5504CECAFBA99EF_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E79B469ACA5A94D7_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_C081D0F1BA12AC56(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E79B469ACA5A94D7_METHOD_1_C081D0F1BA12AC56_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 get_RotationRate()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E79B469ACA5A94D7_GET_ROTATIONRATE_OFFSET))(this);
	}

	::System::Void set_RotationRate(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_E79B469ACA5A94D7_SET_ROTATIONRATE_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 get_RotationRateUnbiased()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E79B469ACA5A94D7_GET_ROTATIONRATEUNBIASED_OFFSET))(this);
	}

	::System::Void set_RotationRateUnbiased(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_E79B469ACA5A94D7_SET_ROTATIONRATEUNBIASED_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 get_Gravity()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E79B469ACA5A94D7_GET_GRAVITY_OFFSET))(this);
	}

	::System::Void set_Gravity(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_E79B469ACA5A94D7_SET_GRAVITY_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 get_UserAcceleration()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E79B469ACA5A94D7_GET_USERACCELERATION_OFFSET))(this);
	}

	::System::Void set_UserAcceleration(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_E79B469ACA5A94D7_SET_USERACCELERATION_OFFSET))(this, a1);
	}

	::UnityEngine::Quaternion get_Attitude()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E79B469ACA5A94D7_GET_ATTITUDE_OFFSET))(this);
	}

	::System::Void set_Attitude(::UnityEngine::Quaternion a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_E79B469ACA5A94D7_SET_ATTITUDE_OFFSET))(this, a1);
	}
};
