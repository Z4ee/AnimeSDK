#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ParkourGame/ParkourSkillConfig.h"
#include "unitysdk/RPG/Client/ParkourGame/ParkourSkillConfig_Random_RandomData.h"

#define RPG_CLIENT_PARKOURGAME_PARKOURSKILLCONFIG_RANDOM__CTOR_OFFSET UNITYSDK_OFFSET(0x9F076D0)

namespace RPG::Client::ParkourGame
{
	inline static constexpr unsigned int ParkourSkillConfig_Random_TypeDefinitionIndex = 60786;

	class ParkourSkillConfig_Random : public ::RPG::Client::ParkourGame::ParkourSkillConfig
	{
	public:
		::Il2CppArray<::RPG::Client::ParkourGame::ParkourSkillConfig_Random_RandomData>* RandomDataArr; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_PARKOURSKILLCONFIG_RANDOM__CTOR_OFFSET))(this);
		}
	};
}
