#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define MESHDECIMATOR_MATH_VECTOR2_CLAMP_OFFSET UNITYSDK_OFFSET(0x918130)
#define MESHDECIMATOR_MATH_VECTOR2_DOT_OFFSET UNITYSDK_OFFSET(0x1AA3E430)
#define MESHDECIMATOR_MATH_VECTOR2_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x918220)
#define MESHDECIMATOR_MATH_VECTOR2_EQUALS_OFFSET UNITYSDK_OFFSET(0x9181B0)
#define MESHDECIMATOR_MATH_VECTOR2_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x918170)
#define MESHDECIMATOR_MATH_VECTOR2_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x917FA0)
#define MESHDECIMATOR_MATH_VECTOR2_GET_MAGNITUDESQR_OFFSET UNITYSDK_OFFSET(0x917F70)
#define MESHDECIMATOR_MATH_VECTOR2_GET_MAGNITUDE_OFFSET UNITYSDK_OFFSET(0x917F40)
#define MESHDECIMATOR_MATH_VECTOR2_GET_NORMALIZED_OFFSET UNITYSDK_OFFSET(0x917F90)
#define MESHDECIMATOR_MATH_VECTOR2_LERP_OFFSET UNITYSDK_OFFSET(0x1AA3E450)
#define MESHDECIMATOR_MATH_VECTOR2_NORMALIZE_1_OFFSET UNITYSDK_OFFSET(0x1AA3DEE0)
#define MESHDECIMATOR_MATH_VECTOR2_NORMALIZE_OFFSET UNITYSDK_OFFSET(0x9180D0)
#define MESHDECIMATOR_MATH_VECTOR2_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x1AA34FF0)
#define MESHDECIMATOR_MATH_VECTOR2_OP_DIVISION_OFFSET UNITYSDK_OFFSET(0x1AA3E100)
#define MESHDECIMATOR_MATH_VECTOR2_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1AA354F0)
#define MESHDECIMATOR_MATH_VECTOR2_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x1AA3E1E0)
#define MESHDECIMATOR_MATH_VECTOR2_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x1AA3E230)
#define MESHDECIMATOR_MATH_VECTOR2_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1AA3E210)
#define MESHDECIMATOR_MATH_VECTOR2_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1AA3E150)
#define MESHDECIMATOR_MATH_VECTOR2_OP_MULTIPLY_1_OFFSET UNITYSDK_OFFSET(0x1AA3E0D0)
#define MESHDECIMATOR_MATH_VECTOR2_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x1AA35020)
#define MESHDECIMATOR_MATH_VECTOR2_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x1AA3E0A0)
#define MESHDECIMATOR_MATH_VECTOR2_OP_UNARYNEGATION_OFFSET UNITYSDK_OFFSET(0x1AA3E130)
#define MESHDECIMATOR_MATH_VECTOR2_SCALE_1_OFFSET UNITYSDK_OFFSET(0x1AA3E470)
#define MESHDECIMATOR_MATH_VECTOR2_SCALE_OFFSET UNITYSDK_OFFSET(0x9180B0)
#define MESHDECIMATOR_MATH_VECTOR2_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x918020)
#define MESHDECIMATOR_MATH_VECTOR2_SET_OFFSET UNITYSDK_OFFSET(0x43F560)
#define MESHDECIMATOR_MATH_VECTOR2_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x918280)
#define MESHDECIMATOR_MATH_VECTOR2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x918250)
#define MESHDECIMATOR_MATH_VECTOR2__CCTOR_OFFSET UNITYSDK_OFFSET(0x1AA3E480)
#define MESHDECIMATOR_MATH_VECTOR2__CTOR_1_OFFSET UNITYSDK_OFFSET(0x43F560)
#define MESHDECIMATOR_MATH_VECTOR2__CTOR_OFFSET UNITYSDK_OFFSET(0x3E8610)

