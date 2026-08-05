#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector2.h"

#define FOUNDATION_GEOMETRY_LINE2D_CREATE_OFFSET UNITYSDK_OFFSET(0x1FC0BD60)
#define FOUNDATION_GEOMETRY_LINE2D_GET_ISDEGENERATE_OFFSET UNITYSDK_OFFSET(0xAD08C0)
#define FOUNDATION_GEOMETRY_LINE2D_ON_OFFSET UNITYSDK_OFFSET(0xAD0900)
#define FOUNDATION_GEOMETRY_LINE2D__CTOR_OFFSET UNITYSDK_OFFSET(0x346F70)

namespace Foundation::Geometry
{
	inline static constexpr unsigned int Line2D_TypeDefinitionIndex = 8495;

	struct alignas(4) Line2D
	{
		::UnityEngine::Vector2 Point; // 0x10
		::UnityEngine::Vector2 Direction; // 0x18

		::System::Void _ctor(::UnityEngine::Vector2 point, ::UnityEngine::Vector2 direction)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_LINE2D__CTOR_OFFSET))(this, point, direction);
		}

		::System::Boolean get_IsDegenerate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_LINE2D_GET_ISDEGENERATE_OFFSET))(this);
		}

		::System::Boolean On(::UnityEngine::Vector2 point, ::System::Single tolerance)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_LINE2D_ON_OFFSET))(this, point, tolerance);
		}

		static ::Foundation::Geometry::Line2D Create(::UnityEngine::Vector2 a, ::UnityEngine::Vector2 b)
		{
			return ((::Foundation::Geometry::Line2D(*)(::UnityEngine::Vector2, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_LINE2D_CREATE_OFFSET))(a, b);
		}
	};
}
