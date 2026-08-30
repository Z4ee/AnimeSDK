#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_7E7490B98DD3DDF0_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x1687AC40)
#define CLASS_1_7E7490B98DD3DDF0_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x1687AC60)
#define CLASS_1_7E7490B98DD3DDF0__CTOR_OFFSET UNITYSDK_OFFSET(0x1687AC70)

inline static constexpr unsigned int Class_1_7E7490B98DD3DDF0_TypeDefinitionIndex = 74462;

class Class_1_7E7490B98DD3DDF0 : public ::System::Object
{
public:
	::UnityEngine::Vector3 _Position_k__BackingField; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7E7490B98DD3DDF0__CTOR_OFFSET))(this);
	}

	::UnityEngine::Vector3 get_Position()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7E7490B98DD3DDF0_GET_POSITION_OFFSET))(this);
	}

	::System::Void set_Position(::UnityEngine::Vector3 a1)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_7E7490B98DD3DDF0_SET_POSITION_OFFSET))(this, a1);
	}
};
