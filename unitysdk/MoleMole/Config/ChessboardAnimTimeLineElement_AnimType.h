#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int ChessboardAnimTimeLineElement_AnimType_TypeDefinitionIndex = 71443;

	enum class ChessboardAnimTimeLineElement_AnimType : ::System::Int32
	{
		CenterRadiateOnlyPath = 1,
		CenterRadiate = 0,
		Random = 2,
	};
}
