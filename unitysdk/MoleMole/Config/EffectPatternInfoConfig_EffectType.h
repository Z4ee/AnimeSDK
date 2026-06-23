#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int EffectPatternInfoConfig_EffectType_TypeDefinitionIndex = 78995;

	enum class EffectPatternInfoConfig_EffectType : ::System::Int32
	{
		Monster = 2,
		None = 0,
		Permanent = 4,
		Avatar = 1,
	};
}