namespace MeshDecimator::Math
{
	inline static constexpr unsigned int Vector2_TypeDefinitionIndex = 33257;

	struct alignas(4) Vector2
	{
		static ::MeshDecimator::Math::Vector2* StaticGet_zero()
		{
			return (::MeshDecimator::Math::Vector2*)Il2CppClass::FromTypeDefinitionIndex(Vector2_TypeDefinitionIndex)->GetStaticField(0x8140);
		}
		// static const ::System::Single Epsilon; // 0x0
		::System::Single x; // 0x10
		::System::Single y; // 0x14

		::System::Void _ctor(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR2__CTOR_OFFSET))(this, value);
		}

		::System::Void _ctor_1(::System::Single x, ::System::Single y)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR2__CTOR_1_OFFSET))(this, x, y);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR2__CCTOR_OFFSET))();
		}

		::System::Single get_Magnitude()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR2_GET_MAGNITUDE_OFFSET))(this);
		}

		::System::Single get_MagnitudeSqr()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR2_GET_MAGNITUDESQR_OFFSET))(this);
		}

		::MeshDecimator::Math::Vector2 get_Normalized()
		{
			return ((::MeshDecimator::Math::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR2_GET_NORMALIZED_OFFSET))(this);
		}

		::System::Single get_Item(::System::Int32 index)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR2_GET_ITEM_OFFSET))(this, index);
		}

		::System::Void set_Item(::System::Int32 index, ::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR2_SET_ITEM_OFFSET))(this, index, value);
		}

		static ::MeshDecimator::Math::Vector2 op_Addition(::MeshDecimator::Math::Vector2 a, ::MeshDecimator::Math::Vector2 b)
		{
			return ((::MeshDecimator::Math::Vector2(*)(::MeshDecimator::Math::Vector2, ::MeshDecimator::Math::Vector2))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR2_OP_ADDITION_OFFSET))(a, b);
		}

		static ::MeshDecimator::Math::Vector2 op_Subtraction(::MeshDecimator::Math::Vector2 a, ::MeshDecimator::Math::Vector2 b)
		{
			return ((::MeshDecimator::Math::Vector2(*)(::MeshDecimator::Math::Vector2, ::MeshDecimator::Math::Vector2))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR2_OP_SUBTRACTION_OFFSET))(a, b);
		}

		static ::MeshDecimator::Math::Vector2 op_Multiply(::MeshDecimator::Math::Vector2 a, ::System::Single d)
		{
			return ((::MeshDecimator::Math::Vector2(*)(::MeshDecimator::Math::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR2_OP_MULTIPLY_OFFSET))(a, d);
		}

		static ::MeshDecimator::Math::Vector2 op_Multiply_1(::System::Single d, ::MeshDecimator::Math::Vector2 a)
		{
			return ((::MeshDecimator::Math::Vector2(*)(::System::Single, ::MeshDecimator::Math::Vector2))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR2_OP_MULTIPLY_1_OFFSET))(d, a);
		}

		static ::MeshDecimator::Math::Vector2 op_Division(::MeshDecimator::Math::Vector2 a, ::System::Single d)
		{
			return ((::MeshDecimator::Math::Vector2(*)(::MeshDecimator::Math::Vector2, ::System::Single))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR2_OP_DIVISION_OFFSET))(a, d);
		}

		static ::MeshDecimator::Math::Vector2 op_UnaryNegation(::MeshDecimator::Math::Vector2 a)
		{
			return ((::MeshDecimator::Math::Vector2(*)(::MeshDecimator::Math::Vector2))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR2_OP_UNARYNEGATION_OFFSET))(a);
		}

		static ::System::Boolean op_Equality(::MeshDecimator::Math::Vector2 lhs, ::MeshDecimator::Math::Vector2 rhs)
		{
			return ((::System::Boolean(*)(::MeshDecimator::Math::Vector2, ::MeshDecimator::Math::Vector2))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR2_OP_EQUALITY_OFFSET))(lhs, rhs);
		}

		static ::System::Boolean op_Inequality(::MeshDecimator::Math::Vector2 lhs, ::MeshDecimator::Math::Vector2 rhs)
		{
			return ((::System::Boolean(*)(::MeshDecimator::Math::Vector2, ::MeshDecimator::Math::Vector2))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR2_OP_INEQUALITY_OFFSET))(lhs, rhs);
		}

		/*
		static ::MeshDecimator::Math::Vector2 op_Explicit(::MeshDecimator::Math::Vector2d v)
		{
			return ((::MeshDecimator::Math::Vector2(*)(::MeshDecimator::Math::Vector2d))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR2_OP_EXPLICIT_OFFSET))(v);
		}
		*/

		/*
		static ::MeshDecimator::Math::Vector2 op_Implicit(::MeshDecimator::Math::Vector2i v)
		{
			return ((::MeshDecimator::Math::Vector2(*)(::MeshDecimator::Math::Vector2i))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR2_OP_IMPLICIT_OFFSET))(v);
		}
		*/

		/*
		static ::MeshDecimator::Math::Vector2 op_Implicit_1(::UnityEngine::Vector2 v)
		{
			return ((::MeshDecimator::Math::Vector2(*)(::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR2_OP_IMPLICIT_1_OFFSET))(v);
		}
		*/

		::System::Void Set(::System::Single x, ::System::Single y)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR2_SET_OFFSET))(this, x, y);
		}

		::System::Void Scale(::MeshDecimator::Math::Vector2& scale)
		{
			return ((::System::Void(*)(::PVOID, ::MeshDecimator::Math::Vector2&))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR2_SCALE_OFFSET))(this, scale);
		}

		::System::Void Normalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR2_NORMALIZE_OFFSET))(this);
		}

		::System::Void Clamp(::System::Single min, ::System::Single max)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR2_CLAMP_OFFSET))(this, min, max);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR2_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR2_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::MeshDecimator::Math::Vector2 other)
		{
			return ((::System::Boolean(*)(::PVOID, ::MeshDecimator::Math::Vector2))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR2_EQUALS_1_OFFSET))(this, other);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR2_TOSTRING_OFFSET))(this);
		}

		::System::String* ToString_1(::System::String* format)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR2_TOSTRING_1_OFFSET))(this, format);
		}

		static ::System::Single Dot(::MeshDecimator::Math::Vector2& lhs, ::MeshDecimator::Math::Vector2& rhs)
		{
			return ((::System::Single(*)(::MeshDecimator::Math::Vector2&, ::MeshDecimator::Math::Vector2&))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR2_DOT_OFFSET))(lhs, rhs);
		}

		static ::System::Void Lerp(::MeshDecimator::Math::Vector2& a, ::MeshDecimator::Math::Vector2& b, ::System::Single t, ::MeshDecimator::Math::Vector2& result)
		{
			return ((::System::Void(*)(::MeshDecimator::Math::Vector2&, ::MeshDecimator::Math::Vector2&, ::System::Single, ::MeshDecimator::Math::Vector2&))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR2_LERP_OFFSET))(a, b, t, result);
		}

		static ::System::Void Scale_1(::MeshDecimator::Math::Vector2& a, ::MeshDecimator::Math::Vector2& b, ::MeshDecimator::Math::Vector2& result)
		{
			return ((::System::Void(*)(::MeshDecimator::Math::Vector2&, ::MeshDecimator::Math::Vector2&, ::MeshDecimator::Math::Vector2&))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR2_SCALE_1_OFFSET))(a, b, result);
		}

		static ::System::Void Normalize_1(::MeshDecimator::Math::Vector2& value, ::MeshDecimator::Math::Vector2& result)
		{
			return ((::System::Void(*)(::MeshDecimator::Math::Vector2&, ::MeshDecimator::Math::Vector2&))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR2_NORMALIZE_1_OFFSET))(value, result);
		}
	};
}
