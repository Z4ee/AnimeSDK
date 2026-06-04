#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_945ACFB1FEBC7A2C_30__CTOR_OFFSET UNITYSDK_OFFSET(0xAB873D0)

inline static constexpr unsigned int Class_1_945ACFB1FEBC7A2C_30_TypeDefinitionIndex = 63414;

class Class_1_945ACFB1FEBC7A2C_30 : public ::System::Object
{
public:
	::System::String* BuildRefID; // 0x10
	::System::String* IsLikeStr; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_945ACFB1FEBC7A2C_30__CTOR_OFFSET))(this);
	}
};
