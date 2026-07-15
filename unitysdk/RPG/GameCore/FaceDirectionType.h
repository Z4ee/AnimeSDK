#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int FaceDirectionType_TypeDefinitionIndex = 23958;

	enum class FaceDirectionType : ::System::Int32
	{
		Unknow = 0,
		Caster = 1,
		AbilityTargetEntity = 2,
		TeamFormation = 3,
		EnemyTeamCenter = 4,
		FriendTeamCenter = 5,
		DarkTeamCenter = 6,
		LightTeamCenter = 7,
		CustomTarget = 8,
	};
}
