#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define CLASS_2_5E15C0874545BF06_6__CTOR_OFFSET UNITYSDK_OFFSET(0x1649CA40)

inline static constexpr unsigned int Class_2_5E15C0874545BF06_6_TypeDefinitionIndex = 49693;

class Class_2_5E15C0874545BF06_6 : public ::System::Attribute
{
public:
	::System::String* Field_2_0; // 0x10
	::System::String* Field_2_1; // 0x18
	::System::String* Field_2_2; // 0x20
	::System::String* Field_2_3; // 0x28
	::System::String* Field_2_4; // 0x30
	::System::String* Field_2_5; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5E15C0874545BF06_6__CTOR_OFFSET))(this);
	}
};
