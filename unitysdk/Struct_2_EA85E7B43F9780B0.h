#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_EA85E7B43F9780B0_EXECUTE_OFFSET UNITYSDK_OFFSET(0x3B01310)

inline static constexpr unsigned int Struct_2_EA85E7B43F9780B0_TypeDefinitionIndex = 71068;

struct alignas(1) Struct_2_EA85E7B43F9780B0
{
	::System::Void Execute(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_EA85E7B43F9780B0_EXECUTE_OFFSET))(this, a1);
	}
};
