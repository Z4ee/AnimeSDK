#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_80FC707AAE5C2307_METHOD_2_02A3D10A9D535169_OFFSET UNITYSDK_OFFSET(0x7B19E0)

inline static constexpr unsigned int Struct_2_80FC707AAE5C2307_TypeDefinitionIndex = 82712;

struct alignas(4) Struct_2_80FC707AAE5C2307
{
	::System::Int16 Field_2_0; // 0x10
	::System::UInt16 Field_2_1; // 0x12
	::System::UInt32 Field_2_2; // 0x14
	::System::UInt32 Field_2_3; // 0x18

	::System::UInt32 Method_2_02A3D10A9D535169()
	{
		return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_80FC707AAE5C2307_METHOD_2_02A3D10A9D535169_OFFSET))(this);
	}
};
