#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PathCreation/PathSpace.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace PathCreation::Utility { class MathUtility_PosRotScale; }
namespace UnityEngine { class Transform; }

#define PATHCREATION_UTILITY_MATHUTILITY_CLOSESTPOINTONLINESEGMENT_1_OFFSET UNITYSDK_OFFSET(0x1B6BED30)
#define PATHCREATION_UTILITY_MATHUTILITY_CLOSESTPOINTONLINESEGMENT_OFFSET UNITYSDK_OFFSET(0x1B6BEC70)
#define PATHCREATION_UTILITY_MATHUTILITY_INVERSETRANSFORMDIRECTION_OFFSET UNITYSDK_OFFSET(0x1B6BE890)
#define PATHCREATION_UTILITY_MATHUTILITY_INVERSETRANSFORMPOINT_OFFSET UNITYSDK_OFFSET(0x1B6BE510)
#define PATHCREATION_UTILITY_MATHUTILITY_INVERSETRANSFORMVECTOR_OFFSET UNITYSDK_OFFSET(0x1B6BE6D0)
#define PATHCREATION_UTILITY_MATHUTILITY_LINESEGMENTSINTERSECT_OFFSET UNITYSDK_OFFSET(0x1B6BE970)
#define PATHCREATION_UTILITY_MATHUTILITY_LINESINTERSECT_OFFSET UNITYSDK_OFFSET(0x1B6BEA80)
#define PATHCREATION_UTILITY_MATHUTILITY_LOCKTRANSFORMTOSPACE_OFFSET UNITYSDK_OFFSET(0x1B6BDE80)
#define PATHCREATION_UTILITY_MATHUTILITY_MINANGLE_OFFSET UNITYSDK_OFFSET(0x1B6BEE70)
#define PATHCREATION_UTILITY_MATHUTILITY_POINTINTRIANGLE_OFFSET UNITYSDK_OFFSET(0x1B6BEF90)
#define PATHCREATION_UTILITY_MATHUTILITY_POINTOFLINELINEINTERSECTION_OFFSET UNITYSDK_OFFSET(0x1B6BEAE0)
#define PATHCREATION_UTILITY_MATHUTILITY_POINTSARECLOCKWISE_OFFSET UNITYSDK_OFFSET(0x1B6BF0F0)
#define PATHCREATION_UTILITY_MATHUTILITY_SIDEOFLINE_OFFSET UNITYSDK_OFFSET(0x1B6BEE10)
#define PATHCREATION_UTILITY_MATHUTILITY_TRANSFORMDIRECTION_OFFSET UNITYSDK_OFFSET(0x1B6BE7B0)
#define PATHCREATION_UTILITY_MATHUTILITY_TRANSFORMPOINT_OFFSET UNITYSDK_OFFSET(0x1B6B6B50)
#define PATHCREATION_UTILITY_MATHUTILITY_TRANSFORMVECTOR_OFFSET UNITYSDK_OFFSET(0x1B6BE5F0)

namespace PathCreation::Utility
{
	inline static constexpr unsigned int MathUtility_TypeDefinitionIndex = 35846;

	class MathUtility : public ::System::Object
	{
	public:
		static ::PathCreation::Utility::MathUtility_PosRotScale* LockTransformToSpace(::UnityEngine::Transform* t, ::PathCreation::PathSpace space)
		{
			return ((::PathCreation::Utility::MathUtility_PosRotScale*(*)(::UnityEngine::Transform*, ::PathCreation::PathSpace))((::PBYTE)hIl2Cpp + PATHCREATION_UTILITY_MATHUTILITY_LOCKTRANSFORMTOSPACE_OFFSET))(t, space);
		}

