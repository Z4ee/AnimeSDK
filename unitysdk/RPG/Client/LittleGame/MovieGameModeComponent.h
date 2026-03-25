#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/MovieGameMode.h"
#include "unitysdk/RPG/Client/LittleGame/MovieLevelState.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_LITTLEGAME_MOVIEGAMEMODECOMPONENT__CTOR_OFFSET UNITYSDK_OFFSET(0x16850E10)

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int MovieGameModeComponent_TypeDefinitionIndex = 32845;

	class MovieGameModeComponent : public ::System::Object
	{
	public:
		::System::Int32 LifeLeft; // 0x10
		::System::Single PlayMile; // 0x14
		::System::Int32 ContinuousNicePass; // 0x18
		::RPG::Client::LittleGame::MovieLevelState LevelState; // 0x1C
		::RPG::Client::LittleGame::MovieGameMode GameMode; // 0x20
		::System::Single SP; // 0x24
		::System::Int32 Level; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEGAMEMODECOMPONENT__CTOR_OFFSET))(this);
		}
	};
}
