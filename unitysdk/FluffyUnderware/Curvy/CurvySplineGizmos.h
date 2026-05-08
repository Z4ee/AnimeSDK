#pragma once
#include "unitysdk/unitysdk.h"

namespace FluffyUnderware::Curvy
{
	inline static constexpr unsigned int CurvySplineGizmos_TypeDefinitionIndex = 37189;

	enum class CurvySplineGizmos : ::System::Int32
	{
		None = 0,
		Connections = 1,
		Curve = 2,
		Approximation = 4,
		Tangents = 8,
		Orientation = 16,
		Labels = 32,
		Metadata = 64,
		Bounds = 128,
		TFs = 256,
		RelativeDistances = 512,
		OrientationAnchors = 1024,
		All = 65535,
	};
}
