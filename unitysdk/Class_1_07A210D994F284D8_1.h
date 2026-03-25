#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_07A210D994F284D8_1_CLEAR_OFFSET UNITYSDK_OFFSET(0x16876800)
#define CLASS_1_07A210D994F284D8_1__CTOR_OFFSET UNITYSDK_OFFSET(0x16876860)

inline static constexpr unsigned int Class_1_07A210D994F284D8_1_TypeDefinitionIndex = 33079;

class Class_1_07A210D994F284D8_1 : public ::System::Object
{
public:
	::System::UInt32 Field_1_3; // 0x10
	::System::UInt32 Field_1_2; // 0x14
	::System::UInt32 Field_1_1; // 0x18
	::System::Boolean Field_1_4; // 0x1C
	::System::UInt32 Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_07A210D994F284D8_1__CTOR_OFFSET))(this);
	}

	::System::Void Clear()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_07A210D994F284D8_1_CLEAR_OFFSET))(this);
	}
};
