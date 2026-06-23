#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_4579988CF4E8E117_METHOD_2_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0x7EF390)
#define STRUCT_2_4579988CF4E8E117_TOSTRING_OFFSET UNITYSDK_OFFSET(0x7EF380)

inline static constexpr unsigned int Struct_2_4579988CF4E8E117_TypeDefinitionIndex = 52353;

struct alignas(4) Struct_2_4579988CF4E8E117
{
	::System::Boolean Field_2_0; // 0x10
	::System::Boolean Field_2_1; // 0x11
	::System::Int32 Field_2_2; // 0x14
	::System::Int32 Field_2_3; // 0x18
	::System::Single Field_2_4; // 0x1C
	::System::Single Field_2_5; // 0x20

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_4579988CF4E8E117_TOSTRING_OFFSET))(this);
	}

	::System::String* Method_2_35EA095E1AFDD9C8()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_4579988CF4E8E117_METHOD_2_35EA095E1AFDD9C8_OFFSET))(this);
	}
};
