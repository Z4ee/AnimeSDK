#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::CustomRP
{
	inline static constexpr unsigned int MeshShape_TypeDefinitionIndex = 35301;

	enum class MeshShape : ::System::Int32
	{
		Box = 0,
		Sphere = 1,
		Capsule = 2,
		Mesh = 3,
	};
}
