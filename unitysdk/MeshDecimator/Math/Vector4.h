#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define MESHDECIMATOR_MATH_VECTOR4_CLAMP_OFFSET UNITYSDK_OFFSET(0x9C4C80)
#define MESHDECIMATOR_MATH_VECTOR4_DOT_OFFSET UNITYSDK_OFFSET(0x1CE95BC0)
#define MESHDECIMATOR_MATH_VECTOR4_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x9C4E00)
#define MESHDECIMATOR_MATH_VECTOR4_EQUALS_OFFSET UNITYSDK_OFFSET(0x9C4D70)
#define MESHDECIMATOR_MATH_VECTOR4_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9C4CF0)
#define MESHDECIMATOR_MATH_VECTOR4_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x9C4A90)
#define MESHDECIMATOR_MATH_VECTOR4_GET_MAGNITUDESQR_OFFSET UNITYSDK_OFFSET(0x9C4A40)
#define MESHDECIMATOR_MATH_VECTOR4_GET_MAGNITUDE_OFFSET UNITYSDK_OFFSET(0x9C4A00)
#define MESHDECIMATOR_MATH_VECTOR4_GET_NORMALIZED_OFFSET UNITYSDK_OFFSET(0x9C4A70)
#define MESHDECIMATOR_MATH_VECTOR4_LERP_OFFSET UNITYSDK_OFFSET(0x1CE95BF0)
#define MESHDECIMATOR_MATH_VECTOR4_NORMALIZE_1_OFFSET UNITYSDK_OFFSET(0x1CE95540)
#define MESHDECIMATOR_MATH_VECTOR4_NORMALIZE_OFFSET UNITYSDK_OFFSET(0x9C4C00)
#define MESHDECIMATOR_MATH_VECTOR4_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x1CE89BA0)
#define MESHDECIMATOR_MATH_VECTOR4_OP_DIVISION_OFFSET UNITYSDK_OFFSET(0x1CE95790)
#define MESHDECIMATOR_MATH_VECTOR4_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1CE8A260)
#define MESHDECIMATOR_MATH_VECTOR4_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x1CE95890)
#define MESHDECIMATOR_MATH_VECTOR4_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1CE958B0)
#define MESHDECIMATOR_MATH_VECTOR4_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1CE957D0)
#define MESHDECIMATOR_MATH_VECTOR4_OP_MULTIPLY_1_OFFSET UNITYSDK_OFFSET(0x1CE95770)
#define MESHDECIMATOR_MATH_VECTOR4_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x1CE89BC0)
#define MESHDECIMATOR_MATH_VECTOR4_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x1CE95750)
#define MESHDECIMATOR_MATH_VECTOR4_OP_UNARYNEGATION_OFFSET UNITYSDK_OFFSET(0x1CE957B0)
#define MESHDECIMATOR_MATH_VECTOR4_SCALE_1_OFFSET UNITYSDK_OFFSET(0x1CE95C10)
#define MESHDECIMATOR_MATH_VECTOR4_SCALE_OFFSET UNITYSDK_OFFSET(0x9C4BF0)
#define MESHDECIMATOR_MATH_VECTOR4_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x9C4B40)
#define MESHDECIMATOR_MATH_VECTOR4_SET_OFFSET UNITYSDK_OFFSET(0x776510)
#define MESHDECIMATOR_MATH_VECTOR4_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x9C4E90)
#define MESHDECIMATOR_MATH_VECTOR4_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9C4E40)
#define MESHDECIMATOR_MATH_VECTOR4__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE95C20)
#define MESHDECIMATOR_MATH_VECTOR4__CTOR_1_OFFSET UNITYSDK_OFFSET(0x776510)
#define MESHDECIMATOR_MATH_VECTOR4__CTOR_OFFSET UNITYSDK_OFFSET(0x4E5030)

namespace MeshDecimator::Math
{
	inline static constexpr unsigned int Vector4_TypeDefinitionIndex = 34826;

