#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int PauseRecordResetPositionReason_TypeDefinitionIndex = 39256;

	enum class PauseRecordResetPositionReason : ::System::Int32
	{
		None = 0,
		Crystal = 2,
	};
}
