#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define CLASS_2_5E15C0874545BF06_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1C8136E0)

inline static constexpr unsigned int Class_2_5E15C0874545BF06_1_TypeDefinitionIndex = 24709;

class Class_2_5E15C0874545BF06_1 : public ::System::Attribute
{
public:
	::System::String* DDMIAOHELDE; // 0x10
	::System::String* NGMIIDIIPNA; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_5E15C0874545BF06_1__CTOR_OFFSET))(this);
	}
};
