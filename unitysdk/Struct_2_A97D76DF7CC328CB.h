#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define STRUCT_2_A97D76DF7CC328CB__CTOR_OFFSET UNITYSDK_OFFSET(0x8319F0)

inline static constexpr unsigned int Struct_2_A97D76DF7CC328CB_TypeDefinitionIndex = 54750;

struct alignas(4) Struct_2_A97D76DF7CC328CB
{
	::UnityEngine::Vector3 Field_2_0; // 0x10
	::UnityEngine::Vector3 Field_2_1; // 0x1C
	::System::Single Field_2_2; // 0x28
	::System::Single Field_2_3; // 0x2C
	::System::Int32 Field_2_4; // 0x30

	::System::Void _ctor(::UnityEngine::Vector3 a1, ::UnityEngine::Vector3 a2, ::System::Single a3, ::System::Single a4, ::System::Int32 a5)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single, ::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_A97D76DF7CC328CB__CTOR_OFFSET))(this, a1, a2, a3, a4, a5);
	}
};
