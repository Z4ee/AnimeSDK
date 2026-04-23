#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_07A210D994F284D8_4_METHOD_1_9B39F7D7C1FF70D6_OFFSET UNITYSDK_OFFSET(0x927B6E0)
#define CLASS_1_07A210D994F284D8_4__CTOR_OFFSET UNITYSDK_OFFSET(0x927B750)

inline static constexpr unsigned int Class_1_07A210D994F284D8_4_TypeDefinitionIndex = 51896;

class Class_1_07A210D994F284D8_4 : public ::System::Object
{
public:
	::System::UInt32 Field_1_0; // 0x10
	::System::UInt32 Field_1_1; // 0x14
	::System::UInt32 Field_1_2; // 0x18
	::System::Boolean Field_1_3; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_07A210D994F284D8_4__CTOR_OFFSET))(this);
	}

	::Class_1_07A210D994F284D8_4* Method_1_9B39F7D7C1FF70D6()
	{
		return ((::Class_1_07A210D994F284D8_4*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_07A210D994F284D8_4_METHOD_1_9B39F7D7C1FF70D6_OFFSET))(this);
	}
};
