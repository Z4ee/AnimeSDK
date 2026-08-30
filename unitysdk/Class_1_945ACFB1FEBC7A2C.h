#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_945ACFB1FEBC7A2C__CTOR_OFFSET UNITYSDK_OFFSET(0x1CC11080)

inline static constexpr unsigned int Class_1_945ACFB1FEBC7A2C_TypeDefinitionIndex = 10832;

class Class_1_945ACFB1FEBC7A2C : public ::System::Object
{
public:
	::System::String* GGKGFABFGFE; // 0x10
	::System::String* CELOLDOGIJF; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_945ACFB1FEBC7A2C__CTOR_OFFSET))(this);
	}
};
