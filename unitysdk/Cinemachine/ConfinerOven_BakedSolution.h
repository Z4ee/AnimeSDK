#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cinemachine/ConfinerOven_AspectStretcher.h"
#include "unitysdk/ClipperLib/IntPoint.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define CINEMACHINE_CONFINEROVEN_BAKEDSOLUTION_CLEAR_OFFSET UNITYSDK_OFFSET(0x1C355CE0)
#define CINEMACHINE_CONFINEROVEN_BAKEDSOLUTION_CLOSESTPOINTONSEGMENT_OFFSET UNITYSDK_OFFSET(0x1C3564B0)
#define CINEMACHINE_CONFINEROVEN_BAKEDSOLUTION_CONFINEPOINT_OFFSET UNITYSDK_OFFSET(0x1C355D20)
#define CINEMACHINE_CONFINEROVEN_BAKEDSOLUTION_DOESINTERSECTORIGINAL_OFFSET UNITYSDK_OFFSET(0x1C356730)
#define CINEMACHINE_CONFINEROVEN_BAKEDSOLUTION_FINDINTERSECTION_OFFSET UNITYSDK_OFFSET(0x1C356900)
#define CINEMACHINE_CONFINEROVEN_BAKEDSOLUTION_GET_FRUSTUMHEIGHT_OFFSET UNITYSDK_OFFSET(0x1C355C50)
#define CINEMACHINE_CONFINEROVEN_BAKEDSOLUTION_INTPOINTDIFFSQRMAGNITUDE_OFFSET UNITYSDK_OFFSET(0x1C356AE0)
#define CINEMACHINE_CONFINEROVEN_BAKEDSOLUTION_INTPOINTLERP_OFFSET UNITYSDK_OFFSET(0x1C356560)
#define CINEMACHINE_CONFINEROVEN_BAKEDSOLUTION_ISINSIDEORIGINAL_OFFSET UNITYSDK_OFFSET(0x1C356400)
#define CINEMACHINE_CONFINEROVEN_BAKEDSOLUTION_ISVALID_OFFSET UNITYSDK_OFFSET(0x1C355CF0)
#define CINEMACHINE_CONFINEROVEN_BAKEDSOLUTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1C355C60)

namespace Cinemachine
{
	inline static constexpr unsigned int ConfinerOven_BakedSolution_TypeDefinitionIndex = 32582;

	class ConfinerOven_BakedSolution : public ::System::Object
	{
	public:
		// static const ::System::Double k_ClipperEpsilon; // 0x0
		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::ClipperLib::IntPoint>*>* m_OriginalPolygon; // 0x10
		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::ClipperLib::IntPoint>*>* m_Solution; // 0x18
		::System::Single m_frustumSizeIntSpace; // 0x20
		::Cinemachine::ConfinerOven_AspectStretcher m_AspectStretcher; // 0x24
		::System::Boolean m_HasBones; // 0x30
		::System::Single _FrustumHeight_k__BackingField; // 0x34
		::System::Double m_SqrPolygonDiagonal; // 0x38

		::System::Void _ctor(::System::Single aspectRatio, ::System::Single frustumHeight, ::System::Boolean hasBones, ::UnityEngine::Rect polygonBounds, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::ClipperLib::IntPoint>*>* originalPolygon, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::ClipperLib::IntPoint>*>* solution)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Boolean, ::UnityEngine::Rect, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::ClipperLib::IntPoint>*>*, ::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::ClipperLib::IntPoint>*>*))((::PBYTE)hIl2Cpp + CINEMACHINE_CONFINEROVEN_BAKEDSOLUTION__CTOR_OFFSET))(this, aspectRatio, frustumHeight, hasBones, polygonBounds, originalPolygon, solution);
		}

		::System::Single get_FrustumHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CONFINEROVEN_BAKEDSOLUTION_GET_FRUSTUMHEIGHT_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_CONFINEROVEN_BAKEDSOLUTION_CLEAR_OFFSET))(this);
		}

		::System::Boolean IsValid(::System::Single frustumHeight)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CONFINEROVEN_BAKEDSOLUTION_ISVALID_OFFSET))(this, frustumHeight);
		}

		::UnityEngine::Vector2 ConfinePoint(::UnityEngine::Vector2& pointToConfine)
		{
			return ((::UnityEngine::Vector2(*)(::PVOID, ::UnityEngine::Vector2&))((::PBYTE)hIl2Cpp + CINEMACHINE_CONFINEROVEN_BAKEDSOLUTION_CONFINEPOINT_OFFSET))(this, pointToConfine);
		}

		::System::Boolean IsInsideOriginal(::ClipperLib::IntPoint p)
		{
			return ((::System::Boolean(*)(::PVOID, ::ClipperLib::IntPoint))((::PBYTE)hIl2Cpp + CINEMACHINE_CONFINEROVEN_BAKEDSOLUTION_ISINSIDEORIGINAL_OFFSET))(this, p);
		}

		static ::System::Single ClosestPointOnSegment(::ClipperLib::IntPoint p, ::ClipperLib::IntPoint s0, ::ClipperLib::IntPoint s1)
		{
			return ((::System::Single(*)(::ClipperLib::IntPoint, ::ClipperLib::IntPoint, ::ClipperLib::IntPoint))((::PBYTE)hIl2Cpp + CINEMACHINE_CONFINEROVEN_BAKEDSOLUTION_CLOSESTPOINTONSEGMENT_OFFSET))(p, s0, s1);
		}

		static ::ClipperLib::IntPoint IntPointLerp(::ClipperLib::IntPoint a, ::ClipperLib::IntPoint b, ::System::Single lerp)
		{
			return ((::ClipperLib::IntPoint(*)(::ClipperLib::IntPoint, ::ClipperLib::IntPoint, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_CONFINEROVEN_BAKEDSOLUTION_INTPOINTLERP_OFFSET))(a, b, lerp);
		}

		::System::Boolean DoesIntersectOriginal(::ClipperLib::IntPoint l1, ::ClipperLib::IntPoint l2)
		{
			return ((::System::Boolean(*)(::PVOID, ::ClipperLib::IntPoint, ::ClipperLib::IntPoint))((::PBYTE)hIl2Cpp + CINEMACHINE_CONFINEROVEN_BAKEDSOLUTION_DOESINTERSECTORIGINAL_OFFSET))(this, l1, l2);
		}

		static ::System::Int32 FindIntersection(::ClipperLib::IntPoint& p1, ::ClipperLib::IntPoint& p2, ::ClipperLib::IntPoint& p3, ::ClipperLib::IntPoint& p4)
		{
			return ((::System::Int32(*)(::ClipperLib::IntPoint&, ::ClipperLib::IntPoint&, ::ClipperLib::IntPoint&, ::ClipperLib::IntPoint&))((::PBYTE)hIl2Cpp + CINEMACHINE_CONFINEROVEN_BAKEDSOLUTION_FINDINTERSECTION_OFFSET))(p1, p2, p3, p4);
		}

		static ::System::Double IntPointDiffSqrMagnitude(::ClipperLib::IntPoint p1, ::ClipperLib::IntPoint p2)
		{
			return ((::System::Double(*)(::ClipperLib::IntPoint, ::ClipperLib::IntPoint))((::PBYTE)hIl2Cpp + CINEMACHINE_CONFINEROVEN_BAKEDSOLUTION_INTPOINTDIFFSQRMAGNITUDE_OFFSET))(p1, p2);
		}
	};
}
