#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_8ED9A30694FB6032.h"

#define CLASS_4_D73D3C270072DE64_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x16409990)
#define CLASS_4_D73D3C270072DE64_SET_VALUE_OFFSET UNITYSDK_OFFSET(0x164099A0)
#define CLASS_4_D73D3C270072DE64__CTOR_OFFSET UNITYSDK_OFFSET(0x16409A10)

inline static constexpr unsigned int Class_4_D73D3C270072DE64_TypeDefinitionIndex = 73913;

class Class_4_D73D3C270072DE64 : public ::Class_3_8ED9A30694FB6032
{
public:
	::System::Single PJKFLONMKED; // 0x18
	::System::Single ENMIPOPKOOL; // 0x1C

	::System::Void _ctor(::System::Single a1, ::System::Single a2, ::System::Single a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_4_D73D3C270072DE64__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Single get_value()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_4_D73D3C270072DE64_GET_VALUE_OFFSET))(this);
	}

	::System::Void set_value(::System::Single a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CLASS_4_D73D3C270072DE64_SET_VALUE_OFFSET))(this, a1);
	}
};
