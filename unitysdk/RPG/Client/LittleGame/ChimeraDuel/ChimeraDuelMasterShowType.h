#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::ChimeraDuel
{
	inline static constexpr unsigned int ChimeraDuelMasterShowType_TypeDefinitionIndex = 63196;

	enum class ChimeraDuelMasterShowType : ::System::Int32
	{
		PrepareShow = 0,
		BattleShow = 1,
		WinShow = 2,
		LossShow = 3,
		DrawShow = 4,
		EarlyWinShow = 5,
	};
}
