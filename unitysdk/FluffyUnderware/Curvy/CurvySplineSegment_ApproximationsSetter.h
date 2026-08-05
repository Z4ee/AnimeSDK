#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/Curvy/CurvySplineSegment_BSplineApproximationParameters.h"
#include "unitysdk/FluffyUnderware/Curvy/TcbParameters.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ToolBuddy/Pooling/Collections/SubArray_1.h"
#include "unitysdk/UnityEngine/Quaternion.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace FluffyUnderware::Curvy { class CurvySplineSegment; }
namespace FluffyUnderware::Curvy { class CurvySplineSegment_Approximations; }

#define FLUFFYUNDERWARE_CURVY_CURVYSPLINESEGMENT_APPROXIMATIONSSETTER_SETORIENTATIONTODYNAMIC_OFFSET UNITYSDK_OFFSET(0x1F33FED0)
#define FLUFFYUNDERWARE_CURVY_CURVYSPLINESEGMENT_APPROXIMATIONSSETTER_SETORIENTATIONTONONE_OFFSET UNITYSDK_OFFSET(0x1F33FB30)
#define FLUFFYUNDERWARE_CURVY_CURVYSPLINESEGMENT_APPROXIMATIONSSETTER_SETORIENTATIONTOSTATIC_OFFSET UNITYSDK_OFFSET(0x1F33FC40)
#define FLUFFYUNDERWARE_CURVY_CURVYSPLINESEGMENT_APPROXIMATIONSSETTER_SETPOINTTANGENTANDDISTANCE_OFFSET UNITYSDK_OFFSET(0x1F340350)
#define FLUFFYUNDERWARE_CURVY_CURVYSPLINESEGMENT_APPROXIMATIONSSETTER_SETPOSITIONSTOBEZIER_OFFSET UNITYSDK_OFFSET(0x1F33EE10)
#define FLUFFYUNDERWARE_CURVY_CURVYSPLINESEGMENT_APPROXIMATIONSSETTER_SETPOSITIONSTOBSPLINE_OFFSET UNITYSDK_OFFSET(0x1F33F3E0)
#define FLUFFYUNDERWARE_CURVY_CURVYSPLINESEGMENT_APPROXIMATIONSSETTER_SETPOSITIONSTOCATMULLROM_OFFSET UNITYSDK_OFFSET(0x1F33DF60)
#define FLUFFYUNDERWARE_CURVY_CURVYSPLINESEGMENT_APPROXIMATIONSSETTER_SETPOSITIONSTOLINEAR_OFFSET UNITYSDK_OFFSET(0x1F33DB30)
#define FLUFFYUNDERWARE_CURVY_CURVYSPLINESEGMENT_APPROXIMATIONSSETTER_SETPOSITIONSTOPOINT_OFFSET UNITYSDK_OFFSET(0x1F33D9E0)
#define FLUFFYUNDERWARE_CURVY_CURVYSPLINESEGMENT_APPROXIMATIONSSETTER_SETPOSITIONSTOTCB_OFFSET UNITYSDK_OFFSET(0x1F33E5B0)
#define FLUFFYUNDERWARE_CURVY_CURVYSPLINESEGMENT_APPROXIMATIONSSETTER_SETSEGMENTPRECISETANGENTS_OFFSET UNITYSDK_OFFSET(0x1F341100)
#define FLUFFYUNDERWARE_CURVY_CURVYSPLINESEGMENT_APPROXIMATIONSSETTER_SETSEGMENTTANGENTSANDDISTANCES_OFFSET UNITYSDK_OFFSET(0x1F340AB0)
#define FLUFFYUNDERWARE_CURVY_CURVYSPLINESEGMENT_APPROXIMATIONSSETTER_SETTANGENTSTOBEZIER_OFFSET UNITYSDK_OFFSET(0x1F3416E0)
#define FLUFFYUNDERWARE_CURVY_CURVYSPLINESEGMENT_APPROXIMATIONSSETTER_SETTANGENTSTOCATMULLROM_OFFSET UNITYSDK_OFFSET(0x1F341C30)
#define FLUFFYUNDERWARE_CURVY_CURVYSPLINESEGMENT_APPROXIMATIONSSETTER_SETTANGENTSTOLINEAR_OFFSET UNITYSDK_OFFSET(0x1F342440)
#define FLUFFYUNDERWARE_CURVY_CURVYSPLINESEGMENT_APPROXIMATIONSSETTER_SETTANGENTSTOTCB_OFFSET UNITYSDK_OFFSET(0x1F341FF0)

namespace FluffyUnderware::Curvy
{
	inline static constexpr unsigned int CurvySplineSegment_ApproximationsSetter_TypeDefinitionIndex = 39632;

