#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class Sprite; }

namespace MoleMole
{
	inline static constexpr unsigned int UIBattlePortal_HadalZoneConfig_CfgLayerInfoItem_TypeDefinitionIndex = 61626;

	struct alignas(8) UIBattlePortal_HadalZoneConfig_CfgLayerInfoItem
	{
		::UnityEngine::Sprite* layerIndex; // 0x10
	};
}
