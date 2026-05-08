#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_945ACFB1FEBC7A2C_11_METHOD_1_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x13A15F20)
#define CLASS_1_945ACFB1FEBC7A2C_11__CTOR_OFFSET UNITYSDK_OFFSET(0x13A15F90)

inline static constexpr unsigned int Class_1_945ACFB1FEBC7A2C_11_TypeDefinitionIndex = 70359;

class Class_1_945ACFB1FEBC7A2C_11 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_945ACFB1FEBC7A2C_11__CTOR_OFFSET))(this);
	}

	::System::String* Method_1_88B60F3B95FAA4F1()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_945ACFB1FEBC7A2C_11_METHOD_1_88B60F3B95FAA4F1_OFFSET))(this);
	}
};
