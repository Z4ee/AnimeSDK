#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int StageHarmonyPlayerPosSignalMonoPlugin_PlayerType_TypeDefinitionIndex = 66344;

	enum class StageHarmonyPlayerPosSignalMonoPlugin_PlayerType : ::System::Int32
	{
		Player = 0,
		Camera = 1,
		CustomPosition = 2,
	};
}
