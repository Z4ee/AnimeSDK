#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_7AB00BA8A0011B3D_METHOD_2_7A11106D60C5C746_OFFSET UNITYSDK_OFFSET(0x9BD5B0)

inline static constexpr unsigned int Struct_2_7AB00BA8A0011B3D_TypeDefinitionIndex = 91699;

struct alignas(4) Struct_2_7AB00BA8A0011B3D
{
	::System::UInt32 Field_2_2; // 0x10
	::System::Int32 Field_2_1; // 0x14
	::System::Int32 Field_2_0; // 0x18

	::System::String* Method_2_7A11106D60C5C746()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_7AB00BA8A0011B3D_METHOD_2_7A11106D60C5C746_OFFSET))(this);
	}
};
