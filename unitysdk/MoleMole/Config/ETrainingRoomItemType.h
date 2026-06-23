#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ETrainingRoomItemType_TypeDefinitionIndex = 86565;

	enum class ETrainingRoomItemType : ::System::Int32
	{
		EnemyAI = 1,
		SlelectEnemy = 0,
		AvatarSuperSP = 5,
		CanStunEnemy = 3,
		EnemyLevel = 4,
		EnemyInvicible = 2,
		AvatarTeamFever = 7,
		AvatarPrefectSwitchPoint = 6,
	};
}
