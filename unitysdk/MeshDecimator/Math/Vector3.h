#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define MESHDECIMATOR_MATH_VECTOR3_ANGLE_OFFSET UNITYSDK_OFFSET(0x1CE91640)
#define MESHDECIMATOR_MATH_VECTOR3_CLAMP_OFFSET UNITYSDK_OFFSET(0x9C4100)
#define MESHDECIMATOR_MATH_VECTOR3_CROSS_OFFSET UNITYSDK_OFFSET(0x1CE94420)
#define MESHDECIMATOR_MATH_VECTOR3_DOT_OFFSET UNITYSDK_OFFSET(0x1CE943F0)
#define MESHDECIMATOR_MATH_VECTOR3_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x9C4230)
#define MESHDECIMATOR_MATH_VECTOR3_EQUALS_OFFSET UNITYSDK_OFFSET(0x9C41B0)
#define MESHDECIMATOR_MATH_VECTOR3_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9C4150)
#define MESHDECIMATOR_MATH_VECTOR3_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x9C3F30)
#define MESHDECIMATOR_MATH_VECTOR3_GET_MAGNITUDESQR_OFFSET UNITYSDK_OFFSET(0x9C3EF0)
#define MESHDECIMATOR_MATH_VECTOR3_GET_MAGNITUDE_OFFSET UNITYSDK_OFFSET(0x9C3EC0)
#define MESHDECIMATOR_MATH_VECTOR3_GET_NORMALIZED_OFFSET UNITYSDK_OFFSET(0x9C3F10)
#define MESHDECIMATOR_MATH_VECTOR3_LERP_OFFSET UNITYSDK_OFFSET(0x1CE94470)
#define MESHDECIMATOR_MATH_VECTOR3_NORMALIZE_1_OFFSET UNITYSDK_OFFSET(0x1CE93DA0)
#define MESHDECIMATOR_MATH_VECTOR3_NORMALIZE_OFFSET UNITYSDK_OFFSET(0x9C4080)
#define MESHDECIMATOR_MATH_VECTOR3_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x1CE89B50)
#define MESHDECIMATOR_MATH_VECTOR3_OP_DIVISION_OFFSET UNITYSDK_OFFSET(0x1CE93FE0)
#define MESHDECIMATOR_MATH_VECTOR3_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1CE8A170)
#define MESHDECIMATOR_MATH_VECTOR3_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x1CE94120)
#define MESHDECIMATOR_MATH_VECTOR3_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x1CE94160)
#define MESHDECIMATOR_MATH_VECTOR3_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1CE94140)
#define MESHDECIMATOR_MATH_VECTOR3_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1CE94030)
#define MESHDECIMATOR_MATH_VECTOR3_OP_MULTIPLY_1_OFFSET UNITYSDK_OFFSET(0x1CE93FC0)
#define MESHDECIMATOR_MATH_VECTOR3_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x1CE89B80)
#define MESHDECIMATOR_MATH_VECTOR3_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x1CE915E0)
#define MESHDECIMATOR_MATH_VECTOR3_OP_UNARYNEGATION_OFFSET UNITYSDK_OFFSET(0x1CE94000)
#define MESHDECIMATOR_MATH_VECTOR3_ORTHONORMALIZE_OFFSET UNITYSDK_OFFSET(0x1CE944D0)
#define MESHDECIMATOR_MATH_VECTOR3_SCALE_1_OFFSET UNITYSDK_OFFSET(0x1CE944B0)
#define MESHDECIMATOR_MATH_VECTOR3_SCALE_OFFSET UNITYSDK_OFFSET(0x9C4060)
#define MESHDECIMATOR_MATH_VECTOR3_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x9C3FB0)
#define MESHDECIMATOR_MATH_VECTOR3_SET_OFFSET UNITYSDK_OFFSET(0x5D9040)
#define MESHDECIMATOR_MATH_VECTOR3_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x9C4290)
#define MESHDECIMATOR_MATH_VECTOR3_TOSTRING_OFFSET UNITYSDK_OFFSET(0x9C4260)
#define MESHDECIMATOR_MATH_VECTOR3__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CE94650)
#define MESHDECIMATOR_MATH_VECTOR3__CTOR_1_OFFSET UNITYSDK_OFFSET(0x5D9040)
#define MESHDECIMATOR_MATH_VECTOR3__CTOR_2_OFFSET UNITYSDK_OFFSET(0x9C4040)
#define MESHDECIMATOR_MATH_VECTOR3__CTOR_OFFSET UNITYSDK_OFFSET(0x643D60)

namespace MeshDecimator::Math
{
	inline static constexpr unsigned int Vector3_TypeDefinitionIndex = 34823;

