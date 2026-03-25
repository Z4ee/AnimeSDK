#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int BlockAutoRebornReason_TypeDefinitionIndex = 33386;

	enum class BlockAutoRebornReason : ::System::Int32
	{
		None = 0,
		MiniGame = 1,
	};
}
