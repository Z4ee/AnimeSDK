#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int EffectPatternInfoConfig_EffectType_TypeDefinitionIndex = 77216;

	enum class EffectPatternInfoConfig_EffectType : ::System::Int32
	{
		Permanent = 4,
		None = 0,
		Avatar = 1,
		Monster = 2,
	};
}
