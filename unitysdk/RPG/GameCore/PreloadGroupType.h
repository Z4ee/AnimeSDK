#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int PreloadGroupType_TypeDefinitionIndex = 15721;

	enum class PreloadGroupType : ::System::Int32
	{
		PreBattle = 0,
		InBattle = 1,
		UI = 2,
		BE = 3,
		Avatar = 4,
		Monster = 5,
		Servant = 6,
		RtBattleCharacter = 7,
		_Count = 8,
	};
}
