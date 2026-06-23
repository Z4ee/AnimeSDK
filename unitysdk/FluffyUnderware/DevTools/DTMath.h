#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define FLUFFYUNDERWARE_DEVTOOLS_DTMATH_FIXNAN_1_OFFSET UNITYSDK_OFFSET(0x1D692870)
#define FLUFFYUNDERWARE_DEVTOOLS_DTMATH_FIXNAN_2_OFFSET UNITYSDK_OFFSET(0x1D692890)
#define FLUFFYUNDERWARE_DEVTOOLS_DTMATH_FIXNAN_3_OFFSET UNITYSDK_OFFSET(0x1D6928E0)
#define FLUFFYUNDERWARE_DEVTOOLS_DTMATH_FIXNAN_OFFSET UNITYSDK_OFFSET(0x1D692840)
#define FLUFFYUNDERWARE_DEVTOOLS_DTMATH_LEFTTAN_OFFSET UNITYSDK_OFFSET(0x1D692750)
#define FLUFFYUNDERWARE_DEVTOOLS_DTMATH_LINELINEINTERSECTION_OFFSET UNITYSDK_OFFSET(0x1D693160)
#define FLUFFYUNDERWARE_DEVTOOLS_DTMATH_LINELINEINTERSECT_OFFSET UNITYSDK_OFFSET(0x1D693250)
#define FLUFFYUNDERWARE_DEVTOOLS_DTMATH_LINEPOINTDISTANCESQR_OFFSET UNITYSDK_OFFSET(0x1D692C90)
#define FLUFFYUNDERWARE_DEVTOOLS_DTMATH_MAPVALUE_OFFSET UNITYSDK_OFFSET(0x1D692960)
#define FLUFFYUNDERWARE_DEVTOOLS_DTMATH_PARALLELTRANSPORTFRAME_OFFSET UNITYSDK_OFFSET(0x1D6924B0)
#define FLUFFYUNDERWARE_DEVTOOLS_DTMATH_POINTINSIDETRIANGLE_OFFSET UNITYSDK_OFFSET(0x1D693370)
#define FLUFFYUNDERWARE_DEVTOOLS_DTMATH_RAYLINESEGMENTINTERSECTION_OFFSET UNITYSDK_OFFSET(0x1D692D70)
#define FLUFFYUNDERWARE_DEVTOOLS_DTMATH_REPEAT_OFFSET UNITYSDK_OFFSET(0x1D6927F0)
#define FLUFFYUNDERWARE_DEVTOOLS_DTMATH_RIGHTTAN_OFFSET UNITYSDK_OFFSET(0x1D6927A0)
#define FLUFFYUNDERWARE_DEVTOOLS_DTMATH_SHORTESTINTERSECTIONLINE_OFFSET UNITYSDK_OFFSET(0x1D692E90)
#define FLUFFYUNDERWARE_DEVTOOLS_DTMATH_SNAPPRECISION_1_OFFSET UNITYSDK_OFFSET(0x1D692A20)
#define FLUFFYUNDERWARE_DEVTOOLS_DTMATH_SNAPPRECISION_2_OFFSET UNITYSDK_OFFSET(0x1D692B20)
#define FLUFFYUNDERWARE_DEVTOOLS_DTMATH_SNAPPRECISION_OFFSET UNITYSDK_OFFSET(0x1D692980)

namespace FluffyUnderware::DevTools
{
	inline static constexpr unsigned int DTMath_TypeDefinitionIndex = 28338;

