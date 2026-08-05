#pragma once
#include "unitysdk/unitysdk.h"

namespace FluffyUnderware::Curvy
{
	inline static constexpr unsigned int CurvySplineGizmos_TypeDefinitionIndex = 39622;

	enum class CurvySplineGizmos : ::System::Int32
	{
		TFs = 256,
		Bounds = 128,
		Metadata = 64,
		All = 65535,
		Tangents = 8,
		RelativeDistances = 512,
		Curve = 2,
		Connections = 1,
		Approximation = 4,
		OrientationAnchors = 1024,
		Labels = 32,
		None = 0,
		Orientation = 16,
	};
}
