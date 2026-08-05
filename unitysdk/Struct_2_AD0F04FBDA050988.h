#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_AD0F04FBDA050988_METHOD_2_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0x7DEF50)
#define STRUCT_2_AD0F04FBDA050988_TOSTRING_OFFSET UNITYSDK_OFFSET(0x7DEF40)

inline static constexpr unsigned int Struct_2_AD0F04FBDA050988_TypeDefinitionIndex = 78633;

struct alignas(4) Struct_2_AD0F04FBDA050988
{
	::System::Int32 Field_2_3; // 0x10
	::System::Int32 Field_2_2; // 0x14
	::System::Int32 Field_2_1; // 0x18
	::System::Int32 Field_2_0; // 0x1C
	::System::Int32 Field_2_7; // 0x20
	::System::Int32 Field_2_6; // 0x24

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_AD0F04FBDA050988_TOSTRING_OFFSET))(this);
	}

	::System::String* Method_2_35EA095E1AFDD9C8()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_AD0F04FBDA050988_METHOD_2_35EA095E1AFDD9C8_OFFSET))(this);
	}
};
