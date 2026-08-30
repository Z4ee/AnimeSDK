#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int IA_TransformAnimHoverDriveScope_TypeDefinitionIndex = 70805;

	enum class IA_TransformAnimHoverDriveScope : ::System::Int32
	{
		CurrentTransform = 0,
		DirectChildren = 1,
	};
}
