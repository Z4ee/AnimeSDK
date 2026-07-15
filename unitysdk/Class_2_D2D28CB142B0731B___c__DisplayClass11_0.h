#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_D2D28CB142B0731B;
namespace RPG::Client { class BattleAvatarUltraSkillFlyEffect; }

#define CLASS_2_D2D28CB142B0731B___C__DISPLAYCLASS11_0__CTOR_OFFSET UNITYSDK_OFFSET(0x14696130)
#define CLASS_2_D2D28CB142B0731B___C__DISPLAYCLASS11_0___PLAYEFFECT_B__0_OFFSET UNITYSDK_OFFSET(0x14696540)

inline static constexpr unsigned int Class_2_D2D28CB142B0731B___c__DisplayClass11_0_TypeDefinitionIndex = 68255;

class Class_2_D2D28CB142B0731B___c__DisplayClass11_0 : public ::System::Object
{
public:
	::Class_2_D2D28CB142B0731B* __4__this; // 0x10
	::RPG::Client::BattleAvatarUltraSkillFlyEffect* effect; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2D28CB142B0731B___C__DISPLAYCLASS11_0__CTOR_OFFSET))(this);
	}

	::System::Void __PlayEffect_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_D2D28CB142B0731B___C__DISPLAYCLASS11_0___PLAYEFFECT_B__0_OFFSET))(this);
	}
};
