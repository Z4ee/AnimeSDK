#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int EquipBallFadeOutType_TypeDefinitionIndex = 69232;

	enum class EquipBallFadeOutType : ::System::Int32
	{
		None = 0,
		FadeOut = 1,
		FadeOutGold = 2,
	};
}
