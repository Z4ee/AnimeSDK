#pragma once
#include "unitysdk/unitysdk.h"

namespace ProtoScript
{
	inline static constexpr unsigned int EndHollowMiniGameType_TypeDefinitionIndex = 26557;

	enum class EndHollowMiniGameType : ::System::Int32
	{
		END_HOLLOW_MINI_GAME_TYPE_REBEGIN = 3,
		END_HOLLOW_MINI_GAME_TYPE_FAIL = 1,
		END_HOLLOW_MINI_GAME_TYPE_SUCC = 2,
		END_HOLLOW_MINI_GAME_TYPE_NONE = 0,
		END_HOLLOW_MINI_GAME_TYPE_GIVE_UP = 4,
	};
}
