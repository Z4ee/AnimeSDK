#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_16E1A7E812845E19_METHOD_2_4F3661D3B38CBEAF_OFFSET UNITYSDK_OFFSET(0x9C5820)

inline static constexpr unsigned int Struct_2_16E1A7E812845E19_TypeDefinitionIndex = 88662;

struct alignas(4) Struct_2_16E1A7E812845E19
{
	::System::UInt32 Field_2_0; // 0x10
	::System::UInt32 Field_2_1; // 0x14
	::System::Int32 Field_2_2; // 0x18
	::System::Int32 Field_2_3; // 0x1C

	::System::String* Method_2_4F3661D3B38CBEAF()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_16E1A7E812845E19_METHOD_2_4F3661D3B38CBEAF_OFFSET))(this);
	}
};
