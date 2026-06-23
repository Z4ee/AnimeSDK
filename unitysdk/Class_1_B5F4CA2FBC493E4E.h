#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_B5F4CA2FBC493E4E__CTOR_OFFSET UNITYSDK_OFFSET(0x142B74D0)

inline static constexpr unsigned int Class_1_B5F4CA2FBC493E4E_TypeDefinitionIndex = 46562;

class Class_1_B5F4CA2FBC493E4E : public ::System::Object
{
public:
	::System::String* Field_1_1; // 0x10
	::System::String* Field_1_2; // 0x18
	::System::String* Field_1_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B5F4CA2FBC493E4E__CTOR_OFFSET))(this);
	}
};
