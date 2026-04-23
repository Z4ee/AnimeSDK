#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_8A0D924C14430663__CTOR_OFFSET UNITYSDK_OFFSET(0x17E679B0)

inline static constexpr unsigned int Class_1_8A0D924C14430663_TypeDefinitionIndex = 38599;

class Class_1_8A0D924C14430663 : public ::System::Object
{
public:
	::System::Single Field_1_4; // 0x10
	::System::Single Field_1_2; // 0x14
	::System::Single Field_1_1; // 0x18
	::System::Boolean Field_1_0; // 0x1C
	::System::Boolean Field_1_3; // 0x1D

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_8A0D924C14430663__CTOR_OFFSET))(this);
	}
};
