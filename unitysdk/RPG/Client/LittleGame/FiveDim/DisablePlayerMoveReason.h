#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int DisablePlayerMoveReason_TypeDefinitionIndex = 40841;

	enum class DisablePlayerMoveReason : ::System::Int32
	{
		None = 0,
		Level = 1,
		SurfaceWillBeDestroyed = 2,
	};
}
