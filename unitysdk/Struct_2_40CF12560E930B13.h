#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_B9A017F4B0BBC22E.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_40CF12560E930B13_EQUALS_OFFSET UNITYSDK_OFFSET(0x6E4330)
#define STRUCT_2_40CF12560E930B13_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x6E42E0)

inline static constexpr unsigned int Struct_2_40CF12560E930B13_TypeDefinitionIndex = 38724;

struct alignas(1) Struct_2_40CF12560E930B13
{
	::System::Int32 GetHashCode(::Enum_3_B9A017F4B0BBC22E a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Enum_3_B9A017F4B0BBC22E))((::PBYTE)hIl2Cpp + STRUCT_2_40CF12560E930B13_GETHASHCODE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::Enum_3_B9A017F4B0BBC22E a1, ::Enum_3_B9A017F4B0BBC22E a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_B9A017F4B0BBC22E, ::Enum_3_B9A017F4B0BBC22E))((::PBYTE)hIl2Cpp + STRUCT_2_40CF12560E930B13_EQUALS_OFFSET))(this, a1, a2);
	}
};
