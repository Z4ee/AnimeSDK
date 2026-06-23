#pragma once
#include "unitysdk/unitysdk.h"

namespace FluffyUnderware::Curvy
{
	inline static constexpr unsigned int CurvySplineGizmos_TypeDefinitionIndex = 38875;

	enum class CurvySplineGizmos : ::System::Int32
	{
		None = 0,
		Metadata = 64,
		Labels = 32,
		Tangents = 8,
		Bounds = 128,
		Approximation = 4,
		All = 65535,
		Curve = 2,
		Connections = 1,
		RelativeDistances = 512,
		OrientationAnchors = 1024,
		TFs = 256,
		Orientation = 16,
	};
}
