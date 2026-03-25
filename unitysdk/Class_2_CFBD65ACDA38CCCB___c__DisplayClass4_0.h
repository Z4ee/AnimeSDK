#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_CFBD65ACDA38CCCB;
namespace RPG::Client { class PlayGoManager; }

#define CLASS_2_CFBD65ACDA38CCCB___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x872AC40)
#define CLASS_2_CFBD65ACDA38CCCB___C__DISPLAYCLASS4_0__ONPLAYGOFINISH_B__0_OFFSET UNITYSDK_OFFSET(0x872AD90)

inline static constexpr unsigned int Class_2_CFBD65ACDA38CCCB___c__DisplayClass4_0_TypeDefinitionIndex = 47359;

class Class_2_CFBD65ACDA38CCCB___c__DisplayClass4_0 : public ::System::Object
{
public:
	::Class_2_CFBD65ACDA38CCCB* __4__this; // 0x10
	::RPG::Client::PlayGoManager* manager; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CFBD65ACDA38CCCB___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
	}

	::System::Void _OnPlayGoFinish_b__0(::System::Boolean isOK)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_2_CFBD65ACDA38CCCB___C__DISPLAYCLASS4_0__ONPLAYGOFINISH_B__0_OFFSET))(this, isOK);
	}
};
