#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define MESHDECIMATOR_MATH_VECTOR2_CLAMP_OFFSET UNITYSDK_OFFSET(0x9C3750)
#define MESHDECIMATOR_MATH_VECTOR2_DOT_OFFSET UNITYSDK_OFFSET(0x1CE93020)
#define MESHDECIMATOR_MATH_VECTOR2_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x9C3840)
#define MESHDECIMATOR_MATH_VECTOR2_EQUALS_OFFSET UNITYSDK_OFFSET(0x9C37D0)
#define MESHDECIMATOR_MATH_VECTOR2_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9C3790)
#define MESHDECIMATOR_MATH_VECTOR2_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x9C35C0)
#define MESHDECIMATOR_MATH_VECTOR2_GET_MAGNITUDESQR_OFFSET UNITYSDK_OFFSET(0x9C3590)
#define MESHDECIMATOR_MATH_VECTOR2_GET_MAGNITUDE_OFFSET UNITYSDK_OFFSET(0x9C3560)
#define MESHDECIMATOR_MATH_VECTOR2_GET_NORMALIZED_OFFSET UNITYSDK_OFFSET(0x9C35B0)
#define MESHDECIMATOR_MATH_VECTOR2_LERP_OFFSET UNITYSDK_OFFSET(0x1CE93040)
#define MESHDECIMATOR_MATH_VECTOR2_NORMALIZE_1_OFFSET UNITYSDK_OFFSET(0x1CE92AD0)
#define MESHDECIMATOR_MATH_VECTOR2_NORMALIZE_OFFSET UNITYSDK_OFFSET(0x9C36F0)
#define MESHDECIMATOR_MATH_VECTOR2_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x1CE89BE0)
#define MESHDECIMATOR_MATH_VECTOR2_OP_DIVISION_OFFSET UNITYSDK_OFFSET(0x1CE92CF0)
#define MESHDECIMATOR_MATH_VECTOR2_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1CE8A0E0)
#define MESHDECIMATOR_MATH_VECTOR2_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x1CE92DD0)
#define MESHDECIMATOR_MATH_VECTOR2_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x1CE92E20)
#define MESHDECIMATOR_MATH_VECTOR2_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1CE92E00)
#define MESHDECIMATOR_MATH_VECTOR2_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1CE92D40)
#define MESHDECIMATOR_MATH_VECTOR2_OP_MULTIPLY_1_OFFSET UNITYSDK_OFFSET(0x1CE92CC0)
#define MESHDECIMATOR_MATH_VECTOR2_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x1CE89C10)
#define MESHDECIMATOR_MATH_VECTOR2_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x1CE92C90)
#define MESHDECIMATOR_MATH_VECTOR2_OP_UNARYNEGATION_OFFSET UNITYSDK_OFFSET(0x1CE92D20)
#define MESHDECIMATOR_MATH_VECTOR2_SCALE_1_OFFSET UNITYSDK_OFFSET(0x1CE93060)
#define MESHDECIMATOR_MATH_VECTOR2_SCALE_OFFSET UNITYSDK_OFFSET(0x9C36D0)
#define MESHDECIMATOR_MATH_VECTOR2_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x9C3640)
#define MESHDECIMATOR_MATH_VECTOR2_SET_OFFSET UNITYSDK_OFFSET(0x48A560)
#define MESHDECIMATOR_MATH_VECTOR2_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x9C38A0)
#define MESHDECIMATOR_MATH_VECTOR2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9C3870)
#define MESHDECIMATOR_MATH_VECTOR2__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE93070)
#define MESHDECIMATOR_MATH_VECTOR2__CTOR_1_OFFSET UNITYSDK_OFFSET(0x48A560)
#define MESHDECIMATOR_MATH_VECTOR2__CTOR_OFFSET UNITYSDK_OFFSET(0x606550)

namespace MeshDecimator::Math
{
	inline static constexpr unsigned int Vector2_TypeDefinitionIndex = 34820;

	struct alignas(4) Vector2
	{
		static ::MeshDecimator::Math::Vector2* StaticGet_zero()
		{
			return (::MeshDecimator::Math::Vector2*)Il2CppClass::FromTypeDefinitionIndex(Vector2_TypeDefinitionIndex)->GetStaticField(0x85E0);
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
