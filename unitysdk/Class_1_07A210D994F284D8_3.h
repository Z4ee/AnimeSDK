#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_07A210D994F284D8_3__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF40820)

inline static constexpr unsigned int Class_1_07A210D994F284D8_3_TypeDefinitionIndex = 40277;

class Class_1_07A210D994F284D8_3 : public ::System::Object
{
public:
	::System::UInt32 Field_1_0; // 0x10
	::System::UInt32 Field_1_1; // 0x14
	::System::UInt32 Field_1_2; // 0x18
	::System::Boolean Field_1_3; // 0x1C
	::System::UInt32 Field_1_4; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_07A210D994F284D8_3__CTOR_OFFSET))(this);
	}
};
