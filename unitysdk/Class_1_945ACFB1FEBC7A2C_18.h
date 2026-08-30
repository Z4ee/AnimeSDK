#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_945ACFB1FEBC7A2C_18__CTOR_OFFSET UNITYSDK_OFFSET(0x18CEFFE0)

inline static constexpr unsigned int Class_1_945ACFB1FEBC7A2C_18_TypeDefinitionIndex = 49376;

class Class_1_945ACFB1FEBC7A2C_18 : public ::System::Object
{
public:
	::System::String* Id; // 0x10
	::System::String* Label; // 0x18
	::System::String* CliSlug; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_945ACFB1FEBC7A2C_18__CTOR_OFFSET))(this);
	}
};
