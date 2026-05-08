#pragma once
#include "unitysdk/unitysdk.h"

namespace FluffyUnderware::Curvy
{
	inline static constexpr unsigned int CurvySpline_ControlPointsSynchronizer_SynchronizationRequest_TypeDefinitionIndex = 37215;

	enum class CurvySpline_ControlPointsSynchronizer_SynchronizationRequest : ::System::Int32
	{
		None = 0,
		SplineToHierarchy = 1,
		HierarchyToSpline = 2,
	};
}
