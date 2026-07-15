#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int TeamMemberCountingOption_TypeDefinitionIndex = 17561;

	enum class TeamMemberCountingOption : ::System::UInt32
	{
		None = 0x0,
		IgnoreRemoving = 0x1,
		IgnoreServant = 0x2,
		IgnoreRemovingExceptTarget = 0x4,
		IgnoreTempLeave = 0x8,
		IgnoreWillUnstage = 0x10,
		IgnoreServantWhenSummonerSelectable = 0x20,
		IgnoreStealthForWaveEndCheck = 0x40,
		IgnoreExcludeInMultiCharacter = 0x80,
		IgnorePuppetCharacter = 0x100,
	};
}
