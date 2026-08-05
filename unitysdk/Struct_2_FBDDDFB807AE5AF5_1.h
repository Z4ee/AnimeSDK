#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_FBDDDFB807AE5AF5_1_METHOD_2_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0xA37090)

inline static constexpr unsigned int Struct_2_FBDDDFB807AE5AF5_1_TypeDefinitionIndex = 93454;

struct alignas(4) Struct_2_FBDDDFB807AE5AF5_1
{
	::System::UInt32 Field_2_0; // 0x10

	::System::String* Method_2_DA1BF2C227DC3D86()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_FBDDDFB807AE5AF5_1_METHOD_2_DA1BF2C227DC3D86_OFFSET))(this);
	}
};
