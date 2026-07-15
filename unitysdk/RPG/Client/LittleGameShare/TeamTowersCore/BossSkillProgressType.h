#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGameShare::TeamTowersCore
{
	inline static constexpr unsigned int BossSkillProgressType_TypeDefinitionIndex = 35527;

	enum class BossSkillProgressType : ::System::Byte
	{
		Invalid = 0x0,
		Time = 0x1,
		Count = 0x2,
	};
}
