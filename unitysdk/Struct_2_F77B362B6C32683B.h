#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_F77B362B6C32683B_EXECUTE_OFFSET UNITYSDK_OFFSET(0x161FB70)

inline static constexpr unsigned int Struct_2_F77B362B6C32683B_TypeDefinitionIndex = 65518;

struct alignas(4) Struct_2_F77B362B6C32683B
{
	::System::Int32 Field_2_0; // 0x10

	::System::Void Execute()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F77B362B6C32683B_EXECUTE_OFFSET))(this);
	}
};
