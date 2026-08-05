#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_806835FEF27B0BFC_2_METHOD_2_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0xA35F80)

inline static constexpr unsigned int Struct_2_806835FEF27B0BFC_2_TypeDefinitionIndex = 93368;

struct alignas(4) Struct_2_806835FEF27B0BFC_2
{
	::System::UInt32 Field_2_0; // 0x10
	::System::UInt32 Field_2_7; // 0x14
	::System::Int32 Field_2_6; // 0x18

	::System::String* Method_2_DA1BF2C227DC3D86()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_806835FEF27B0BFC_2_METHOD_2_DA1BF2C227DC3D86_OFFSET))(this);
	}
};
