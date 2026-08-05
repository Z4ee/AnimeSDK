#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_03B9C6C413236E4D.h"
#include "unitysdk/System/ValueType.h"

#define MOLEMOLE_BATTLEMAPSUBSYSTEM_BATTLECELLINFO_ISEMPTYINFO_OFFSET UNITYSDK_OFFSET(0x7B4A40)

namespace MoleMole
{
	inline static constexpr unsigned int BattleMapSubsystem_BattleCellInfo_TypeDefinitionIndex = 56196;

	struct alignas(1) BattleMapSubsystem_BattleCellInfo
	{
		::System::Byte MonsterCount; // 0x10
		::System::Byte BaseSpawnScore; // 0x11
		::Enum_3_03B9C6C413236E4D State; // 0x12

		::System::Boolean IsEmptyInfo()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_BATTLEMAPSUBSYSTEM_BATTLECELLINFO_ISEMPTYINFO_OFFSET))(this);
		}
	};
}
