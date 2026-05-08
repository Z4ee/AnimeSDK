#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace FluffyUnderware::Curvy { class CurvySpline; }
namespace FluffyUnderware::Curvy { class CurvySplineSegment; }
namespace FluffyUnderware::Curvy { class CurvySpline_OrientationGroup; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define FLUFFYUNDERWARE_CURVY_CURVYSPLINE_DIRTINESSMANAGER_CACHE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B21E0C0)

namespace FluffyUnderware::Curvy
{
	inline static constexpr unsigned int CurvySpline_DirtinessManager_Cache_TypeDefinitionIndex = 37217;

	class CurvySpline_DirtinessManager_Cache : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::FluffyUnderware::Curvy::CurvySplineSegment*>* SegmentList; // 0x10
		::System::Collections::Generic::HashSet_1<::FluffyUnderware::Curvy::CurvySpline*>* SplineSet; // 0x18
		::FluffyUnderware::Curvy::CurvySpline_OrientationGroup* OrientationGroup; // 0x20
		::System::Collections::Generic::HashSet_1<::FluffyUnderware::Curvy::CurvySplineSegment*>* SegmentSet; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINE_DIRTINESSMANAGER_CACHE__CTOR_OFFSET))(this);
		}
	};
}
