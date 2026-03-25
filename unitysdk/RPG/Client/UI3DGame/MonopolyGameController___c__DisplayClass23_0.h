#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client { class AdventurePhase; }
namespace RPG::Client::UI3DGame { class MonopolyGameController; }

#define RPG_CLIENT_UI3DGAME_MONOPOLYGAMECONTROLLER___C__DISPLAYCLASS23_0__CTOR_OFFSET UNITYSDK_OFFSET(0xA6587B0)
#define RPG_CLIENT_UI3DGAME_MONOPOLYGAMECONTROLLER___C__DISPLAYCLASS23_0__ONUIENTERTRIGGER_B__0_OFFSET UNITYSDK_OFFSET(0xA65BBE0)

namespace RPG::Client::UI3DGame
{
	inline static constexpr unsigned int MonopolyGameController___c__DisplayClass23_0_TypeDefinitionIndex = 61822;

	class MonopolyGameController___c__DisplayClass23_0 : public ::System::Object
	{
	public:
		::RPG::Client::AdventurePhase* adventurePhase; // 0x10
		::RPG::Client::UI3DGame::MonopolyGameController* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOPOLYGAMECONTROLLER___C__DISPLAYCLASS23_0__CTOR_OFFSET))(this);
		}

		::System::Void _OnUIEnterTrigger_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_UI3DGAME_MONOPOLYGAMECONTROLLER___C__DISPLAYCLASS23_0__ONUIENTERTRIGGER_B__0_OFFSET))(this);
		}
	};
}
