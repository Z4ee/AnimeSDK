#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::FateRin::Battle
{
	inline static constexpr unsigned int FateRinBattleHudInputMode_TypeDefinitionIndex = 75972;

	enum class FateRinBattleHudInputMode : ::System::Int32
	{
		TouchDrag = 0,
		PCHover = 1,
		Gamepad = 2,
	};
}
