#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_945ACFB1FEBC7A2C_5__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3EEF70)

inline static constexpr unsigned int Class_1_945ACFB1FEBC7A2C_5_TypeDefinitionIndex = 40510;

class Class_1_945ACFB1FEBC7A2C_5 : public ::System::Object
{
public:
	::System::String* OENAMINOLLF; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_945ACFB1FEBC7A2C_5__CTOR_OFFSET))(this);
	}
};
