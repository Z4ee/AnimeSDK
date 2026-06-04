#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int EAudienceHideReason_TypeDefinitionIndex = 64676;

	enum class EAudienceHideReason : ::System::Int32
	{
		Default = 0,
		BattleArea = 1,
	};
}
