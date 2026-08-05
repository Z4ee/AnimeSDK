#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define MESHDECIMATOR_MATH_VECTOR4D_CLAMP_OFFSET UNITYSDK_OFFSET(0xA0F880)
#define MESHDECIMATOR_MATH_VECTOR4D_DOT_OFFSET UNITYSDK_OFFSET(0x1E278240)
#define MESHDECIMATOR_MATH_VECTOR4D_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xA0F9E0)
#define MESHDECIMATOR_MATH_VECTOR4D_EQUALS_OFFSET UNITYSDK_OFFSET(0xA0F950)
#define MESHDECIMATOR_MATH_VECTOR4D_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA0F900)
#define MESHDECIMATOR_MATH_VECTOR4D_GET_ITEM_OFFSET UNITYSDK_OFFSET(0xA0F670)
#define MESHDECIMATOR_MATH_VECTOR4D_GET_MAGNITUDESQR_OFFSET UNITYSDK_OFFSET(0xA0F620)
#define MESHDECIMATOR_MATH_VECTOR4D_GET_MAGNITUDE_OFFSET UNITYSDK_OFFSET(0xA0F5E0)
#define MESHDECIMATOR_MATH_VECTOR4D_GET_NORMALIZED_OFFSET UNITYSDK_OFFSET(0xA0F650)
#define MESHDECIMATOR_MATH_VECTOR4D_LERP_OFFSET UNITYSDK_OFFSET(0x1E278280)
#define MESHDECIMATOR_MATH_VECTOR4D_NORMALIZE_1_OFFSET UNITYSDK_OFFSET(0x1E277A30)
#define MESHDECIMATOR_MATH_VECTOR4D_NORMALIZE_OFFSET UNITYSDK_OFFSET(0xA0F810)
#define MESHDECIMATOR_MATH_VECTOR4D_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x1E277C60)
#define MESHDECIMATOR_MATH_VECTOR4D_OP_DIVISION_OFFSET UNITYSDK_OFFSET(0x1E277D20)
#define MESHDECIMATOR_MATH_VECTOR4D_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1E277D70)
#define MESHDECIMATOR_MATH_VECTOR4D_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x1E277F20)
#define MESHDECIMATOR_MATH_VECTOR4D_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1E277F00)
#define MESHDECIMATOR_MATH_VECTOR4D_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1E277E40)
#define MESHDECIMATOR_MATH_VECTOR4D_OP_MULTIPLY_1_OFFSET UNITYSDK_OFFSET(0x1E277CF0)
#define MESHDECIMATOR_MATH_VECTOR4D_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x1E277CC0)
#define MESHDECIMATOR_MATH_VECTOR4D_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x1E277C90)
#define MESHDECIMATOR_MATH_VECTOR4D_OP_UNARYNEGATION_OFFSET UNITYSDK_OFFSET(0x1E277D50)
#define MESHDECIMATOR_MATH_VECTOR4D_SCALE_1_OFFSET UNITYSDK_OFFSET(0x1E2782C0)
#define MESHDECIMATOR_MATH_VECTOR4D_SCALE_OFFSET UNITYSDK_OFFSET(0xA0F7E0)
#define MESHDECIMATOR_MATH_VECTOR4D_SET_ITEM_OFFSET UNITYSDK_OFFSET(0xA0F700)
#define MESHDECIMATOR_MATH_VECTOR4D_SET_OFFSET UNITYSDK_OFFSET(0xA0F7C0)
#define MESHDECIMATOR_MATH_VECTOR4D_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0xA0FA70)
#define MESHDECIMATOR_MATH_VECTOR4D_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA0FA20)
#define MESHDECIMATOR_MATH_VECTOR4D__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2782F0)
#define MESHDECIMATOR_MATH_VECTOR4D__CTOR_1_OFFSET UNITYSDK_OFFSET(0xA0F7C0)
#define MESHDECIMATOR_MATH_VECTOR4D__CTOR_OFFSET UNITYSDK_OFFSET(0xA0F7A0)

