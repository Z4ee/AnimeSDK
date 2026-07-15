#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_698098A743D71086__CTOR_OFFSET UNITYSDK_OFFSET(0x397EFE0)

inline static constexpr unsigned int Struct_2_698098A743D71086_TypeDefinitionIndex = 55014;

struct alignas(4) Struct_2_698098A743D71086
{
	::System::Int32 Field_2_0; // 0x10
	::System::Boolean Field_2_1; // 0x14
	::System::Boolean Field_2_2; // 0x15

	::System::Void _ctor(::System::Int32 a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_698098A743D71086__CTOR_OFFSET))(this, a1, a2, a3);
	}
};
