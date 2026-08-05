#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_61EDE525C60EB6BF_METHOD_2_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0x7B0270)
#define STRUCT_2_61EDE525C60EB6BF_TOSTRING_OFFSET UNITYSDK_OFFSET(0x7B0260)

inline static constexpr unsigned int Struct_2_61EDE525C60EB6BF_TypeDefinitionIndex = 81043;

struct alignas(8) Struct_2_61EDE525C60EB6BF
{
	::System::String* Field_2_3; // 0x10
	::System::String* Field_2_2; // 0x18
	::System::String* Field_2_1; // 0x20
	::System::String* Field_2_0; // 0x28

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_61EDE525C60EB6BF_TOSTRING_OFFSET))(this);
	}

	::System::String* Method_2_35EA095E1AFDD9C8()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_61EDE525C60EB6BF_METHOD_2_35EA095E1AFDD9C8_OFFSET))(this);
	}
};
