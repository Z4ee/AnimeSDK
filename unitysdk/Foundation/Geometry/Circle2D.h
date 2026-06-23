#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define FOUNDATION_GEOMETRY_CIRCLE2D_CONTAINS_OFFSET UNITYSDK_OFFSET(0xA7C710)
#define FOUNDATION_GEOMETRY_CIRCLE2D_CREATE_1_OFFSET UNITYSDK_OFFSET(0x1E806910)
#define FOUNDATION_GEOMETRY_CIRCLE2D_CREATE_2_OFFSET UNITYSDK_OFFSET(0x1E8069B0)
#define FOUNDATION_GEOMETRY_CIRCLE2D_CREATE_OFFSET UNITYSDK_OFFSET(0x1E806900)
#define FOUNDATION_GEOMETRY_CIRCLE2D_GET_ISDEGENERATE_OFFSET UNITYSDK_OFFSET(0xA7C6E0)
#define FOUNDATION_GEOMETRY_CIRCLE2D__CTOR_OFFSET UNITYSDK_OFFSET(0x3DD440)

namespace Foundation::Geometry
{
	inline static constexpr unsigned int Circle2D_TypeDefinitionIndex = 8627;

	struct alignas(4) Circle2D
	{
		::UnityEngine::Vector2 Center; // 0x10
		::System::Single Radius; // 0x18

		::System::Void _ctor(::UnityEngine::Vector2 center, ::System::Single radius)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_CIRCLE2D__CTOR_OFFSET))(this, center, radius);
		}

		::System::Boolean get_IsDegenerate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_CIRCLE2D_GET_ISDEGENERATE_OFFSET))(this);
		}

		::System::Boolean Contains(::UnityEngine::Vector2 point, ::System::Single tolerance)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_CIRCLE2D_CONTAINS_OFFSET))(this, point, tolerance);
		}

		static ::Foundation::Geometry::Circle2D Create(::UnityEngine::Vector2 point)
		{
			return ((::Foundation::Geometry::Circle2D(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_CIRCLE2D_CREATE_OFFSET))(point);
		}

		static ::Foundation::Geometry::Circle2D Create_1(::UnityEngine::Vector2 a, ::UnityEngine::Vector2 b)
		{
			return ((::Foundation::Geometry::Circle2D(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_CIRCLE2D_CREATE_1_OFFSET))(a, b);
		}

		static ::Foundation::Geometry::Circle2D Create_2(::UnityEngine::Vector2 a, ::UnityEngine::Vector2 b, ::UnityEngine::Vector2 c)
		{
			return ((::Foundation::Geometry::Circle2D(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_CIRCLE2D_CREATE_2_OFFSET))(a, b, c);
		}
	};
}
