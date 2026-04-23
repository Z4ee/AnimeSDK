#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_945ACFB1FEBC7A2C_25__CTOR_OFFSET UNITYSDK_OFFSET(0xECC1380)

inline static constexpr unsigned int Class_1_945ACFB1FEBC7A2C_25_TypeDefinitionIndex = 57072;

class Class_1_945ACFB1FEBC7A2C_25 : public ::System::Object
{
public:
	::System::String* InviteCode; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_945ACFB1FEBC7A2C_25__CTOR_OFFSET))(this);
	}
};
