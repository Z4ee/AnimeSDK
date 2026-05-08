#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessBoardSearchMap_BoundSearchInfo.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessBoardSearchMap_IndexSearchInfo.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessBoardSearchMap_PositionSearchInfo.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessBoardSearchMap_SearchType.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessBoardSearchMap_SearchParams_TypeDefinitionIndex = 81360;

	struct alignas(8) ChessBoardSearchMap_SearchParams
	{
		::MoleMole::FlowCanvas::ChessBoardSearchMap_SearchType SearchType; // 0x10
		::MoleMole::FlowCanvas::ChessBoardSearchMap_IndexSearchInfo indexesSearchInfo; // 0x18
		::MoleMole::FlowCanvas::ChessBoardSearchMap_PositionSearchInfo positionSearchInfo; // 0x20
		::MoleMole::FlowCanvas::ChessBoardSearchMap_BoundSearchInfo boundSearchInfo; // 0x2C
	};
}
