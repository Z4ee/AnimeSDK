#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::LittleGame { class ChimeraUseAbilityCommand; }
namespace RPG::Client::Prop { class ChimeraBattlePuzzleBoard; }
namespace System { class Action; }

#define RPG_CLIENT_LITTLEGAME_CHIMERAUSEABILITYCOMMAND___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0x99A2620)
#define RPG_CLIENT_LITTLEGAME_CHIMERAUSEABILITYCOMMAND___C__DISPLAYCLASS1_0__EXECUTE_B__0_OFFSET UNITYSDK_OFFSET(0x99A2630)
#define RPG_CLIENT_LITTLEGAME_CHIMERAUSEABILITYCOMMAND___C__DISPLAYCLASS1_0__EXECUTE_B__1_OFFSET UNITYSDK_OFFSET(0x99A2700)
#define RPG_CLIENT_LITTLEGAME_CHIMERAUSEABILITYCOMMAND___C__DISPLAYCLASS1_0__EXECUTE_B__2_OFFSET UNITYSDK_OFFSET(0x99A2820)

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int ChimeraUseAbilityCommand___c__DisplayClass1_0_TypeDefinitionIndex = 62386;

	class ChimeraUseAbilityCommand___c__DisplayClass1_0 : public ::System::Object
	{
	public:
		::RPG::Client::LittleGame::ChimeraUseAbilityCommand* __4__this; // 0x10
		::System::Action* __9__2; // 0x18
		::RPG::Client::Prop::ChimeraBattlePuzzleBoard* puzzle; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERAUSEABILITYCOMMAND___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
		}

		::System::Void _Execute_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERAUSEABILITYCOMMAND___C__DISPLAYCLASS1_0__EXECUTE_B__0_OFFSET))(this);
		}

		::System::Void _Execute_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERAUSEABILITYCOMMAND___C__DISPLAYCLASS1_0__EXECUTE_B__1_OFFSET))(this);
		}

		::System::Void _Execute_b__2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERAUSEABILITYCOMMAND___C__DISPLAYCLASS1_0__EXECUTE_B__2_OFFSET))(this);
		}
	};
}
