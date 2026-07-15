#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_07A210D994F284D8_5_METHOD_1_9B39F7D7C1FF70D6_OFFSET UNITYSDK_OFFSET(0x14FC1210)
#define CLASS_1_07A210D994F284D8_5__CTOR_OFFSET UNITYSDK_OFFSET(0x14FC1280)

inline static constexpr unsigned int Class_1_07A210D994F284D8_5_TypeDefinitionIndex = 53774;

class Class_1_07A210D994F284D8_5 : public ::System::Object
{
public:
	::System::Boolean Field_1_0; // 0x10
	::System::UInt32 Field_1_1; // 0x14
	::System::UInt32 Field_1_2; // 0x18
	::System::UInt32 Field_1_3; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_07A210D994F284D8_5__CTOR_OFFSET))(this);
	}

	::Class_1_07A210D994F284D8_5* Method_1_9B39F7D7C1FF70D6()
	{
		return ((::Class_1_07A210D994F284D8_5*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_07A210D994F284D8_5_METHOD_1_9B39F7D7C1FF70D6_OFFSET))(this);
	}
};
