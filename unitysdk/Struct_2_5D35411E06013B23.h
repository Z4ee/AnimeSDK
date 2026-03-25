#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_5D35411E06013B23_EXECUTE_OFFSET UNITYSDK_OFFSET(0x7A7E0)

inline static constexpr unsigned int Struct_2_5D35411E06013B23_TypeDefinitionIndex = 58239;

struct alignas(1) Struct_2_5D35411E06013B23
{
	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_5D35411E06013B23_EXECUTE_OFFSET))(this);
	}
};
