#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define FOUNDATION_GEOMETRY_ALGEBRALINE2D_GET_C_OFFSET UNITYSDK_OFFSET(0x3AA310)
#define FOUNDATION_GEOMETRY_ALGEBRALINE2D_GET_ISDEGENERATE_OFFSET UNITYSDK_OFFSET(0x9AFB60)
#define FOUNDATION_GEOMETRY_ALGEBRALINE2D_GET_X_OFFSET UNITYSDK_OFFSET(0x312A10)
#define FOUNDATION_GEOMETRY_ALGEBRALINE2D_GET_Y_OFFSET UNITYSDK_OFFSET(0x3B0F30)
#define FOUNDATION_GEOMETRY_ALGEBRALINE2D_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x1BC9F990)
#define FOUNDATION_GEOMETRY_ALGEBRALINE2D_VALUEOF_1_OFFSET UNITYSDK_OFFSET(0x9AFBD0)
#define FOUNDATION_GEOMETRY_ALGEBRALINE2D_VALUEOF_OFFSET UNITYSDK_OFFSET(0x9AFBA0)
#define FOUNDATION_GEOMETRY_ALGEBRALINE2D__CTOR_OFFSET UNITYSDK_OFFSET(0x918E50)

namespace Foundation::Geometry
{
	inline static constexpr unsigned int AlgebraLine2D_TypeDefinitionIndex = 8831;

	struct alignas(8) AlgebraLine2D
	{
		::System::Double _a; // 0x10
		::System::Double _b; // 0x18
		::System::Double _c; // 0x20

		::System::Void _ctor(::System::Double a, ::System::Double b, ::System::Double c)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_ALGEBRALINE2D__CTOR_OFFSET))(this, a, b, c);
		}

		::System::Boolean get_IsDegenerate()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_ALGEBRALINE2D_GET_ISDEGENERATE_OFFSET))(this);
		}

		::System::Double get_X()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_ALGEBRALINE2D_GET_X_OFFSET))(this);
		}

		::System::Double get_Y()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_ALGEBRALINE2D_GET_Y_OFFSET))(this);
		}

		::System::Double get_C()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_ALGEBRALINE2D_GET_C_OFFSET))(this);
		}

		/*
		::System::Double ValueOf(::UnityEngine::Vector2 point)
		{
			return ((::System::Double(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_ALGEBRALINE2D_VALUEOF_OFFSET))(this, point);
		}
		*/

		::System::Double ValueOf_1(::System::Double x, ::System::Double y)
		{
			return ((::System::Double(*)(::PVOID, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_ALGEBRALINE2D_VALUEOF_1_OFFSET))(this, x, y);
		}

		/*
		static ::Foundation::Geometry::Line2D op_Explicit(::Foundation::Geometry::AlgebraLine2D line)
		{
			return ((::Foundation::Geometry::Line2D(*)(::Foundation::Geometry::AlgebraLine2D))((::PBYTE)hIl2Cpp + FOUNDATION_GEOMETRY_ALGEBRALINE2D_OP_EXPLICIT_OFFSET))(line);
		}
		*/
	};
}
