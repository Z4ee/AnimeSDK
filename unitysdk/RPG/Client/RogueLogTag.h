#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int RogueLogTag_TypeDefinitionIndex = 64493;

	enum class RogueLogTag : ::System::Int32
	{
		None = 0,
		Simulated = 1,
		Endless = 2,
		Chess = 3,
		Nous = 4,
		Tourn = 5,
		Arcade = 6,
		Magic = 7,
		RelicCocoon = 8,
		Scene = 9,
		RogueCoin = 10,
		Buff = 11,
		Miracle = 12,
		Hex = 13,
		Formula = 14,
		Scepter = 15,
		Dialogue = 16,
		Workbench = 17,
		Handbook = 18,
		Monster = 19,
		GM = 20,
		AdvRoom = 21,
		TitanBless = 22,
		TournBuildRef = 23,
		Exhibition = 24,
		Collection = 25,
		Blackboard = 26,
		ActionQueue = 27,
		Keyword = 28,
	};
}
