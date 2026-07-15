#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/LevelGraphOperationType.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int TurnBasedGameMode_RecordOperationByLGData_TypeDefinitionIndex = 51135;

	struct alignas(4) TurnBasedGameMode_RecordOperationByLGData
	{
		::RPG::GameCore::LevelGraphOperationType OperationType; // 0x10
		::System::UInt32 Param; // 0x14
	};
}
