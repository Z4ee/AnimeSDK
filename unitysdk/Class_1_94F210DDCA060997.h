#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_94F210DDCA060997__CTOR_OFFSET UNITYSDK_OFFSET(0x18B8F210)

inline static constexpr unsigned int Class_1_94F210DDCA060997_TypeDefinitionIndex = 40335;

class Class_1_94F210DDCA060997 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::String* Field_1_1; // 0x18
	::System::String* Field_1_2; // 0x20
	::System::Single Field_1_3; // 0x28
	::System::Single Field_1_4; // 0x2C
	::System::Int32 Field_1_5; // 0x30
	::System::Int32 Field_1_6; // 0x34
	::System::UInt32 Field_1_7; // 0x38
	::System::Single Field_1_8; // 0x3C
	::System::Single Field_1_9; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_94F210DDCA060997__CTOR_OFFSET))(this);
	}
};
