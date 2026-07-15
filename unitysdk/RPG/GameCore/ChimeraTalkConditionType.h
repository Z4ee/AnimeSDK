#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraTalkConditionType_TypeDefinitionIndex = 10179;

	enum class ChimeraTalkConditionType : ::System::Int32
	{
		None = 0,
		UseAbility = 1,
		NewMemberGet = 2,
		JoinTeam = 3,
		Like = 4,
		UndoLike = 5,
		EditTeamIdle = 6,
		OnFinishWork = 7,
		OnMemberDead = 8,
		MainEntranceEnv = 9,
	};
}
