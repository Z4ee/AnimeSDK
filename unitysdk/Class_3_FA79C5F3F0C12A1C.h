#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A48F3719AA1CF200_1.h"
#include "unitysdk/Struct_2_17D02716D1222199_3.h"

class Class_2_2EFD92B0794351AA_2;

#define CLASS_3_FA79C5F3F0C12A1C__CTOR_OFFSET UNITYSDK_OFFSET(0x1E2B68F0)

inline static constexpr unsigned int Class_3_FA79C5F3F0C12A1C_TypeDefinitionIndex = 93140;

class Class_3_FA79C5F3F0C12A1C : public ::Class_2_A48F3719AA1CF200_1
{
public:
	::Class_2_2EFD92B0794351AA_2* Field_3_6; // 0x10
	::System::Single Field_3_7; // 0x18
	::Struct_2_17D02716D1222199_3 Field_3_5; // 0x1C
	::System::Int32 Field_3_0; // 0x24

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_FA79C5F3F0C12A1C__CTOR_OFFSET))(this);
	}
};
