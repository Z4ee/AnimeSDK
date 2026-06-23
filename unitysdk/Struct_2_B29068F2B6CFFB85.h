#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_E614D3B245F96744_1.h"
#include "unitysdk/System/ValueType.h"

class Class_1_43BD383C98B4C0C5_10;

#define STRUCT_2_B29068F2B6CFFB85_METHOD_2_F0088C88851A7DFB_OFFSET UNITYSDK_OFFSET(0x2C1A40)

inline static constexpr unsigned int Struct_2_B29068F2B6CFFB85_TypeDefinitionIndex = 29026;

struct alignas(8) Struct_2_B29068F2B6CFFB85
{
	::Class_1_43BD383C98B4C0C5_10* Field_2_0; // 0x10
	::Struct_2_E614D3B245F96744_1 Field_2_1; // 0x18
	::Struct_2_E614D3B245F96744_1 Field_2_2; // 0x20
	::System::Int32 Field_2_3; // 0x28
	::System::Int32 Field_2_4; // 0x2C

	::System::Boolean Method_2_F0088C88851A7DFB()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_B29068F2B6CFFB85_METHOD_2_F0088C88851A7DFB_OFFSET))(this);
	}
};
