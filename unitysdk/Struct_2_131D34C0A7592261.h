#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_131D34C0A7592261_EXECUTE_OFFSET UNITYSDK_OFFSET(0x6ED4D0)

inline static constexpr unsigned int Struct_2_131D34C0A7592261_TypeDefinitionIndex = 40907;

struct alignas(1) Struct_2_131D34C0A7592261
{
	::System::Void Execute(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_131D34C0A7592261_EXECUTE_OFFSET))(this, a1);
	}
};
