#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_0_16E4307DCC419505_87;
class Class_1_DAC7B2C848C0E848;

#define STRUCT_2_F94D453A86612274_METHOD_2_6C94441F139A4B20_OFFSET UNITYSDK_OFFSET(0xA64C40)
#define STRUCT_2_F94D453A86612274__CTOR_OFFSET UNITYSDK_OFFSET(0xA64BC0)

inline static constexpr unsigned int Struct_2_F94D453A86612274_TypeDefinitionIndex = 28976;

struct alignas(8) Struct_2_F94D453A86612274
{
	::Class_1_DAC7B2C848C0E848* Field_2_0; // 0x10
	::System::UInt32 Field_2_1; // 0x18

	::System::Void _ctor(::Class_1_DAC7B2C848C0E848* a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_1_DAC7B2C848C0E848*, ::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_F94D453A86612274__CTOR_OFFSET))(this, a1, a2);
	}

	/*
	::System::Boolean Method_2_6C94441F139A4B20(::Class_0_16E4307DCC419505_87* a1, ::Struct_2_6DC25772A3AD0E96& a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_87*, ::Struct_2_6DC25772A3AD0E96&))((::PBYTE)hIl2Cpp + STRUCT_2_F94D453A86612274_METHOD_2_6C94441F139A4B20_OFFSET))(this, a1, a2);
	}
	*/
};
