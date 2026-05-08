#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define MESHDECIMATOR_MATH_VECTOR2D_CLAMP_OFFSET UNITYSDK_OFFSET(0x9184E0)
#define MESHDECIMATOR_MATH_VECTOR2D_DOT_OFFSET UNITYSDK_OFFSET(0x1AA3EBF0)
#define MESHDECIMATOR_MATH_VECTOR2D_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x9185B0)
#define MESHDECIMATOR_MATH_VECTOR2D_EQUALS_OFFSET UNITYSDK_OFFSET(0x918540)
#define MESHDECIMATOR_MATH_VECTOR2D_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x918520)
#define MESHDECIMATOR_MATH_VECTOR2D_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x918320)
#define MESHDECIMATOR_MATH_VECTOR2D_GET_MAGNITUDESQR_OFFSET UNITYSDK_OFFSET(0x9182E0)
#define MESHDECIMATOR_MATH_VECTOR2D_GET_MAGNITUDE_OFFSET UNITYSDK_OFFSET(0x9182B0)
#define MESHDECIMATOR_MATH_VECTOR2D_GET_NORMALIZED_OFFSET UNITYSDK_OFFSET(0x918300)
#define MESHDECIMATOR_MATH_VECTOR2D_LERP_OFFSET UNITYSDK_OFFSET(0x1AA3EC10)
#define MESHDECIMATOR_MATH_VECTOR2D_NORMALIZE_1_OFFSET UNITYSDK_OFFSET(0x1AA3E5F0)
#define MESHDECIMATOR_MATH_VECTOR2D_NORMALIZE_OFFSET UNITYSDK_OFFSET(0x918470)
#define MESHDECIMATOR_MATH_VECTOR2D_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x1AA3E7C0)
#define MESHDECIMATOR_MATH_VECTOR2D_OP_DIVISION_OFFSET UNITYSDK_OFFSET(0x1AA3E840)
#define MESHDECIMATOR_MATH_VECTOR2D_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1AA3E880)
#define MESHDECIMATOR_MATH_VECTOR2D_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x1AA3E9D0)
#define MESHDECIMATOR_MATH_VECTOR2D_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1AA3E9A0)
#define MESHDECIMATOR_MATH_VECTOR2D_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1AA3E910)
#define MESHDECIMATOR_MATH_VECTOR2D_OP_MULTIPLY_1_OFFSET UNITYSDK_OFFSET(0x1AA3E820)
#define MESHDECIMATOR_MATH_VECTOR2D_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x1AA3E800)
#define MESHDECIMATOR_MATH_VECTOR2D_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x1AA3E7E0)
#define MESHDECIMATOR_MATH_VECTOR2D_OP_UNARYNEGATION_OFFSET UNITYSDK_OFFSET(0x1AA3E860)
#define MESHDECIMATOR_MATH_VECTOR2D_SCALE_1_OFFSET UNITYSDK_OFFSET(0x1AA3EC30)
#define MESHDECIMATOR_MATH_VECTOR2D_SCALE_OFFSET UNITYSDK_OFFSET(0x918450)
#define MESHDECIMATOR_MATH_VECTOR2D_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x9183A0)
#define MESHDECIMATOR_MATH_VECTOR2D_SET_OFFSET UNITYSDK_OFFSET(0x918440)
#define MESHDECIMATOR_MATH_VECTOR2D_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x918610)
#define MESHDECIMATOR_MATH_VECTOR2D_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9185E0)
#define MESHDECIMATOR_MATH_VECTOR2D__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AA3EC50)
#define MESHDECIMATOR_MATH_VECTOR2D__CTOR_1_OFFSET UNITYSDK_OFFSET(0x918440)
#define MESHDECIMATOR_MATH_VECTOR2D__CTOR_OFFSET UNITYSDK_OFFSET(0x918430)

namespace MeshDecimator::Math
{
	inline static constexpr unsigned int Vector2d_TypeDefinitionIndex = 33258;

