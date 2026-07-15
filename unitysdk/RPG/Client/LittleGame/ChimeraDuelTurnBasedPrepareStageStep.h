#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int ChimeraDuelTurnBasedPrepareStageStep_TypeDefinitionIndex = 39508;

	enum class ChimeraDuelTurnBasedPrepareStageStep : ::System::Int32
	{
		None = 0,
		SyncPos = 1,
		TrashTalk = 2,
		Count = 3,
	};
}
