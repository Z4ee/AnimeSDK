#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_5C435A4F9C3472F0_METHOD_2_B58BC6045ACAB0D9_OFFSET UNITYSDK_OFFSET(0x15348AE0)

inline static constexpr unsigned int Struct_2_5C435A4F9C3472F0_TypeDefinitionIndex = 77988;

struct alignas(8) Struct_2_5C435A4F9C3472F0
{
	::System::String* Field_2_0; // 0x10
	::System::Int32 Field_2_1; // 0x18
	::System::Int32 Field_2_2; // 0x1C
	::System::Boolean Field_2_3; // 0x20
	::System::Boolean Field_2_4; // 0x21
	::System::Boolean Field_2_5; // 0x22

	static ::Struct_2_5C435A4F9C3472F0 Method_2_B58BC6045ACAB0D9(::System::String* a1)
	{
		return ((::Struct_2_5C435A4F9C3472F0(*)(::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_5C435A4F9C3472F0_METHOD_2_B58BC6045ACAB0D9_OFFSET))(a1);
	}
};
