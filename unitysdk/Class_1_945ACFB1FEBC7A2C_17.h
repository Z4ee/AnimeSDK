#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_945ACFB1FEBC7A2C_17__CTOR_OFFSET UNITYSDK_OFFSET(0xE259000)

inline static constexpr unsigned int Class_1_945ACFB1FEBC7A2C_17_TypeDefinitionIndex = 48933;

class Class_1_945ACFB1FEBC7A2C_17 : public ::System::Object
{
public:
	::System::String* Label; // 0x10
	::System::String* Id; // 0x18
	::System::String* CliSlug; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_945ACFB1FEBC7A2C_17__CTOR_OFFSET))(this);
	}
};
