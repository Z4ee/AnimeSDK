#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_131D34C0A7592261_1_EXECUTE_OFFSET UNITYSDK_OFFSET(0x7C4E30)

inline static constexpr unsigned int Struct_2_131D34C0A7592261_1_TypeDefinitionIndex = 90679;

struct alignas(1) Struct_2_131D34C0A7592261_1
{
	::System::Void Execute(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_131D34C0A7592261_1_EXECUTE_OFFSET))(this, a1);
	}
};
