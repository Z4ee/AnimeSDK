#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int EffectScaleAdaptType_TypeDefinitionIndex = 23628;

	enum class EffectScaleAdaptType : ::System::Int32
	{
		None = 0,
		AdaptBattleEffectInMaze = 1,
		AdaptBattleEffectInActivity = 2,
		AdaptAttachPoint = 3,
	};
}
