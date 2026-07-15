#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::AvatarSystem
{
	inline static constexpr unsigned int AvatarSkinSource_TypeDefinitionIndex = 49610;

	enum class AvatarSkinSource : ::System::Int32
	{
		Origin = 0,
		Custom = 1,
	};
}
