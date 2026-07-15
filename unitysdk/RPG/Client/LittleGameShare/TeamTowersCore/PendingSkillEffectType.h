#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGameShare::TeamTowersCore
{
	inline static constexpr unsigned int PendingSkillEffectType_TypeDefinitionIndex = 35546;

	enum class PendingSkillEffectType : ::System::Byte
	{
		None = 0x0,
		SpawnIsland = 0x1,
		SpawnIvy = 0x2,
	};
}
