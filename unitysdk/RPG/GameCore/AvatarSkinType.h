#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarSkinType_TypeDefinitionIndex = 12623;

	enum class AvatarSkinType : ::System::Int32
	{
		None = 0,
		Normal = 1,
		Stellar = 2,
	};
}
