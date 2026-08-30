#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int StageHarmonyPlayerPosSignalMonoPlugin_PlayerType_TypeDefinitionIndex = 70937;

	enum class StageHarmonyPlayerPosSignalMonoPlugin_PlayerType : ::System::Int32
	{
		Player = 0,
		Camera = 1,
		CustomPosition = 2,
	};
}
