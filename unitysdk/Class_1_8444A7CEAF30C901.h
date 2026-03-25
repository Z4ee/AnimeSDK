#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_436;

#define CLASS_1_8444A7CEAF30C901_GET_ALERTSPEED_OFFSET UNITYSDK_OFFSET(0x111C7F00)
#define CLASS_1_8444A7CEAF30C901_GET_DISTANCE_OFFSET UNITYSDK_OFFSET(0x111C7E60)
#define CLASS_1_8444A7CEAF30C901_GET_RAYENDPOINT_OFFSET UNITYSDK_OFFSET(0x111C7ED0)
#define CLASS_1_8444A7CEAF30C901_GET_RAYSTARTPOINT_OFFSET UNITYSDK_OFFSET(0x111C7EA0)
#define CLASS_1_8444A7CEAF30C901_GET_VISION_OFFSET UNITYSDK_OFFSET(0x111C7E80)
#define CLASS_1_8444A7CEAF30C901_METHOD_1_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x111C7F20)
#define CLASS_1_8444A7CEAF30C901_SET_ALERTSPEED_OFFSET UNITYSDK_OFFSET(0x111C7F10)
#define CLASS_1_8444A7CEAF30C901_SET_DISTANCE_OFFSET UNITYSDK_OFFSET(0x111C7E70)
#define CLASS_1_8444A7CEAF30C901_SET_RAYENDPOINT_OFFSET UNITYSDK_OFFSET(0x111C7EF0)
#define CLASS_1_8444A7CEAF30C901_SET_RAYSTARTPOINT_OFFSET UNITYSDK_OFFSET(0x111C7EC0)
#define CLASS_1_8444A7CEAF30C901_SET_VISION_OFFSET UNITYSDK_OFFSET(0x111C7E90)
#define CLASS_1_8444A7CEAF30C901__CTOR_OFFSET UNITYSDK_OFFSET(0x111C7F70)

inline static constexpr unsigned int Class_1_8444A7CEAF30C901_TypeDefinitionIndex = 45846;

class Class_1_8444A7CEAF30C901 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_436* _vision_k__BackingField; // 0x10
	::System::Single _alertSpeed_k__BackingField; // 0x18
	::System::Single _distance_k__BackingField; // 0x1C
	::UnityEngine::Vector3 _rayEndPoint_k__BackingField; // 0x20
	::UnityEngine::Vector3 _rayStartPoint_k__BackingField; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8444A7CEAF30C901__CTOR_OFFSET))(this);
	}

	::System::Single get_distance()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8444A7CEAF30C901_GET_DISTANCE_OFFSET))(this);
	}

	::System::Void set_distance(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_8444A7CEAF30C901_SET_DISTANCE_OFFSET))(this, value);
	}

	::Class_0_16E4307DCC419505_436* get_vision()
	{
		return ((::Class_0_16E4307DCC419505_436*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8444A7CEAF30C901_GET_VISION_OFFSET))(this);
	}

	::System::Void set_vision(::Class_0_16E4307DCC419505_436* value)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_436*))((::PBYTE)hIl2Cpp + CLASS_1_8444A7CEAF30C901_SET_VISION_OFFSET))(this, value);
	}

	::UnityEngine::Vector3 get_rayStartPoint()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8444A7CEAF30C901_GET_RAYSTARTPOINT_OFFSET))(this);
	}

	::System::Void set_rayStartPoint(::UnityEngine::Vector3 value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_8444A7CEAF30C901_SET_RAYSTARTPOINT_OFFSET))(this, value);
	}

	::UnityEngine::Vector3 get_rayEndPoint()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8444A7CEAF30C901_GET_RAYENDPOINT_OFFSET))(this);
	}

	::System::Void set_rayEndPoint(::UnityEngine::Vector3 value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_8444A7CEAF30C901_SET_RAYENDPOINT_OFFSET))(this, value);
	}

	::System::Single get_alertSpeed()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8444A7CEAF30C901_GET_ALERTSPEED_OFFSET))(this);
	}

	::System::Void set_alertSpeed(::System::Single value)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_1_8444A7CEAF30C901_SET_ALERTSPEED_OFFSET))(this, value);
	}

	::System::Void Method_1_CA373AA1C7054598()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8444A7CEAF30C901_METHOD_1_CA373AA1C7054598_OFFSET))(this);
	}
};
