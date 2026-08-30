#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int FiveDimMiniGameExitType_TypeDefinitionIndex = 41922;

	enum class FiveDimMiniGameExitType : ::System::Int32
	{
		LoseHp = 0,
		Restart = 1,
		Leave = 2,
	};
}