	class CurvySplineSegment_ApproximationsSetter : public ::System::Object
	{
	public:
		static ::System::Void SetPositionsToPoint(::FluffyUnderware::Curvy::CurvySplineSegment_Approximations* approximations, ::UnityEngine::Vector3 currentPosition)
		{
			return ((::System::Void(*)(::FluffyUnderware::Curvy::CurvySplineSegment_Approximations*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINESEGMENT_APPROXIMATIONSSETTER_SETPOSITIONSTOPOINT_OFFSET))(approximations, currentPosition);
		}

		static ::System::Void SetPositionsToLinear(::FluffyUnderware::Curvy::CurvySplineSegment_Approximations* approximations, ::System::Int32 elementCount, ::UnityEngine::Vector3 startPosition, ::UnityEngine::Vector3 endPosition)
		{
			return ((::System::Void(*)(::FluffyUnderware::Curvy::CurvySplineSegment_Approximations*, ::System::Int32, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINESEGMENT_APPROXIMATIONSSETTER_SETPOSITIONSTOLINEAR_OFFSET))(approximations, elementCount, startPosition, endPosition);
		}

		static ::System::Void SetPositionsToCatmullRom(::FluffyUnderware::Curvy::CurvySplineSegment_Approximations* approximations, ::System::Int32 elementCount, ::UnityEngine::Vector3 startPosition, ::UnityEngine::Vector3 endPosition, ::UnityEngine::Vector3 preSegmentPosition, ::UnityEngine::Vector3 postSegmentPosition)
		{
			return ((::System::Void(*)(::FluffyUnderware::Curvy::CurvySplineSegment_Approximations*, ::System::Int32, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINESEGMENT_APPROXIMATIONSSETTER_SETPOSITIONSTOCATMULLROM_OFFSET))(approximations, elementCount, startPosition, endPosition, preSegmentPosition, postSegmentPosition);
		}

		static ::System::Void SetPositionsToTCB(::FluffyUnderware::Curvy::CurvySplineSegment_Approximations* approximations, ::System::Int32 elementCount, ::FluffyUnderware::Curvy::TcbParameters tcbParameters, ::UnityEngine::Vector3 startPosition, ::UnityEngine::Vector3 endPosition, ::UnityEngine::Vector3 preSegmentPosition, ::UnityEngine::Vector3 postSegmentPosition)
		{
			return ((::System::Void(*)(::FluffyUnderware::Curvy::CurvySplineSegment_Approximations*, ::System::Int32, ::FluffyUnderware::Curvy::TcbParameters, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINESEGMENT_APPROXIMATIONSSETTER_SETPOSITIONSTOTCB_OFFSET))(approximations, elementCount, tcbParameters, startPosition, endPosition, preSegmentPosition, postSegmentPosition);
		}

		static ::System::Void SetPositionsToBezier(::FluffyUnderware::Curvy::CurvySplineSegment_Approximations* approximations, ::System::Int32 elementCount, ::UnityEngine::Vector3 startPosition, ::UnityEngine::Vector3 startTangent, ::UnityEngine::Vector3 endPosition, ::UnityEngine::Vector3 endTangent)
		{
			return ((::System::Void(*)(::FluffyUnderware::Curvy::CurvySplineSegment_Approximations*, ::System::Int32, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINESEGMENT_APPROXIMATIONSSETTER_SETPOSITIONSTOBEZIER_OFFSET))(approximations, elementCount, startPosition, startTangent, endPosition, endTangent);
		}

		static ::System::Void SetPositionsToBSpline(::FluffyUnderware::Curvy::CurvySplineSegment_Approximations* approximations, ::System::Int32 elementCount, ::ToolBuddy::Pooling::Collections::SubArray_1<::UnityEngine::Vector3> splineP0Array, ::FluffyUnderware::Curvy::CurvySplineSegment_BSplineApproximationParameters bSplineParameters)
		{
			return ((::System::Void(*)(::FluffyUnderware::Curvy::CurvySplineSegment_Approximations*, ::System::Int32, ::ToolBuddy::Pooling::Collections::SubArray_1<::UnityEngine::Vector3>, ::FluffyUnderware::Curvy::CurvySplineSegment_BSplineApproximationParameters))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINESEGMENT_APPROXIMATIONSSETTER_SETPOSITIONSTOBSPLINE_OFFSET))(approximations, elementCount, splineP0Array, bSplineParameters);
		}

		static ::System::Void SetOrientationToNone(::FluffyUnderware::Curvy::CurvySplineSegment_Approximations* approximations, ::System::Int32 elementCount)
		{
			return ((::System::Void(*)(::FluffyUnderware::Curvy::CurvySplineSegment_Approximations*, ::System::Int32))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINESEGMENT_APPROXIMATIONSSETTER_SETORIENTATIONTONONE_OFFSET))(approximations, elementCount);
		}

		static ::System::Void SetOrientationToStatic(::FluffyUnderware::Curvy::CurvySplineSegment_Approximations* approximations, ::System::Int32 elementCount, ::UnityEngine::Vector3 startUp, ::UnityEngine::Vector3 endUp)
		{
			return ((::System::Void(*)(::FluffyUnderware::Curvy::CurvySplineSegment_Approximations*, ::System::Int32, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINESEGMENT_APPROXIMATIONSSETTER_SETORIENTATIONTOSTATIC_OFFSET))(approximations, elementCount, startUp, endUp);
		}

		static ::System::Void SetOrientationToDynamic(::FluffyUnderware::Curvy::CurvySplineSegment_Approximations* approximations, ::System::Int32 elementCount, ::UnityEngine::Vector3 startUp)
		{
			return ((::System::Void(*)(::FluffyUnderware::Curvy::CurvySplineSegment_Approximations*, ::System::Int32, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINESEGMENT_APPROXIMATIONSSETTER_SETORIENTATIONTODYNAMIC_OFFSET))(approximations, elementCount, startUp);
		}

		static ::System::Single SetPointTangentAndDistance(::FluffyUnderware::Curvy::CurvySplineSegment_Approximations* approximations, ::UnityEngine::Vector3 previousPosition, ::UnityEngine::Vector3 currentPosition, ::UnityEngine::Vector3 nextPosition, ::UnityEngine::Quaternion currentRotation, ::FluffyUnderware::Curvy::CurvySplineSegment* curvySplineSegment)
		{
			return ((::System::Single(*)(::FluffyUnderware::Curvy::CurvySplineSegment_Approximations*, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Quaternion, ::FluffyUnderware::Curvy::CurvySplineSegment*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINESEGMENT_APPROXIMATIONSSETTER_SETPOINTTANGENTANDDISTANCE_OFFSET))(approximations, previousPosition, currentPosition, nextPosition, currentRotation, curvySplineSegment);
		}

		static ::System::Single SetSegmentTangentsAndDistances(::FluffyUnderware::Curvy::CurvySplineSegment_Approximations* approximations, ::System::Int32 elementCount, ::FluffyUnderware::Curvy::CurvySplineSegment* curvySplineSegment)
		{
			return ((::System::Single(*)(::FluffyUnderware::Curvy::CurvySplineSegment_Approximations*, ::System::Int32, ::FluffyUnderware::Curvy::CurvySplineSegment*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINESEGMENT_APPROXIMATIONSSETTER_SETSEGMENTTANGENTSANDDISTANCES_OFFSET))(approximations, elementCount, curvySplineSegment);
		}

		static ::System::Void SetSegmentPreciseTangents(::System::Int32 elementCount, ::FluffyUnderware::Curvy::CurvySplineSegment* curvySplineSegment, ::Il2CppArray<::UnityEngine::Vector3>* tangents)
		{
			return ((::System::Void(*)(::System::Int32, ::FluffyUnderware::Curvy::CurvySplineSegment*, ::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINESEGMENT_APPROXIMATIONSSETTER_SETSEGMENTPRECISETANGENTS_OFFSET))(elementCount, curvySplineSegment, tangents);
		}

		static ::System::Void SetTangentsToLinear(::System::Int32 elementCount, ::FluffyUnderware::Curvy::CurvySplineSegment* curvySplineSegment, ::Il2CppArray<::UnityEngine::Vector3>* tangents)
		{
			return ((::System::Void(*)(::System::Int32, ::FluffyUnderware::Curvy::CurvySplineSegment*, ::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINESEGMENT_APPROXIMATIONSSETTER_SETTANGENTSTOLINEAR_OFFSET))(elementCount, curvySplineSegment, tangents);
		}

		static ::System::Void SetTangentsToCatmullRom(::System::Int32 elementCount, ::FluffyUnderware::Curvy::CurvySplineSegment* curvySplineSegment, ::Il2CppArray<::UnityEngine::Vector3>* tangents)
		{
			return ((::System::Void(*)(::System::Int32, ::FluffyUnderware::Curvy::CurvySplineSegment*, ::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINESEGMENT_APPROXIMATIONSSETTER_SETTANGENTSTOCATMULLROM_OFFSET))(elementCount, curvySplineSegment, tangents);
		}

		static ::System::Void SetTangentsToTCB(::System::Int32 elementCount, ::FluffyUnderware::Curvy::CurvySplineSegment* curvySplineSegment, ::Il2CppArray<::UnityEngine::Vector3>* tangents)
		{
			return ((::System::Void(*)(::System::Int32, ::FluffyUnderware::Curvy::CurvySplineSegment*, ::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINESEGMENT_APPROXIMATIONSSETTER_SETTANGENTSTOTCB_OFFSET))(elementCount, curvySplineSegment, tangents);
		}

		static ::System::Void SetTangentsToBezier(::System::Int32 elementCount, ::FluffyUnderware::Curvy::CurvySplineSegment* curvySplineSegment, ::Il2CppArray<::UnityEngine::Vector3>* tangents)
		{
			return ((::System::Void(*)(::System::Int32, ::FluffyUnderware::Curvy::CurvySplineSegment*, ::Il2CppArray<::UnityEngine::Vector3>*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINESEGMENT_APPROXIMATIONSSETTER_SETTANGENTSTOBEZIER_OFFSET))(elementCount, curvySplineSegment, tangents);
		}
	};
}
