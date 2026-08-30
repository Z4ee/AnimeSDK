#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int AvatarRankControl_ShowAvatarType_TypeDefinitionIndex = 71011;

	enum class AvatarRankControl_ShowAvatarType : ::System::Int32
	{
		Dither = 0,
		Dissolve = 1,
	};
}
