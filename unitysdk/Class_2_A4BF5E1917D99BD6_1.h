#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C5CEA8DD589BD643.h"
#include "unitysdk/Enum_3_AB67DB4CBA067BE9.h"
#include "unitysdk/Struct_2_E614D3B245F96744.h"

#define CLASS_2_A4BF5E1917D99BD6_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1E33B6A0)

inline static constexpr unsigned int Class_2_A4BF5E1917D99BD6_1_TypeDefinitionIndex = 93016;

class Class_2_A4BF5E1917D99BD6_1 : public ::Class_1_C5CEA8DD589BD643
{
public:
	::Struct_2_E614D3B245F96744 Field_2_0; // 0x20
	::System::Int32 Field_2_7; // 0x28
	::Enum_3_AB67DB4CBA067BE9 Field_2_6; // 0x2C
	::System::UInt32 Field_2_2; // 0x30
	::System::Int32 Field_2_1; // 0x34

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A4BF5E1917D99BD6_1__CTOR_OFFSET))(this);
	}
};
