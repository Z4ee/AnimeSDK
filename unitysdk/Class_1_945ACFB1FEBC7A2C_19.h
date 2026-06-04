#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_945ACFB1FEBC7A2C_19__CTOR_OFFSET UNITYSDK_OFFSET(0xB76C100)

inline static constexpr unsigned int Class_1_945ACFB1FEBC7A2C_19_TypeDefinitionIndex = 51924;

class Class_1_945ACFB1FEBC7A2C_19 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_945ACFB1FEBC7A2C_19__CTOR_OFFSET))(this);
	}
};
