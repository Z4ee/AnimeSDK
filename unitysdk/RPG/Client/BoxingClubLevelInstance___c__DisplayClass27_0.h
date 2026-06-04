#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BattleGamePhase; }

#define RPG_CLIENT_BOXINGCLUBLEVELINSTANCE___C__DISPLAYCLASS27_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB447960)
#define RPG_CLIENT_BOXINGCLUBLEVELINSTANCE___C__DISPLAYCLASS27_0___EXITTOTOWNBYSERVERQUITNOTIFY_B__0_OFFSET UNITYSDK_OFFSET(0xB448370)

namespace RPG::Client
{
	inline static constexpr unsigned int BoxingClubLevelInstance___c__DisplayClass27_0_TypeDefinitionIndex = 58901;

	class BoxingClubLevelInstance___c__DisplayClass27_0 : public ::System::Object
	{
	public:
		::RPG::Client::BattleGamePhase* phase; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBLEVELINSTANCE___C__DISPLAYCLASS27_0__CTOR_OFFSET))(this);
		}

		::System::Void __ExitToTownByServerQuitNotify_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBLEVELINSTANCE___C__DISPLAYCLASS27_0___EXITTOTOWNBYSERVERQUITNOTIFY_B__0_OFFSET))(this);
		}
	};
}
