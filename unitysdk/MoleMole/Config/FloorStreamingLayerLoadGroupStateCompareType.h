#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int FloorStreamingLayerLoadGroupStateCompareType_TypeDefinitionIndex = 79364;

	enum class FloorStreamingLayerLoadGroupStateCompareType : ::System::Int32
	{
		EQ = 0,
		LT = 4,
		LTE = 5,
		GT = 2,
		NEQ = 1,
		GTE = 3,
	};
}
