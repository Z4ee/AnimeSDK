#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_CFBD65ACDA38CCCB;
namespace RPG::Client { class PlayGoManager; }

#define CLASS_2_CFBD65ACDA38CCCB___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x13573250)
#define CLASS_2_CFBD65ACDA38CCCB___C__DISPLAYCLASS4_0__ONPLAYGOFINISH_B__0_OFFSET UNITYSDK_OFFSET(0x135733A0)

inline static constexpr unsigned int Class_2_CFBD65ACDA38CCCB___c__DisplayClass4_0_TypeDefinitionIndex = 54820;

class Class_2_CFBD65ACDA38CCCB___c__DisplayClass4_0 : public ::System::Object
{
public:
	::RPG::Client::PlayGoManager* manager; // 0x10
	::Class_2_CFBD65ACDA38CCCB* __4__this; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CFBD65ACDA38CCCB___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
	}

	::System::Void _OnPlayGoFinish_b__0(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_CFBD65ACDA38CCCB___C__DISPLAYCLASS4_0__ONPLAYGOFINISH_B__0_OFFSET))(this, a1);
	}
};
