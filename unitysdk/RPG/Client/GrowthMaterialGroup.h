#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int GrowthMaterialGroup_TypeDefinitionIndex = 62717;

	enum class GrowthMaterialGroup : ::System::UInt32
	{
		LEVELUP_MATERIAL = 0x0,
		OUTERCIRCLE_EQUIPMENT = 0x1,
		INNERCIRCLE_EQUIPMENT = 0x2,
		NUM = 0x3,
	};
}
