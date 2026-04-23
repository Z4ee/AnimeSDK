#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int EnterDashReason_TypeDefinitionIndex = 39260;

	enum class EnterDashReason : ::System::Int32
	{
		SkillBtn = 0,
		DashOrb = 1,
	};
}
