#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_07A210D994F284D8_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1AE2BB60)

inline static constexpr unsigned int Class_1_07A210D994F284D8_1_TypeDefinitionIndex = 39529;

class Class_1_07A210D994F284D8_1 : public ::System::Object
{
public:
	::System::Boolean Field_1_0; // 0x10
	::System::Boolean Field_1_1; // 0x11
	::System::UInt32 Field_1_2; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_07A210D994F284D8_1__CTOR_OFFSET))(this);
	}
};
