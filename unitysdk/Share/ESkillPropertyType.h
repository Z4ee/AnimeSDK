#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int ESkillPropertyType_TypeDefinitionIndex = 9478;

	enum class ESkillPropertyType : ::System::UInt16
	{
		SpRecovery = 0x3EB,
		DamageRate = 0x3E9,
		StunRatio = 0x3EA,
		RpRecovery = 0x3EC,
	};
}
