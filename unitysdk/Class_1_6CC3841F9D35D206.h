#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_6CC3841F9D35D206_Enum_3_4FDDEF7485846811.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_6CC3841F9D35D206__CTOR_OFFSET UNITYSDK_OFFSET(0x18879780)

inline static constexpr unsigned int Class_1_6CC3841F9D35D206_TypeDefinitionIndex = 72596;

class Class_1_6CC3841F9D35D206 : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::Class_1_6CC3841F9D35D206_Enum_3_4FDDEF7485846811 Field_1_1; // 0x18
	::System::Boolean Field_1_3; // 0x1C
	::System::Int32 Field_1_2; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_6CC3841F9D35D206__CTOR_OFFSET))(this);
	}
};
