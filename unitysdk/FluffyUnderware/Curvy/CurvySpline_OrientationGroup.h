#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/Curvy/CurvySpline_SegmentGroupMetrics.h"
#include "unitysdk/System/Object.h"

namespace FluffyUnderware::Curvy { class CurvySplineSegment; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FLUFFYUNDERWARE_CURVY_CURVYSPLINE_ORIENTATIONGROUP_APPLYPARALLELTRANSPORT_OFFSET UNITYSDK_OFFSET(0x1EE5D980)
#define FLUFFYUNDERWARE_CURVY_CURVYSPLINE_ORIENTATIONGROUP_APPLYSWIRLANDSMOOTHING_OFFSET UNITYSDK_OFFSET(0x1EE5DBC0)
#define FLUFFYUNDERWARE_CURVY_CURVYSPLINE_ORIENTATIONGROUP_GETACCUMULATEDSWIRLANGLES_OFFSET UNITYSDK_OFFSET(0x1EE5E2A0)
#define FLUFFYUNDERWARE_CURVY_CURVYSPLINE_ORIENTATIONGROUP_GETORIENTATIONGAP_OFFSET UNITYSDK_OFFSET(0x1EE5E0B0)
#define FLUFFYUNDERWARE_CURVY_CURVYSPLINE_ORIENTATIONGROUP_GET_SEGMENTS_OFFSET UNITYSDK_OFFSET(0x1EE5D6A0)
#define FLUFFYUNDERWARE_CURVY_CURVYSPLINE_ORIENTATIONGROUP_SETUPORIENTATIONGROUP_OFFSET UNITYSDK_OFFSET(0x1EE5D760)
#define FLUFFYUNDERWARE_CURVY_CURVYSPLINE_ORIENTATIONGROUP_UPDATEORIENTATION_OFFSET UNITYSDK_OFFSET(0x1EE5D960)
#define FLUFFYUNDERWARE_CURVY_CURVYSPLINE_ORIENTATIONGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE5D6B0)

namespace FluffyUnderware::Curvy
{
	inline static constexpr unsigned int CurvySpline_OrientationGroup_TypeDefinitionIndex = 39669;

	class CurvySpline_OrientationGroup : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::System::Int32>* accumulatedCacheSizes; // 0x10
		::Il2CppArray<::System::Single>* accumulatedSwirlAngles; // 0x18
		::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::CurvySplineSegment*>* segments; // 0x20
		::FluffyUnderware::Curvy::CurvySpline_SegmentGroupMetrics currentMetrics; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINE_ORIENTATIONGROUP__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::CurvySplineSegment*>* get_Segments()
		{
			return ((::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::CurvySplineSegment*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINE_ORIENTATIONGROUP_GET_SEGMENTS_OFFSET))(this);
		}

		::System::Void SetupOrientationGroup(::System::Int16 anchorIndex, ::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::CurvySplineSegment*>* splineControlPoints, ::Il2CppArray<::System::Int16>* orientationAnchorIndices)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int16, ::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::CurvySplineSegment*>*, ::Il2CppArray<::System::Int16>*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINE_ORIENTATIONGROUP_SETUPORIENTATIONGROUP_OFFSET))(this, anchorIndex, splineControlPoints, orientationAnchorIndices);
		}

		::System::Void UpdateOrientation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINE_ORIENTATIONGROUP_UPDATEORIENTATION_OFFSET))(this);
		}

		::System::Void ApplySwirlAndSmoothing()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINE_ORIENTATIONGROUP_APPLYSWIRLANDSMOOTHING_OFFSET))(this);
		}

		::System::Void ApplyParallelTransport()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINE_ORIENTATIONGROUP_APPLYPARALLELTRANSPORT_OFFSET))(this);
		}

		::System::Single GetOrientationGap()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINE_ORIENTATIONGROUP_GETORIENTATIONGAP_OFFSET))(this);
		}

		::Il2CppArray<::System::Single>* GetAccumulatedSwirlAngles()
		{
			return ((::Il2CppArray<::System::Single>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINE_ORIENTATIONGROUP_GETACCUMULATEDSWIRLANGLES_OFFSET))(this);
		}
	};
}
