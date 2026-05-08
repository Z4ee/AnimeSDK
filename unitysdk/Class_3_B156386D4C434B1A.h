#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A48F3719AA1CF200.h"
#include "unitysdk/Struct_2_E614D3B245F96744_1.h"

#define CLASS_3_B156386D4C434B1A__CTOR_OFFSET UNITYSDK_OFFSET(0x1B3D8890)

inline static constexpr unsigned int Class_3_B156386D4C434B1A_TypeDefinitionIndex = 83362;

class Class_3_B156386D4C434B1A : public ::Class_2_A48F3719AA1CF200
{
public:
	::Struct_2_E614D3B245F96744_1 Field_3_2; // 0x10
	::System::Int32 Field_3_0; // 0x18
	::System::Int32 Field_3_1; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B156386D4C434B1A__CTOR_OFFSET))(this);
	}
};
