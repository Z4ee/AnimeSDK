#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_01B14DDCD912426D_METHOD_2_FF7B2911BBACA4A9_1_OFFSET UNITYSDK_OFFSET(0x757B10)
#define STRUCT_2_01B14DDCD912426D_METHOD_2_FF7B2911BBACA4A9_OFFSET UNITYSDK_OFFSET(0x757A90)

inline static constexpr unsigned int Struct_2_01B14DDCD912426D_TypeDefinitionIndex = 73083;

struct alignas(8) Struct_2_01B14DDCD912426D
{
	::System::UInt16 Field_2_0; // 0x10
	::System::Int32 Field_2_1; // 0x14
	::System::Int32 Field_2_2; // 0x18
	::System::Double Field_2_3; // 0x20
	::System::Single Field_2_4; // 0x28
	::System::Single Field_2_5; // 0x2C

	::System::Single Method_2_FF7B2911BBACA4A9()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_01B14DDCD912426D_METHOD_2_FF7B2911BBACA4A9_OFFSET))(this);
	}

	::System::Single Method_2_FF7B2911BBACA4A9_1()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_01B14DDCD912426D_METHOD_2_FF7B2911BBACA4A9_1_OFFSET))(this);
	}
};
