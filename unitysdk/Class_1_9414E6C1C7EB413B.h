#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/CloudGame/MailBox/GameControl/Gyroscope.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_9414E6C1C7EB413B_GET_ATTITUDE_OFFSET UNITYSDK_OFFSET(0x8856970)
#define CLASS_1_9414E6C1C7EB413B_GET_GRAVITY_OFFSET UNITYSDK_OFFSET(0x8856910)
#define CLASS_1_9414E6C1C7EB413B_GET_ROTATIONRATEUNBIASED_OFFSET UNITYSDK_OFFSET(0x88568E0)
#define CLASS_1_9414E6C1C7EB413B_GET_ROTATIONRATE_OFFSET UNITYSDK_OFFSET(0x88568B0)
#define CLASS_1_9414E6C1C7EB413B_GET_USERACCELERATION_OFFSET UNITYSDK_OFFSET(0x8856940)
#define CLASS_1_9414E6C1C7EB413B_METHOD_1_8F490265D0A1B8F6_OFFSET UNITYSDK_OFFSET(0x8856670)
#define CLASS_1_9414E6C1C7EB413B_METHOD_1_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x8856660)
#define CLASS_1_9414E6C1C7EB413B_METHOD_1_F5504CECAFBA99EF_OFFSET UNITYSDK_OFFSET(0x88565B0)
#define CLASS_1_9414E6C1C7EB413B_SET_ATTITUDE_OFFSET UNITYSDK_OFFSET(0x8856980)
#define CLASS_1_9414E6C1C7EB413B_SET_GRAVITY_OFFSET UNITYSDK_OFFSET(0x8856930)
#define CLASS_1_9414E6C1C7EB413B_SET_ROTATIONRATEUNBIASED_OFFSET UNITYSDK_OFFSET(0x8856900)
#define CLASS_1_9414E6C1C7EB413B_SET_ROTATIONRATE_OFFSET UNITYSDK_OFFSET(0x88568D0)
#define CLASS_1_9414E6C1C7EB413B_SET_USERACCELERATION_OFFSET UNITYSDK_OFFSET(0x8856960)
#define CLASS_1_9414E6C1C7EB413B__CTOR_OFFSET UNITYSDK_OFFSET(0x88565A0)

inline static constexpr unsigned int Class_1_9414E6C1C7EB413B_TypeDefinitionIndex = 55744;

class Class_1_9414E6C1C7EB413B : public ::System::Object
{
public:
	::UnityEngine::Quaternion _Attitude_k__BackingField; // 0x10
	::UnityEngine::Vector3 _UserAcceleration_k__BackingField; // 0x20
	::System::Boolean Field_1_5; // 0x2C
	::UnityEngine::Vector3 _RotationRate_k__BackingField; // 0x30
	::UnityEngine::Vector3 _Gravity_k__BackingField; // 0x3C
	::UnityEngine::Vector3 _RotationRateUnbiased_k__BackingField; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9414E6C1C7EB413B__CTOR_OFFSET))(this);
	}

	::System::Void Method_1_F5504CECAFBA99EF(::CloudGame::MailBox::GameControl::Gyroscope a1)
	{
		return ((::System::Void(*)(::PVOID, ::CloudGame::MailBox::GameControl::Gyroscope))((::PBYTE)hIl2Cpp + CLASS_1_9414E6C1C7EB413B_METHOD_1_F5504CECAFBA99EF_OFFSET))(this, a1);
	}

	::System::Boolean Method_1_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9414E6C1C7EB413B_METHOD_1_F0088C88851A7DFB_OFFSET))(this);
	}

	::System::Void Method_1_8F490265D0A1B8F6(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_9414E6C1C7EB413B_METHOD_1_8F490265D0A1B8F6_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 get_RotationRate()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9414E6C1C7EB413B_GET_ROTATIONRATE_OFFSET))(this);
	}

	::System::Void set_RotationRate(::UnityEngine::Vector3 value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_9414E6C1C7EB413B_SET_ROTATIONRATE_OFFSET))(this, value);
	}

	::UnityEngine::Vector3 get_RotationRateUnbiased()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9414E6C1C7EB413B_GET_ROTATIONRATEUNBIASED_OFFSET))(this);
	}

	::System::Void set_RotationRateUnbiased(::UnityEngine::Vector3 value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_9414E6C1C7EB413B_SET_ROTATIONRATEUNBIASED_OFFSET))(this, value);
	}

	::UnityEngine::Vector3 get_Gravity()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9414E6C1C7EB413B_GET_GRAVITY_OFFSET))(this);
	}

	::System::Void set_Gravity(::UnityEngine::Vector3 value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_9414E6C1C7EB413B_SET_GRAVITY_OFFSET))(this, value);
	}

	::UnityEngine::Vector3 get_UserAcceleration()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9414E6C1C7EB413B_GET_USERACCELERATION_OFFSET))(this);
	}

	::System::Void set_UserAcceleration(::UnityEngine::Vector3 value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_9414E6C1C7EB413B_SET_USERACCELERATION_OFFSET))(this, value);
	}

	::UnityEngine::Quaternion get_Attitude()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_9414E6C1C7EB413B_GET_ATTITUDE_OFFSET))(this);
	}

	::System::Void set_Attitude(::UnityEngine::Quaternion value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_9414E6C1C7EB413B_SET_ATTITUDE_OFFSET))(this, value);
	}
};
