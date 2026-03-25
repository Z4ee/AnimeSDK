#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_945ACFB1FEBC7A2C_18__CTOR_OFFSET UNITYSDK_OFFSET(0x8807ED0)

inline static constexpr unsigned int Class_1_945ACFB1FEBC7A2C_18_TypeDefinitionIndex = 44481;

class Class_1_945ACFB1FEBC7A2C_18 : public ::System::Object
{
public:
	::System::String* Field_1_1; // 0x10
	::System::String* Field_1_0; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_945ACFB1FEBC7A2C_18__CTOR_OFFSET))(this);
	}
};
