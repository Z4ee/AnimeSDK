#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int InteractType_TypeDefinitionIndex = 13328;

	enum class InteractType : ::System::Int32
	{
		Unknown = 0,
		Shop = 1,
		LevelReward = 2,
		Recover = 3,
		ItemCompose = 4,
		RoguePickAvatar = 5,
		RogueReviveAvatar = 6,
		RogueAppraisalStone = 7,
		RaidEntrance = 8,
		RogueGetObjectReward = 9,
		Cocoon = 10,
		TrainNPCInteract = 11,
		Offering = 12,
	};
}
