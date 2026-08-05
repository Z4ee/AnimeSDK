#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define MESHDECIMATOR_MATH_VECTOR4_CLAMP_OFFSET UNITYSDK_OFFSET(0xA0F380)
#define MESHDECIMATOR_MATH_VECTOR4_DOT_OFFSET UNITYSDK_OFFSET(0x1E277840)
#define MESHDECIMATOR_MATH_VECTOR4_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xA0F500)
#define MESHDECIMATOR_MATH_VECTOR4_EQUALS_OFFSET UNITYSDK_OFFSET(0xA0F470)
#define MESHDECIMATOR_MATH_VECTOR4_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA0F3F0)
#define MESHDECIMATOR_MATH_VECTOR4_GET_ITEM_OFFSET UNITYSDK_OFFSET(0xA0F1F0)
#define MESHDECIMATOR_MATH_VECTOR4_GET_MAGNITUDESQR_OFFSET UNITYSDK_OFFSET(0xA0F1A0)
#define MESHDECIMATOR_MATH_VECTOR4_GET_MAGNITUDE_OFFSET UNITYSDK_OFFSET(0xA0F170)
#define MESHDECIMATOR_MATH_VECTOR4_GET_NORMALIZED_OFFSET UNITYSDK_OFFSET(0xA0F1D0)
#define MESHDECIMATOR_MATH_VECTOR4_LERP_OFFSET UNITYSDK_OFFSET(0x1E277870)
#define MESHDECIMATOR_MATH_VECTOR4_NORMALIZE_1_OFFSET UNITYSDK_OFFSET(0x1E277220)
#define MESHDECIMATOR_MATH_VECTOR4_NORMALIZE_OFFSET UNITYSDK_OFFSET(0xA0F330)
#define MESHDECIMATOR_MATH_VECTOR4_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x1E26BE60)
#define MESHDECIMATOR_MATH_VECTOR4_OP_DIVISION_OFFSET UNITYSDK_OFFSET(0x1E277430)
#define MESHDECIMATOR_MATH_VECTOR4_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1E26C520)
#define MESHDECIMATOR_MATH_VECTOR4_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x1E277530)
#define MESHDECIMATOR_MATH_VECTOR4_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1E277550)
#define MESHDECIMATOR_MATH_VECTOR4_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1E277470)
#define MESHDECIMATOR_MATH_VECTOR4_OP_MULTIPLY_1_OFFSET UNITYSDK_OFFSET(0x1E277410)
#define MESHDECIMATOR_MATH_VECTOR4_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x1E26BE80)
#define MESHDECIMATOR_MATH_VECTOR4_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x1E2773F0)
#define MESHDECIMATOR_MATH_VECTOR4_OP_UNARYNEGATION_OFFSET UNITYSDK_OFFSET(0x1E277450)
#define MESHDECIMATOR_MATH_VECTOR4_SCALE_1_OFFSET UNITYSDK_OFFSET(0x1E277890)
#define MESHDECIMATOR_MATH_VECTOR4_SCALE_OFFSET UNITYSDK_OFFSET(0xA0F320)
#define MESHDECIMATOR_MATH_VECTOR4_SET_ITEM_OFFSET UNITYSDK_OFFSET(0xA0F280)
#define MESHDECIMATOR_MATH_VECTOR4_SET_OFFSET UNITYSDK_OFFSET(0x5E7E90)
#define MESHDECIMATOR_MATH_VECTOR4_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0xA0F590)
#define MESHDECIMATOR_MATH_VECTOR4_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA0F540)
#define MESHDECIMATOR_MATH_VECTOR4__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2778A0)
#define MESHDECIMATOR_MATH_VECTOR4__CTOR_1_OFFSET UNITYSDK_OFFSET(0x5E7E90)
#define MESHDECIMATOR_MATH_VECTOR4__CTOR_OFFSET UNITYSDK_OFFSET(0x6AC340)

namespace MeshDecimator::Math
{
	inline static constexpr unsigned int Vector4_TypeDefinitionIndex = 35485;

	struct alignas(4) Vector4
	{
		static ::MeshDecimator::Math::Vector4* StaticGet_zero()
		{
			return (::MeshDecimator::Math::Vector4*)Il2CppClass::FromTypeDefinitionIndex(Vector4_TypeDefinitionIndex)->GetStaticField(0x8730);
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
