#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_72A48ACB00DC6E2A_EXECUTE_OFFSET UNITYSDK_OFFSET(0x81D60)

inline static constexpr unsigned int Struct_2_72A48ACB00DC6E2A_TypeDefinitionIndex = 66459;

struct alignas(1) Struct_2_72A48ACB00DC6E2A
{
	::System::Void Execute(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_72A48ACB00DC6E2A_EXECUTE_OFFSET))(this, a1);
	}
};
