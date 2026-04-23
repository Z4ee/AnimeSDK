#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class BattleModule; }

#define RPG_CLIENT_BATTLEGAMEPHASE___C__DISPLAYCLASS59_0__CTOR_OFFSET UNITYSDK_OFFSET(0x9E5DDE0)
#define RPG_CLIENT_BATTLEGAMEPHASE___C__DISPLAYCLASS59_0__TRYRESTARTGAME_B__0_OFFSET UNITYSDK_OFFSET(0x9E5DDF0)
#define RPG_CLIENT_BATTLEGAMEPHASE___C__DISPLAYCLASS59_0__TRYRESTARTGAME_B__1_OFFSET UNITYSDK_OFFSET(0x9E5E180)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleGamePhase___c__DisplayClass59_0_TypeDefinitionIndex = 56229;

	class BattleGamePhase___c__DisplayClass59_0 : public ::System::Object
	{
	public:
		::RPG::Client::BattleModule* battleModule; // 0x10
		::System::Boolean restartInBattle; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPHASE___C__DISPLAYCLASS59_0__CTOR_OFFSET))(this);
		}

		::System::Void _TryRestartGame_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPHASE___C__DISPLAYCLASS59_0__TRYRESTARTGAME_B__0_OFFSET))(this);
		}

		::System::Void _TryRestartGame_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEGAMEPHASE___C__DISPLAYCLASS59_0__TRYRESTARTGAME_B__1_OFFSET))(this);
		}
	};
}
