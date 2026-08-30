#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_945ACFB1FEBC7A2C_8__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDEE420)

inline static constexpr unsigned int Class_1_945ACFB1FEBC7A2C_8_TypeDefinitionIndex = 42113;

class Class_1_945ACFB1FEBC7A2C_8 : public ::System::Object
{
public:
	::System::String* BNOAHOPNNAC; // 0x10
	::System::String* BFDAADMGNFD; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_945ACFB1FEBC7A2C_8__CTOR_OFFSET))(this);
	}
};
