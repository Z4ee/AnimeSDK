#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChenLingBattleBulletType_TypeDefinitionIndex = 15090;

	enum class ChenLingBattleBulletType : ::System::Int32
	{
		Arrow = 0,
		LightBeam = 1,
		MagicMissile = 2,
		Ray = 3,
	};
}
