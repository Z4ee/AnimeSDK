#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int CloudUIBattlePosRegion_TypeDefinitionIndex = 57200;

	enum class CloudUIBattlePosRegion : ::System::Int32
	{
		None = 0,
		ActionBar = 1,
		MonsterSimplifiedInfo = 2,
		FunctionArea = 3,
		BPDetail = 4,
		TeamViewModeBtn = 5,
		TeamBuffDetail = 6,
		TeamMemberHUDs = 7,
		TeamMemberSpeicalHUDs = 8,
		SkillButton = 9,
		TurnHint = 10,
		BossHPBar = 11,
		BossHPBarIcon = 12,
		TeamMemberIcon = 13,
	};
}
