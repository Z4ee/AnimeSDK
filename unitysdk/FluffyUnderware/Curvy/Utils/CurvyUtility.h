#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/Curvy/CurvyClamping.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace FluffyUnderware::Curvy { class CurvySpline; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }

#define FLUFFYUNDERWARE_CURVY_UTILS_CURVYUTILITY_APPROXIMATELY_OFFSET UNITYSDK_OFFSET(0x1B2358B0)
#define FLUFFYUNDERWARE_CURVY_UTILS_CURVYUTILITY_CLAMPDISTANCE_1_OFFSET UNITYSDK_OFFSET(0x1B235410)
#define FLUFFYUNDERWARE_CURVY_UTILS_CURVYUTILITY_CLAMPDISTANCE_2_OFFSET UNITYSDK_OFFSET(0x1B2355B0)
#define FLUFFYUNDERWARE_CURVY_UTILS_CURVYUTILITY_CLAMPDISTANCE_3_OFFSET UNITYSDK_OFFSET(0x1B2356F0)
#define FLUFFYUNDERWARE_CURVY_UTILS_CURVYUTILITY_CLAMPDISTANCE_OFFSET UNITYSDK_OFFSET(0x1B2352F0)
#define FLUFFYUNDERWARE_CURVY_UTILS_CURVYUTILITY_CLAMPTF_1_OFFSET UNITYSDK_OFFSET(0x1B235030)
#define FLUFFYUNDERWARE_CURVY_UTILS_CURVYUTILITY_CLAMPTF_OFFSET UNITYSDK_OFFSET(0x1B234F10)
#define FLUFFYUNDERWARE_CURVY_UTILS_CURVYUTILITY_CLAMPVALUE_OFFSET UNITYSDK_OFFSET(0x1B235170)
#define FLUFFYUNDERWARE_CURVY_UTILS_CURVYUTILITY_GETDEFAULTMATERIAL_OFFSET UNITYSDK_OFFSET(0x1B230530)
#define FLUFFYUNDERWARE_CURVY_UTILS_CURVYUTILITY_GETNEARESTPOINTINDEX_OFFSET UNITYSDK_OFFSET(0x1B2287C0)
#define FLUFFYUNDERWARE_CURVY_UTILS_CURVYUTILITY_INTERPOLATIONSEARCH_1_OFFSET UNITYSDK_OFFSET(0x1B228B70)
#define FLUFFYUNDERWARE_CURVY_UTILS_CURVYUTILITY_INTERPOLATIONSEARCH_OFFSET UNITYSDK_OFFSET(0x1B235920)
#define FLUFFYUNDERWARE_CURVY_UTILS_CURVYUTILITY_SPLINETOMESH_OFFSET UNITYSDK_OFFSET(0x1B235940)

namespace FluffyUnderware::Curvy::Utils
{
	inline static constexpr unsigned int CurvyUtility_TypeDefinitionIndex = 37253;

	class CurvyUtility : public ::System::Object
	{
	public:
		static ::System::Single ClampTF(::System::Single tf, ::FluffyUnderware::Curvy::CurvyClamping clamping)
		{
			return ((::System::Single(*)(::System::Single, ::FluffyUnderware::Curvy::CurvyClamping))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_UTILS_CURVYUTILITY_CLAMPTF_OFFSET))(tf, clamping);
		}

