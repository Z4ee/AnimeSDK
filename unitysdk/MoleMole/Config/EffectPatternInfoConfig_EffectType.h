#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int EffectPatternInfoConfig_EffectType_TypeDefinitionIndex = 62744;

	enum class EffectPatternInfoConfig_EffectType : ::System::Int32
	{
		None = 0,
		Avatar = 1,
		Permanent = 4,
		Monster = 2,
	};
}
