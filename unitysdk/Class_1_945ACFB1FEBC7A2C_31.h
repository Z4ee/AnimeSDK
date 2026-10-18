#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_945ACFB1FEBC7A2C_31__CTOR_OFFSET UNITYSDK_OFFSET(0xBB93EE0)

inline static constexpr unsigned int Class_1_945ACFB1FEBC7A2C_31_TypeDefinitionIndex = 67783;

class Class_1_945ACFB1FEBC7A2C_31 : public ::System::Object
{
public:
	::System::String* IsAppliedStr; // 0x10
	::System::String* BuildRefID; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_945ACFB1FEBC7A2C_31__CTOR_OFFSET))(this);
	}
};
