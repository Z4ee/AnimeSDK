#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define CLIPPERLIB_INTPOINT_EQUALS_OFFSET UNITYSDK_OFFSET(0xA19F60)
#define CLIPPERLIB_INTPOINT_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA19FC0)
#define CLIPPERLIB_INTPOINT_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1E3CAB70)
#define CLIPPERLIB_INTPOINT_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1E3CB0F0)
#define CLIPPERLIB_INTPOINT__CTOR_1_OFFSET UNITYSDK_OFFSET(0xA19F40)
#define CLIPPERLIB_INTPOINT__CTOR_2_OFFSET UNITYSDK_OFFSET(0x31EB80)
#define CLIPPERLIB_INTPOINT__CTOR_OFFSET UNITYSDK_OFFSET(0x346F70)

namespace ClipperLib
{
	inline static constexpr unsigned int IntPoint_TypeDefinitionIndex = 33406;

	struct alignas(8) IntPoint
	{
		::System::Int64 X; // 0x10
		::System::Int64 Y; // 0x18

		::System::Void _ctor(::System::Int64 X, ::System::Int64 Y)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + CLIPPERLIB_INTPOINT__CTOR_OFFSET))(this, X, Y);
		}

		::System::Void _ctor_1(::System::Double x, ::System::Double y)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + CLIPPERLIB_INTPOINT__CTOR_1_OFFSET))(this, x, y);
		}

		::System::Void _ctor_2(::ClipperLib::IntPoint pt)
		{
			return ((::System::Void(*)(::PVOID, ::ClipperLib::IntPoint))((::PBYTE)hIl2Cpp + CLIPPERLIB_INTPOINT__CTOR_2_OFFSET))(this, pt);
		}

		static ::System::Boolean op_Equality(::ClipperLib::IntPoint a, ::ClipperLib::IntPoint b)
		{
			return ((::System::Boolean(*)(::ClipperLib::IntPoint, ::ClipperLib::IntPoint))((::PBYTE)hIl2Cpp + CLIPPERLIB_INTPOINT_OP_EQUALITY_OFFSET))(a, b);
		}

		static ::System::Boolean op_Inequality(::ClipperLib::IntPoint a, ::ClipperLib::IntPoint b)
		{
			return ((::System::Boolean(*)(::ClipperLib::IntPoint, ::ClipperLib::IntPoint))((::PBYTE)hIl2Cpp + CLIPPERLIB_INTPOINT_OP_INEQUALITY_OFFSET))(a, b);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLIPPERLIB_INTPOINT_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLIPPERLIB_INTPOINT_GETHASHCODE_OFFSET))(this);
		}
	};
}
