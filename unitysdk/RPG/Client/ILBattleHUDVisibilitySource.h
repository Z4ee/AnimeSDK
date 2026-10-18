#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int ILBattleHUDVisibilitySource_TypeDefinitionIndex = 71743;

	enum class ILBattleHUDVisibilitySource : ::System::Int32
	{
		EntityVisible = 0,
		UITask = 1,
	};
}
