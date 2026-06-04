#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_928F3189A4CB88F7_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3840370)
#define STRUCT_2_928F3189A4CB88F7___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3840380)

inline static constexpr unsigned int Struct_2_928F3189A4CB88F7_TypeDefinitionIndex = 38493;

struct alignas(4) Struct_2_928F3189A4CB88F7
{
	::System::Int32 Field_2_0; // 0x10
	::System::UInt64 Field_2_1; // 0x14

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_928F3189A4CB88F7_TOSTRING_OFFSET))(this);
	}

	::System::String* __iFixBaseProxy_ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_928F3189A4CB88F7___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
	}
};
