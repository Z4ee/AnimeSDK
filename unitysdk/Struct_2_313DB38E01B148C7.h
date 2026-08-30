#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define STRUCT_2_313DB38E01B148C7__CTOR_OFFSET UNITYSDK_OFFSET(0x25560)

inline static constexpr unsigned int Struct_2_313DB38E01B148C7_TypeDefinitionIndex = 62225;

struct alignas(4) Struct_2_313DB38E01B148C7
{
	::UnityEngine::Vector3 FJMCLOIEMKG; // 0x10
	::System::Single CONJAMJKHBI; // 0x1C

	::System::Void _ctor(::UnityEngine::Vector3 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_313DB38E01B148C7__CTOR_OFFSET))(this, a1, a2);
	}
};
