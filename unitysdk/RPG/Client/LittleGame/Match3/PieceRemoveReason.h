#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::Match3
{
	inline static constexpr unsigned int PieceRemoveReason_TypeDefinitionIndex = 40453;

	enum class PieceRemoveReason : ::System::Int32
	{
		Unknown = 0,
		Break = 1,
		DownGrading = 2,
		GemPouch = 3,
		CreateBomb = 4,
	};
}
