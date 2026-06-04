#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_945ACFB1FEBC7A2C_22__CTOR_OFFSET UNITYSDK_OFFSET(0x13FF5920)

inline static constexpr unsigned int Class_1_945ACFB1FEBC7A2C_22_TypeDefinitionIndex = 52695;

class Class_1_945ACFB1FEBC7A2C_22 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_945ACFB1FEBC7A2C_22__CTOR_OFFSET))(this);
	}
};
