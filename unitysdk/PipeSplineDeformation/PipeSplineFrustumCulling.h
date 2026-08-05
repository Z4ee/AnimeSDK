#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipeSplineDeformation/CurveSample.h"
#include "unitysdk/PipeSplineDeformation/PipeInstanceData.h"
#include "unitysdk/PipeSplineDeformation/PipeSplineCullGroup.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/Plane.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Camera; }

#define PIPESPLINEDEFORMATION_PIPESPLINEFRUSTUMCULLING_BUILDCULLGROUPS_OFFSET UNITYSDK_OFFSET(0x1CB0D1D0)
#define PIPESPLINEDEFORMATION_PIPESPLINEFRUSTUMCULLING_BUILDDISTANCERANGEBOUNDS_OFFSET UNITYSDK_OFFSET(0x1CB0D690)
#define PIPESPLINEDEFORMATION_PIPESPLINEFRUSTUMCULLING_CALCULATECAMERAPLANES_OFFSET UNITYSDK_OFFSET(0x1CB0DE30)
#define PIPESPLINEDEFORMATION_PIPESPLINEFRUSTUMCULLING_EVALUATECURVEPOSITION_OFFSET UNITYSDK_OFFSET(0x1CB0DF10)
#define PIPESPLINEDEFORMATION_PIPESPLINEFRUSTUMCULLING_FINDFIRSTSAMPLEATORAFTER_OFFSET UNITYSDK_OFFSET(0x1CB0E370)
#define PIPESPLINEDEFORMATION_PIPESPLINEFRUSTUMCULLING_ISVISIBLE_OFFSET UNITYSDK_OFFSET(0x1CB0DC50)
#define PIPESPLINEDEFORMATION_PIPESPLINEFRUSTUMCULLING_TESTPLANESAABB_OFFSET UNITYSDK_OFFSET(0x1CB0DE80)

namespace PipeSplineDeformation
{
	inline static constexpr unsigned int PipeSplineFrustumCulling_TypeDefinitionIndex = 27492;

	class PipeSplineFrustumCulling : public ::System::Object
	{
	public:
		// static const ::System::Int32 MaxInstancedBatchSize = 0x3FF; // 0x0

		static ::System::Void BuildCullGroups(::System::Collections::Generic::IReadOnlyList_1<::PipeSplineDeformation::PipeInstanceData>* pipeInstances, ::System::Collections::Generic::IReadOnlyList_1<::PipeSplineDeformation::CurveSample>* curveSamples, ::System::Int32 groupSize, ::System::Single padding, ::System::Collections::Generic::List_1<::PipeSplineDeformation::PipeSplineCullGroup>* cullGroups)
		{
			return ((::System::Void(*)(::System::Collections::Generic::IReadOnlyList_1<::PipeSplineDeformation::PipeInstanceData>*, ::System::Collections::Generic::IReadOnlyList_1<::PipeSplineDeformation::CurveSample>*, ::System::Int32, ::System::Single, ::System::Collections::Generic::List_1<::PipeSplineDeformation::PipeSplineCullGroup>*))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINEFRUSTUMCULLING_BUILDCULLGROUPS_OFFSET))(pipeInstances, curveSamples, groupSize, padding, cullGroups);
		}

		static ::System::Boolean IsVisible(::UnityEngine::Camera* camera, ::UnityEngine::Bounds bounds, ::Il2CppArray<::UnityEngine::Plane>*& cachedPlanes)
		{
			return ((::System::Boolean(*)(::UnityEngine::Camera*, ::UnityEngine::Bounds, ::Il2CppArray<::UnityEngine::Plane>*&))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINEFRUSTUMCULLING_ISVISIBLE_OFFSET))(camera, bounds, cachedPlanes);
		}

		static ::Il2CppArray<::UnityEngine::Plane>* CalculateCameraPlanes(::UnityEngine::Camera* camera, ::Il2CppArray<::UnityEngine::Plane>* cachedPlanes)
		{
			return ((::Il2CppArray<::UnityEngine::Plane>*(*)(::UnityEngine::Camera*, ::Il2CppArray<::UnityEngine::Plane>*))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINEFRUSTUMCULLING_CALCULATECAMERAPLANES_OFFSET))(camera, cachedPlanes);
		}

		static ::System::Boolean TestPlanesAABB(::Il2CppArray<::UnityEngine::Plane>* planes, ::UnityEngine::Bounds bounds)
		{
			return ((::System::Boolean(*)(::Il2CppArray<::UnityEngine::Plane>*, ::UnityEngine::Bounds))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINEFRUSTUMCULLING_TESTPLANESAABB_OFFSET))(planes, bounds);
		}

		static ::UnityEngine::Bounds BuildDistanceRangeBounds(::System::Collections::Generic::IReadOnlyList_1<::PipeSplineDeformation::CurveSample>* curveSamples, ::System::Single startDistance, ::System::Single endDistance, ::System::Single padding)
		{
			return ((::UnityEngine::Bounds(*)(::System::Collections::Generic::IReadOnlyList_1<::PipeSplineDeformation::CurveSample>*, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINEFRUSTUMCULLING_BUILDDISTANCERANGEBOUNDS_OFFSET))(curveSamples, startDistance, endDistance, padding);
		}

		static ::UnityEngine::Vector3 EvaluateCurvePosition(::System::Collections::Generic::IReadOnlyList_1<::PipeSplineDeformation::CurveSample>* curveSamples, ::System::Single distance)
		{
			return ((::UnityEngine::Vector3(*)(::System::Collections::Generic::IReadOnlyList_1<::PipeSplineDeformation::CurveSample>*, ::System::Single))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINEFRUSTUMCULLING_EVALUATECURVEPOSITION_OFFSET))(curveSamples, distance);
		}

		static ::System::Int32 FindFirstSampleAtOrAfter(::System::Collections::Generic::IReadOnlyList_1<::PipeSplineDeformation::CurveSample>* curveSamples, ::System::Single distance)
		{
			return ((::System::Int32(*)(::System::Collections::Generic::IReadOnlyList_1<::PipeSplineDeformation::CurveSample>*, ::System::Single))((::PBYTE)hIl2Cpp + PIPESPLINEDEFORMATION_PIPESPLINEFRUSTUMCULLING_FINDFIRSTSAMPLEATORAFTER_OFFSET))(curveSamples, distance);
		}
	};
}
