#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_32770405D1E18A2A_METHOD_2_A3FAE12D7B6ACD62_OFFSET UNITYSDK_OFFSET(0x8D4440)
#define STRUCT_2_32770405D1E18A2A_METHOD_2_DAC9219D09D338F5_OFFSET UNITYSDK_OFFSET(0x8D4430)

inline static constexpr unsigned int Struct_2_32770405D1E18A2A_TypeDefinitionIndex = 59014;

struct alignas(8) Struct_2_32770405D1E18A2A
{
	::Il2CppArray<::System::Boolean>* Field_2_1; // 0x10
	::Il2CppArray<::System::Single>* Field_2_0; // 0x18
	::System::Int32 Field_2_7; // 0x20

	::System::Single Method_2_DAC9219D09D338F5()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_32770405D1E18A2A_METHOD_2_DAC9219D09D338F5_OFFSET))(this);
	}

	::System::Boolean Method_2_A3FAE12D7B6ACD62()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_32770405D1E18A2A_METHOD_2_A3FAE12D7B6ACD62_OFFSET))(this);
	}
};
