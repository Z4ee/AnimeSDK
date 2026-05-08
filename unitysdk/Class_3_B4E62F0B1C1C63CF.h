#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A48F3719AA1CF200.h"

class Class_3_8EA10EB78A87F0A7;

#define CLASS_3_B4E62F0B1C1C63CF__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4C4D50)

inline static constexpr unsigned int Class_3_B4E62F0B1C1C63CF_TypeDefinitionIndex = 83048;

class Class_3_B4E62F0B1C1C63CF : public ::Class_2_A48F3719AA1CF200
{
public:
	::Class_3_8EA10EB78A87F0A7* Field_3_3; // 0x10
	::System::UInt32 Field_3_0; // 0x18
	::System::UInt32 Field_3_1; // 0x1C
	::System::UInt32 Field_3_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_B4E62F0B1C1C63CF__CTOR_OFFSET))(this);
	}
};
