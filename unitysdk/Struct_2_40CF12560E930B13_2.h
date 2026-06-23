#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_E05733EAD215BCF0.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_40CF12560E930B13_2_EQUALS_OFFSET UNITYSDK_OFFSET(0x7C54B0)
#define STRUCT_2_40CF12560E930B13_2_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x7C5510)

inline static constexpr unsigned int Struct_2_40CF12560E930B13_2_TypeDefinitionIndex = 53025;

struct alignas(1) Struct_2_40CF12560E930B13_2
{
	::System::Boolean Equals(::Enum_3_E05733EAD215BCF0 a1, ::Enum_3_E05733EAD215BCF0 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_E05733EAD215BCF0, ::Enum_3_E05733EAD215BCF0))((::PBYTE)hIl2Cpp + STRUCT_2_40CF12560E930B13_2_EQUALS_OFFSET))(this, a1, a2);
	}

	::System::Int32 GetHashCode(::Enum_3_E05733EAD215BCF0 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Enum_3_E05733EAD215BCF0))((::PBYTE)hIl2Cpp + STRUCT_2_40CF12560E930B13_2_GETHASHCODE_OFFSET))(this, a1);
	}
};
