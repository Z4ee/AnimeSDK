#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ETrainingRoomItemType_TypeDefinitionIndex = 61935;

	enum class ETrainingRoomItemType : ::System::Int32
	{
		AvatarPrefectSwitchPoint = 6,
		SlelectEnemy = 0,
		AvatarSuperSP = 5,
		EnemyLevel = 4,
		EnemyInvicible = 2,
		AvatarTeamFever = 7,
		CanStunEnemy = 3,
		EnemyAI = 1,
	};
}
