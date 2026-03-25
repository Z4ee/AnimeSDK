#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int TutorialBattleOperationType_TypeDefinitionIndex = 22360;

	enum class TutorialBattleOperationType : ::System::Int32
	{
		Invalid = 0,
		SelectAttack = 1,
		SelectSkill = 2,
		UseAttack = 3,
		UseSkill = 4,
		SelectUltraByIndex = 5,
		SelectUltraByAvatarID = 6,
		UseUltra = 7,
		BattleEvent = 8,
		BattleQTE = 9,
	};
}
