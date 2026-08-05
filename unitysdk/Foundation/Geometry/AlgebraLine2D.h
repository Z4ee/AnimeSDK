#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define FOUNDATION_GEOMETRY_ALGEBRALINE2D_GET_C_OFFSET UNITYSDK_OFFSET(0x451CF0)
#define FOUNDATION_GEOMETRY_ALGEBRALINE2D_GET_ISDEGENERATE_OFFSET UNITYSDK_OFFSET(0xAA49C0)
#define FOUNDATION_GEOMETRY_ALGEBRALINE2D_GET_X_OFFSET UNITYSDK_OFFSET(0x364FD0)
#define FOUNDATION_GEOMETRY_ALGEBRALINE2D_GET_Y_OFFSET UNITYSDK_OFFSET(0x4262F0)
#define FOUNDATION_GEOMETRY_ALGEBRALINE2D_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x1F465F50)
#define FOUNDATION_GEOMETRY_ALGEBRALINE2D_VALUEOF_1_OFFSET UNITYSDK_OFFSET(0xAA4A30)
#define FOUNDATION_GEOMETRY_ALGEBRALINE2D_VALUEOF_OFFSET UNITYSDK_OFFSET(0xAA4A00)
#define FOUNDATION_GEOMETRY_ALGEBRALINE2D__CTOR_OFFSET UNITYSDK_OFFSET(0xA0EBE0)

namespace Foundation::Geometry
{
	inline static constexpr unsigned int AlgebraLine2D_TypeDefinitionIndex = 8542;

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
