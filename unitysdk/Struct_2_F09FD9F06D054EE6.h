#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_F09FD9F06D054EE6_EXECUTE_OFFSET UNITYSDK_OFFSET(0x7AD050)

inline static constexpr unsigned int Struct_2_F09FD9F06D054EE6_TypeDefinitionIndex = 72261;

struct alignas(4) Struct_2_F09FD9F06D054EE6
{
	::System::Single Field_2_0; // 0x10

	::System::Void Execute(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_F09FD9F06D054EE6_EXECUTE_OFFSET))(this, a1);
	}
};
