#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int PlayerDisableInteractReason_TypeDefinitionIndex = 40827;

	enum class PlayerDisableInteractReason : ::System::Int32
	{
		None = 0,
		Default = 2,
		Task = 4,
	};
}
