#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A48F3719AA1CF200.h"

#define CLASS_3_C287DAAD4C733A89_8__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB8E960)

inline static constexpr unsigned int Class_3_C287DAAD4C733A89_8_TypeDefinitionIndex = 83324;

class Class_3_C287DAAD4C733A89_8 : public ::Class_2_A48F3719AA1CF200
{
public:
	::System::UInt32 Field_3_2; // 0x10
	::System::UInt32 Field_3_0; // 0x14
	::System::UInt32 Field_3_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_C287DAAD4C733A89_8__CTOR_OFFSET))(this);
	}
};
