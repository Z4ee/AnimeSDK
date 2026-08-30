#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int BattleModeViewState_TypeDefinitionIndex = 73150;

	enum class BattleModeViewState : ::System::Int32
	{
		None = 0,
		Inited = 1,
		Loading = 2,
		Loaded = 3,
	};
}
