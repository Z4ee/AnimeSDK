#pragma once
#include "unitysdk/unitysdk.h"

namespace DG::Tweening::Core
{
	inline static constexpr unsigned int VisualManagerPreset_TypeDefinitionIndex = 32938;

	enum class VisualManagerPreset : ::System::Int32
	{
		Custom = 0,
		PoolingSystem = 1,
	};
}
