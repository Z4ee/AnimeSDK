#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_9CE48E81A771EA87.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_17D0956EF90EB21E_METHOD_2_4F3661D3B38CBEAF_OFFSET UNITYSDK_OFFSET(0xA0B6E0)

inline static constexpr unsigned int Struct_2_17D0956EF90EB21E_TypeDefinitionIndex = 91951;

struct alignas(4) Struct_2_17D0956EF90EB21E
{
	::System::Int32 Field_2_2; // 0x10
	::System::Int32 Field_2_1; // 0x14
	::Enum_3_9CE48E81A771EA87 Field_2_0; // 0x18
	::System::UInt32 Field_2_7; // 0x1C

	::System::String* Method_2_4F3661D3B38CBEAF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_17D0956EF90EB21E_METHOD_2_4F3661D3B38CBEAF_OFFSET))(this);
	}
};
