#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

#define CINEMACHINE_UTILITY_SPLINEHELPERS_BEZIER1_OFFSET UNITYSDK_OFFSET(0x1F398A10)
#define CINEMACHINE_UTILITY_SPLINEHELPERS_BEZIER3_OFFSET UNITYSDK_OFFSET(0x1F3987D0)
#define CINEMACHINE_UTILITY_SPLINEHELPERS_BEZIERTANGENT1_OFFSET UNITYSDK_OFFSET(0x1F398AA0)
#define CINEMACHINE_UTILITY_SPLINEHELPERS_BEZIERTANGENT3_OFFSET UNITYSDK_OFFSET(0x1F3988A0)
#define CINEMACHINE_UTILITY_SPLINEHELPERS_COMPUTESMOOTHCONTROLPOINTSLOOPED_OFFSET UNITYSDK_OFFSET(0x1F39A020)
#define CINEMACHINE_UTILITY_SPLINEHELPERS_COMPUTESMOOTHCONTROLPOINTSWITHMORETHANTHREEPOINT_OFFSET UNITYSDK_OFFSET(0x1F39A430)
#define CINEMACHINE_UTILITY_SPLINEHELPERS_COMPUTESMOOTHCONTROLPOINTS_OFFSET UNITYSDK_OFFSET(0x1F398B40)

namespace Cinemachine::Utility
{
	inline static constexpr unsigned int SplineHelpers_TypeDefinitionIndex = 34836;

	class SplineHelpers : public ::System::Object
	{
	public:
		static ::UnityEngine::Vector3 Bezier3(::System::Single t, ::UnityEngine::Vector3 p0, ::UnityEngine::Vector3 p1, ::UnityEngine::Vector3 p2, ::UnityEngine::Vector3 p3)
		{
			return ((::UnityEngine::Vector3(*)(::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_SPLINEHELPERS_BEZIER3_OFFSET))(t, p0, p1, p2, p3);
		}

		static ::UnityEngine::Vector3 BezierTangent3(::System::Single t, ::UnityEngine::Vector3 p0, ::UnityEngine::Vector3 p1, ::UnityEngine::Vector3 p2, ::UnityEngine::Vector3 p3)
		{
			return ((::UnityEngine::Vector3(*)(::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_SPLINEHELPERS_BEZIERTANGENT3_OFFSET))(t, p0, p1, p2, p3);
		}

		static ::System::Single Bezier1(::System::Single t, ::System::Single p0, ::System::Single p1, ::System::Single p2, ::System::Single p3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_SPLINEHELPERS_BEZIER1_OFFSET))(t, p0, p1, p2, p3);
		}

		static ::System::Single BezierTangent1(::System::Single t, ::System::Single p0, ::System::Single p1, ::System::Single p2, ::System::Single p3)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_SPLINEHELPERS_BEZIERTANGENT1_OFFSET))(t, p0, p1, p2, p3);
		}

		static ::System::Void ComputeSmoothControlPoints(::Il2CppArray<::UnityEngine::Vector4>*& knot, ::Il2CppArray<::UnityEngine::Vector4>*& ctrl1, ::Il2CppArray<::UnityEngine::Vector4>*& ctrl2)
		{
			return ((::System::Void(*)(::Il2CppArray<::UnityEngine::Vector4>*&, ::Il2CppArray<::UnityEngine::Vector4>*&, ::Il2CppArray<::UnityEngine::Vector4>*&))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_SPLINEHELPERS_COMPUTESMOOTHCONTROLPOINTS_OFFSET))(knot, ctrl1, ctrl2);
		}

		static ::System::Void ComputeSmoothControlPointsLooped(::Il2CppArray<::UnityEngine::Vector4>*& knot, ::Il2CppArray<::UnityEngine::Vector4>*& ctrl1, ::Il2CppArray<::UnityEngine::Vector4>*& ctrl2)
		{
			return ((::System::Void(*)(::Il2CppArray<::UnityEngine::Vector4>*&, ::Il2CppArray<::UnityEngine::Vector4>*&, ::Il2CppArray<::UnityEngine::Vector4>*&))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_SPLINEHELPERS_COMPUTESMOOTHCONTROLPOINTSLOOPED_OFFSET))(knot, ctrl1, ctrl2);
		}

		static ::System::Void ComputeSmoothControlPointsWithMoreThanThreePoint(::Il2CppArray<::UnityEngine::Vector4>*& knot, ::Il2CppArray<::UnityEngine::Vector4>*& ctrl1, ::Il2CppArray<::UnityEngine::Vector4>*& ctrl2, ::Il2CppArray<::UnityEngine::Vector4>* extraData)
		{
			return ((::System::Void(*)(::Il2CppArray<::UnityEngine::Vector4>*&, ::Il2CppArray<::UnityEngine::Vector4>*&, ::Il2CppArray<::UnityEngine::Vector4>*&, ::Il2CppArray<::UnityEngine::Vector4>*))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_SPLINEHELPERS_COMPUTESMOOTHCONTROLPOINTSWITHMORETHANTHREEPOINT_OFFSET))(knot, ctrl1, ctrl2, extraData);
		}
	};
}
