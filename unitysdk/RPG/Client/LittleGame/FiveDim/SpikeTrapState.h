#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int SpikeTrapState_TypeDefinitionIndex = 40869;

	enum class SpikeTrapState : ::System::Int32
	{
		Inactive = 0,
		Active = 1,
		DelayActive = 2,
		DelayInactive = 3,
	};
}
