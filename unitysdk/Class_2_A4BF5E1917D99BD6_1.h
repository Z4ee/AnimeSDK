#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C5CEA8DD589BD643.h"
#include "unitysdk/Enum_3_AB67DB4CBA067BE9.h"
#include "unitysdk/Struct_2_E614D3B245F96744_1.h"

#define CLASS_2_A4BF5E1917D99BD6_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3E2160)

inline static constexpr unsigned int Class_2_A4BF5E1917D99BD6_1_TypeDefinitionIndex = 83783;

class Class_2_A4BF5E1917D99BD6_1 : public ::Class_1_C5CEA8DD589BD643
{
public:
	::System::Int32 Field_2_1; // 0x20
	::Struct_2_E614D3B245F96744_1 Field_2_2; // 0x24
	::System::UInt32 Field_2_0; // 0x2C
	::Enum_3_AB67DB4CBA067BE9 Field_2_4; // 0x30
	::System::Int32 Field_2_3; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A4BF5E1917D99BD6_1__CTOR_OFFSET))(this);
	}
};
