#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int BattleSkillSpecialAvatarType_TypeDefinitionIndex = 58934;

	enum class BattleSkillSpecialAvatarType : ::System::Int32
	{
		None = 0,
		Phainon = 1,
		Cyrene = 2,
		Sparxie = 3,
		All = 4,
	};
}
