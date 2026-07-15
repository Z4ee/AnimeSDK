#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client::ParkourGame { class ParkourSkillConfig; }

namespace RPG::Client::ParkourGame
{
	inline static constexpr unsigned int ParkourSkillConfig_Random_RandomData_TypeDefinitionIndex = 70731;

	struct alignas(8) ParkourSkillConfig_Random_RandomData
	{
		::RPG::Client::ParkourGame::ParkourSkillConfig* SkillConfig; // 0x10
		::System::Single Weight; // 0x18
	};
}
