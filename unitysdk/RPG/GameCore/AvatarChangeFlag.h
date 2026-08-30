#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarChangeFlag_TypeDefinitionIndex = 56423;

	enum class AvatarChangeFlag : ::System::Int32
	{
		DestroyOldAvatar = 1,
	};
}
