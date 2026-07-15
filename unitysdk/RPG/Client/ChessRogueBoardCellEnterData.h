#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client
{
	inline static constexpr unsigned int ChessRogueBoardCellEnterData_TypeDefinitionIndex = 63924;

	struct alignas(4) ChessRogueBoardCellEnterData
	{
		::System::UInt32 CellID; // 0x10
		::System::UInt32 MonsterGroupID; // 0x14
	};
}
