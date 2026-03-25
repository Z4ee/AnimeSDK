#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/EnemyType.h"
#include "unitysdk/RPG/Client/LittleGame/PlacementConfig.h"

#define RPG_CLIENT_LITTLEGAME_MOVIEENEMYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16850DE0)

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int MovieEnemyConfig_TypeDefinitionIndex = 32784;

	class MovieEnemyConfig : public ::RPG::Client::LittleGame::PlacementConfig
	{
	public:
		::RPG::Client::LittleGame::EnemyType EnemyType; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEENEMYCONFIG__CTOR_OFFSET))(this);
		}
	};
}