	struct alignas(4) Vector4
	{
		static ::MeshDecimator::Math::Vector4* StaticGet_zero()
		{
			return (::MeshDecimator::Math::Vector4*)Il2CppClass::FromTypeDefinitionIndex(Vector4_TypeDefinitionIndex)->GetStaticField(0x8650);
		}
		// static const ::System::Single Epsilon; // 0x0
		::System::Single x; // 0x10
		::System::Single y; // 0x14
		::System::Single z; // 0x18
		::System::Single w; // 0x1C

		::System::Void _ctor(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR4__CTOR_OFFSET))(this, value);
		}

		::System::Void _ctor_1(::System::Single x, ::System::Single y, ::System::Single z, ::System::Single w)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR4__CTOR_1_OFFSET))(this, x, y, z, w);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR4__CCTOR_OFFSET))();
		}

		::System::Single get_Magnitude()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR4_GET_MAGNITUDE_OFFSET))(this);
		}

		::System::Single get_MagnitudeSqr()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR4_GET_MAGNITUDESQR_OFFSET))(this);
		}

		::MeshDecimator::Math::Vector4 get_Normalized()
		{
			return ((::MeshDecimator::Math::Vector4(*)(::PVOID))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR4_GET_NORMALIZED_OFFSET))(this);
		}

		::System::Single get_Item(::System::Int32 index)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR4_GET_ITEM_OFFSET))(this, index);
		}

		::System::Void set_Item(::System::Int32 index, ::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR4_SET_ITEM_OFFSET))(this, index, value);
		}

		static ::MeshDecimator::Math::Vector4 op_Addition(::MeshDecimator::Math::Vector4 a, ::MeshDecimator::Math::Vector4 b)
		{
			return ((::MeshDecimator::Math::Vector4(*)(::MeshDecimator::Math::Vector4, ::MeshDecimator::Math::Vector4))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR4_OP_ADDITION_OFFSET))(a, b);
		}

		static ::MeshDecimator::Math::Vector4 op_Subtraction(::MeshDecimator::Math::Vector4 a, ::MeshDecimator::Math::Vector4 b)
		{
			return ((::MeshDecimator::Math::Vector4(*)(::MeshDecimator::Math::Vector4, ::MeshDecimator::Math::Vector4))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR4_OP_SUBTRACTION_OFFSET))(a, b);
		}

		static ::MeshDecimator::Math::Vector4 op_Multiply(::MeshDecimator::Math::Vector4 a, ::System::Single d)
		{
			return ((::MeshDecimator::Math::Vector4(*)(::MeshDecimator::Math::Vector4, ::System::Single))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR4_OP_MULTIPLY_OFFSET))(a, d);
		}

		static ::MeshDecimator::Math::Vector4 op_Multiply_1(::System::Single d, ::MeshDecimator::Math::Vector4 a)
		{
			return ((::MeshDecimator::Math::Vector4(*)(::System::Single, ::MeshDecimator::Math::Vector4))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR4_OP_MULTIPLY_1_OFFSET))(d, a);
		}

		static ::MeshDecimator::Math::Vector4 op_Division(::MeshDecimator::Math::Vector4 a, ::System::Single d)
		{
			return ((::MeshDecimator::Math::Vector4(*)(::MeshDecimator::Math::Vector4, ::System::Single))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR4_OP_DIVISION_OFFSET))(a, d);
		}

		static ::MeshDecimator::Math::Vector4 op_UnaryNegation(::MeshDecimator::Math::Vector4 a)
		{
			return ((::MeshDecimator::Math::Vector4(*)(::MeshDecimator::Math::Vector4))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR4_OP_UNARYNEGATION_OFFSET))(a);
		}

		static ::System::Boolean op_Equality(::MeshDecimator::Math::Vector4 lhs, ::MeshDecimator::Math::Vector4 rhs)
		{
			return ((::System::Boolean(*)(::MeshDecimator::Math::Vector4, ::MeshDecimator::Math::Vector4))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR4_OP_EQUALITY_OFFSET))(lhs, rhs);
		}

		static ::System::Boolean op_Inequality(::MeshDecimator::Math::Vector4 lhs, ::MeshDecimator::Math::Vector4 rhs)
		{
			return ((::System::Boolean(*)(::MeshDecimator::Math::Vector4, ::MeshDecimator::Math::Vector4))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR4_OP_INEQUALITY_OFFSET))(lhs, rhs);
		}

		/*
		static ::MeshDecimator::Math::Vector4 op_Explicit(::MeshDecimator::Math::Vector4d v)
		{
			return ((::MeshDecimator::Math::Vector4(*)(::MeshDecimator::Math::Vector4d))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR4_OP_EXPLICIT_OFFSET))(v);
		}
		*/

		/*
		static ::MeshDecimator::Math::Vector4 op_Implicit(::MeshDecimator::Math::Vector4i v)
		{
			return ((::MeshDecimator::Math::Vector4(*)(::MeshDecimator::Math::Vector4i))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR4_OP_IMPLICIT_OFFSET))(v);
		}
		*/

		::System::Void Set(::System::Single x, ::System::Single y, ::System::Single z, ::System::Single w)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR4_SET_OFFSET))(this, x, y, z, w);
		}

		::System::Void Scale(::MeshDecimator::Math::Vector4& scale)
		{
			return ((::System::Void(*)(::PVOID, ::MeshDecimator::Math::Vector4&))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR4_SCALE_OFFSET))(this, scale);
		}

		::System::Void Normalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR4_NORMALIZE_OFFSET))(this);
		}

		::System::Void Clamp(::System::Single min, ::System::Single max)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR4_CLAMP_OFFSET))(this, min, max);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR4_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR4_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::MeshDecimator::Math::Vector4 other)
		{
			return ((::System::Boolean(*)(::PVOID, ::MeshDecimator::Math::Vector4))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR4_EQUALS_1_OFFSET))(this, other);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR4_TOSTRING_OFFSET))(this);
		}

		::System::String* ToString_1(::System::String* format)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR4_TOSTRING_1_OFFSET))(this, format);
		}

		static ::System::Single Dot(::MeshDecimator::Math::Vector4& lhs, ::MeshDecimator::Math::Vector4& rhs)
		{
			return ((::System::Single(*)(::MeshDecimator::Math::Vector4&, ::MeshDecimator::Math::Vector4&))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR4_DOT_OFFSET))(lhs, rhs);
		}

		static ::System::Void Lerp(::MeshDecimator::Math::Vector4& a, ::MeshDecimator::Math::Vector4& b, ::System::Single t, ::MeshDecimator::Math::Vector4& result)
		{
			return ((::System::Void(*)(::MeshDecimator::Math::Vector4&, ::MeshDecimator::Math::Vector4&, ::System::Single, ::MeshDecimator::Math::Vector4&))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR4_LERP_OFFSET))(a, b, t, result);
		}

		static ::System::Void Scale_1(::MeshDecimator::Math::Vector4& a, ::MeshDecimator::Math::Vector4& b, ::MeshDecimator::Math::Vector4& result)
		{
			return ((::System::Void(*)(::MeshDecimator::Math::Vector4&, ::MeshDecimator::Math::Vector4&, ::MeshDecimator::Math::Vector4&))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR4_SCALE_1_OFFSET))(a, b, result);
		}

		static ::System::Void Normalize_1(::MeshDecimator::Math::Vector4& value, ::MeshDecimator::Math::Vector4& result)
		{
			return ((::System::Void(*)(::MeshDecimator::Math::Vector4&, ::MeshDecimator::Math::Vector4&))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR4_NORMALIZE_1_OFFSET))(value, result);
		}
	};
}
