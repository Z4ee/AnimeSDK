#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::LittleGame { class ChimeraWorkTransitionCommand; }
namespace RPG::Client::Prop { class ChimeraBattlePuzzleBoard; }

#define RPG_CLIENT_LITTLEGAME_CHIMERAWORKTRANSITIONCOMMAND___C__DISPLAYCLASS0_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA693A90)
#define RPG_CLIENT_LITTLEGAME_CHIMERAWORKTRANSITIONCOMMAND___C__DISPLAYCLASS0_0__EXECUTE_B__0_OFFSET UNITYSDK_OFFSET(0xA693F20)

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int ChimeraWorkTransitionCommand___c__DisplayClass0_0_TypeDefinitionIndex = 70398;

	class ChimeraWorkTransitionCommand___c__DisplayClass0_0 : public ::System::Object
	{
	public:
		::RPG::Client::Prop::ChimeraBattlePuzzleBoard* puzzle; // 0x10
		::RPG::Client::LittleGame::ChimeraWorkTransitionCommand* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERAWORKTRANSITIONCOMMAND___C__DISPLAYCLASS0_0__CTOR_OFFSET))(this);
		}

		::System::Void _Execute_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_CHIMERAWORKTRANSITIONCOMMAND___C__DISPLAYCLASS0_0__EXECUTE_B__0_OFFSET))(this);
		}
	};
}
