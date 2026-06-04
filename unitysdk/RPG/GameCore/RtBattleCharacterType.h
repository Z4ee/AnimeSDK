#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtBattleCharacterType_TypeDefinitionIndex = 17150;

	enum class RtBattleCharacterType : ::System::Int32
	{
		Normal = 0,
		Background = 1,
	};
}
