#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define STRUCT_2_FC595D1A561D8C6F__CTOR_OFFSET UNITYSDK_OFFSET(0x6BBF40)

inline static constexpr unsigned int Struct_2_FC595D1A561D8C6F_TypeDefinitionIndex = 64279;

struct alignas(4) Struct_2_FC595D1A561D8C6F
{
	::UnityEngine::Vector3 BBFOLEOPPPL; // 0x10
	::UnityEngine::Quaternion NMELCPIOKNO; // 0x1C

	::System::Void _ctor(::UnityEngine::Vector3 a1, ::UnityEngine::Quaternion a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Quaternion))((::PBYTE)hIl2Cpp + STRUCT_2_FC595D1A561D8C6F__CTOR_OFFSET))(this, a1, a2);
	}
};
