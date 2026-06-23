#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_30B5FE4AA7ABAB8C__CTOR_OFFSET UNITYSDK_OFFSET(0x150902D0)

inline static constexpr unsigned int Class_1_30B5FE4AA7ABAB8C_TypeDefinitionIndex = 52785;

class Class_1_30B5FE4AA7ABAB8C : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::Single Field_1_1; // 0x18
	::System::Single Field_1_3; // 0x1C
	::System::Single Field_1_2; // 0x20
	::System::Single Field_1_4; // 0x24
	::System::Boolean Field_1_5; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30B5FE4AA7ABAB8C__CTOR_OFFSET))(this);
	}
};
