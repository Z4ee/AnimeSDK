#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int Effect_AbyssCrystalManager_SelectedState_TypeDefinitionIndex = 67265;

	enum class Effect_AbyssCrystalManager_SelectedState : ::System::Int32
	{
		None = 0,
		Stay = 1,
		Selected = 2,
		Pressed = 3,
		Unlock = 4,
	};
}
