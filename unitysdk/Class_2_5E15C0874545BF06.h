#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define CLASS_2_5E15C0874545BF06__CTOR_OFFSET UNITYSDK_OFFSET(0x14908720)

inline static constexpr unsigned int Class_2_5E15C0874545BF06_TypeDefinitionIndex = 54052;

class Class_2_5E15C0874545BF06 : public ::System::Attribute
{
public:
	::System::String* Field_2_0; // 0x10
	::System::String* Field_2_7; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5E15C0874545BF06__CTOR_OFFSET))(this);
	}
};