		static ::System::Single ClampTF_1(::System::Single tf, ::System::Int32& dir, ::FluffyUnderware::Curvy::CurvyClamping clamping)
		{
			return ((::System::Single(*)(::System::Single, ::System::Int32&, ::FluffyUnderware::Curvy::CurvyClamping))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_UTILS_CURVYUTILITY_CLAMPTF_1_OFFSET))(tf, dir, clamping);
		}

		static ::System::Single ClampValue(::System::Single tf, ::FluffyUnderware::Curvy::CurvyClamping clamping, ::System::Single minTF, ::System::Single maxTF)
		{
			return ((::System::Single(*)(::System::Single, ::FluffyUnderware::Curvy::CurvyClamping, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_UTILS_CURVYUTILITY_CLAMPVALUE_OFFSET))(tf, clamping, minTF, maxTF);
		}

		static ::System::Single ClampDistance(::System::Single distance, ::FluffyUnderware::Curvy::CurvyClamping clamping, ::System::Single length)
		{
			return ((::System::Single(*)(::System::Single, ::FluffyUnderware::Curvy::CurvyClamping, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_UTILS_CURVYUTILITY_CLAMPDISTANCE_OFFSET))(distance, clamping, length);
		}

		static ::System::Single ClampDistance_1(::System::Single distance, ::FluffyUnderware::Curvy::CurvyClamping clamping, ::System::Single length, ::System::Single min, ::System::Single max)
		{
			return ((::System::Single(*)(::System::Single, ::FluffyUnderware::Curvy::CurvyClamping, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_UTILS_CURVYUTILITY_CLAMPDISTANCE_1_OFFSET))(distance, clamping, length, min, max);
		}

		static ::System::Single ClampDistance_2(::System::Single distance, ::System::Int32& dir, ::FluffyUnderware::Curvy::CurvyClamping clamping, ::System::Single length)
		{
			return ((::System::Single(*)(::System::Single, ::System::Int32&, ::FluffyUnderware::Curvy::CurvyClamping, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_UTILS_CURVYUTILITY_CLAMPDISTANCE_2_OFFSET))(distance, dir, clamping, length);
		}

		static ::System::Single ClampDistance_3(::System::Single distance, ::System::Int32& dir, ::FluffyUnderware::Curvy::CurvyClamping clamping, ::System::Single length, ::System::Single min, ::System::Single max)
		{
			return ((::System::Single(*)(::System::Single, ::System::Int32&, ::FluffyUnderware::Curvy::CurvyClamping, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_UTILS_CURVYUTILITY_CLAMPDISTANCE_3_OFFSET))(distance, dir, clamping, length, min, max);
		}

		static ::UnityEngine::Material* GetDefaultMaterial()
		{
			return ((::UnityEngine::Material*(*)())((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_UTILS_CURVYUTILITY_GETDEFAULTMATERIAL_OFFSET))();
		}

		static ::System::Boolean Approximately(::System::Single x, ::System::Single y)
		{
			return ((::System::Boolean(*)(::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_UTILS_CURVYUTILITY_APPROXIMATELY_OFFSET))(x, y);
		}

		static ::System::Int32 InterpolationSearch(::Il2CppArray<::System::Single>* array, ::System::Single x)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Single>*, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_UTILS_CURVYUTILITY_INTERPOLATIONSEARCH_OFFSET))(array, x);
		}

		static ::System::Int32 InterpolationSearch_1(::Il2CppArray<::System::Single>* array, ::System::Int32 elementsCount, ::System::Single x)
		{
			return ((::System::Int32(*)(::Il2CppArray<::System::Single>*, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_UTILS_CURVYUTILITY_INTERPOLATIONSEARCH_1_OFFSET))(array, elementsCount, x);
		}

		static ::UnityEngine::Mesh* SplineToMesh(::FluffyUnderware::Curvy::CurvySpline* spline)
		{
			return ((::UnityEngine::Mesh*(*)(::FluffyUnderware::Curvy::CurvySpline*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_UTILS_CURVYUTILITY_SPLINETOMESH_OFFSET))(spline);
		}

		static ::System::Void GetNearestPointIndex(::UnityEngine::Vector3 point, ::Il2CppArray<::UnityEngine::Vector3>* points, ::System::Int32 pointsCount, ::System::Int32& index, ::System::Single& fragement)
		{
			return ((::System::Void(*)(::UnityEngine::Vector3, ::Il2CppArray<::UnityEngine::Vector3>*, ::System::Int32, ::System::Int32&, ::System::Single&))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_UTILS_CURVYUTILITY_GETNEARESTPOINTINDEX_OFFSET))(point, points, pointsCount, index, fragement);
		}
	};
}
