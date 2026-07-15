#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::LittleGameShare::DiceCombatCore
{
	inline static constexpr unsigned int DiceCombatSkillPreviewLogicInvokeType_TypeDefinitionIndex = 34954;

	enum class DiceCombatSkillPreviewLogicInvokeType : ::System::Int32
	{
		OnSelectDice = 1,
		OnRollDiceResult = 2,
		OnDiceChange = 3,
		OnPlayerConfirm = 4,
		OnExchange = 5,
	};
}
