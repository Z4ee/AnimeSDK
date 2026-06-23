#pragma once
#include "unitysdk/unitysdk.h"

namespace MeshDecimator
{
	inline static constexpr unsigned int Algorithm_TypeDefinitionIndex = 34816;

	enum class Algorithm : ::System::Int32
	{
		Default = 0,
		FastQuadricMesh = 1,
	};
}
