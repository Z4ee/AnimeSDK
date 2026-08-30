#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"
#include "unitysdk/UnityEngine/Vector4.h"

#define CINEMACHINE_UTILITY_SPLINEHELPERS_BEZIER1_OFFSET UNITYSDK_OFFSET(0x1648B7A0)
#define CINEMACHINE_UTILITY_SPLINEHELPERS_BEZIER3_OFFSET UNITYSDK_OFFSET(0x1648B560)
#define CINEMACHINE_UTILITY_SPLINEHELPERS_BEZIERTANGENT1_OFFSET UNITYSDK_OFFSET(0x1648B850)
#define CINEMACHINE_UTILITY_SPLINEHELPERS_BEZIERTANGENT3_OFFSET UNITYSDK_OFFSET(0x1648B630)
#define CINEMACHINE_UTILITY_SPLINEHELPERS_COMPUTESMOOTHCONTROLPOINTSLOOPED_OFFSET UNITYSDK_OFFSET(0x1648C9E0)
#define CINEMACHINE_UTILITY_SPLINEHELPERS_COMPUTESMOOTHCONTROLPOINTS_OFFSET UNITYSDK_OFFSET(0x1648B8F0)

namespace Cinemachine::Utility
{
	inline static constexpr unsigned int SplineHelpers_TypeDefinitionIndex = 38599;

	class SplineHelpers : public ::System::Object
	{
	public:
		static ::UnityEngine::Vector3 Bezier3(::System::Single a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3 a5)
		{
			return ((::UnityEngine::Vector3(*)(::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_SPLINEHELPERS_BEZIER3_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::UnityEngine::Vector3 BezierTangent3(::System::Single a1, ::UnityEngine::Vector3 a2, ::UnityEngine::Vector3 a3, ::UnityEngine::Vector3 a4, ::UnityEngine::Vector3 a5)
		{
			return ((::UnityEngine::Vector3(*)(::System::Single, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_SPLINEHELPERS_BEZIERTANGENT3_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Single Bezier1(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_SPLINEHELPERS_BEZIER1_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Single BezierTangent1(::System::Single a1, ::System::Single a2, ::System::Single a3, ::System::Single a4, ::System::Single a5)
		{
			return ((::System::Single(*)(::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_SPLINEHELPERS_BEZIERTANGENT1_OFFSET))(a1, a2, a3, a4, a5);
		}

		static ::System::Void ComputeSmoothControlPoints(::Il2CppArray<::UnityEngine::Vector4>*& a1, ::Il2CppArray<::UnityEngine::Vector4>*& a2, ::Il2CppArray<::UnityEngine::Vector4>*& a3)
		{
			return ((::System::Void(*)(::Il2CppArray<::UnityEngine::Vector4>*&, ::Il2CppArray<::UnityEngine::Vector4>*&, ::Il2CppArray<::UnityEngine::Vector4>*&))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_SPLINEHELPERS_COMPUTESMOOTHCONTROLPOINTS_OFFSET))(a1, a2, a3);
		}

		static ::System::Void ComputeSmoothControlPointsLooped(::Il2CppArray<::UnityEngine::Vector4>*& a1, ::Il2CppArray<::UnityEngine::Vector4>*& a2, ::Il2CppArray<::UnityEngine::Vector4>*& a3)
		{
			return ((::System::Void(*)(::Il2CppArray<::UnityEngine::Vector4>*&, ::Il2CppArray<::UnityEngine::Vector4>*&, ::Il2CppArray<::UnityEngine::Vector4>*&))((::PBYTE)hIl2Cpp + CINEMACHINE_UTILITY_SPLINEHELPERS_COMPUTESMOOTHCONTROLPOINTSLOOPED_OFFSET))(a1, a2, a3);
		}
	};
}
