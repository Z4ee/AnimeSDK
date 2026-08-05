#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_F2B56CD3567E2314_1_METHOD_2_819F1C40271D34FB_OFFSET UNITYSDK_OFFSET(0xA0C0F0)

inline static constexpr unsigned int Struct_2_F2B56CD3567E2314_1_TypeDefinitionIndex = 92242;

struct alignas(4) Struct_2_F2B56CD3567E2314_1
{
	::System::UInt32 Field_2_0; // 0x10
	::System::UInt32 Field_2_7; // 0x14

	::System::String* Method_2_819F1C40271D34FB()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_F2B56CD3567E2314_1_METHOD_2_819F1C40271D34FB_OFFSET))(this);
	}
};
