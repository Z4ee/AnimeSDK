#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ParkourGame/EffectConfig.h"
#include "unitysdk/RPG/Client/ParkourGame/ParkourSkillConfig.h"

#define RPG_CLIENT_PARKOURGAME_PARKOURSKILLCONFIG_FIREWORKS__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2EDDC0)

namespace RPG::Client::ParkourGame
{
	inline static constexpr unsigned int ParkourSkillConfig_Fireworks_TypeDefinitionIndex = 70729;

	class ParkourSkillConfig_Fireworks : public ::RPG::Client::ParkourGame::ParkourSkillConfig
	{
	public:
		::RPG::Client::ParkourGame::EffectConfig EffectConfig; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_PARKOURSKILLCONFIG_FIREWORKS__CTOR_OFFSET))(this);
		}
	};
}
