#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_806835FEF27B0BFC_3_METHOD_2_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0xA9F3D0)

inline static constexpr unsigned int Struct_2_806835FEF27B0BFC_3_TypeDefinitionIndex = 93439;

struct alignas(4) Struct_2_806835FEF27B0BFC_3
{
	::System::UInt32 Field_2_1; // 0x10
	::System::Int32 Field_2_0; // 0x14

	::System::String* Method_2_DA1BF2C227DC3D86()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_806835FEF27B0BFC_3_METHOD_2_DA1BF2C227DC3D86_OFFSET))(this);
	}
};
