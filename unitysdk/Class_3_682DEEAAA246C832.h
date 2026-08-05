#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A48F3719AA1CF200_38.h"
#include "unitysdk/Struct_2_E614D3B245F96744_1.h"

class Class_2_42522DB3A96B6DE7;

#define CLASS_3_682DEEAAA246C832__CTOR_OFFSET UNITYSDK_OFFSET(0x1DF96960)

inline static constexpr unsigned int Class_3_682DEEAAA246C832_TypeDefinitionIndex = 92280;

class Class_3_682DEEAAA246C832 : public ::Class_2_A48F3719AA1CF200_38
{
public:
	::Class_2_42522DB3A96B6DE7* Field_3_0; // 0x20
	::System::Single Field_3_4; // 0x28
	::Struct_2_E614D3B245F96744_1 Field_3_7; // 0x2C
	::System::UInt64 Field_3_5; // 0x38
	::Struct_2_E614D3B245F96744_1 Field_3_6; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_682DEEAAA246C832__CTOR_OFFSET))(this);
	}
};
