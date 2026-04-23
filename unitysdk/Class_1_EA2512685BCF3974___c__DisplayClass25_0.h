#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_1BB8CA1042AACD99;

#define CLASS_1_EA2512685BCF3974___C__DISPLAYCLASS25_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17C41880)
#define CLASS_1_EA2512685BCF3974___C__DISPLAYCLASS25_0___GET1V1RIVALENTITY_B__0_OFFSET UNITYSDK_OFFSET(0x17C47490)

inline static constexpr unsigned int Class_1_EA2512685BCF3974___c__DisplayClass25_0_TypeDefinitionIndex = 34299;

class Class_1_EA2512685BCF3974___c__DisplayClass25_0 : public ::System::Object
{
public:
	::Class_2_1BB8CA1042AACD99* entity; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_EA2512685BCF3974___C__DISPLAYCLASS25_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __Get1V1RivalEntity_b__0(::Class_2_1BB8CA1042AACD99* player)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_2_1BB8CA1042AACD99*))((::PBYTE)hIl2Cpp + CLASS_1_EA2512685BCF3974___C__DISPLAYCLASS25_0___GET1V1RIVALENTITY_B__0_OFFSET))(this, player);
	}
};
