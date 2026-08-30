#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_945ACFB1FEBC7A2C_19__CTOR_OFFSET UNITYSDK_OFFSET(0xC098430)

inline static constexpr unsigned int Class_1_945ACFB1FEBC7A2C_19_TypeDefinitionIndex = 49377;

class Class_1_945ACFB1FEBC7A2C_19 : public ::System::Object
{
public:
	::System::String* Theme; // 0x10
	::System::String* Additional; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_945ACFB1FEBC7A2C_19__CTOR_OFFSET))(this);
	}
};
