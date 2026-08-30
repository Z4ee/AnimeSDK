#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BattleGamePhase; }

#define RPG_CLIENT_BOXINGCLUBLEVELINSTANCE___C__DISPLAYCLASS26_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1A10D040)
#define RPG_CLIENT_BOXINGCLUBLEVELINSTANCE___C__DISPLAYCLASS26_0___DORETURNTOMAZE_B__0_OFFSET UNITYSDK_OFFSET(0x1A10DC50)

namespace RPG::Client
{
	inline static constexpr unsigned int BoxingClubLevelInstance___c__DisplayClass26_0_TypeDefinitionIndex = 63019;

	class BoxingClubLevelInstance___c__DisplayClass26_0 : public ::System::Object
	{
	public:
		::RPG::Client::BattleGamePhase* gamePhase; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBLEVELINSTANCE___C__DISPLAYCLASS26_0__CTOR_OFFSET))(this);
		}

		::System::Void __DoReturnToMaze_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BOXINGCLUBLEVELINSTANCE___C__DISPLAYCLASS26_0___DORETURNTOMAZE_B__0_OFFSET))(this);
		}
	};
}
