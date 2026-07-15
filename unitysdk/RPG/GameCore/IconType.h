#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int IconType_TypeDefinitionIndex = 13912;

	enum class IconType : ::System::Int32
	{
		Unknown = 0,
		Default = 1,
		Hero = 2,
		Avatar = 3,
		BattlePassReward = 4,
		AvatarSkin = 5,
	};
}
