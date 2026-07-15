#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ParkourGame/ParkourSkillConfig.h"

namespace RPG::Client::ParkourGame { class MonoParkourProjectile; }

#define RPG_CLIENT_PARKOURGAME_PARKOURSKILLCONFIG_FIRE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2EDD90)

namespace RPG::Client::ParkourGame
{
	inline static constexpr unsigned int ParkourSkillConfig_Fire_TypeDefinitionIndex = 70727;

	class ParkourSkillConfig_Fire : public ::RPG::Client::ParkourGame::ParkourSkillConfig
	{
	public:
		::RPG::Client::ParkourGame::MonoParkourProjectile* Projectile; // 0x20
		::System::Single MaxDistance; // 0x28
		::System::Single MaxItemDistance; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_PARKOURSKILLCONFIG_FIRE__CTOR_OFFSET))(this);
		}
	};
}
