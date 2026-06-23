#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_4930D2C214CA4F0A_METHOD_2_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0x9CA420)

inline static constexpr unsigned int Struct_2_4930D2C214CA4F0A_TypeDefinitionIndex = 89297;

struct alignas(8) Struct_2_4930D2C214CA4F0A
{
	::System::UInt64 Field_2_0; // 0x10
	::System::Boolean Field_2_1; // 0x18

	::System::String* Method_2_DA1BF2C227DC3D86()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_4930D2C214CA4F0A_METHOD_2_DA1BF2C227DC3D86_OFFSET))(this);
	}
};
