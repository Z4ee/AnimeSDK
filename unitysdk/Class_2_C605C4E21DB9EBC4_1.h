#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define CLASS_2_C605C4E21DB9EBC4_1__CTOR_OFFSET UNITYSDK_OFFSET(0xD7EFF00)

inline static constexpr unsigned int Class_2_C605C4E21DB9EBC4_1_TypeDefinitionIndex = 48678;

class Class_2_C605C4E21DB9EBC4_1 : public ::System::Attribute
{
public:
	::System::String* Field_2_0; // 0x10
	::System::String* Field_2_1; // 0x18
	::System::String* Field_2_2; // 0x20
	::System::String* Field_2_3; // 0x28
	::System::String* Field_2_4; // 0x30
	::System::String* Field_2_5; // 0x38
	::System::Boolean Field_2_6; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C605C4E21DB9EBC4_1__CTOR_OFFSET))(this);
	}
};
