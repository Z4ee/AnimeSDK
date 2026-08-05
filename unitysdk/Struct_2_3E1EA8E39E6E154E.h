#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class GameObject; }

#define STRUCT_2_3E1EA8E39E6E154E_METHOD_2_7FBAA229ED524F8E_OFFSET UNITYSDK_OFFSET(0x809080)
#define STRUCT_2_3E1EA8E39E6E154E__CTOR_OFFSET UNITYSDK_OFFSET(0x33DF30)

inline static constexpr unsigned int Struct_2_3E1EA8E39E6E154E_TypeDefinitionIndex = 72233;

struct alignas(8) Struct_2_3E1EA8E39E6E154E
{
	::UnityEngine::GameObject* Field_2_1; // 0x10
	::System::Boolean Field_2_0; // 0x18

	::System::Void _ctor(::UnityEngine::GameObject* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_3E1EA8E39E6E154E__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7FBAA229ED524F8E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_3E1EA8E39E6E154E_METHOD_2_7FBAA229ED524F8E_OFFSET))(this);
	}
};
