#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_2594562E2DDF2BC6;
namespace RPG::Client { class CakeRaceStartGameData; }
namespace RPG::Client::Promises { class IPromise; }

#define CLASS_1_2594562E2DDF2BC6___C__DISPLAYCLASS25_0__CTOR_OFFSET UNITYSDK_OFFSET(0x16B51880)
#define CLASS_1_2594562E2DDF2BC6___C__DISPLAYCLASS25_0__TRYSTARTGAME_B__0_OFFSET UNITYSDK_OFFSET(0x16B52820)

inline static constexpr unsigned int Class_1_2594562E2DDF2BC6___c__DisplayClass25_0_TypeDefinitionIndex = 72539;

class Class_1_2594562E2DDF2BC6___c__DisplayClass25_0 : public ::System::Object
{
public:
	::RPG::Client::CakeRaceStartGameData* startGameData; // 0x10
	::Class_1_2594562E2DDF2BC6* __4__this; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2594562E2DDF2BC6___C__DISPLAYCLASS25_0__CTOR_OFFSET))(this);
	}

	::RPG::Client::Promises::IPromise* _TryStartGame_b__0()
	{
		return ((::RPG::Client::Promises::IPromise*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2594562E2DDF2BC6___C__DISPLAYCLASS25_0__TRYSTARTGAME_B__0_OFFSET))(this);
	}
};
