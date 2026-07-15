#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int NpcFollowByPlayerState_TypeDefinitionIndex = 50020;

	enum class NpcFollowByPlayerState : ::System::Int32
	{
		Move = 0,
		Wait = 1,
		Finish = 2,
	};
}
