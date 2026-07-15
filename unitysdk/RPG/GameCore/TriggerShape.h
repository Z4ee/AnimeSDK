#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int TriggerShape_TypeDefinitionIndex = 16484;

	enum class TriggerShape : ::System::Int32
	{
		Sphere = 0,
		Box = 1,
		Capsule = 2,
		Polygon = 3,
		GeometrySphere = 4,
		GeometryBox = 5,
	};
}
