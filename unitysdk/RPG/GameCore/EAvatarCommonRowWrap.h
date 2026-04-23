#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int EAvatarCommonRowWrap_TypeDefinitionIndex = 23616;

	enum class EAvatarCommonRowWrap : ::System::Byte
	{
		None = 0x0,
		Avatar = 0x1,
		AetherDivideSpirit = 0x2,
		All = 0xFF,
	};
}
