#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int FloorStreamingLayerLoadGroupStateCompareType_TypeDefinitionIndex = 74840;

	enum class FloorStreamingLayerLoadGroupStateCompareType : ::System::Int32
	{
		NEQ = 1,
		GTE = 3,
		EQ = 0,
		GT = 2,
		LT = 4,
		LTE = 5,
	};
}
