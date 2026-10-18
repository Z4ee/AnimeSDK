#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::RoadRash
{
	inline static constexpr unsigned int RoadRashBlueFireSource_TypeDefinitionIndex = 42905;

	enum class RoadRashBlueFireSource : ::System::Int32
	{
		None = 0,
		ReleaseChargeFull = 1,
		ChargeLevel3 = 2,
		UltimateV2 = 4,
		FireProjectileUltimateV2 = 8,
		SlamLv3Visual = 16,
	};
}