namespace MeshDecimator::Math
{
	inline static constexpr unsigned int Vector4d_TypeDefinitionIndex = 35486;

	struct alignas(8) Vector4d
	{
		static ::MeshDecimator::Math::Vector4d* StaticGet_zero()
		{
			return (::MeshDecimator::Math::Vector4d*)Il2CppClass::FromTypeDefinitionIndex(Vector4d_TypeDefinitionIndex)->GetStaticField(0x8740);
		}
		// static const ::System::Double Epsilon; // 0x0
		::System::Double x; // 0x10
		::System::Double y; // 0x18
		::System::Double z; // 0x20
		::System::Double w; // 0x28

		::System::Void _ctor(::System::Double value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR4D__CTOR_OFFSET))(this, value);
		}

		::System::Void _ctor_1(::System::Double x, ::System::Double y, ::System::Double z, ::System::Double w)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double, ::System::Double, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR4D__CTOR_1_OFFSET))(this, x, y, z, w);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR4D__CCTOR_OFFSET))();
		}

		::System::Double get_Magnitude()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR4D_GET_MAGNITUDE_OFFSET))(this);
		}

		::System::Double get_MagnitudeSqr()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR4D_GET_MAGNITUDESQR_OFFSET))(this);
		}

		::MeshDecimator::Math::Vector4d get_Normalized()
		{
			return ((::MeshDecimator::Math::Vector4d(*)(::PVOID))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR4D_GET_NORMALIZED_OFFSET))(this);
		}

		::System::Double get_Item(::System::Int32 index)
		{
			return ((::System::Double(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR4D_GET_ITEM_OFFSET))(this, index);
		}

		::System::Void set_Item(::System::Int32 index, ::System::Double value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Double))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR4D_SET_ITEM_OFFSET))(this, index, value);
		}

		static ::MeshDecimator::Math::Vector4d op_Addition(::MeshDecimator::Math::Vector4d a, ::MeshDecimator::Math::Vector4d b)
		{
			return ((::MeshDecimator::Math::Vector4d(*)(::MeshDecimator::Math::Vector4d, ::MeshDecimator::Math::Vector4d))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR4D_OP_ADDITION_OFFSET))(a, b);
		}

		static ::MeshDecimator::Math::Vector4d op_Subtraction(::MeshDecimator::Math::Vector4d a, ::MeshDecimator::Math::Vector4d b)
		{
			return ((::MeshDecimator::Math::Vector4d(*)(::MeshDecimator::Math::Vector4d, ::MeshDecimator::Math::Vector4d))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR4D_OP_SUBTRACTION_OFFSET))(a, b);
		}

		static ::MeshDecimator::Math::Vector4d op_Multiply(::MeshDecimator::Math::Vector4d a, ::System::Double d)
		{
			return ((::MeshDecimator::Math::Vector4d(*)(::MeshDecimator::Math::Vector4d, ::System::Double))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR4D_OP_MULTIPLY_OFFSET))(a, d);
		}

		static ::MeshDecimator::Math::Vector4d op_Multiply_1(::System::Double d, ::MeshDecimator::Math::Vector4d a)
		{
			return ((::MeshDecimator::Math::Vector4d(*)(::System::Double, ::MeshDecimator::Math::Vector4d))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR4D_OP_MULTIPLY_1_OFFSET))(d, a);
		}

		static ::MeshDecimator::Math::Vector4d op_Division(::MeshDecimator::Math::Vector4d a, ::System::Double d)
		{
			return ((::MeshDecimator::Math::Vector4d(*)(::MeshDecimator::Math::Vector4d, ::System::Double))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR4D_OP_DIVISION_OFFSET))(a, d);
		}

		static ::MeshDecimator::Math::Vector4d op_UnaryNegation(::MeshDecimator::Math::Vector4d a)
		{
			return ((::MeshDecimator::Math::Vector4d(*)(::MeshDecimator::Math::Vector4d))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR4D_OP_UNARYNEGATION_OFFSET))(a);
		}

		static ::System::Boolean op_Equality(::MeshDecimator::Math::Vector4d lhs, ::MeshDecimator::Math::Vector4d rhs)
		{
			return ((::System::Boolean(*)(::MeshDecimator::Math::Vector4d, ::MeshDecimator::Math::Vector4d))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR4D_OP_EQUALITY_OFFSET))(lhs, rhs);
		}

		static ::System::Boolean op_Inequality(::MeshDecimator::Math::Vector4d lhs, ::MeshDecimator::Math::Vector4d rhs)
		{
			return ((::System::Boolean(*)(::MeshDecimator::Math::Vector4d, ::MeshDecimator::Math::Vector4d))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR4D_OP_INEQUALITY_OFFSET))(lhs, rhs);
		}

		/*
		static ::MeshDecimator::Math::Vector4d op_Implicit(::MeshDecimator::Math::Vector4 v)
		{
			return ((::MeshDecimator::Math::Vector4d(*)(::MeshDecimator::Math::Vector4))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR4D_OP_IMPLICIT_OFFSET))(v);
		}
		*/

		/*
		static ::MeshDecimator::Math::Vector4d op_Implicit_1(::MeshDecimator::Math::Vector4i v)
		{
			return ((::MeshDecimator::Math::Vector4d(*)(::MeshDecimator::Math::Vector4i))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR4D_OP_IMPLICIT_1_OFFSET))(v);
		}
		*/

		::System::Void Set(::System::Double x, ::System::Double y, ::System::Double z, ::System::Double w)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double, ::System::Double, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR4D_SET_OFFSET))(this, x, y, z, w);
		}

		::System::Void Scale(::MeshDecimator::Math::Vector4d& scale)
		{
			return ((::System::Void(*)(::PVOID, ::MeshDecimator::Math::Vector4d&))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR4D_SCALE_OFFSET))(this, scale);
		}

		::System::Void Normalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR4D_NORMALIZE_OFFSET))(this);
		}

		::System::Void Clamp(::System::Double min, ::System::Double max)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR4D_CLAMP_OFFSET))(this, min, max);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR4D_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR4D_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::MeshDecimator::Math::Vector4d other)
		{
			return ((::System::Boolean(*)(::PVOID, ::MeshDecimator::Math::Vector4d))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR4D_EQUALS_1_OFFSET))(this, other);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR4D_TOSTRING_OFFSET))(this);
		}

		::System::String* ToString_1(::System::String* format)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR4D_TOSTRING_1_OFFSET))(this, format);
		}

		static ::System::Double Dot(::MeshDecimator::Math::Vector4d& lhs, ::MeshDecimator::Math::Vector4d& rhs)
		{
			return ((::System::Double(*)(::MeshDecimator::Math::Vector4d&, ::MeshDecimator::Math::Vector4d&))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR4D_DOT_OFFSET))(lhs, rhs);
		}

		static ::System::Void Lerp(::MeshDecimator::Math::Vector4d& a, ::MeshDecimator::Math::Vector4d& b, ::System::Double t, ::MeshDecimator::Math::Vector4d& result)
		{
			return ((::System::Void(*)(::MeshDecimator::Math::Vector4d&, ::MeshDecimator::Math::Vector4d&, ::System::Double, ::MeshDecimator::Math::Vector4d&))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR4D_LERP_OFFSET))(a, b, t, result);
		}

		static ::System::Void Scale_1(::MeshDecimator::Math::Vector4d& a, ::MeshDecimator::Math::Vector4d& b, ::MeshDecimator::Math::Vector4d& result)
		{
			return ((::System::Void(*)(::MeshDecimator::Math::Vector4d&, ::MeshDecimator::Math::Vector4d&, ::MeshDecimator::Math::Vector4d&))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR4D_SCALE_1_OFFSET))(a, b, result);
		}

		static ::System::Void Normalize_1(::MeshDecimator::Math::Vector4d& value, ::MeshDecimator::Math::Vector4d& result)
		{
			return ((::System::Void(*)(::MeshDecimator::Math::Vector4d&, ::MeshDecimator::Math::Vector4d&))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR4D_NORMALIZE_1_OFFSET))(value, result);
		}
	};
}
