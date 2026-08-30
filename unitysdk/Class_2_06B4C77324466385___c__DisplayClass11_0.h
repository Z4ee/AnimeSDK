#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_06B4C77324466385;
namespace RPG::Client { class BattleAvatarUltraSkillFlyEffect; }

#define CLASS_2_06B4C77324466385___C__DISPLAYCLASS11_0__CTOR_OFFSET UNITYSDK_OFFSET(0x11B81370)
#define CLASS_2_06B4C77324466385___C__DISPLAYCLASS11_0___PLAYEFFECT_B__0_OFFSET UNITYSDK_OFFSET(0x11B817E0)

inline static constexpr unsigned int Class_2_06B4C77324466385___c__DisplayClass11_0_TypeDefinitionIndex = 71437;

class Class_2_06B4C77324466385___c__DisplayClass11_0 : public ::System::Object
{
public:
	::RPG::Client::BattleAvatarUltraSkillFlyEffect* effect; // 0x10
	::Class_2_06B4C77324466385* __4__this; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_06B4C77324466385___C__DISPLAYCLASS11_0__CTOR_OFFSET))(this);
	}

	::System::Void __PlayEffect_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_06B4C77324466385___C__DISPLAYCLASS11_0___PLAYEFFECT_B__0_OFFSET))(this);
	}
};
