#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int PauseAnimatorReason_TypeDefinitionIndex = 40728;

	enum class PauseAnimatorReason : ::System::Int32
	{
		None = 0,
		Default = 1,
		PlayerReset = 2,
		PhantomPlayerFadeOut = 4,
		EnterPipe = 8,
	};
}
