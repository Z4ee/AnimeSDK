#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_CAC7B5E2CFB5753B_EQUALS_OFFSET UNITYSDK_OFFSET(0x7DBCC0)

inline static constexpr unsigned int Struct_2_CAC7B5E2CFB5753B_TypeDefinitionIndex = 65786;

struct alignas(4) Struct_2_CAC7B5E2CFB5753B
{
	::System::Single Field_2_0; // 0x10

	::System::Boolean Equals(::Struct_2_CAC7B5E2CFB5753B a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_CAC7B5E2CFB5753B))((::PBYTE)hIl2Cpp + STRUCT_2_CAC7B5E2CFB5753B_EQUALS_OFFSET))(this, a1);
	}
};
