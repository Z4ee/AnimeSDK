#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelBubbleEventType_TypeDefinitionIndex = 15413;

	enum class ChimeraDuelBubbleEventType : ::System::Int32
	{
		None = 0,
		OnSkillCast = 1,
		OnSkillHit = 2,
		OnChimeraJoin = 3,
		OnChimeraMaxLevel = 4,
		OnTrashTalk = 5,
		EnterStatus = 6,
		OnChimeraRun = 7,
		OnSkillCastInStatus = 8,
		OnChimeraUseItem = 9,
		OnProbabilitySkillCast = 10,
		OnProbabilitySkillCastInStatus = 11,
		OnEarlyLose = 12,
	};
}
