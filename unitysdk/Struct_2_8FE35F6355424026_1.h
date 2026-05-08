#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_8FE35F6355424026_1_METHOD_2_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x76E700)

inline static constexpr unsigned int Struct_2_8FE35F6355424026_1_TypeDefinitionIndex = 50632;

struct alignas(4) Struct_2_8FE35F6355424026_1
{
	::System::Int32 Field_2_0; // 0x10
	::System::Int32 Field_2_1; // 0x14
	::System::Int32 Field_2_2; // 0x18
	::System::Int32 Field_2_3; // 0x1C
	::System::Int32 Field_2_4; // 0x20

	::System::Int32 Method_2_A1D8CD775DEC3C21()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_8FE35F6355424026_1_METHOD_2_A1D8CD775DEC3C21_OFFSET))(this);
	}
};
