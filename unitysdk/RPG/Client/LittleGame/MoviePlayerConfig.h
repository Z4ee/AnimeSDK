#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/LittleGame/PlacementConfig.h"

#define RPG_CLIENT_LITTLEGAME_MOVIEPLAYERCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1EF9E100)

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int MoviePlayerConfig_TypeDefinitionIndex = 41031;

	class MoviePlayerConfig : public ::RPG::Client::LittleGame::PlacementConfig
	{
	public:
		::System::Single LayerMoveMile; // 0x28
		::System::Single HitStateKeepTime; // 0x2C
		::System::Single BlockHitFlickerLeftTime; // 0x30
		::System::Single BlockHitFlickerFrequency; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LITTLEGAME_MOVIEPLAYERCONFIG__CTOR_OFFSET))(this);
		}
	};
}
