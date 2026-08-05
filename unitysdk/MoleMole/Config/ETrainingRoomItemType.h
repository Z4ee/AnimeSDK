#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ETrainingRoomItemType_TypeDefinitionIndex = 67806;

	enum class ETrainingRoomItemType : ::System::Int32
	{
		EnemyLevel = 4,
		CanStunEnemy = 3,
		SlelectEnemy = 0,
		EnemyInvicible = 2,
		AvatarSuperSP = 5,
		AvatarPrefectSwitchPoint = 6,
		EnemyAI = 1,
		AvatarTeamFever = 7,
	};
}
