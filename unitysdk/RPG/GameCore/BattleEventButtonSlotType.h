#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int BattleEventButtonSlotType_TypeDefinitionIndex = 15877;

	enum class BattleEventButtonSlotType : ::System::Int32
	{
		Default = 0,
		AvatarPanel = 1,
	};
}
