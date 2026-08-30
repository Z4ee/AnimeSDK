#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int ExpeditionBattleRecommendAvatarState_TypeDefinitionIndex = 64009;

	enum class ExpeditionBattleRecommendAvatarState : ::System::Int32
	{
		None = 0,
		Trial = 1,
		NotOwned = 2,
	};
}
