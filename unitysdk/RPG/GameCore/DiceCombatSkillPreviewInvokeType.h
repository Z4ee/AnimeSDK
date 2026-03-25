#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatSkillPreviewInvokeType_TypeDefinitionIndex = 14805;

	enum class DiceCombatSkillPreviewInvokeType : ::System::Int32
	{
		OnSelectDice = 1,
		OnRollDiceResult = 2,
	};
}
