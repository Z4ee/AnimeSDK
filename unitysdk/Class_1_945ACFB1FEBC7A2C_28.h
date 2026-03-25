#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_945ACFB1FEBC7A2C_28__CTOR_OFFSET UNITYSDK_OFFSET(0x117B2180)

inline static constexpr unsigned int Class_1_945ACFB1FEBC7A2C_28_TypeDefinitionIndex = 55285;

class Class_1_945ACFB1FEBC7A2C_28 : public ::System::Object
{
public:
	::System::String* BuildRefID; // 0x10
	::System::String* IsAppliedStr; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_945ACFB1FEBC7A2C_28__CTOR_OFFSET))(this);
	}
};
