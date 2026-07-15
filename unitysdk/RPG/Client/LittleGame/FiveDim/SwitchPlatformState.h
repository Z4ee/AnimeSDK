#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::FiveDim
{
	inline static constexpr unsigned int SwitchPlatformState_TypeDefinitionIndex = 40866;

	enum class SwitchPlatformState : ::System::Int32
	{
		Inactive = 0,
		Active = 1,
		DelayActive = 2,
	};
}
