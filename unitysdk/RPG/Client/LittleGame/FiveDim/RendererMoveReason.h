#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int RendererMoveReason_TypeDefinitionIndex = 40693;

	enum class RendererMoveReason : ::System::Int32
	{
		None = 0,
		Action = 2,
		DestructibleProp = 4,
		WindowStage = 8,
		SpikeTrap = 16,
	};
}
