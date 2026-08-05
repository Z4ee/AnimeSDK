#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ReadOnlySpan_1.h"
#include "unitysdk/System/Span_1.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define FOUNDATION_GEOMETRY_CONVEXHULL2D_FINDMINPOINTINDEX_OFFSET UNITYSDK_OFFSET(0x1F466090)
#define FOUNDATION_GEOMETRY_CONVEXHULL2D_GENERATECONVEXHULLGRAHAM_OFFSET UNITYSDK_OFFSET(0x1F466230)
#define FOUNDATION_GEOMETRY_CONVEXHULL2D_SWAP_OFFSET UNITYSDK_OFFSET(0x1F4661C0)

namespace Foundation::Geometry
{
	inline static constexpr unsigned int ConvexHull2D_TypeDefinitionIndex = 8645;

	class ConvexHull2D : public ::System::Object
	{
	public:
		static ::System::Int32 FindMinPointIndex(::System::ReadOnlySpan_1<::UnityEngine::Vector2> points)
		{
			return ((::System::Int32(*)(::System::ReadOnlySpan_1<::UnityEngine::Vector2>))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_CONVEXHULL2D_FINDMINPOINTINDEX_OFFSET))(points);
		}

		static ::System::Void Swap(::System::Span_1<::UnityEngine::Vector2> points, ::System::Int32 i, ::System::Int32 j)
		{
			return ((::System::Void(*)(::System::Span_1<::UnityEngine::Vector2>, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_CONVEXHULL2D_SWAP_OFFSET))(points, i, j);
		}

		static ::System::Int32 GenerateConvexHullGraham(::System::Span_1<::UnityEngine::Vector2> points)
		{
			return ((::System::Int32(*)(::System::Span_1<::UnityEngine::Vector2>))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_CONVEXHULL2D_GENERATECONVEXHULLGRAHAM_OFFSET))(points);
		}
	};
}
