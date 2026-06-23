#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/FlowCanvas/ChessBoardSearchMap_SearchParams.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::FlowCanvas { class ChessBoardSearchMap; }

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessBoardSearchMap___c__DisplayClass6_0_TypeDefinitionIndex = 85061;

	struct alignas(8) ChessBoardSearchMap___c__DisplayClass6_0
	{
		::MoleMole::FlowCanvas::ChessBoardSearchMap* __4__this; // 0x10
		::MoleMole::FlowCanvas::ChessBoardSearchMap_SearchParams searchParams; // 0x18
		::System::Int32 configRow; // 0x40
		::System::Int32 configCol; // 0x44
	};
}
