#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_AA448B6ED22827F6_2_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x424ED0)

inline static constexpr unsigned int Struct_2_AA448B6ED22827F6_2_TypeDefinitionIndex = 84126;

struct alignas(4) Struct_2_AA448B6ED22827F6_2
{
	::System::Int32 Field_2_1; // 0x10
	::System::Int32 Field_2_0; // 0x14

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_AA448B6ED22827F6_2_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}
};
