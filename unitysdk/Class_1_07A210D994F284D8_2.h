#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_07A210D994F284D8_2_CLEAR_OFFSET UNITYSDK_OFFSET(0x1B10C610)
#define CLASS_1_07A210D994F284D8_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1B10C670)

inline static constexpr unsigned int Class_1_07A210D994F284D8_2_TypeDefinitionIndex = 40446;

class Class_1_07A210D994F284D8_2 : public ::System::Object
{
public:
	::System::UInt32 Field_1_0; // 0x10
	::System::Boolean Field_1_1; // 0x14
	::System::UInt32 Field_1_2; // 0x18
	::System::UInt32 Field_1_3; // 0x1C
	::System::UInt32 Field_1_4; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_07A210D994F284D8_2__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_07A210D994F284D8_2_CLEAR_OFFSET))(this);
	}
};
