#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_D6FB6AD40142FD96_METHOD_2_4F3661D3B38CBEAF_OFFSET UNITYSDK_OFFSET(0x9B6BA0)

inline static constexpr unsigned int Struct_2_D6FB6AD40142FD96_TypeDefinitionIndex = 88622;

struct alignas(4) Struct_2_D6FB6AD40142FD96
{
	::System::UInt32 Field_2_0; // 0x10
	::System::UInt32 Field_2_1; // 0x14
	::System::UInt32 Field_2_2; // 0x18
	::System::UInt32 Field_2_3; // 0x1C

	::System::String* Method_2_4F3661D3B38CBEAF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_D6FB6AD40142FD96_METHOD_2_4F3661D3B38CBEAF_OFFSET))(this);
	}
};
