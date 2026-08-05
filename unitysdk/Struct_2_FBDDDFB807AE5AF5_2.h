#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_FBDDDFB807AE5AF5_2_METHOD_2_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0xA97010)

inline static constexpr unsigned int Struct_2_FBDDDFB807AE5AF5_2_TypeDefinitionIndex = 93413;

struct alignas(4) Struct_2_FBDDDFB807AE5AF5_2
{
	::System::UInt32 Field_2_0; // 0x10

	::System::String* Method_2_DA1BF2C227DC3D86()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_FBDDDFB807AE5AF5_2_METHOD_2_DA1BF2C227DC3D86_OFFSET))(this);
	}
};
