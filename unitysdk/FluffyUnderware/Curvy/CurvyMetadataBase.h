#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/DevTools/DTVersionedMonoBehaviour.h"

namespace FluffyUnderware::Curvy { class CurvySpline; }
namespace FluffyUnderware::Curvy { class CurvySplineSegment; }

#define FLUFFYUNDERWARE_CURVY_CURVYMETADATABASE_AWAKE_OFFSET UNITYSDK_OFFSET(0x1F2807C0)
#define FLUFFYUNDERWARE_CURVY_CURVYMETADATABASE_GETNEXTCONTROLPOINT_OFFSET UNITYSDK_OFFSET(0x1F280DF0)
#define FLUFFYUNDERWARE_CURVY_CURVYMETADATABASE_GETPREVIOUSCONTROLPOINT_OFFSET UNITYSDK_OFFSET(0x1F280960)
#define FLUFFYUNDERWARE_CURVY_CURVYMETADATABASE_GET_CONTROLPOINT_OFFSET UNITYSDK_OFFSET(0x1F280660)
#define FLUFFYUNDERWARE_CURVY_CURVYMETADATABASE_GET_SPLINE_OFFSET UNITYSDK_OFFSET(0x1F280670)
#define FLUFFYUNDERWARE_CURVY_CURVYMETADATABASE_NOTIFYMODIFICATION_OFFSET UNITYSDK_OFFSET(0x1F281280)
#define FLUFFYUNDERWARE_CURVY_CURVYMETADATABASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1F2808F0)
#define FLUFFYUNDERWARE_CURVY_CURVYMETADATABASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F281510)

namespace FluffyUnderware::Curvy
{
	inline static constexpr unsigned int CurvyMetadataBase_TypeDefinitionIndex = 39503;

	class CurvyMetadataBase : public ::FluffyUnderware::DevTools::DTVersionedMonoBehaviour
	{
	public:
		::FluffyUnderware::Curvy::CurvySplineSegment* mCP; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYMETADATABASE__CTOR_OFFSET))(this);
		}

		::FluffyUnderware::Curvy::CurvySplineSegment* get_ControlPoint()
		{
			return ((::FluffyUnderware::Curvy::CurvySplineSegment*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYMETADATABASE_GET_CONTROLPOINT_OFFSET))(this);
		}

		::FluffyUnderware::Curvy::CurvySpline* get_Spline()
		{
			return ((::FluffyUnderware::Curvy::CurvySpline*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYMETADATABASE_GET_SPLINE_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYMETADATABASE_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYMETADATABASE_ONDESTROY_OFFSET))(this);
		}

		static ::FluffyUnderware::Curvy::CurvySplineSegment* GetPreviousControlPoint(::FluffyUnderware::Curvy::CurvySplineSegment* controlPoint, ::System::Boolean segmentsOnly, ::System::Boolean useFollowUp)
		{
			return ((::FluffyUnderware::Curvy::CurvySplineSegment*(*)(::FluffyUnderware::Curvy::CurvySplineSegment*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYMETADATABASE_GETPREVIOUSCONTROLPOINT_OFFSET))(controlPoint, segmentsOnly, useFollowUp);
		}

		static ::FluffyUnderware::Curvy::CurvySplineSegment* GetNextControlPoint(::FluffyUnderware::Curvy::CurvySplineSegment* controlPoint, ::System::Boolean segmentsOnly, ::System::Boolean useFollowUp)
		{
			return ((::FluffyUnderware::Curvy::CurvySplineSegment*(*)(::FluffyUnderware::Curvy::CurvySplineSegment*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYMETADATABASE_GETNEXTCONTROLPOINT_OFFSET))(controlPoint, segmentsOnly, useFollowUp);
		}

		::System::Void NotifyModification()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYMETADATABASE_NOTIFYMODIFICATION_OFFSET))(this);
		}
	};
}
