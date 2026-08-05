#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessBoardSearchMap_PositionSearchInfo_TypeDefinitionIndex = 46383;

	struct alignas(4) ChessBoardSearchMap_PositionSearchInfo
	{
		::System::Int32 position; // 0x10
		::System::Int32 rangeMin; // 0x14
		::System::Int32 rangeMax; // 0x18
	};
}
