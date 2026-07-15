#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_375565317301D04B_GET_ATTITUDE_OFFSET UNITYSDK_OFFSET(0x17DB9E10)
#define CLASS_1_375565317301D04B_GET_GRAVITY_OFFSET UNITYSDK_OFFSET(0x17DB9C70)
#define CLASS_1_375565317301D04B_GET_ROTATIONRATEUNBIASED_OFFSET UNITYSDK_OFFSET(0x17DB9BA0)
#define CLASS_1_375565317301D04B_GET_ROTATIONRATE_OFFSET UNITYSDK_OFFSET(0x17DB9AD0)
#define CLASS_1_375565317301D04B_GET_USERACCELERATION_OFFSET UNITYSDK_OFFSET(0x17DB9D40)
#define CLASS_1_375565317301D04B_METHOD_1_2E47F09A457E7E05_OFFSET UNITYSDK_OFFSET(0x17DB9A40)
#define CLASS_1_375565317301D04B_METHOD_1_CF8BA38996D09531_OFFSET UNITYSDK_OFFSET(0x17DB99B0)
#define CLASS_1_375565317301D04B__CTOR_OFFSET UNITYSDK_OFFSET(0x17DB9950)

inline static constexpr unsigned int Class_1_375565317301D04B_TypeDefinitionIndex = 65254;

class Class_1_375565317301D04B : public ::System::Object
{
public:
	// static const ::System::Single Field_1_0; // 0x0

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_375565317301D04B__CTOR_OFFSET))(this);
	}

	::System::Boolean Method_1_CF8BA38996D09531()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_375565317301D04B_METHOD_1_CF8BA38996D09531_OFFSET))(this);
	}

	::System::Void Method_1_2E47F09A457E7E05(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_375565317301D04B_METHOD_1_2E47F09A457E7E05_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 get_RotationRate()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_375565317301D04B_GET_ROTATIONRATE_OFFSET))(this);
	}

	::UnityEngine::Vector3 get_RotationRateUnbiased()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_375565317301D04B_GET_ROTATIONRATEUNBIASED_OFFSET))(this);
	}

	::UnityEngine::Vector3 get_Gravity()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_375565317301D04B_GET_GRAVITY_OFFSET))(this);
	}

	::UnityEngine::Vector3 get_UserAcceleration()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_375565317301D04B_GET_USERACCELERATION_OFFSET))(this);
	}

	::UnityEngine::Quaternion get_Attitude()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_375565317301D04B_GET_ATTITUDE_OFFSET))(this);
	}
};
