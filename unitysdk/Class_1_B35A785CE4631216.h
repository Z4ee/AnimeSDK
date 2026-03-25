#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_B35A785CE4631216_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x8ACA9C0)
#define CLASS_1_B35A785CE4631216_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x8ACA9E0)
#define CLASS_1_B35A785CE4631216__CTOR_OFFSET UNITYSDK_OFFSET(0x8ACA9F0)

inline static constexpr unsigned int Class_1_B35A785CE4631216_TypeDefinitionIndex = 61321;

class Class_1_B35A785CE4631216 : public ::System::Object
{
public:
	::UnityEngine::Vector3 _Position_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B35A785CE4631216__CTOR_OFFSET))(this);
	}

	::UnityEngine::Vector3 get_Position()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B35A785CE4631216_GET_POSITION_OFFSET))(this);
	}

	::System::Void set_Position(::UnityEngine::Vector3 value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_B35A785CE4631216_SET_POSITION_OFFSET))(this, value);
	}
};
