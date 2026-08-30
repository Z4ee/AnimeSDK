#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_598;

#define CLASS_1_B65F0DC23C3D5837_GET_ALERTSPEED_OFFSET UNITYSDK_OFFSET(0x122263C0)
#define CLASS_1_B65F0DC23C3D5837_GET_DISTANCE_OFFSET UNITYSDK_OFFSET(0x12226320)
#define CLASS_1_B65F0DC23C3D5837_GET_RAYENDPOINT_OFFSET UNITYSDK_OFFSET(0x12226390)
#define CLASS_1_B65F0DC23C3D5837_GET_RAYSTARTPOINT_OFFSET UNITYSDK_OFFSET(0x12226360)
#define CLASS_1_B65F0DC23C3D5837_GET_VISION_OFFSET UNITYSDK_OFFSET(0x12226340)
#define CLASS_1_B65F0DC23C3D5837_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x122263E0)
#define CLASS_1_B65F0DC23C3D5837_SET_ALERTSPEED_OFFSET UNITYSDK_OFFSET(0x122263D0)
#define CLASS_1_B65F0DC23C3D5837_SET_DISTANCE_OFFSET UNITYSDK_OFFSET(0x12226330)
#define CLASS_1_B65F0DC23C3D5837_SET_RAYENDPOINT_OFFSET UNITYSDK_OFFSET(0x122263B0)
#define CLASS_1_B65F0DC23C3D5837_SET_RAYSTARTPOINT_OFFSET UNITYSDK_OFFSET(0x12226380)
#define CLASS_1_B65F0DC23C3D5837_SET_VISION_OFFSET UNITYSDK_OFFSET(0x12226350)
#define CLASS_1_B65F0DC23C3D5837__CTOR_OFFSET UNITYSDK_OFFSET(0x12226430)

inline static constexpr unsigned int Class_1_B65F0DC23C3D5837_TypeDefinitionIndex = 57140;

class Class_1_B65F0DC23C3D5837 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_598* _vision_k__BackingField; // 0x10
	::UnityEngine::Vector3 _rayEndPoint_k__BackingField; // 0x18
	::UnityEngine::Vector3 _rayStartPoint_k__BackingField; // 0x24
	::System::Single _alertSpeed_k__BackingField; // 0x30
	::System::Single _distance_k__BackingField; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B65F0DC23C3D5837__CTOR_OFFSET))(this);
	}

	::System::Single get_distance()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B65F0DC23C3D5837_GET_DISTANCE_OFFSET))(this);
	}

	::System::Void set_distance(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B65F0DC23C3D5837_SET_DISTANCE_OFFSET))(this, a1);
	}

	::Class_0_16E4307DCC419505_598* get_vision()
	{
		return ((::Class_0_16E4307DCC419505_598*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B65F0DC23C3D5837_GET_VISION_OFFSET))(this);
	}

	::System::Void set_vision(::Class_0_16E4307DCC419505_598* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_598*))((::PBYTE)hIl2Cpp + CLASS_1_B65F0DC23C3D5837_SET_VISION_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 get_rayStartPoint()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B65F0DC23C3D5837_GET_RAYSTARTPOINT_OFFSET))(this);
	}

	::System::Void set_rayStartPoint(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_B65F0DC23C3D5837_SET_RAYSTARTPOINT_OFFSET))(this, a1);
	}

	::UnityEngine::Vector3 get_rayEndPoint()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B65F0DC23C3D5837_GET_RAYENDPOINT_OFFSET))(this);
	}

	::System::Void set_rayEndPoint(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_B65F0DC23C3D5837_SET_RAYENDPOINT_OFFSET))(this, a1);
	}

	::System::Single get_alertSpeed()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B65F0DC23C3D5837_GET_ALERTSPEED_OFFSET))(this);
	}

	::System::Void set_alertSpeed(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_B65F0DC23C3D5837_SET_ALERTSPEED_OFFSET))(this, a1);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B65F0DC23C3D5837_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}
};
