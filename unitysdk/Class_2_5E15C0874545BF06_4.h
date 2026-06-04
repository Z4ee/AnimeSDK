#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define CLASS_2_5E15C0874545BF06_4__CTOR_OFFSET UNITYSDK_OFFSET(0x19D6DA40)

inline static constexpr unsigned int Class_2_5E15C0874545BF06_4_TypeDefinitionIndex = 23663;

class Class_2_5E15C0874545BF06_4 : public ::System::Attribute
{
public:
	::System::String* Field_2_0; // 0x10
	::System::String* Field_2_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5E15C0874545BF06_4__CTOR_OFFSET))(this);
	}
};
