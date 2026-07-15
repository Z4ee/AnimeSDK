#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int BossTransitionReason_TypeDefinitionIndex = 40207;

	enum class BossTransitionReason : ::System::Int32
	{
		None = 0,
		ChangePhase = 1,
		BossDieToFadeout = 2,
		FinishGame = 3,
	};
}
