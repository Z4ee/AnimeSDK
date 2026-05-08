#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/DateTimeOffset.h"
#include "unitysdk/System/DayOfWeek.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_0F7BD0C64BB0172A__CTOR_OFFSET UNITYSDK_OFFSET(0x16ADB3E0)

inline static constexpr unsigned int Class_1_0F7BD0C64BB0172A_TypeDefinitionIndex = 48128;

class Class_1_0F7BD0C64BB0172A : public ::System::Object
{
public:
	::System::DateTimeOffset Field_1_3; // 0x10
	::System::Int32 Field_1_4; // 0x20
	::System::Int32 Field_1_1; // 0x24
	::System::Boolean Field_1_0; // 0x28
	::System::DayOfWeek Field_1_2; // 0x2C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_0F7BD0C64BB0172A__CTOR_OFFSET))(this);
	}
};
