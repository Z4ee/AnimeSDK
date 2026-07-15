#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_945ACFB1FEBC7A2C_36__CTOR_OFFSET UNITYSDK_OFFSET(0x14ACA210)

inline static constexpr unsigned int Class_1_945ACFB1FEBC7A2C_36_TypeDefinitionIndex = 68263;

class Class_1_945ACFB1FEBC7A2C_36 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18
	::System::String* Field_1_2; // 0x20
	::System::String* Field_1_3; // 0x28
	::System::String* Field_1_4; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_945ACFB1FEBC7A2C_36__CTOR_OFFSET))(this);
	}
};
