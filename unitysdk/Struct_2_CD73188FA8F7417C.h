#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_CD73188FA8F7417C_METHOD_2_5323F2DF46A044DA_OFFSET UNITYSDK_OFFSET(0x14328810)

inline static constexpr unsigned int Struct_2_CD73188FA8F7417C_TypeDefinitionIndex = 59102;

struct alignas(8) Struct_2_CD73188FA8F7417C
{
	::System::String* Field_2_0; // 0x10
	::System::Single Field_2_1; // 0x18

	static ::System::Single Method_2_5323F2DF46A044DA()
	{
		return ((::System::Single(*)())((::PBYTE)hIl2Cpp + STRUCT_2_CD73188FA8F7417C_METHOD_2_5323F2DF46A044DA_OFFSET))();
	}
};
