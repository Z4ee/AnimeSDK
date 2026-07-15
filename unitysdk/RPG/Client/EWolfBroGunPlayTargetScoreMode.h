#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int EWolfBroGunPlayTargetScoreMode_TypeDefinitionIndex = 65672;

	enum class EWolfBroGunPlayTargetScoreMode : ::System::Int32
	{
		Unknown = 0,
		Add = 1,
		AddWithBonus = 2,
		Del = 3,
		Energy = 4,
		RogueCoin = 5,
		RogueMiracle = 6,
		RogueRuanmei = 7,
	};
}
