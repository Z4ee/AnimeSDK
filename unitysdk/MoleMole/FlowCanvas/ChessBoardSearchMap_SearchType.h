#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::FlowCanvas
{
	inline static constexpr unsigned int ChessBoardSearchMap_SearchType_TypeDefinitionIndex = 81363;

	enum class ChessBoardSearchMap_SearchType : ::System::Int32
	{
		Bound = 2,
		Index = 0,
		Position = 1,
	};
}
