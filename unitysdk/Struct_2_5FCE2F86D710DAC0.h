#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_E170595E038BBC64.h"
#include "unitysdk/MoleMole/EntityHandle.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_5FCE2F86D710DAC0_METHOD_2_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0x782CF0)

inline static constexpr unsigned int Struct_2_5FCE2F86D710DAC0_TypeDefinitionIndex = 78306;

struct alignas(8) Struct_2_5FCE2F86D710DAC0
{
	::Enum_3_E170595E038BBC64 Field_2_1; // 0x10
	::System::Int32 Field_2_0; // 0x14
	::MoleMole::EntityHandle Field_2_7; // 0x18

	::System::Boolean Method_2_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_5FCE2F86D710DAC0_METHOD_2_A3FAE12D7B6ACD62_OFFSET))(this);
	}
};
