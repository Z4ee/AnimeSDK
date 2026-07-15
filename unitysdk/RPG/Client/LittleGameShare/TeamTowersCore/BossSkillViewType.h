#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGameShare::TeamTowersCore
{
	inline static constexpr unsigned int BossSkillViewType_TypeDefinitionIndex = 35528;

	enum class BossSkillViewType : ::System::Byte
	{
		Default = 0x0,
		Wind = 0x1,
		Ice = 0x2,
	};
}
