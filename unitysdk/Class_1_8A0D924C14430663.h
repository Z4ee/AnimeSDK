#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_8A0D924C14430663__CTOR_OFFSET UNITYSDK_OFFSET(0x153EF670)

inline static constexpr unsigned int Class_1_8A0D924C14430663_TypeDefinitionIndex = 42667;

class Class_1_8A0D924C14430663 : public ::System::Object
{
public:
	::System::Single Field_1_7; // 0x10
	::System::Boolean Field_1_0; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8A0D924C14430663__CTOR_OFFSET))(this);
	}
};
