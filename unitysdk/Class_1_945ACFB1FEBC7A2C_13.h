#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_945ACFB1FEBC7A2C_13__CTOR_OFFSET UNITYSDK_OFFSET(0x16A40EE0)

inline static constexpr unsigned int Class_1_945ACFB1FEBC7A2C_13_TypeDefinitionIndex = 32706;

class Class_1_945ACFB1FEBC7A2C_13 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_945ACFB1FEBC7A2C_13__CTOR_OFFSET))(this);
	}
};
