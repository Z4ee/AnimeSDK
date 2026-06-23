#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_945ACFB1FEBC7A2C_METHOD_1_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x11410110)
#define CLASS_1_945ACFB1FEBC7A2C__CTOR_OFFSET UNITYSDK_OFFSET(0x11410180)

inline static constexpr unsigned int Class_1_945ACFB1FEBC7A2C_TypeDefinitionIndex = 72321;

class Class_1_945ACFB1FEBC7A2C : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_945ACFB1FEBC7A2C__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_88B60F3B95FAA4F1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_945ACFB1FEBC7A2C_METHOD_1_88B60F3B95FAA4F1_OFFSET))(this);
	}
};
