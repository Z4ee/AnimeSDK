#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_645481513AEE85B3;
class Class_3_6B9658F527402856;
namespace RPG::Client::DiceCombat { class DiceCombatStartPVPGameParam; }

#define CLASS_1_645481513AEE85B3___C__DISPLAYCLASS38_0__CTOR_OFFSET UNITYSDK_OFFSET(0x105BD7B0)
#define CLASS_1_645481513AEE85B3___C__DISPLAYCLASS38_0__STARTPVPGAME_B__0_OFFSET UNITYSDK_OFFSET(0x105BF270)

inline static constexpr unsigned int Class_1_645481513AEE85B3___c__DisplayClass38_0_TypeDefinitionIndex = 61950;

class Class_1_645481513AEE85B3___c__DisplayClass38_0 : public ::System::Object
{
public:
	::RPG::Client::DiceCombat::DiceCombatStartPVPGameParam* param; // 0x10
	::Class_1_645481513AEE85B3* __4__this; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_645481513AEE85B3___C__DISPLAYCLASS38_0__CTOR_OFFSET))(this);
	}

	::System::Void _StartPVPGame_b__0(::Class_3_6B9658F527402856* gameInstance)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_6B9658F527402856*))((::PBYTE)hIl2Cpp + CLASS_1_645481513AEE85B3___C__DISPLAYCLASS38_0__STARTPVPGAME_B__0_OFFSET))(this, gameInstance);
	}
};
