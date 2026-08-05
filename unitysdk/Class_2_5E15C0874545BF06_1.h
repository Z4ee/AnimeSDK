#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define CLASS_2_5E15C0874545BF06_1__CTOR_OFFSET UNITYSDK_OFFSET(0x178D0D80)

inline static constexpr unsigned int Class_2_5E15C0874545BF06_1_TypeDefinitionIndex = 79821;

class Class_2_5E15C0874545BF06_1 : public ::System::Attribute
{
public:
	::System::String* Field_2_0; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5E15C0874545BF06_1__CTOR_OFFSET))(this);
	}
};
