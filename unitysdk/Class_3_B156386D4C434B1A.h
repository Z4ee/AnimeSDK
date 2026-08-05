#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A48F3719AA1CF200_1.h"
#include "unitysdk/Struct_2_E614D3B245F96744.h"

#define CLASS_3_B156386D4C434B1A__CTOR_OFFSET UNITYSDK_OFFSET(0x1F040F00)

inline static constexpr unsigned int Class_3_B156386D4C434B1A_TypeDefinitionIndex = 93077;

class Class_3_B156386D4C434B1A : public ::Class_2_A48F3719AA1CF200_1
{
public:
	::System::Int32 Field_3_0; // 0x10
	::Struct_2_E614D3B245F96744 Field_3_6; // 0x14
	::System::Int32 Field_3_7; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B156386D4C434B1A__CTOR_OFFSET))(this);
	}
};
