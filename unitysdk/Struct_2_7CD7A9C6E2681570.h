#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_7463607AB93E8728.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_7CD7A9C6E2681570__CTOR_OFFSET UNITYSDK_OFFSET(0x586780)

inline static constexpr unsigned int Struct_2_7CD7A9C6E2681570_TypeDefinitionIndex = 58055;

struct alignas(4) Struct_2_7CD7A9C6E2681570
{
	::Enum_3_7463607AB93E8728 Field_2_0; // 0x10
	::System::Int32 Field_2_7; // 0x14
	::System::Int32 Field_2_6; // 0x18

	::System::Void _ctor(::Enum_3_7463607AB93E8728 a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_7463607AB93E8728, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_7CD7A9C6E2681570__CTOR_OFFSET))(this, a1, a2, a3);
	}
};
