#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }

#define CLIPPERLIB_INT128_EQUALS_OFFSET UNITYSDK_OFFSET(0xA19EC0)
#define CLIPPERLIB_INT128_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA19F20)
#define CLIPPERLIB_INT128_INT128MUL_OFFSET UNITYSDK_OFFSET(0x1E3D3780)
#define CLIPPERLIB_INT128_ISNEGATIVE_OFFSET UNITYSDK_OFFSET(0x6227B0)
#define CLIPPERLIB_INT128_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x1E3D7BF0)
#define CLIPPERLIB_INT128_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1E3D3810)
#define CLIPPERLIB_INT128_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x1E3D7C90)
#define CLIPPERLIB_INT128_OP_GREATERTHAN_OFFSET UNITYSDK_OFFSET(0x1E3D7BB0)
#define CLIPPERLIB_INT128_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1E3D7AA0)
#define CLIPPERLIB_INT128_OP_LESSTHAN_OFFSET UNITYSDK_OFFSET(0x1E3D7BD0)
#define CLIPPERLIB_INT128_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x1E3D7C30)
#define CLIPPERLIB_INT128_OP_UNARYNEGATION_OFFSET UNITYSDK_OFFSET(0x1E3D7C60)
#define CLIPPERLIB_INT128__CTOR_1_OFFSET UNITYSDK_OFFSET(0xA19EB0)
#define CLIPPERLIB_INT128__CTOR_2_OFFSET UNITYSDK_OFFSET(0x31EB80)
#define CLIPPERLIB_INT128__CTOR_OFFSET UNITYSDK_OFFSET(0xA19EA0)

namespace ClipperLib
{
	inline static constexpr unsigned int Int128_TypeDefinitionIndex = 33405;

	struct alignas(8) Int128
	{
		::System::Int64 hi; // 0x10
		::System::UInt64 lo; // 0x18

		::System::Void _ctor(::System::Int64 _lo)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + CLIPPERLIB_INT128__CTOR_OFFSET))(this, _lo);
		}

		::System::Void _ctor_1(::System::Int64 _hi, ::System::UInt64 _lo)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64, ::System::UInt64))((::PBYTE)hIl2Cpp + CLIPPERLIB_INT128__CTOR_1_OFFSET))(this, _hi, _lo);
		}

		::System::Void _ctor_2(::ClipperLib::Int128 val)
		{
			return ((::System::Void(*)(::PVOID, ::ClipperLib::Int128))((::PBYTE)hIl2Cpp + CLIPPERLIB_INT128__CTOR_2_OFFSET))(this, val);
		}

		::System::Boolean IsNegative()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLIPPERLIB_INT128_ISNEGATIVE_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::ClipperLib::Int128 val1, ::ClipperLib::Int128 val2)
		{
			return ((::System::Boolean(*)(::ClipperLib::Int128, ::ClipperLib::Int128))((::PBYTE)hIl2Cpp + CLIPPERLIB_INT128_OP_EQUALITY_OFFSET))(val1, val2);
		}

		static ::System::Boolean op_Inequality(::ClipperLib::Int128 val1, ::ClipperLib::Int128 val2)
		{
			return ((::System::Boolean(*)(::ClipperLib::Int128, ::ClipperLib::Int128))((::PBYTE)hIl2Cpp + CLIPPERLIB_INT128_OP_INEQUALITY_OFFSET))(val1, val2);
		}

		::System::Boolean Equals(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + CLIPPERLIB_INT128_EQUALS_OFFSET))(this, obj);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + CLIPPERLIB_INT128_GETHASHCODE_OFFSET))(this);
		}

		static ::System::Boolean op_GreaterThan(::ClipperLib::Int128 val1, ::ClipperLib::Int128 val2)
		{
			return ((::System::Boolean(*)(::ClipperLib::Int128, ::ClipperLib::Int128))((::PBYTE)hIl2Cpp + CLIPPERLIB_INT128_OP_GREATERTHAN_OFFSET))(val1, val2);
		}

		static ::System::Boolean op_LessThan(::ClipperLib::Int128 val1, ::ClipperLib::Int128 val2)
		{
			return ((::System::Boolean(*)(::ClipperLib::Int128, ::ClipperLib::Int128))((::PBYTE)hIl2Cpp + CLIPPERLIB_INT128_OP_LESSTHAN_OFFSET))(val1, val2);
		}

		static ::ClipperLib::Int128 op_Addition(::ClipperLib::Int128 lhs, ::ClipperLib::Int128 rhs)
		{
			return ((::ClipperLib::Int128(*)(::ClipperLib::Int128, ::ClipperLib::Int128))((::PBYTE)hIl2Cpp + CLIPPERLIB_INT128_OP_ADDITION_OFFSET))(lhs, rhs);
		}

		static ::ClipperLib::Int128 op_Subtraction(::ClipperLib::Int128 lhs, ::ClipperLib::Int128 rhs)
		{
			return ((::ClipperLib::Int128(*)(::ClipperLib::Int128, ::ClipperLib::Int128))((::PBYTE)hIl2Cpp + CLIPPERLIB_INT128_OP_SUBTRACTION_OFFSET))(lhs, rhs);
		}

		static ::ClipperLib::Int128 op_UnaryNegation(::ClipperLib::Int128 val)
		{
			return ((::ClipperLib::Int128(*)(::ClipperLib::Int128))((::PBYTE)hIl2Cpp + CLIPPERLIB_INT128_OP_UNARYNEGATION_OFFSET))(val);
		}

		static ::System::Double op_Explicit(::ClipperLib::Int128 val)
		{
			return ((::System::Double(*)(::ClipperLib::Int128))((::PBYTE)hIl2Cpp + CLIPPERLIB_INT128_OP_EXPLICIT_OFFSET))(val);
		}

		static ::ClipperLib::Int128 Int128Mul(::System::Int64 lhs, ::System::Int64 rhs)
		{
			return ((::ClipperLib::Int128(*)(::System::Int64, ::System::Int64))((::PBYTE)hIl2Cpp + CLIPPERLIB_INT128_INT128MUL_OFFSET))(lhs, rhs);
		}
	};
}
