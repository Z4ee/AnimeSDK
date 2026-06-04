#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_30B5FE4AA7ABAB8C__CTOR_OFFSET UNITYSDK_OFFSET(0xBA10B40)

inline static constexpr unsigned int Class_1_30B5FE4AA7ABAB8C_TypeDefinitionIndex = 51256;

class Class_1_30B5FE4AA7ABAB8C : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::Boolean Field_1_1; // 0x18
	::System::Single Field_1_2; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_30B5FE4AA7ABAB8C__CTOR_OFFSET))(this);
	}
};
