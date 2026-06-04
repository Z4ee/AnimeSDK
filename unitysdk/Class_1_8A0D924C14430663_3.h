#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_8A0D924C14430663_3__CTOR_OFFSET UNITYSDK_OFFSET(0x14460080)

inline static constexpr unsigned int Class_1_8A0D924C14430663_3_TypeDefinitionIndex = 65104;

class Class_1_8A0D924C14430663_3 : public ::System::Object
{
public:
	::System::Single Field_1_0; // 0x10
	::System::Boolean Field_1_1; // 0x14
	::System::Single Field_1_2; // 0x18
	::System::Single Field_1_3; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8A0D924C14430663_3__CTOR_OFFSET))(this);
	}
};
