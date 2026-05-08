#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class Sprite; }

namespace MoleMole
{
	inline static constexpr unsigned int UIBattlePortal_HadalZoneConfig_CfgZoneInfoItem_TypeDefinitionIndex = 49142;

	struct alignas(8) UIBattlePortal_HadalZoneConfig_CfgZoneInfoItem
	{
		::UnityEngine::Sprite* zoneInfo; // 0x10
		::System::Boolean isDynamic; // 0x18
	};
}
