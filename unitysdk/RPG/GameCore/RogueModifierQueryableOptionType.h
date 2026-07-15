#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueModifierQueryableOptionType_TypeDefinitionIndex = 17224;

	enum class RogueModifierQueryableOptionType : ::System::Int32
	{
		None = 0,
		AdventureRoomExtraGroup = 1,
		RefreshBuffSelectGuaranteedAeon = 2,
		BattleNoBuffSelect = 3,
		DiceReRollFree = 4,
		EnableGambleMachine = 5,
		EnableRogueChest = 6,
		NoDeliverFormulaPathEchoOnStart = 7,
		EnableRogueBasinChest = 8,
	};
}
