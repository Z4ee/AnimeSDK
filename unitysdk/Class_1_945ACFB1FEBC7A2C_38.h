#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_945ACFB1FEBC7A2C_38__CTOR_OFFSET UNITYSDK_OFFSET(0x1591FD50)

inline static constexpr unsigned int Class_1_945ACFB1FEBC7A2C_38_TypeDefinitionIndex = 79688;

class Class_1_945ACFB1FEBC7A2C_38 : public ::System::Object
{
public:
	::System::String* KBEPAIAFLHL; // 0x10
	::System::String* IPKCFNKIDMB; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_945ACFB1FEBC7A2C_38__CTOR_OFFSET))(this);
	}
};