	struct alignas(4) Vector3
	{
		static ::MeshDecimator::Math::Vector3* StaticGet_zero()
		{
			return (::MeshDecimator::Math::Vector3*)Il2CppClass::FromTypeDefinitionIndex(Vector3_TypeDefinitionIndex)->GetStaticField(0x8610);
		}
		// static const ::System::Single Epsilon; // 0x0
		::System::Single x; // 0x10
		::System::Single y; // 0x14
		::System::Single z; // 0x18

		::System::Void _ctor(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR3__CTOR_OFFSET))(this, value);
		}

		::System::Void _ctor_1(::System::Single x, ::System::Single y, ::System::Single z)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR3__CTOR_1_OFFSET))(this, x, y, z);
		}

		/*
		::System::Void _ctor_2(::MeshDecimator::Math::Vector3d vector)
		{
			return ((::System::Void(*)(::PVOID, ::MeshDecimator::Math::Vector3d))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR3__CTOR_2_OFFSET))(this, vector);
		}
		*/

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR3__CCTOR_OFFSET))();
		}

		::System::Single get_Magnitude()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR3_GET_MAGNITUDE_OFFSET))(this);
		}

		::System::Single get_MagnitudeSqr()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR3_GET_MAGNITUDESQR_OFFSET))(this);
		}

		::MeshDecimator::Math::Vector3 get_Normalized()
		{
			return ((::MeshDecimator::Math::Vector3(*)(::PVOID))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR3_GET_NORMALIZED_OFFSET))(this);
		}

		::System::Single get_Item(::System::Int32 index)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR3_GET_ITEM_OFFSET))(this, index);
		}

		::System::Void set_Item(::System::Int32 index, ::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR3_SET_ITEM_OFFSET))(this, index, value);
		}

		static ::MeshDecimator::Math::Vector3 op_Addition(::MeshDecimator::Math::Vector3 a, ::MeshDecimator::Math::Vector3 b)
		{
			return ((::MeshDecimator::Math::Vector3(*)(::MeshDecimator::Math::Vector3, ::MeshDecimator::Math::Vector3))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR3_OP_ADDITION_OFFSET))(a, b);
		}

		static ::MeshDecimator::Math::Vector3 op_Subtraction(::MeshDecimator::Math::Vector3 a, ::MeshDecimator::Math::Vector3 b)
		{
			return ((::MeshDecimator::Math::Vector3(*)(::MeshDecimator::Math::Vector3, ::MeshDecimator::Math::Vector3))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR3_OP_SUBTRACTION_OFFSET))(a, b);
		}

		static ::MeshDecimator::Math::Vector3 op_Multiply(::MeshDecimator::Math::Vector3 a, ::System::Single d)
		{
			return ((::MeshDecimator::Math::Vector3(*)(::MeshDecimator::Math::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR3_OP_MULTIPLY_OFFSET))(a, d);
		}

		static ::MeshDecimator::Math::Vector3 op_Multiply_1(::System::Single d, ::MeshDecimator::Math::Vector3 a)
		{
			return ((::MeshDecimator::Math::Vector3(*)(::System::Single, ::MeshDecimator::Math::Vector3))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR3_OP_MULTIPLY_1_OFFSET))(d, a);
		}

		static ::MeshDecimator::Math::Vector3 op_Division(::MeshDecimator::Math::Vector3 a, ::System::Single d)
		{
			return ((::MeshDecimator::Math::Vector3(*)(::MeshDecimator::Math::Vector3, ::System::Single))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR3_OP_DIVISION_OFFSET))(a, d);
		}

		static ::MeshDecimator::Math::Vector3 op_UnaryNegation(::MeshDecimator::Math::Vector3 a)
		{
			return ((::MeshDecimator::Math::Vector3(*)(::MeshDecimator::Math::Vector3))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR3_OP_UNARYNEGATION_OFFSET))(a);
		}

		static ::System::Boolean op_Equality(::MeshDecimator::Math::Vector3 lhs, ::MeshDecimator::Math::Vector3 rhs)
		{
			return ((::System::Boolean(*)(::MeshDecimator::Math::Vector3, ::MeshDecimator::Math::Vector3))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR3_OP_EQUALITY_OFFSET))(lhs, rhs);
		}

		static ::System::Boolean op_Inequality(::MeshDecimator::Math::Vector3 lhs, ::MeshDecimator::Math::Vector3 rhs)
		{
			return ((::System::Boolean(*)(::MeshDecimator::Math::Vector3, ::MeshDecimator::Math::Vector3))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR3_OP_INEQUALITY_OFFSET))(lhs, rhs);
		}

		/*
		static ::MeshDecimator::Math::Vector3 op_Explicit(::MeshDecimator::Math::Vector3d v)
		{
			return ((::MeshDecimator::Math::Vector3(*)(::MeshDecimator::Math::Vector3d))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR3_OP_EXPLICIT_OFFSET))(v);
		}
		*/

		/*
		static ::MeshDecimator::Math::Vector3 op_Implicit(::MeshDecimator::Math::Vector3i v)
		{
			return ((::MeshDecimator::Math::Vector3(*)(::MeshDecimator::Math::Vector3i))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR3_OP_IMPLICIT_OFFSET))(v);
		}
		*/

		/*
		static ::MeshDecimator::Math::Vector3 op_Implicit_1(::UnityEngine::Vector3 v)
		{
			return ((::MeshDecimator::Math::Vector3(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR3_OP_IMPLICIT_1_OFFSET))(v);
		}
		*/

		::System::Void Set(::System::Single x, ::System::Single y, ::System::Single z)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR3_SET_OFFSET))(this, x, y, z);
		}

		::System::Void Scale(::MeshDecimator::Math::Vector3& scale)
		{
			return ((::System::Void(*)(::PVOID, ::MeshDecimator::Math::Vector3&))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR3_SCALE_OFFSET))(this, scale);
		}

		::System::Void Normalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR3_NORMALIZE_OFFSET))(this);
		}

		::System::Void Clamp(::System::Single min, ::System::Single max)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR3_CLAMP_OFFSET))(this, min, max);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR3_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR3_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::MeshDecimator::Math::Vector3 other)
		{
			return ((::System::Boolean(*)(::PVOID, ::MeshDecimator::Math::Vector3))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR3_EQUALS_1_OFFSET))(this, other);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR3_TOSTRING_OFFSET))(this);
		}

		::System::String* ToString_1(::System::String* format)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR3_TOSTRING_1_OFFSET))(this, format);
		}

		static ::System::Single Dot(::MeshDecimator::Math::Vector3& lhs, ::MeshDecimator::Math::Vector3& rhs)
		{
			return ((::System::Single(*)(::MeshDecimator::Math::Vector3&, ::MeshDecimator::Math::Vector3&))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR3_DOT_OFFSET))(lhs, rhs);
		}

		static ::System::Void Cross(::MeshDecimator::Math::Vector3& lhs, ::MeshDecimator::Math::Vector3& rhs, ::MeshDecimator::Math::Vector3& result)
		{
			return ((::System::Void(*)(::MeshDecimator::Math::Vector3&, ::MeshDecimator::Math::Vector3&, ::MeshDecimator::Math::Vector3&))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR3_CROSS_OFFSET))(lhs, rhs, result);
		}

		static ::System::Single Angle(::MeshDecimator::Math::Vector3& from, ::MeshDecimator::Math::Vector3& to)
		{
			return ((::System::Single(*)(::MeshDecimator::Math::Vector3&, ::MeshDecimator::Math::Vector3&))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR3_ANGLE_OFFSET))(from, to);
		}

		static ::System::Void Lerp(::MeshDecimator::Math::Vector3& a, ::MeshDecimator::Math::Vector3& b, ::System::Single t, ::MeshDecimator::Math::Vector3& result)
		{
			return ((::System::Void(*)(::MeshDecimator::Math::Vector3&, ::MeshDecimator::Math::Vector3&, ::System::Single, ::MeshDecimator::Math::Vector3&))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR3_LERP_OFFSET))(a, b, t, result);
		}

		static ::System::Void Scale_1(::MeshDecimator::Math::Vector3& a, ::MeshDecimator::Math::Vector3& b, ::MeshDecimator::Math::Vector3& result)
		{
			return ((::System::Void(*)(::MeshDecimator::Math::Vector3&, ::MeshDecimator::Math::Vector3&, ::MeshDecimator::Math::Vector3&))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR3_SCALE_1_OFFSET))(a, b, result);
		}

		static ::System::Void Normalize_1(::MeshDecimator::Math::Vector3& value, ::MeshDecimator::Math::Vector3& result)
		{
			return ((::System::Void(*)(::MeshDecimator::Math::Vector3&, ::MeshDecimator::Math::Vector3&))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR3_NORMALIZE_1_OFFSET))(value, result);
		}

		static ::System::Void OrthoNormalize(::MeshDecimator::Math::Vector3& normal, ::MeshDecimator::Math::Vector3& tangent)
		{
			return ((::System::Void(*)(::MeshDecimator::Math::Vector3&, ::MeshDecimator::Math::Vector3&))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR3_ORTHONORMALIZE_OFFSET))(normal, tangent);
		}
	};
}
