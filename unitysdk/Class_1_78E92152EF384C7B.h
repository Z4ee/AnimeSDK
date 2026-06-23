#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define CLASS_1_78E92152EF384C7B__CTOR_OFFSET UNITYSDK_OFFSET(0xD95FA00)

inline static constexpr unsigned int Class_1_78E92152EF384C7B_TypeDefinitionIndex = 63921;

class Class_1_78E92152EF384C7B : public ::System::Object
{
public:
	::System::String* Field_1_0; // 0x10
	::System::Double Field_1_2; // 0x18
	::System::Double Field_1_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_78E92152EF384C7B__CTOR_OFFSET))(this);
	}
};
