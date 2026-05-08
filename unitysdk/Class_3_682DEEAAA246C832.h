#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A48F3719AA1CF200_39.h"
#include "unitysdk/Struct_2_E614D3B245F96744.h"

class Class_2_42522DB3A96B6DE7;

#define CLASS_3_682DEEAAA246C832__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF5B050)

inline static constexpr unsigned int Class_3_682DEEAAA246C832_TypeDefinitionIndex = 83310;

class Class_3_682DEEAAA246C832 : public ::Class_2_A48F3719AA1CF200_39
{
public:
	::Class_2_42522DB3A96B6DE7* Field_3_0; // 0x20
	::Struct_2_E614D3B245F96744 Field_3_1; // 0x28
	::Struct_2_E614D3B245F96744 Field_3_2; // 0x34
	::System::UInt64 Field_3_3; // 0x40
	::System::Single Field_3_4; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_682DEEAAA246C832__CTOR_OFFSET))(this);
	}
};
