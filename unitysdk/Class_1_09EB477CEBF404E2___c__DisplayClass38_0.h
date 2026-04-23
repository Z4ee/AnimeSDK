#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_09EB477CEBF404E2;
class Class_3_3BDFAF4A2AB65026;
namespace RPG::Client::DiceCombat { class DiceCombatStartPVPGameParam; }

#define CLASS_1_09EB477CEBF404E2___C__DISPLAYCLASS38_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1283F490)
#define CLASS_1_09EB477CEBF404E2___C__DISPLAYCLASS38_0__STARTPVPGAME_B__0_OFFSET UNITYSDK_OFFSET(0x1283F4A0)

inline static constexpr unsigned int Class_1_09EB477CEBF404E2___c__DisplayClass38_0_TypeDefinitionIndex = 69876;

class Class_1_09EB477CEBF404E2___c__DisplayClass38_0 : public ::System::Object
{
public:
	::Class_1_09EB477CEBF404E2* __4__this; // 0x10
	::RPG::Client::DiceCombat::DiceCombatStartPVPGameParam* param; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_09EB477CEBF404E2___C__DISPLAYCLASS38_0__CTOR_OFFSET))(this);
	}

	::System::Void _StartPVPGame_b__0(::Class_3_3BDFAF4A2AB65026* gameInstance)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_3BDFAF4A2AB65026*))((::PBYTE)hIl2Cpp + CLASS_1_09EB477CEBF404E2___C__DISPLAYCLASS38_0__STARTPVPGAME_B__0_OFFSET))(this, gameInstance);
	}
};
