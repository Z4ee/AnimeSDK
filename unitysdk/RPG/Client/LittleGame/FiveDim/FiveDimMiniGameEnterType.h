#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int FiveDimMiniGameEnterType_TypeDefinitionIndex = 40962;

	enum class FiveDimMiniGameEnterType : ::System::Int32
	{
		Normal = 0,
		PausePage = 1,
		FinishPage = 2,
	};
}
