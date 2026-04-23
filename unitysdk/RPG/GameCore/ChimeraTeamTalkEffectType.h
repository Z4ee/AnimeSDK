#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraTeamTalkEffectType_TypeDefinitionIndex = 12315;

	enum class ChimeraTeamTalkEffectType : ::System::Int32
	{
		None = 0,
		Fire = 1,
		Fail = 2,
	};
}
