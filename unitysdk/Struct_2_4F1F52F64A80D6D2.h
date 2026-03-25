#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_4F1F52F64A80D6D2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x74E60)
#define STRUCT_2_4F1F52F64A80D6D2___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x74E70)

inline static constexpr unsigned int Struct_2_4F1F52F64A80D6D2_TypeDefinitionIndex = 61278;

struct alignas(4) Struct_2_4F1F52F64A80D6D2
{
	::System::UInt32 Field_2_0; // 0x10
	::System::UInt32 Field_2_1; // 0x14
	::System::UInt32 Field_2_2; // 0x18

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_4F1F52F64A80D6D2_TOSTRING_OFFSET))(this);
	}

	::System::String* __iFixBaseProxy_ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_4F1F52F64A80D6D2___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
	}
};
