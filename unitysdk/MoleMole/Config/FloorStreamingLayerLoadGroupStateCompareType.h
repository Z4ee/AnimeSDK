#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int FloorStreamingLayerLoadGroupStateCompareType_TypeDefinitionIndex = 73964;

	enum class FloorStreamingLayerLoadGroupStateCompareType : ::System::Int32
	{
		GTE = 3,
		NEQ = 1,
		GT = 2,
		LT = 4,
		EQ = 0,
		LTE = 5,
	};
}
