#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_945ACFB1FEBC7A2C_25_TOSTRING_OFFSET UNITYSDK_OFFSET(0x198775A0)
#define CLASS_1_945ACFB1FEBC7A2C_25__CTOR_OFFSET UNITYSDK_OFFSET(0x19877620)

inline static constexpr unsigned int Class_1_945ACFB1FEBC7A2C_25_TypeDefinitionIndex = 59769;

class Class_1_945ACFB1FEBC7A2C_25 : public ::System::Object
{
public:
	::System::String* AOPFJFGGHOL; // 0x10
	::System::String* EGFJKADNLPO; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_945ACFB1FEBC7A2C_25__CTOR_OFFSET))(this);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_945ACFB1FEBC7A2C_25_TOSTRING_OFFSET))(this);
	}
};
