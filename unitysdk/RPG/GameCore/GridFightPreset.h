#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightPreset_TypeDefinitionIndex = 12999;

	enum class GridFightPreset : ::System::Int32
	{
		Both = 0,
		Front = 1,
		Back = 2,
	};
}
