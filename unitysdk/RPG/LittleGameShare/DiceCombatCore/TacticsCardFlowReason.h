#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::LittleGameShare::DiceCombatCore
{
	inline static constexpr unsigned int TacticsCardFlowReason_TypeDefinitionIndex = 34961;

	enum class TacticsCardFlowReason : ::System::Byte
	{
		ShopPurchase = 0x1,
		Use = 0x2,
		Destroy = 0x3,
	};
}
