#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define CLASS_1_5F77BB6F5FCE2E0B_GET_ID_OFFSET UNITYSDK_OFFSET(0x12A71540)
#define CLASS_1_5F77BB6F5FCE2E0B_GET_POSITION_OFFSET UNITYSDK_OFFSET(0x12A71550)
#define CLASS_1_5F77BB6F5FCE2E0B_SET_POSITION_OFFSET UNITYSDK_OFFSET(0x12A71570)
#define CLASS_1_5F77BB6F5FCE2E0B__CTOR_OFFSET UNITYSDK_OFFSET(0x12A71580)

inline static constexpr unsigned int Class_1_5F77BB6F5FCE2E0B_TypeDefinitionIndex = 67539;

class Class_1_5F77BB6F5FCE2E0B : public ::System::Object
{
public:
	::System::UInt32 _ID_k__BackingField; // 0x10
	::UnityEngine::Vector3 _Position_k__BackingField; // 0x14

	::System::Void _ctor(::System::UInt32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + CLASS_1_5F77BB6F5FCE2E0B__CTOR_OFFSET))(this, a1);
	}

	::System::UInt32 get_ID()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F77BB6F5FCE2E0B_GET_ID_OFFSET))(this);
	}

	::UnityEngine::Vector3 get_Position()
	{
		return ((::UnityEngine::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_5F77BB6F5FCE2E0B_GET_POSITION_OFFSET))(this);
	}

	::System::Void set_Position(::UnityEngine::Vector3 value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CLASS_1_5F77BB6F5FCE2E0B_SET_POSITION_OFFSET))(this, value);
	}
};
