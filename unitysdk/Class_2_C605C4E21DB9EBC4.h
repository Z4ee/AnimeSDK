#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define CLASS_2_C605C4E21DB9EBC4__CTOR_OFFSET UNITYSDK_OFFSET(0x16CF7010)

inline static constexpr unsigned int Class_2_C605C4E21DB9EBC4_TypeDefinitionIndex = 44336;

class Class_2_C605C4E21DB9EBC4 : public ::System::Attribute
{
public:
	::System::String* Field_2_4; // 0x10
	::System::String* Field_2_3; // 0x18
	::System::Boolean Field_2_2; // 0x20
	::System::Boolean Field_2_1; // 0x21
	::System::Boolean Field_2_0; // 0x22

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C605C4E21DB9EBC4__CTOR_OFFSET))(this);
	}
};
