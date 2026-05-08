#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIBossChallengePageController_RoomInfoData_TypeDefinitionIndex = 56296;

	struct alignas(4) UIBossChallengePageController_RoomInfoData
	{
		::System::Int32 zoneID; // 0x10
		::System::Int32 layerIndex; // 0x14
		::System::Int32 roomIndex; // 0x18
	};
}
