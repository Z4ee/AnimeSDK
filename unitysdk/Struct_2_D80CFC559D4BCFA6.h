#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_D80CFC559D4BCFA6_METHOD_2_F5599B7DA8E7E53C_OFFSET UNITYSDK_OFFSET(0x3A020C0)

inline static constexpr unsigned int Struct_2_D80CFC559D4BCFA6_TypeDefinitionIndex = 40785;

struct alignas(4) Struct_2_D80CFC559D4BCFA6
{
	::System::Boolean Field_2_0; // 0x10
	::System::Int32 Field_2_1; // 0x14
	::System::Int32 Field_2_2; // 0x18
	::System::Single Field_2_3; // 0x1C
	::System::Int32 Field_2_4; // 0x20
	::System::Single Field_2_5; // 0x24
	::System::Boolean Field_2_6; // 0x28
	::System::Single Field_2_7; // 0x2C
	::System::Boolean Field_2_8; // 0x30

	::System::Int32 Method_2_F5599B7DA8E7E53C()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_D80CFC559D4BCFA6_METHOD_2_F5599B7DA8E7E53C_OFFSET))(this);
	}
};
