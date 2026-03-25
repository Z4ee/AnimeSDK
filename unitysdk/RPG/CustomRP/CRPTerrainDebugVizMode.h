#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::CustomRP
{
	inline static constexpr unsigned int CRPTerrainDebugVizMode_TypeDefinitionIndex = 29341;

	enum class CRPTerrainDebugVizMode : ::System::Int32
	{
		None = 0,
		GroupIdColor = 1,
		HighLightSelection = 2,
	};
}
