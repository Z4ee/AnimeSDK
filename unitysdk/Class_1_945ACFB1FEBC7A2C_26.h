#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_945ACFB1FEBC7A2C_26__CTOR_OFFSET UNITYSDK_OFFSET(0xAC6CAB0)

inline static constexpr unsigned int Class_1_945ACFB1FEBC7A2C_26_TypeDefinitionIndex = 52603;

class Class_1_945ACFB1FEBC7A2C_26 : public ::System::Object
{
public:
	::System::String* CdnContent; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_945ACFB1FEBC7A2C_26__CTOR_OFFSET))(this);
	}
};
