#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_ACFC0DB5006C06E5_EXECUTE_OFFSET UNITYSDK_OFFSET(0x828700)

inline static constexpr unsigned int Struct_2_ACFC0DB5006C06E5_TypeDefinitionIndex = 70853;

struct alignas(1) Struct_2_ACFC0DB5006C06E5
{
	::System::Void Execute(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_ACFC0DB5006C06E5_EXECUTE_OFFSET))(this, a1);
	}
};
