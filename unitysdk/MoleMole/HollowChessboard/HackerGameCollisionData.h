#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/HollowChessboard/HollowCell.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::HollowChessboard
{
	inline static constexpr unsigned int HackerGameCollisionData_TypeDefinitionIndex = 62301;

	struct alignas(4) HackerGameCollisionData
	{
		::System::UInt32 PlayerEntityId; // 0x10
		::System::UInt32 EntityId; // 0x14
		::MoleMole::HollowChessboard::HollowCell Position; // 0x18
	};
}
