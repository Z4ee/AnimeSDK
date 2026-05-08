#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/ToolBuddy/Pooling/Collections/SubArray_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define FLUFFYUNDERWARE_CURVY_CURVYSPLINESEGMENT_APPROXIMATIONS_CLEAR_OFFSET UNITYSDK_OFFSET(0x1B7270C0)
#define FLUFFYUNDERWARE_CURVY_CURVYSPLINESEGMENT_APPROXIMATIONS_FREE_OFFSET UNITYSDK_OFFSET(0x1B7272B0)
#define FLUFFYUNDERWARE_CURVY_CURVYSPLINESEGMENT_APPROXIMATIONS_INITIALIZE_OFFSET UNITYSDK_OFFSET(0x1B726ED0)
#define FLUFFYUNDERWARE_CURVY_CURVYSPLINESEGMENT_APPROXIMATIONS_RESIZEDISTANCES_OFFSET UNITYSDK_OFFSET(0x1B726C00)
#define FLUFFYUNDERWARE_CURVY_CURVYSPLINESEGMENT_APPROXIMATIONS_RESIZEPOSITIONS_OFFSET UNITYSDK_OFFSET(0x1B726960)
#define FLUFFYUNDERWARE_CURVY_CURVYSPLINESEGMENT_APPROXIMATIONS_RESIZETANGENTS_OFFSET UNITYSDK_OFFSET(0x1B726A40)
#define FLUFFYUNDERWARE_CURVY_CURVYSPLINESEGMENT_APPROXIMATIONS_RESIZEUPS_OFFSET UNITYSDK_OFFSET(0x1B726B20)
#define FLUFFYUNDERWARE_CURVY_CURVYSPLINESEGMENT_APPROXIMATIONS__CTOR_OFFSET UNITYSDK_OFFSET(0x1B726CE0)

namespace FluffyUnderware::Curvy
{
	inline static constexpr unsigned int CurvySplineSegment_Approximations_TypeDefinitionIndex = 37229;

	class CurvySplineSegment_Approximations : public ::System::Object
	{
	public:
		::ToolBuddy::Pooling::Collections::SubArray_1<::System::Single> Distances; // 0x10
		::ToolBuddy::Pooling::Collections::SubArray_1<::UnityEngine::Vector3> Tangents; // 0x20
		::ToolBuddy::Pooling::Collections::SubArray_1<::UnityEngine::Vector3> Ups; // 0x30
		::ToolBuddy::Pooling::Collections::SubArray_1<::UnityEngine::Vector3> Positions; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINESEGMENT_APPROXIMATIONS__CTOR_OFFSET))(this);
		}

		::System::Void ResizePositions(::System::Int32 size)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINESEGMENT_APPROXIMATIONS_RESIZEPOSITIONS_OFFSET))(this, size);
		}

		::System::Void ResizeTangents(::System::Int32 size)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINESEGMENT_APPROXIMATIONS_RESIZETANGENTS_OFFSET))(this, size);
		}

		::System::Void ResizeUps(::System::Int32 size)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINESEGMENT_APPROXIMATIONS_RESIZEUPS_OFFSET))(this, size);
		}

		::System::Void ResizeDistances(::System::Int32 size)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINESEGMENT_APPROXIMATIONS_RESIZEDISTANCES_OFFSET))(this, size);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINESEGMENT_APPROXIMATIONS_CLEAR_OFFSET))(this);
		}

		::System::Void Initialize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINESEGMENT_APPROXIMATIONS_INITIALIZE_OFFSET))(this);
		}

		::System::Void Free()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_CURVY_CURVYSPLINESEGMENT_APPROXIMATIONS_FREE_OFFSET))(this);
		}
	};
}
