#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_945ACFB1FEBC7A2C_34__CTOR_OFFSET UNITYSDK_OFFSET(0x14E59090)

inline static constexpr unsigned int Class_1_945ACFB1FEBC7A2C_34_TypeDefinitionIndex = 64783;

class Class_1_945ACFB1FEBC7A2C_34 : public ::System::Object
{
public:
	::System::String* BuildRefID; // 0x10
	::System::String* IsFavoriteStr; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_945ACFB1FEBC7A2C_34__CTOR_OFFSET))(this);
	}
};
