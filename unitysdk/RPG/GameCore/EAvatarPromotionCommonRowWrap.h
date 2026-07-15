#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int EAvatarPromotionCommonRowWrap_TypeDefinitionIndex = 54006;

	enum class EAvatarPromotionCommonRowWrap : ::System::Byte
	{
		None = 0x0,
		AvatarPromotion = 0x1,
		AetherDivideSpiritPromotion = 0x2,
		All = 0xFF,
	};
}
