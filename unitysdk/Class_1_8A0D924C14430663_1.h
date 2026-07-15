#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_8A0D924C14430663_1__CTOR_OFFSET UNITYSDK_OFFSET(0x180E4140)

inline static constexpr unsigned int Class_1_8A0D924C14430663_1_TypeDefinitionIndex = 40388;

class Class_1_8A0D924C14430663_1 : public ::System::Object
{
public:
	::System::Boolean Field_1_0; // 0x10
	::System::Single Field_1_1; // 0x14

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8A0D924C14430663_1__CTOR_OFFSET))(this);
	}
};
