#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int ILBattleHUDVisibilitySource_TypeDefinitionIndex = 66114;

	enum class ILBattleHUDVisibilitySource : ::System::Int32
	{
		EntityVisible = 0,
		UITask = 1,
	};
}
