#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int ExpeditionBattleRouteState_TypeDefinitionIndex = 63955;

	enum class ExpeditionBattleRouteState : ::System::Int32
	{
		Alive = 0,
		Failed = 1,
		Inactive = 2,
	};
}
