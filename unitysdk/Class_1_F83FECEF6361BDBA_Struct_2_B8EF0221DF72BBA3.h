#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define CLASS_1_F83FECEF6361BDBA_STRUCT_2_B8EF0221DF72BBA3__CTOR_OFFSET UNITYSDK_OFFSET(0x79CA70)

inline static constexpr unsigned int Class_1_F83FECEF6361BDBA_Struct_2_B8EF0221DF72BBA3_TypeDefinitionIndex = 67706;

struct alignas(4) Class_1_F83FECEF6361BDBA_Struct_2_B8EF0221DF72BBA3
{
	::System::Single Field_2_0; // 0x10
	::UnityEngine::Vector2 Field_2_1; // 0x14

	::System::Void _ctor(::System::Single a1, ::UnityEngine::Vector2 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + CLASS_1_F83FECEF6361BDBA_STRUCT_2_B8EF0221DF72BBA3__CTOR_OFFSET))(this, a1, a2);
	}
};
