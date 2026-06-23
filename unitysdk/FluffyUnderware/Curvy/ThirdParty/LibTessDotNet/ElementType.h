#pragma once
#include "unitysdk/unitysdk.h"

namespace FluffyUnderware::Curvy::ThirdParty::LibTessDotNet
{
	inline static constexpr unsigned int ElementType_TypeDefinitionIndex = 28438;

	enum class ElementType : ::System::Int32
	{
		Polygons = 0,
		ConnectedPolygons = 1,
		BoundaryContours = 2,
	};
}
