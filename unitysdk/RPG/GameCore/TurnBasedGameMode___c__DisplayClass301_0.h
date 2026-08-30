#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class GameEntity; }

#define RPG_GAMECORE_TURNBASEDGAMEMODE___C__DISPLAYCLASS301_0__CTOR_OFFSET UNITYSDK_OFFSET(0xE7AFF30)
#define RPG_GAMECORE_TURNBASEDGAMEMODE___C__DISPLAYCLASS301_0___ADVANCELISTENTITYDELAY_B__0_OFFSET UNITYSDK_OFFSET(0xE7AFF40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TurnBasedGameMode___c__DisplayClass301_0_TypeDefinitionIndex = 53822;

	class TurnBasedGameMode___c__DisplayClass301_0 : public ::System::Object
	{
	public:
		::RPG::GameCore::FixPoint fDelta; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNBASEDGAMEMODE___C__DISPLAYCLASS301_0__CTOR_OFFSET))(this);
		}

		::RPG::GameCore::FixPoint __AdvanceListEntityDelay_b__0(::RPG::GameCore::GameEntity* a1)
		{
			return ((::RPG::GameCore::FixPoint(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TURNBASEDGAMEMODE___C__DISPLAYCLASS301_0___ADVANCELISTENTITYDELAY_B__0_OFFSET))(this, a1);
		}
	};
}
