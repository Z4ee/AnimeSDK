#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_28133F92F05559F9_TOSTRING_OFFSET UNITYSDK_OFFSET(0x39C6A50)

inline static constexpr unsigned int Struct_2_28133F92F05559F9_TypeDefinitionIndex = 39301;

struct alignas(4) Struct_2_28133F92F05559F9
{
	::System::Int32 Field_2_0; // 0x10
	::System::UInt64 Field_2_1; // 0x14

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_28133F92F05559F9_TOSTRING_OFFSET))(this);
	}
};
