#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_945ACFB1FEBC7A2C_10__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA003E0)

inline static constexpr unsigned int Class_1_945ACFB1FEBC7A2C_10_TypeDefinitionIndex = 42544;

class Class_1_945ACFB1FEBC7A2C_10 : public ::System::Object
{
public:
	::System::String* CELBFEDOGKO; // 0x10
	::System::String* BIOPPFFJPGI; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_945ACFB1FEBC7A2C_10__CTOR_OFFSET))(this);
	}
};
