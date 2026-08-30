#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::FiveDim::MiniGameNotify
{
	inline static constexpr unsigned int ScoreType_TypeDefinitionIndex = 76772;

	enum class ScoreType : ::System::Int32
	{
		Normal = 0,
		Gold = 1,
	};
}
