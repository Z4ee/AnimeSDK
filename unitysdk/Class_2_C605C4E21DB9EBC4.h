#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define CLASS_2_C605C4E21DB9EBC4__CTOR_OFFSET UNITYSDK_OFFSET(0x169D57B0)

inline static constexpr unsigned int Class_2_C605C4E21DB9EBC4_TypeDefinitionIndex = 57450;

class Class_2_C605C4E21DB9EBC4 : public ::System::Attribute
{
public:
	::System::String* Field_2_6; // 0x10
	::System::String* Field_2_5; // 0x18
	::System::Boolean Field_2_7; // 0x20
	::System::Boolean Field_2_0; // 0x21
	::System::Boolean Field_2_1; // 0x22

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C605C4E21DB9EBC4__CTOR_OFFSET))(this);
	}
};
