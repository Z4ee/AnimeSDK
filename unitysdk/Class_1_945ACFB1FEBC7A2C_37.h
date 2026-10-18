#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_945ACFB1FEBC7A2C_37__CTOR_OFFSET UNITYSDK_OFFSET(0xBBA0FD0)

inline static constexpr unsigned int Class_1_945ACFB1FEBC7A2C_37_TypeDefinitionIndex = 81013;

class Class_1_945ACFB1FEBC7A2C_37 : public ::System::Object
{
public:
	::System::String* IPKCFNKIDMB; // 0x10
	::System::String* KBEPAIAFLHL; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_945ACFB1FEBC7A2C_37__CTOR_OFFSET))(this);
	}
};
