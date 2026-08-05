#pragma once
#include "unitysdk/unitysdk.h"

namespace DG::Tweening
{
	inline static constexpr unsigned int PathMode_TypeDefinitionIndex = 28447;

	enum class PathMode : ::System::Int32
	{
		Ignore = 0,
		Full3D = 1,
		TopDown2D = 2,
		Sidescroller2D = 3,
	};
}
