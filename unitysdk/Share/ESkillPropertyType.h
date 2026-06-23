#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int ESkillPropertyType_TypeDefinitionIndex = 14570;

	enum class ESkillPropertyType : ::System::UInt16
	{
		DamageRate = 0x3E9,
		RpRecovery = 0x3EC,
		StunRatio = 0x3EA,
		SpRecovery = 0x3EB,
	};
}
