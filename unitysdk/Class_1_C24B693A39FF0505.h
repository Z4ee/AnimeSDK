#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_64AF41BC9BBBF913.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_C24B693A39FF0505__CTOR_OFFSET UNITYSDK_OFFSET(0x14499ED0)

inline static constexpr unsigned int Class_1_C24B693A39FF0505_TypeDefinitionIndex = 45809;

class Class_1_C24B693A39FF0505 : public ::System::Object
{
public:
	::System::Int32 Field_1_0; // 0x10
	::System::Boolean Field_1_1; // 0x14
	::Enum_3_64AF41BC9BBBF913 Field_1_4; // 0x15
	::Enum_3_64AF41BC9BBBF913 Field_1_3; // 0x16
	::System::Boolean Field_1_2; // 0x17

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C24B693A39FF0505__CTOR_OFFSET))(this);
	}
};
