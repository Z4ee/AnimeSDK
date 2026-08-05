#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define FOUNDATION_GEOMETRY_CONVEXHULL2D_POINTCOMPARER_COMPARE_OFFSET UNITYSDK_OFFSET(0xABF6C0)
#define FOUNDATION_GEOMETRY_CONVEXHULL2D_POINTCOMPARER__CTOR_OFFSET UNITYSDK_OFFSET(0x324D50)

namespace Foundation::Geometry
{
	inline static constexpr unsigned int ConvexHull2D_PointComparer_TypeDefinitionIndex = 8648;

	struct alignas(4) ConvexHull2D_PointComparer
	{
		::UnityEngine::Vector2 _origin; // 0x10

		::System::Void _ctor(::UnityEngine::Vector2 origin)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_CONVEXHULL2D_POINTCOMPARER__CTOR_OFFSET))(this, origin);
		}

		::System::Int32 Compare(::UnityEngine::Vector2 x, ::UnityEngine::Vector2 y)
		{
			return ((::System::Int32(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_CONVEXHULL2D_POINTCOMPARER_COMPARE_OFFSET))(this, x, y);
		}
	};
}
