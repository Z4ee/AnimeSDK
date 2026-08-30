#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ParkourGame/ParkourSkillConfig.h"

#define RPG_CLIENT_PARKOURGAME_PARKOURSKILLCONFIG_SPRINT__CTOR_OFFSET UNITYSDK_OFFSET(0xDA30BC0)

namespace RPG::Client::ParkourGame
{
	inline static constexpr unsigned int ParkourSkillConfig_Sprint_TypeDefinitionIndex = 74026;

	class ParkourSkillConfig_Sprint : public ::RPG::Client::ParkourGame::ParkourSkillConfig
	{
	public:
		::System::Single SprintDuration; // 0x20
		::System::Int32 SprintPriority; // 0x24
		::System::Int32 SprintModifyEngineLevel; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_PARKOURSKILLCONFIG_SPRINT__CTOR_OFFSET))(this);
		}
	};
}
