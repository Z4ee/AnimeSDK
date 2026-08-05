#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_30B5FE4AA7ABAB8C_1__CTOR_OFFSET UNITYSDK_OFFSET(0x145F1300)

inline static constexpr unsigned int Class_1_30B5FE4AA7ABAB8C_1_TypeDefinitionIndex = 48497;

class Class_1_30B5FE4AA7ABAB8C_1 : public ::System::Object
{
public:
	::System::String* Field_1_1; // 0x10
	::System::Single Field_1_6; // 0x18
	::System::Single Field_1_7; // 0x1C
	::System::Single Field_1_5; // 0x20
	::System::Boolean Field_1_4; // 0x24
	::System::Single Field_1_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30B5FE4AA7ABAB8C_1__CTOR_OFFSET))(this);
	}
};
