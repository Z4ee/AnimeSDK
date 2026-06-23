#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_86B6AE3AD6E3BBAF_METHOD_2_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0x82D2D0)
#define STRUCT_2_86B6AE3AD6E3BBAF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x82D2C0)

inline static constexpr unsigned int Struct_2_86B6AE3AD6E3BBAF_TypeDefinitionIndex = 41494;

struct alignas(8) Struct_2_86B6AE3AD6E3BBAF
{
	::System::String* Field_2_0; // 0x10
	::System::String* Field_2_1; // 0x18
	::System::String* Field_2_2; // 0x20
	::System::String* Field_2_3; // 0x28

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_86B6AE3AD6E3BBAF_TOSTRING_OFFSET))(this);
	}

	::System::String* Method_2_35EA095E1AFDD9C8()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_86B6AE3AD6E3BBAF_METHOD_2_35EA095E1AFDD9C8_OFFSET))(this);
	}
};
