#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace FluffyUnderware::Curvy { class CurvySpline; }
namespace FluffyUnderware::Curvy { class CurvySplineSegment; }

#define FLUFFYUNDERWARE_CURVY_CURVYSPLINE_RELATIONSHIPCACHE_ENSUREISVALID_OFFSET UNITYSDK_OFFSET(0x1F281580)
#define FLUFFYUNDERWARE_CURVY_CURVYSPLINE_RELATIONSHIPCACHE_GET_FIRSTSEGMENT_OFFSET UNITYSDK_OFFSET(0x1F2815B0)
#define FLUFFYUNDERWARE_CURVY_CURVYSPLINE_RELATIONSHIPCACHE_GET_FIRSTVISIBLECONTROLPOINT_OFFSET UNITYSDK_OFFSET(0x1F281560)
#define FLUFFYUNDERWARE_CURVY_CURVYSPLINE_RELATIONSHIPCACHE_GET_ISVALID_OFFSET UNITYSDK_OFFSET(0x1F2815F0)
#define FLUFFYUNDERWARE_CURVY_CURVYSPLINE_RELATIONSHIPCACHE_GET_LASTSEGMENT_OFFSET UNITYSDK_OFFSET(0x1F2815D0)
#define FLUFFYUNDERWARE_CURVY_CURVYSPLINE_RELATIONSHIPCACHE_GET_LASTVISIBLECONTROLPOINT_OFFSET UNITYSDK_OFFSET(0x1F281590)
#define FLUFFYUNDERWARE_CURVY_CURVYSPLINE_RELATIONSHIPCACHE_INVALIDATE_OFFSET UNITYSDK_OFFSET(0x1F281640)
#define FLUFFYUNDERWARE_CURVY_CURVYSPLINE_RELATIONSHIPCACHE_REBUILDANDFIXNONCOHERENTCONTROLPOINTS_OFFSET UNITYSDK_OFFSET(0x1F281710)
#define FLUFFYUNDERWARE_CURVY_CURVYSPLINE_RELATIONSHIPCACHE_SET_ISVALID_OFFSET UNITYSDK_OFFSET(0x1F281600)
#define FLUFFYUNDERWARE_CURVY_CURVYSPLINE_RELATIONSHIPCACHE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F281610)

namespace FluffyUnderware::Curvy
{
	inline static constexpr unsigned int CurvySpline_RelationshipCache_TypeDefinitionIndex = 39666;

	class CurvySpline_RelationshipCache : public ::System::Object
	{
	public:
		::FluffyUnderware::Curvy::CurvySplineSegment* lastVisibleControlPoint; // 0x10
		::System::Object* lockObject; // 0x18
		::FluffyUnderware::Curvy::CurvySplineSegment* lastSegment; // 0x20
		::FluffyUnderware::Curvy::CurvySpline* spline; // 0x28
		::FluffyUnderware::Curvy::CurvySplineSegment* firstSegment; // 0x30
		::FluffyUnderware::Curvy::CurvySplineSegment* firstVisibleControlPoint; // 0x38
		::System::Boolean _IsValid_k__BackingField; // 0x40

		::System::Void _ctor(::FluffyUnderware::Curvy::CurvySpline* spline)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::CurvySpline*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINE_RELATIONSHIPCACHE__CTOR_OFFSET))(this, spline);
		}

		::FluffyUnderware::Curvy::CurvySplineSegment* get_FirstVisibleControlPoint()
		{
			return ((::FluffyUnderware::Curvy::CurvySplineSegment*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINE_RELATIONSHIPCACHE_GET_FIRSTVISIBLECONTROLPOINT_OFFSET))(this);
		}

		::FluffyUnderware::Curvy::CurvySplineSegment* get_LastVisibleControlPoint()
		{
			return ((::FluffyUnderware::Curvy::CurvySplineSegment*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINE_RELATIONSHIPCACHE_GET_LASTVISIBLECONTROLPOINT_OFFSET))(this);
		}

		::FluffyUnderware::Curvy::CurvySplineSegment* get_FirstSegment()
		{
			return ((::FluffyUnderware::Curvy::CurvySplineSegment*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINE_RELATIONSHIPCACHE_GET_FIRSTSEGMENT_OFFSET))(this);
		}

		::FluffyUnderware::Curvy::CurvySplineSegment* get_LastSegment()
		{
			return ((::FluffyUnderware::Curvy::CurvySplineSegment*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINE_RELATIONSHIPCACHE_GET_LASTSEGMENT_OFFSET))(this);
		}

		::System::Boolean get_IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINE_RELATIONSHIPCACHE_GET_ISVALID_OFFSET))(this);
		}

		::System::Void set_IsValid(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINE_RELATIONSHIPCACHE_SET_ISVALID_OFFSET))(this, value);
		}

		::System::Void Invalidate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINE_RELATIONSHIPCACHE_INVALIDATE_OFFSET))(this);
		}

		::System::Void EnsureIsValid()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINE_RELATIONSHIPCACHE_ENSUREISVALID_OFFSET))(this);
		}

		::System::Void RebuildAndFixNonCoherentControlPoints()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINE_RELATIONSHIPCACHE_REBUILDANDFIXNONCOHERENTCONTROLPOINTS_OFFSET))(this);
		}
	};
}
