#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonopolyMapCellLayerType_TypeDefinitionIndex = 15593;

	enum class MonopolyMapCellLayerType : ::System::Int32
	{
		Unknown = 0,
		Barrier = 1,
		Ground = 2,
	};
}
