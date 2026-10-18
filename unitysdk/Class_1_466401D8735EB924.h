#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_466401D8735EB924_GET_POSITION_OFFSET UNITYSDK_OFFSET(0xB15F590)
#define CLASS_1_466401D8735EB924_GET_ROTATION_OFFSET UNITYSDK_OFFSET(0xB15F5C0)
#define CLASS_1_466401D8735EB924_SET_POSITION_OFFSET UNITYSDK_OFFSET(0xB15F5B0)
#define CLASS_1_466401D8735EB924_SET_ROTATION_OFFSET UNITYSDK_OFFSET(0xB15F5D0)
#define CLASS_1_466401D8735EB924__CTOR_OFFSET UNITYSDK_OFFSET(0xB15F5E0)

inline static constexpr unsigned int Class_1_466401D8735EB924_TypeDefinitionIndex = 80238;

class Class_1_466401D8735EB924 : public ::System::Object
{
public:
	::UnityEngine::Vector3 _Position_k__BackingField; // 0x10
	::UnityEngine::Quaternion _Rotation_k__BackingField; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_466401D8735EB924__CTOR_OFFSET))(this);
	}

	::UnityEngine::Vector3 get_Position()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_466401D8735EB924_GET_POSITION_OFFSET))(this);
	}

	::System::Void set_Position(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_466401D8735EB924_SET_POSITION_OFFSET))(this, a1);
	}

	::UnityEngine::Quaternion get_Rotation()
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_466401D8735EB924_GET_ROTATION_OFFSET))(this);
	}

	::System::Void set_Rotation(::UnityEngine::Quaternion a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + CLASS_1_466401D8735EB924_SET_ROTATION_OFFSET))(this, a1);
	}
};
