#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D16B8A42F6BB9A9F;
namespace RPG::GameCore { class PerformanceDynamicLoadCharacter; }

#define CLASS_1_D16B8A42F6BB9A9F___C__DISPLAYCLASS55_0__CTOR_OFFSET UNITYSDK_OFFSET(0x11A09080)
#define CLASS_1_D16B8A42F6BB9A9F___C__DISPLAYCLASS55_0___ONDYNAMICLOADSTORYCHARACTER_B__0_OFFSET UNITYSDK_OFFSET(0x11A1FC50)

inline static constexpr unsigned int Class_1_D16B8A42F6BB9A9F___c__DisplayClass55_0_TypeDefinitionIndex = 55992;

class Class_1_D16B8A42F6BB9A9F___c__DisplayClass55_0 : public ::System::Object
{
public:
	::RPG::GameCore::PerformanceDynamicLoadCharacter* param; // 0x10
	::Class_1_D16B8A42F6BB9A9F* __4__this; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D16B8A42F6BB9A9F___C__DISPLAYCLASS55_0__CTOR_OFFSET))(this);
	}

	::System::Void __OnDynamicLoadStoryCharacter_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D16B8A42F6BB9A9F___C__DISPLAYCLASS55_0___ONDYNAMICLOADSTORYCHARACTER_B__0_OFFSET))(this);
	}
};
