#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define STRUCT_2_DD2A07650CD0727B_METHOD_2_D2B596D73D4A5AE4_OFFSET UNITYSDK_OFFSET(0x88170)
#define STRUCT_2_DD2A07650CD0727B__CTOR_OFFSET UNITYSDK_OFFSET(0x88150)

inline static constexpr unsigned int Struct_2_DD2A07650CD0727B_TypeDefinitionIndex = 53238;

struct alignas(4) Struct_2_DD2A07650CD0727B
{
	::UnityEngine::Vector3 Field_2_0; // 0x10
	::System::Single Field_2_1; // 0x1C
	::System::Single Field_2_2; // 0x20

	::System::Void _ctor(::UnityEngine::Vector3 a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_DD2A07650CD0727B__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Boolean Method_2_D2B596D73D4A5AE4(::UnityEngine::Vector3& a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + STRUCT_2_DD2A07650CD0727B_METHOD_2_D2B596D73D4A5AE4_OFFSET))(this, a1);
	}
};
