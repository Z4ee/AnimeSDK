#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int EAvatarSkillCommonRowWrap_TypeDefinitionIndex = 54011;

	enum class EAvatarSkillCommonRowWrap : ::System::Byte
	{
		None = 0x0,
		AvatarSkill = 0x1,
		AetherDivideSpiritSkill = 0x2,
		All = 0xFF,
	};
}
