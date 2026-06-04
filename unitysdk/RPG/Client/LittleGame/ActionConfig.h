#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/ActionType.h"
#include "unitysdk/RPG/Client/LittleGame/BossPhase.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_LITTLEGAME_ACTIONCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18CCCDA0)

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int ActionConfig_TypeDefinitionIndex = 39355;

	class ActionConfig : public ::System::Object
	{
	public:
		::System::Single MileOffset; // 0x10
		::RPG::Client::LittleGame::ActionType ActionType; // 0x14
		::RPG::Client::LittleGame::BossPhase BossPhase; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_ACTIONCONFIG__CTOR_OFFSET))(this);
		}
	};
}
