#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_30B5FE4AA7ABAB8C__CTOR_OFFSET UNITYSDK_OFFSET(0xCFD2600)

inline static constexpr unsigned int Class_1_30B5FE4AA7ABAB8C_TypeDefinitionIndex = 55038;

class Class_1_30B5FE4AA7ABAB8C : public ::System::Object
{
public:
	::System::String* BMALIACHMOO; // 0x10
	::System::Boolean CPNNDFBDMCP; // 0x18
	::System::Single LAJKDIGIBOF; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30B5FE4AA7ABAB8C__CTOR_OFFSET))(this);
	}
};