	class DTMath : public ::System::Object
	{
	public:
		static ::UnityEngine::Vector3 ParallelTransportFrame(::UnityEngine::Vector3 up, ::UnityEngine::Vector3 tan0, ::UnityEngine::Vector3 tan1)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTMATH_PARALLELTRANSPORTFRAME_OFFSET))(up, tan0, tan1);
		}

		static ::UnityEngine::Vector3 LeftTan(::UnityEngine::Vector3& tan, ::UnityEngine::Vector3& up)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTMATH_LEFTTAN_OFFSET))(tan, up);
		}

		static ::UnityEngine::Vector3 RightTan(::UnityEngine::Vector3& tan, ::UnityEngine::Vector3& up)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTMATH_RIGHTTAN_OFFSET))(tan, up);
		}

		static ::System::Single Repeat(::System::Single t, ::System::Single length)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTMATH_REPEAT_OFFSET))(t, length);
		}

		static ::System::Double FixNaN(::System::Double v)
		{
			return ((::System::Double(*)(::System::Double))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTMATH_FIXNAN_OFFSET))(v);
		}

		static ::System::Single FixNaN_1(::System::Single v)
		{
			return ((::System::Single(*)(::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTMATH_FIXNAN_1_OFFSET))(v);
		}

		static ::UnityEngine::Vector2 FixNaN_2(::UnityEngine::Vector2 v)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTMATH_FIXNAN_2_OFFSET))(v);
		}

		static ::UnityEngine::Vector3 FixNaN_3(::UnityEngine::Vector3 v)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTMATH_FIXNAN_3_OFFSET))(v);
		}

		static ::System::Single MapValue(::System::Single min, ::System::Single max, ::System::Single value, ::System::Single vMin, ::System::Single vMax)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTMATH_MAPVALUE_OFFSET))(min, max, value, vMin, vMax);
		}

		static ::System::Single SnapPrecision(::System::Single value, ::System::Int32 decimals)
		{
			return ((::System::Single(*)(::System::Single, ::System::Int32))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTMATH_SNAPPRECISION_OFFSET))(value, decimals);
		}

		static ::UnityEngine::Vector2 SnapPrecision_1(::UnityEngine::Vector2 value, ::System::Int32 decimals)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::System::Int32))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTMATH_SNAPPRECISION_1_OFFSET))(value, decimals);
		}

		static ::UnityEngine::Vector3 SnapPrecision_2(::UnityEngine::Vector3 value, ::System::Int32 decimals)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::System::Int32))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTMATH_SNAPPRECISION_2_OFFSET))(value, decimals);
		}

		static ::System::Single LinePointDistanceSqr(::UnityEngine::Vector3 l1, ::UnityEngine::Vector3 l2, ::UnityEngine::Vector3 p, ::System::Single& frag)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single&))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTMATH_LINEPOINTDISTANCESQR_OFFSET))(l1, l2, p, frag);
		}

		static ::System::Boolean RayLineSegmentIntersection(::UnityEngine::Vector2 r0, ::UnityEngine::Vector2 dir, ::UnityEngine::Vector2 l1, ::UnityEngine::Vector2 l2, ::UnityEngine::Vector2& hit, ::System::Single& frag)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2&, ::System::Single&))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTMATH_RAYLINESEGMENTINTERSECTION_OFFSET))(r0, dir, l1, l2, hit, frag);
		}

		static ::System::Boolean ShortestIntersectionLine(::UnityEngine::Vector3 line1A, ::UnityEngine::Vector3 line1B, ::UnityEngine::Vector3 line2A, ::UnityEngine::Vector3 line2B, ::UnityEngine::Vector3& resultSegmentA, ::UnityEngine::Vector3& resultSegmentB)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3&, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTMATH_SHORTESTINTERSECTIONLINE_OFFSET))(line1A, line1B, line2A, line2B, resultSegmentA, resultSegmentB);
		}

		static ::System::Boolean LineLineIntersection(::UnityEngine::Vector3 line1A, ::UnityEngine::Vector3 line1B, ::UnityEngine::Vector3 line2A, ::UnityEngine::Vector3 line2B, ::UnityEngine::Vector3& hitPoint)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3&))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTMATH_LINELINEINTERSECTION_OFFSET))(line1A, line1B, line2A, line2B, hitPoint);
		}

		static ::System::Boolean LineLineIntersect(::UnityEngine::Vector2 line1A, ::UnityEngine::Vector2 line1B, ::UnityEngine::Vector2 line2A, ::UnityEngine::Vector2 line2B, ::UnityEngine::Vector2& hitPoint, ::System::Boolean segmentOnly)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2&, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTMATH_LINELINEINTERSECT_OFFSET))(line1A, line1B, line2A, line2B, hitPoint, segmentOnly);
		}

		static ::System::Boolean PointInsideTriangle(::UnityEngine::Vector3 A, ::UnityEngine::Vector3 B, ::UnityEngine::Vector3 C, ::UnityEngine::Vector3 p, ::System::Single& ac, ::System::Single& ab, ::System::Boolean edgesAllowed)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::System::Single&, ::System::Single&, ::System::Boolean))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_DTMATH_POINTINSIDETRIANGLE_OFFSET))(A, B, C, p, ac, ab, edgesAllowed);
		}
	};
}
