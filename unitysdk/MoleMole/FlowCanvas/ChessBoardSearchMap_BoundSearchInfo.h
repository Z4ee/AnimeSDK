#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessBoardSearchMap_BoundSearchInfo_TypeDefinitionIndex = 81365;

	struct alignas(4) ChessBoardSearchMap_BoundSearchInfo
	{
		::System::Int32 boundIndexA; // 0x10
		::System::Int32 boundIndexB; // 0x14
	};
}
