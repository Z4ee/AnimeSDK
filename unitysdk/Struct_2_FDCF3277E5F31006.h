#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Quaternion.h"

#define STRUCT_2_FDCF3277E5F31006_METHOD_2_767CFA5DE1FE54BD_OFFSET UNITYSDK_OFFSET(0x3948B80)
#define STRUCT_2_FDCF3277E5F31006_METHOD_2_D26446056D8957A6_OFFSET UNITYSDK_OFFSET(0x3948A90)

inline static constexpr unsigned int Struct_2_FDCF3277E5F31006_TypeDefinitionIndex = 74935;

struct alignas(4) Struct_2_FDCF3277E5F31006
{
	::UnityEngine::Quaternion Field_2_0; // 0x10
	::UnityEngine::Quaternion Field_2_1; // 0x20
	::System::Single Field_2_2; // 0x30
	::System::Single Field_2_3; // 0x34

	::UnityEngine::Quaternion Method_2_D26446056D8957A6(::System::Single a1)
	{
		return ((::UnityEngine::Quaternion(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_FDCF3277E5F31006_METHOD_2_D26446056D8957A6_OFFSET))(this, a1);
	}

	::System::Void Method_2_767CFA5DE1FE54BD(::UnityEngine::Quaternion a1, ::UnityEngine::Quaternion a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Quaternion, ::UnityEngine::Quaternion, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_FDCF3277E5F31006_METHOD_2_767CFA5DE1FE54BD_OFFSET))(this, a1, a2, a3);
	}
};
