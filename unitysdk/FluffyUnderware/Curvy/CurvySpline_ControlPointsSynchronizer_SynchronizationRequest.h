#pragma once
#include "unitysdk/unitysdk.h"

namespace FluffyUnderware::Curvy
{
	inline static constexpr unsigned int CurvySpline_ControlPointsSynchronizer_SynchronizationRequest_TypeDefinitionIndex = 38849;

	enum class CurvySpline_ControlPointsSynchronizer_SynchronizationRequest : ::System::Int32
	{
		HierarchyToSpline = 2,
		SplineToHierarchy = 1,
		None = 0,
	};
}
