#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_CC342C5CC837CDC0.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_7A7B8DBB8BCC7E0F_METHOD_2_4F3661D3B38CBEAF_OFFSET UNITYSDK_OFFSET(0x936720)

inline static constexpr unsigned int Struct_2_7A7B8DBB8BCC7E0F_TypeDefinitionIndex = 88307;

struct alignas(4) Struct_2_7A7B8DBB8BCC7E0F
{
	::System::UInt32 Field_2_0; // 0x10
	::Enum_3_CC342C5CC837CDC0 Field_2_1; // 0x14
	::System::Single Field_2_2; // 0x18
	::System::Single Field_2_3; // 0x1C

	::System::String* Method_2_4F3661D3B38CBEAF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_7A7B8DBB8BCC7E0F_METHOD_2_4F3661D3B38CBEAF_OFFSET))(this);
	}
};