		static ::UnityEngine::Vector3 TransformPoint(::UnityEngine::Vector3 p, ::UnityEngine::Transform* t, ::PathCreation::PathSpace space)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Transform*, ::PathCreation::PathSpace))((::PBYTE)hIl2Cpp + PATHCREATION_UTILITY_MATHUTILITY_TRANSFORMPOINT_OFFSET))(p, t, space);
		}

		static ::UnityEngine::Vector3 InverseTransformPoint(::UnityEngine::Vector3 p, ::UnityEngine::Transform* t, ::PathCreation::PathSpace space)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Transform*, ::PathCreation::PathSpace))((::PBYTE)hIl2Cpp + PATHCREATION_UTILITY_MATHUTILITY_INVERSETRANSFORMPOINT_OFFSET))(p, t, space);
		}

		static ::UnityEngine::Vector3 TransformVector(::UnityEngine::Vector3 p, ::UnityEngine::Transform* t, ::PathCreation::PathSpace space)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Transform*, ::PathCreation::PathSpace))((::PBYTE)hIl2Cpp + PATHCREATION_UTILITY_MATHUTILITY_TRANSFORMVECTOR_OFFSET))(p, t, space);
		}

		static ::UnityEngine::Vector3 InverseTransformVector(::UnityEngine::Vector3 p, ::UnityEngine::Transform* t, ::PathCreation::PathSpace space)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Transform*, ::PathCreation::PathSpace))((::PBYTE)hIl2Cpp + PATHCREATION_UTILITY_MATHUTILITY_INVERSETRANSFORMVECTOR_OFFSET))(p, t, space);
		}

		static ::UnityEngine::Vector3 TransformDirection(::UnityEngine::Vector3 p, ::UnityEngine::Transform* t, ::PathCreation::PathSpace space)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Transform*, ::PathCreation::PathSpace))((::PBYTE)hIl2Cpp + PATHCREATION_UTILITY_MATHUTILITY_TRANSFORMDIRECTION_OFFSET))(p, t, space);
		}

		static ::UnityEngine::Vector3 InverseTransformDirection(::UnityEngine::Vector3 p, ::UnityEngine::Transform* t, ::PathCreation::PathSpace space)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Transform*, ::PathCreation::PathSpace))((::PBYTE)hIl2Cpp + PATHCREATION_UTILITY_MATHUTILITY_INVERSETRANSFORMDIRECTION_OFFSET))(p, t, space);
		}

		static ::System::Boolean LineSegmentsIntersect(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::UnityEngine::Vector2 b1, ::UnityEngine::Vector2 b2)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + PATHCREATION_UTILITY_MATHUTILITY_LINESEGMENTSINTERSECT_OFFSET))(a1, a2, b1, b2);
		}

		static ::System::Boolean LinesIntersect(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::UnityEngine::Vector2 a3, ::UnityEngine::Vector2 a4)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + PATHCREATION_UTILITY_MATHUTILITY_LINESINTERSECT_OFFSET))(a1, a2, a3, a4);
		}

		static ::UnityEngine::Vector2 PointOfLineLineIntersection(::UnityEngine::Vector2 a1, ::UnityEngine::Vector2 a2, ::UnityEngine::Vector2 a3, ::UnityEngine::Vector2 a4)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + PATHCREATION_UTILITY_MATHUTILITY_POINTOFLINELINEINTERSECTION_OFFSET))(a1, a2, a3, a4);
		}

		static ::UnityEngine::Vector2 ClosestPointOnLineSegment(::UnityEngine::Vector2 p, ::UnityEngine::Vector2 a, ::UnityEngine::Vector2 b)
		{
			return ((::UnityEngine::Vector2(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + PATHCREATION_UTILITY_MATHUTILITY_CLOSESTPOINTONLINESEGMENT_OFFSET))(p, a, b);
		}

		static ::UnityEngine::Vector3 ClosestPointOnLineSegment_1(::UnityEngine::Vector3 p, ::UnityEngine::Vector3 a, ::UnityEngine::Vector3 b)
		{
			return ((::UnityEngine::Vector3(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + PATHCREATION_UTILITY_MATHUTILITY_CLOSESTPOINTONLINESEGMENT_1_OFFSET))(p, a, b);
		}

		static ::System::Int32 SideOfLine(::UnityEngine::Vector2 a, ::UnityEngine::Vector2 b, ::UnityEngine::Vector2 c)
		{
			return ((::System::Int32(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + PATHCREATION_UTILITY_MATHUTILITY_SIDEOFLINE_OFFSET))(a, b, c);
		}

		static ::System::Single MinAngle(::UnityEngine::Vector3 a, ::UnityEngine::Vector3 b, ::UnityEngine::Vector3 c)
		{
			return ((::System::Single(*)(::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + PATHCREATION_UTILITY_MATHUTILITY_MINANGLE_OFFSET))(a, b, c);
		}

		static ::System::Boolean PointInTriangle(::UnityEngine::Vector2 a, ::UnityEngine::Vector2 b, ::UnityEngine::Vector2 c, ::UnityEngine::Vector2 p)
		{
			return ((::System::Boolean(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + PATHCREATION_UTILITY_MATHUTILITY_POINTINTRIANGLE_OFFSET))(a, b, c, p);
		}

		static ::System::Boolean PointsAreClockwise(::Il2CppArray<::UnityEngine::Vector2>* points)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + PATHCREATION_UTILITY_MATHUTILITY_POINTSARECLOCKWISE_OFFSET))(points);
		}
	};
}
