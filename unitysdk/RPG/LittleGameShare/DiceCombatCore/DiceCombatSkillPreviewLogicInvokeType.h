#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::LittleGameShare::DiceCombatCore
{
	inline static constexpr unsigned int DiceCombatSkillPreviewLogicInvokeType_TypeDefinitionIndex = 28581;

	enum class DiceCombatSkillPreviewLogicInvokeType : ::System::Int32
	{
		OnSelectDice = 1,
		OnRollDiceResult = 2,
		OnDiceChange = 3,
		OnPlayerConfirm = 4,
	};
}
