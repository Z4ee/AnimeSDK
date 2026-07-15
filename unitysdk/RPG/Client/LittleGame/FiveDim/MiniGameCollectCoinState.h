#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int MiniGameCollectCoinState_TypeDefinitionIndex = 40781;

	enum class MiniGameCollectCoinState : ::System::Int32
	{
		None = 0,
		Idle = 1,
		FireCoin = 2,
	};
}
