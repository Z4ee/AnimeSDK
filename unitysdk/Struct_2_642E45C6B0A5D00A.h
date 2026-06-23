#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_B2CA9D83C11FBDC4.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_642E45C6B0A5D00A_METHOD_2_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0x9A8A70)

inline static constexpr unsigned int Struct_2_642E45C6B0A5D00A_TypeDefinitionIndex = 88655;

struct alignas(4) Struct_2_642E45C6B0A5D00A
{
	::Enum_3_B2CA9D83C11FBDC4 Field_2_0; // 0x10
	::Enum_3_B2CA9D83C11FBDC4 Field_2_1; // 0x14

	::System::String* Method_2_DA1BF2C227DC3D86()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_642E45C6B0A5D00A_METHOD_2_DA1BF2C227DC3D86_OFFSET))(this);
	}
};