	struct alignas(8) Vector2d
	{
		static ::MeshDecimator::Math::Vector2d* StaticGet_zero()
		{
			return (::MeshDecimator::Math::Vector2d*)Il2CppClass::FromTypeDefinitionIndex(Vector2d_TypeDefinitionIndex)->GetStaticField(0x8150);
		}
		// static const ::System::Double Epsilon; // 0x0
		::System::Double x; // 0x10
		::System::Double y; // 0x18

		::System::Void _ctor(::System::Double value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR2D__CTOR_OFFSET))(this, value);
		}

		::System::Void _ctor_1(::System::Double x, ::System::Double y)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR2D__CTOR_1_OFFSET))(this, x, y);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR2D__CCTOR_OFFSET))();
		}

		::System::Double get_Magnitude()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR2D_GET_MAGNITUDE_OFFSET))(this);
		}

		::System::Double get_MagnitudeSqr()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR2D_GET_MAGNITUDESQR_OFFSET))(this);
		}

		::MeshDecimator::Math::Vector2d get_Normalized()
		{
			return ((::MeshDecimator::Math::Vector2d(*)(::PVOID))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR2D_GET_NORMALIZED_OFFSET))(this);
		}

		::System::Double get_Item(::System::Int32 index)
		{
			return ((::System::Double(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR2D_GET_ITEM_OFFSET))(this, index);
		}

		::System::Void set_Item(::System::Int32 index, ::System::Double value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Double))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR2D_SET_ITEM_OFFSET))(this, index, value);
		}

		static ::MeshDecimator::Math::Vector2d op_Addition(::MeshDecimator::Math::Vector2d a, ::MeshDecimator::Math::Vector2d b)
		{
			return ((::MeshDecimator::Math::Vector2d(*)(::MeshDecimator::Math::Vector2d, ::MeshDecimator::Math::Vector2d))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR2D_OP_ADDITION_OFFSET))(a, b);
		}

		static ::MeshDecimator::Math::Vector2d op_Subtraction(::MeshDecimator::Math::Vector2d a, ::MeshDecimator::Math::Vector2d b)
		{
			return ((::MeshDecimator::Math::Vector2d(*)(::MeshDecimator::Math::Vector2d, ::MeshDecimator::Math::Vector2d))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR2D_OP_SUBTRACTION_OFFSET))(a, b);
		}

		static ::MeshDecimator::Math::Vector2d op_Multiply(::MeshDecimator::Math::Vector2d a, ::System::Double d)
		{
			return ((::MeshDecimator::Math::Vector2d(*)(::MeshDecimator::Math::Vector2d, ::System::Double))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR2D_OP_MULTIPLY_OFFSET))(a, d);
		}

		static ::MeshDecimator::Math::Vector2d op_Multiply_1(::System::Double d, ::MeshDecimator::Math::Vector2d a)
		{
			return ((::MeshDecimator::Math::Vector2d(*)(::System::Double, ::MeshDecimator::Math::Vector2d))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR2D_OP_MULTIPLY_1_OFFSET))(d, a);
		}

		static ::MeshDecimator::Math::Vector2d op_Division(::MeshDecimator::Math::Vector2d a, ::System::Double d)
		{
			return ((::MeshDecimator::Math::Vector2d(*)(::MeshDecimator::Math::Vector2d, ::System::Double))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR2D_OP_DIVISION_OFFSET))(a, d);
		}

		static ::MeshDecimator::Math::Vector2d op_UnaryNegation(::MeshDecimator::Math::Vector2d a)
		{
			return ((::MeshDecimator::Math::Vector2d(*)(::MeshDecimator::Math::Vector2d))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR2D_OP_UNARYNEGATION_OFFSET))(a);
		}

		static ::System::Boolean op_Equality(::MeshDecimator::Math::Vector2d lhs, ::MeshDecimator::Math::Vector2d rhs)
		{
			return ((::System::Boolean(*)(::MeshDecimator::Math::Vector2d, ::MeshDecimator::Math::Vector2d))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR2D_OP_EQUALITY_OFFSET))(lhs, rhs);
		}

		static ::System::Boolean op_Inequality(::MeshDecimator::Math::Vector2d lhs, ::MeshDecimator::Math::Vector2d rhs)
		{
			return ((::System::Boolean(*)(::MeshDecimator::Math::Vector2d, ::MeshDecimator::Math::Vector2d))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR2D_OP_INEQUALITY_OFFSET))(lhs, rhs);
		}

		/*
		static ::MeshDecimator::Math::Vector2d op_Implicit(::MeshDecimator::Math::Vector2 v)
		{
			return ((::MeshDecimator::Math::Vector2d(*)(::MeshDecimator::Math::Vector2))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR2D_OP_IMPLICIT_OFFSET))(v);
		}
		*/

		/*
		static ::MeshDecimator::Math::Vector2d op_Implicit_1(::MeshDecimator::Math::Vector2i v)
		{
			return ((::MeshDecimator::Math::Vector2d(*)(::MeshDecimator::Math::Vector2i))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR2D_OP_IMPLICIT_1_OFFSET))(v);
		}
		*/

		::System::Void Set(::System::Double x, ::System::Double y)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR2D_SET_OFFSET))(this, x, y);
		}

		::System::Void Scale(::MeshDecimator::Math::Vector2d& scale)
		{
			return ((::System::Void(*)(::PVOID, ::MeshDecimator::Math::Vector2d&))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR2D_SCALE_OFFSET))(this, scale);
		}

		::System::Void Normalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR2D_NORMALIZE_OFFSET))(this);
		}

		::System::Void Clamp(::System::Double min, ::System::Double max)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR2D_CLAMP_OFFSET))(this, min, max);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR2D_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR2D_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::MeshDecimator::Math::Vector2d other)
		{
			return ((::System::Boolean(*)(::PVOID, ::MeshDecimator::Math::Vector2d))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR2D_EQUALS_1_OFFSET))(this, other);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR2D_TOSTRING_OFFSET))(this);
		}

		::System::String* ToString_1(::System::String* format)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR2D_TOSTRING_1_OFFSET))(this, format);
		}

		static ::System::Double Dot(::MeshDecimator::Math::Vector2d& lhs, ::MeshDecimator::Math::Vector2d& rhs)
		{
			return ((::System::Double(*)(::MeshDecimator::Math::Vector2d&, ::MeshDecimator::Math::Vector2d&))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR2D_DOT_OFFSET))(lhs, rhs);
		}

		static ::System::Void Lerp(::MeshDecimator::Math::Vector2d& a, ::MeshDecimator::Math::Vector2d& b, ::System::Double t, ::MeshDecimator::Math::Vector2d& result)
		{
			return ((::System::Void(*)(::MeshDecimator::Math::Vector2d&, ::MeshDecimator::Math::Vector2d&, ::System::Double, ::MeshDecimator::Math::Vector2d&))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR2D_LERP_OFFSET))(a, b, t, result);
		}

		static ::System::Void Scale_1(::MeshDecimator::Math::Vector2d& a, ::MeshDecimator::Math::Vector2d& b, ::MeshDecimator::Math::Vector2d& result)
		{
			return ((::System::Void(*)(::MeshDecimator::Math::Vector2d&, ::MeshDecimator::Math::Vector2d&, ::MeshDecimator::Math::Vector2d&))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR2D_SCALE_1_OFFSET))(a, b, result);
		}

		static ::System::Void Normalize_1(::MeshDecimator::Math::Vector2d& value, ::MeshDecimator::Math::Vector2d& result)
		{
			return ((::System::Void(*)(::MeshDecimator::Math::Vector2d&, ::MeshDecimator::Math::Vector2d&))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR2D_NORMALIZE_1_OFFSET))(value, result);
		}
	};
}
