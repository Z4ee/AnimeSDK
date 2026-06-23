#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace FluffyUnderware::Curvy { class CurvySplineSegment; }
namespace System { class Object; }

#define FLUFFYUNDERWARE_CURVY_CURVYSPLINE_SEGMENTGROUPMETRICS_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xA64F70)
#define FLUFFYUNDERWARE_CURVY_CURVYSPLINE_SEGMENTGROUPMETRICS_EQUALS_OFFSET UNITYSDK_OFFSET(0xA64F20)
#define FLUFFYUNDERWARE_CURVY_CURVYSPLINE_SEGMENTGROUPMETRICS_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA65000)
#define FLUFFYUNDERWARE_CURVY_CURVYSPLINE_SEGMENTGROUPMETRICS_INCREMENT_OFFSET UNITYSDK_OFFSET(0xA64ED0)
#define FLUFFYUNDERWARE_CURVY_CURVYSPLINE_SEGMENTGROUPMETRICS_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1E451790)
#define FLUFFYUNDERWARE_CURVY_CURVYSPLINE_SEGMENTGROUPMETRICS_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1E4517E0)

namespace FluffyUnderware::Curvy
{
	inline static constexpr unsigned int CurvySpline_SegmentGroupMetrics_TypeDefinitionIndex = 38852;

	struct alignas(4) CurvySpline_SegmentGroupMetrics
	{
		::System::Int32 CacheSize; // 0x10
		::System::Int32 SegmentCount; // 0x14
		::System::Single Length; // 0x18

		::System::Void Increment(::FluffyUnderware::Curvy::CurvySplineSegment* segment)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::CurvySplineSegment*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINE_SEGMENTGROUPMETRICS_INCREMENT_OFFSET))(this, segment);
		}

		::System::Boolean Equals(::FluffyUnderware::Curvy::CurvySpline_SegmentGroupMetrics other)
		{
			return ((::System::Boolean(*)(::PVOID, ::FluffyUnderware::Curvy::CurvySpline_SegmentGroupMetrics))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINE_SEGMENTGROUPMETRICS_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINE_SEGMENTGROUPMETRICS_EQUALS_1_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINE_SEGMENTGROUPMETRICS_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::FluffyUnderware::Curvy::CurvySpline_SegmentGroupMetrics left, ::FluffyUnderware::Curvy::CurvySpline_SegmentGroupMetrics right)
		{
			return ((::System::Boolean(*)(::FluffyUnderware::Curvy::CurvySpline_SegmentGroupMetrics, ::FluffyUnderware::Curvy::CurvySpline_SegmentGroupMetrics))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINE_SEGMENTGROUPMETRICS_OP_EQUALITY_OFFSET))(left, right);
		}

		static ::System::Boolean op_Inequality(::FluffyUnderware::Curvy::CurvySpline_SegmentGroupMetrics left, ::FluffyUnderware::Curvy::CurvySpline_SegmentGroupMetrics right)
		{
			return ((::System::Boolean(*)(::FluffyUnderware::Curvy::CurvySpline_SegmentGroupMetrics, ::FluffyUnderware::Curvy::CurvySpline_SegmentGroupMetrics))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINE_SEGMENTGROUPMETRICS_OP_INEQUALITY_OFFSET))(left, right);
		}
	};
}
