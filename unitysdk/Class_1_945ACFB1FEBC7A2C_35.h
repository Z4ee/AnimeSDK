#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_945ACFB1FEBC7A2C_35__CTOR_OFFSET UNITYSDK_OFFSET(0x162B42F0)

inline static constexpr unsigned int Class_1_945ACFB1FEBC7A2C_35_TypeDefinitionIndex = 69354;

class Class_1_945ACFB1FEBC7A2C_35 : public ::System::Object
{
public:
	::System::String* BABELILGFOO; // 0x10
	::System::String* AABNPBGMOFN; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_945ACFB1FEBC7A2C_35__CTOR_OFFSET))(this);
	}
};
