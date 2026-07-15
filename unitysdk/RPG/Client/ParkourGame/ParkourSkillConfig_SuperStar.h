#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ParkourGame/ParkourSkillConfig.h"

#define RPG_CLIENT_PARKOURGAME_PARKOURSKILLCONFIG_SUPERSTAR__CTOR_OFFSET UNITYSDK_OFFSET(0x1A2EDE20)

namespace RPG::Client::ParkourGame
{
	inline static constexpr unsigned int ParkourSkillConfig_SuperStar_TypeDefinitionIndex = 70728;

	class ParkourSkillConfig_SuperStar : public ::RPG::Client::ParkourGame::ParkourSkillConfig
	{
	public:
		::System::Single Duration; // 0x20
		::System::Int32 ModifyEngingLevel; // 0x24
		::System::Int32 ModifyEngineLevelPriority; // 0x28
		::System::Boolean ClearDecelEngineModifiers; // 0x2C
		::System::Int32 ImpactModifyEngineLevel; // 0x30
		::System::Int32 ImpactModifyEngineLevelPriority; // 0x34
		::System::Single ImpactModifyEngineDuration; // 0x38
		::System::Single ImpactModifyDuration; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_PARKOURGAME_PARKOURSKILLCONFIG_SUPERSTAR__CTOR_OFFSET))(this);
		}
	};
}
