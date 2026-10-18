#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_945ACFB1FEBC7A2C_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1EC3BCD0)

inline static constexpr unsigned int Class_1_945ACFB1FEBC7A2C_2_TypeDefinitionIndex = 35205;

class Class_1_945ACFB1FEBC7A2C_2 : public ::System::Object
{
public:
	::System::String* BGKCBFBIJJL; // 0x10
	::System::String* JNHJEBCAJGG; // 0x18
	::System::String* PJOCGDJHEMJ; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_945ACFB1FEBC7A2C_2__CTOR_OFFSET))(this);
	}
};
