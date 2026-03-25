#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_07A210D994F284D8__CTOR_OFFSET UNITYSDK_OFFSET(0x16876AB0)

inline static constexpr unsigned int Class_1_07A210D994F284D8_TypeDefinitionIndex = 32264;

class Class_1_07A210D994F284D8 : public ::System::Object
{
public:
	::System::UInt32 Field_1_1; // 0x10
	::System::Boolean Field_1_0; // 0x14
	::System::Boolean Field_1_2; // 0x15

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_07A210D994F284D8__CTOR_OFFSET))(this);
	}
};
