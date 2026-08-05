#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/FluffyUnderware/Curvy/ThirdParty/LibTessDotNet/ContourOrientation.h"
#include "unitysdk/FluffyUnderware/Curvy/Utils/SplinePolyLine_VertexCalculation.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ToolBuddy/Pooling/Collections/SubArrayList_1.h"
#include "unitysdk/ToolBuddy/Pooling/Collections/SubArray_1.h"
#include "unitysdk/UnityEngine/Space.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace FluffyUnderware::Curvy { class CurvySpline; }

#define FLUFFYUNDERWARE_CURVY_UTILS_SPLINEPOLYLINE_GETPOLYGON_OFFSET UNITYSDK_OFFSET(0x1F86F0F0)
#define FLUFFYUNDERWARE_CURVY_UTILS_SPLINEPOLYLINE_GETVERTEXLIST_OFFSET UNITYSDK_OFFSET(0x1F86EEB0)
#define FLUFFYUNDERWARE_CURVY_UTILS_SPLINEPOLYLINE_GETVERTICES_OFFSET UNITYSDK_OFFSET(0x1F86ECE0)
#define FLUFFYUNDERWARE_CURVY_UTILS_SPLINEPOLYLINE_GET_ISCLOSED_OFFSET UNITYSDK_OFFSET(0x1F86EB90)
#define FLUFFYUNDERWARE_CURVY_UTILS_SPLINEPOLYLINE__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1F86EB70)
#define FLUFFYUNDERWARE_CURVY_UTILS_SPLINEPOLYLINE__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1F86EB50)
#define FLUFFYUNDERWARE_CURVY_UTILS_SPLINEPOLYLINE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F86EB40)

namespace FluffyUnderware::Curvy::Utils
{
	inline static constexpr unsigned int SplinePolyLine_TypeDefinitionIndex = 39689;

	class SplinePolyLine : public ::System::Object
	{
	public:
		::FluffyUnderware::Curvy::ThirdParty::LibTessDotNet::ContourOrientation Orientation; // 0x10
		::FluffyUnderware::Curvy::CurvySpline* Spline; // 0x18
		::FluffyUnderware::Curvy::Utils::SplinePolyLine_VertexCalculation VertexMode; // 0x20
		::System::Single Angle; // 0x24
		::System::Single Distance; // 0x28
		::UnityEngine::Space Space; // 0x2C

		::System::Void _ctor(::FluffyUnderware::Curvy::CurvySpline* spline)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::CurvySpline*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_UTILS_SPLINEPOLYLINE__CTOR_OFFSET))(this, spline);
		}

		::System::Void _ctor_1(::FluffyUnderware::Curvy::CurvySpline* spline, ::System::Single angle, ::System::Single distance)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::CurvySpline*, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_UTILS_SPLINEPOLYLINE__CTOR_1_OFFSET))(this, spline, angle, distance);
		}

		::System::Void _ctor_2(::FluffyUnderware::Curvy::CurvySpline* spline, ::FluffyUnderware::Curvy::Utils::SplinePolyLine_VertexCalculation vertexMode, ::System::Single angle, ::System::Single distance, ::UnityEngine::Space space)
		{
			return ((::System::Void(*)(::PVOID, ::FluffyUnderware::Curvy::CurvySpline*, ::FluffyUnderware::Curvy::Utils::SplinePolyLine_VertexCalculation, ::System::Single, ::System::Single, ::UnityEngine::Space))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_UTILS_SPLINEPOLYLINE__CTOR_2_OFFSET))(this, spline, vertexMode, angle, distance, space);
		}

		::System::Boolean get_IsClosed()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_UTILS_SPLINEPOLYLINE_GET_ISCLOSED_OFFSET))(this);
		}

		::Il2CppArray<::UnityEngine::Vector3>* GetVertices()
		{
			return ((::Il2CppArray<::UnityEngine::Vector3>*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_UTILS_SPLINEPOLYLINE_GETVERTICES_OFFSET))(this);
		}

		::ToolBuddy::Pooling::Collections::SubArray_1<::UnityEngine::Vector3> GetVertexList()
		{
			return ((::ToolBuddy::Pooling::Collections::SubArray_1<::UnityEngine::Vector3>(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_UTILS_SPLINEPOLYLINE_GETVERTEXLIST_OFFSET))(this);
		}

		static ::ToolBuddy::Pooling::Collections::SubArrayList_1<::UnityEngine::Vector3> GetPolygon(::FluffyUnderware::Curvy::CurvySpline* spline, ::System::Single fromTF, ::System::Single toTF, ::System::Single maxAngle, ::System::Single minDistance, ::System::Single maxDistance, ::System::Boolean includeEndPoint, ::System::Single stepSize)
		{
			return ((::ToolBuddy::Pooling::Collections::SubArrayList_1<::UnityEngine::Vector3>(*)(::FluffyUnderware::Curvy::CurvySpline*, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Single, ::System::Boolean, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_UTILS_SPLINEPOLYLINE_GETPOLYGON_OFFSET))(spline, fromTF, toTF, maxAngle, minDistance, maxDistance, includeEndPoint, stepSize);
		}
	};
}
