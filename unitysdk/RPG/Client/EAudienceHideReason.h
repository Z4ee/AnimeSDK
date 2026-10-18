#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int EAudienceHideReason_TypeDefinitionIndex = 69152;

	enum class EAudienceHideReason : ::System::Int32
	{
		Default = 0,
		BattleArea = 1,
	};
}
