#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_8A0D924C14430663__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF40810)

inline static constexpr unsigned int Class_1_8A0D924C14430663_TypeDefinitionIndex = 40175;

class Class_1_8A0D924C14430663 : public ::System::Object
{
public:
	::System::Boolean Field_1_0; // 0x10
	::System::Boolean Field_1_1; // 0x11
	::System::Single Field_1_2; // 0x14
	::System::Single Field_1_3; // 0x18
	::System::Single Field_1_4; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8A0D924C14430663__CTOR_OFFSET))(this);
	}
};
