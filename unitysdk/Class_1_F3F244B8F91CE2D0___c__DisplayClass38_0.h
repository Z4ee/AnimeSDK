#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F3F244B8F91CE2D0;
class Class_3_C71DDDA66421C541;
namespace RPG::Client::DiceCombat { class DiceCombatStartPVPGameParam; }

#define CLASS_1_F3F244B8F91CE2D0___C__DISPLAYCLASS38_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1AF37D40)
#define CLASS_1_F3F244B8F91CE2D0___C__DISPLAYCLASS38_0__STARTPVPGAME_B__0_OFFSET UNITYSDK_OFFSET(0x1AF39850)

inline static constexpr unsigned int Class_1_F3F244B8F91CE2D0___c__DisplayClass38_0_TypeDefinitionIndex = 75637;

class Class_1_F3F244B8F91CE2D0___c__DisplayClass38_0 : public ::System::Object
{
public:
	::Class_1_F3F244B8F91CE2D0* __4__this; // 0x10
	::RPG::Client::DiceCombat::DiceCombatStartPVPGameParam* param; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_F3F244B8F91CE2D0___C__DISPLAYCLASS38_0__CTOR_OFFSET))(this);
	}

	::System::Void _StartPVPGame_b__0(::Class_3_C71DDDA66421C541* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_C71DDDA66421C541*))((::PBYTE)hIl2Cpp + CLASS_1_F3F244B8F91CE2D0___C__DISPLAYCLASS38_0__STARTPVPGAME_B__0_OFFSET))(this, a1);
	}
};
