#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DEC90C97E871B705.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_40CF12560E930B13_EQUALS_OFFSET UNITYSDK_OFFSET(0x7EFCD0)
#define STRUCT_2_40CF12560E930B13_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x7EFC80)

inline static constexpr unsigned int Struct_2_40CF12560E930B13_TypeDefinitionIndex = 44053;

struct alignas(1) Struct_2_40CF12560E930B13
{
	::System::Int32 GetHashCode(::Enum_3_DEC90C97E871B705 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Enum_3_DEC90C97E871B705))((::PBYTE)hIl2Cpp + STRUCT_2_40CF12560E930B13_GETHASHCODE_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::Enum_3_DEC90C97E871B705 a1, ::Enum_3_DEC90C97E871B705 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_DEC90C97E871B705, ::Enum_3_DEC90C97E871B705))((::PBYTE)hIl2Cpp + STRUCT_2_40CF12560E930B13_EQUALS_OFFSET))(this, a1, a2);
	}
};
