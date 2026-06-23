#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_D5F4B94141B2A6CF_EXECUTE_OFFSET UNITYSDK_OFFSET(0x8189E0)

inline static constexpr unsigned int Struct_2_D5F4B94141B2A6CF_TypeDefinitionIndex = 65447;

struct alignas(1) Struct_2_D5F4B94141B2A6CF
{
	::System::Void Execute(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_D5F4B94141B2A6CF_EXECUTE_OFFSET))(this, a1);
	}
};
