#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_B71390AB49608E52.h"
#include "unitysdk/System/ValueType.h"

class Class_1_D4F8C41AAD377B89;

#define STRUCT_2_B00164FCF88F89F6_METHOD_2_A087B20BA9527AC0_OFFSET UNITYSDK_OFFSET(0x6F39B0)

inline static constexpr unsigned int Struct_2_B00164FCF88F89F6_TypeDefinitionIndex = 56047;

struct alignas(8) Struct_2_B00164FCF88F89F6
{
	::Class_1_D4F8C41AAD377B89* Field_2_0; // 0x10
	::System::Int32 Field_2_1; // 0x18
	::Enum_3_B71390AB49608E52 Field_2_2; // 0x1C

	::System::Int32 Method_2_A087B20BA9527AC0()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_B00164FCF88F89F6_METHOD_2_A087B20BA9527AC0_OFFSET))(this);
	}
};
