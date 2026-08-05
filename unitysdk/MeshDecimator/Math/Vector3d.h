#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define MESHDECIMATOR_MATH_VECTOR3D_ANGLE_OFFSET UNITYSDK_OFFSET(0x1E273AE0)
#define MESHDECIMATOR_MATH_VECTOR3D_CLAMP_OFFSET UNITYSDK_OFFSET(0xA0ECC0)
#define MESHDECIMATOR_MATH_VECTOR3D_CROSS_OFFSET UNITYSDK_OFFSET(0x1E269CF0)
#define MESHDECIMATOR_MATH_VECTOR3D_DOT_OFFSET UNITYSDK_OFFSET(0x1E269CC0)
#define MESHDECIMATOR_MATH_VECTOR3D_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xA0EDE0)
#define MESHDECIMATOR_MATH_VECTOR3D_EQUALS_OFFSET UNITYSDK_OFFSET(0xA0ED60)
#define MESHDECIMATOR_MATH_VECTOR3D_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA0ED20)
#define MESHDECIMATOR_MATH_VECTOR3D_GET_ITEM_OFFSET UNITYSDK_OFFSET(0xA0EAC0)
#define MESHDECIMATOR_MATH_VECTOR3D_GET_MAGNITUDESQR_OFFSET UNITYSDK_OFFSET(0xA0EA80)
#define MESHDECIMATOR_MATH_VECTOR3D_GET_MAGNITUDE_OFFSET UNITYSDK_OFFSET(0xA0EA50)
#define MESHDECIMATOR_MATH_VECTOR3D_GET_NORMALIZED_OFFSET UNITYSDK_OFFSET(0xA0EAA0)
#define MESHDECIMATOR_MATH_VECTOR3D_LERP_OFFSET UNITYSDK_OFFSET(0x1E276B90)
#define MESHDECIMATOR_MATH_VECTOR3D_NORMALIZE_1_OFFSET UNITYSDK_OFFSET(0x1E2764E0)
#define MESHDECIMATOR_MATH_VECTOR3D_NORMALIZE_OFFSET UNITYSDK_OFFSET(0xA0EC40)
#define MESHDECIMATOR_MATH_VECTOR3D_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x1E269500)
#define MESHDECIMATOR_MATH_VECTOR3D_OP_DIVISION_OFFSET UNITYSDK_OFFSET(0x1E276710)
#define MESHDECIMATOR_MATH_VECTOR3D_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1E276760)
#define MESHDECIMATOR_MATH_VECTOR3D_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x1E276980)
#define MESHDECIMATOR_MATH_VECTOR3D_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x1E276960)
#define MESHDECIMATOR_MATH_VECTOR3D_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1E276940)
#define MESHDECIMATOR_MATH_VECTOR3D_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1E276850)
#define MESHDECIMATOR_MATH_VECTOR3D_OP_MULTIPLY_1_OFFSET UNITYSDK_OFFSET(0x1E2766F0)
#define MESHDECIMATOR_MATH_VECTOR3D_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x1E269530)
#define MESHDECIMATOR_MATH_VECTOR3D_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x1E269C10)
#define MESHDECIMATOR_MATH_VECTOR3D_OP_UNARYNEGATION_OFFSET UNITYSDK_OFFSET(0x1E276740)
#define MESHDECIMATOR_MATH_VECTOR3D_SCALE_1_OFFSET UNITYSDK_OFFSET(0x1E276BD0)
#define MESHDECIMATOR_MATH_VECTOR3D_SCALE_OFFSET UNITYSDK_OFFSET(0xA0EC10)
#define MESHDECIMATOR_MATH_VECTOR3D_SET_ITEM_OFFSET UNITYSDK_OFFSET(0xA0EB40)
#define MESHDECIMATOR_MATH_VECTOR3D_SET_OFFSET UNITYSDK_OFFSET(0xA0EBE0)
#define MESHDECIMATOR_MATH_VECTOR3D_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0xA0EE50)
#define MESHDECIMATOR_MATH_VECTOR3D_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA0EE20)
#define MESHDECIMATOR_MATH_VECTOR3D__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E276C00)
#define MESHDECIMATOR_MATH_VECTOR3D__CTOR_1_OFFSET UNITYSDK_OFFSET(0xA0EBE0)
#define MESHDECIMATOR_MATH_VECTOR3D__CTOR_2_OFFSET UNITYSDK_OFFSET(0xA0EBF0)
#define MESHDECIMATOR_MATH_VECTOR3D__CTOR_OFFSET UNITYSDK_OFFSET(0xA0EBD0)

namespace MeshDecimator::Math
{
	inline static constexpr unsigned int Vector3d_TypeDefinitionIndex = 35483;

	struct alignas(8) Vector3d
	{
		static ::MeshDecimator::Math::Vector3d* StaticGet_zero()
		{
			return (::MeshDecimator::Math::Vector3d*)Il2CppClass::FromTypeDefinitionIndex(Vector3d_TypeDefinitionIndex)->GetStaticField(0x8700);
		}
		// static const ::System::Double Epsilon; // 0x0
		::System::Double x; // 0x10
		::System::Double y; // 0x18
		::System::Double z; // 0x20

		::System::Void _ctor(::System::Double value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR3D__CTOR_OFFSET))(this, value);
		}

		::System::Void _ctor_1(::System::Double x, ::System::Double y, ::System::Double z)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR3D__CTOR_1_OFFSET))(this, x, y, z);
		}

		/*
		::System::Void _ctor_2(::MeshDecimator::Math::Vector3 vector)
		{
			return ((::System::Void(*)(::PVOID, ::MeshDecimator::Math::Vector3))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR3D__CTOR_2_OFFSET))(this, vector);
		}
		*/

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR3D__CCTOR_OFFSET))();
		}

		::System::Double get_Magnitude()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR3D_GET_MAGNITUDE_OFFSET))(this);
		}

		::System::Double get_MagnitudeSqr()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR3D_GET_MAGNITUDESQR_OFFSET))(this);
		}

		::MeshDecimator::Math::Vector3d get_Normalized()
		{
			return ((::MeshDecimator::Math::Vector3d(*)(::PVOID))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR3D_GET_NORMALIZED_OFFSET))(this);
		}

		::System::Double get_Item(::System::Int32 index)
		{
			return ((::System::Double(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR3D_GET_ITEM_OFFSET))(this, index);
		}

		::System::Void set_Item(::System::Int32 index, ::System::Double value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Double))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR3D_SET_ITEM_OFFSET))(this, index, value);
		}

		static ::MeshDecimator::Math::Vector3d op_Addition(::MeshDecimator::Math::Vector3d a, ::MeshDecimator::Math::Vector3d b)
		{
			return ((::MeshDecimator::Math::Vector3d(*)(::MeshDecimator::Math::Vector3d, ::MeshDecimator::Math::Vector3d))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR3D_OP_ADDITION_OFFSET))(a, b);
		}

		static ::MeshDecimator::Math::Vector3d op_Subtraction(::MeshDecimator::Math::Vector3d a, ::MeshDecimator::Math::Vector3d b)
		{
			return ((::MeshDecimator::Math::Vector3d(*)(::MeshDecimator::Math::Vector3d, ::MeshDecimator::Math::Vector3d))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR3D_OP_SUBTRACTION_OFFSET))(a, b);
		}

		static ::MeshDecimator::Math::Vector3d op_Multiply(::MeshDecimator::Math::Vector3d a, ::System::Double d)
		{
			return ((::MeshDecimator::Math::Vector3d(*)(::MeshDecimator::Math::Vector3d, ::System::Double))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR3D_OP_MULTIPLY_OFFSET))(a, d);
		}

		static ::MeshDecimator::Math::Vector3d op_Multiply_1(::System::Double d, ::MeshDecimator::Math::Vector3d a)
		{
			return ((::MeshDecimator::Math::Vector3d(*)(::System::Double, ::MeshDecimator::Math::Vector3d))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR3D_OP_MULTIPLY_1_OFFSET))(d, a);
		}

		static ::MeshDecimator::Math::Vector3d op_Division(::MeshDecimator::Math::Vector3d a, ::System::Double d)
		{
			return ((::MeshDecimator::Math::Vector3d(*)(::MeshDecimator::Math::Vector3d, ::System::Double))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR3D_OP_DIVISION_OFFSET))(a, d);
		}

		static ::MeshDecimator::Math::Vector3d op_UnaryNegation(::MeshDecimator::Math::Vector3d a)
		{
			return ((::MeshDecimator::Math::Vector3d(*)(::MeshDecimator::Math::Vector3d))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR3D_OP_UNARYNEGATION_OFFSET))(a);
		}

		static ::System::Boolean op_Equality(::MeshDecimator::Math::Vector3d lhs, ::MeshDecimator::Math::Vector3d rhs)
		{
			return ((::System::Boolean(*)(::MeshDecimator::Math::Vector3d, ::MeshDecimator::Math::Vector3d))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR3D_OP_EQUALITY_OFFSET))(lhs, rhs);
		}

		static ::System::Boolean op_Inequality(::MeshDecimator::Math::Vector3d lhs, ::MeshDecimator::Math::Vector3d rhs)
		{
			return ((::System::Boolean(*)(::MeshDecimator::Math::Vector3d, ::MeshDecimator::Math::Vector3d))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR3D_OP_INEQUALITY_OFFSET))(lhs, rhs);
		}

		/*
		static ::MeshDecimator::Math::Vector3d op_Implicit(::MeshDecimator::Math::Vector3 v)
		{
			return ((::MeshDecimator::Math::Vector3d(*)(::MeshDecimator::Math::Vector3))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR3D_OP_IMPLICIT_OFFSET))(v);
		}
		*/

		/*
		static ::MeshDecimator::Math::Vector3d op_Implicit_1(::MeshDecimator::Math::Vector3i v)
		{
			return ((::MeshDecimator::Math::Vector3d(*)(::MeshDecimator::Math::Vector3i))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR3D_OP_IMPLICIT_1_OFFSET))(v);
		}
		*/

		/*
		static ::MeshDecimator::Math::Vector3d op_Explicit(::UnityEngine::Vector3 v)
		{
			return ((::MeshDecimator::Math::Vector3d(*)(::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR3D_OP_EXPLICIT_OFFSET))(v);
		}
		*/

		::System::Void Set(::System::Double x, ::System::Double y, ::System::Double z)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR3D_SET_OFFSET))(this, x, y, z);
		}

		::System::Void Scale(::MeshDecimator::Math::Vector3d& scale)
		{
			return ((::System::Void(*)(::PVOID, ::MeshDecimator::Math::Vector3d&))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR3D_SCALE_OFFSET))(this, scale);
		}

		::System::Void Normalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR3D_NORMALIZE_OFFSET))(this);
		}

		::System::Void Clamp(::System::Double min, ::System::Double max)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double, ::System::Double))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR3D_CLAMP_OFFSET))(this, min, max);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR3D_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR3D_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::MeshDecimator::Math::Vector3d other)
		{
			return ((::System::Boolean(*)(::PVOID, ::MeshDecimator::Math::Vector3d))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR3D_EQUALS_1_OFFSET))(this, other);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR3D_TOSTRING_OFFSET))(this);
		}

		::System::String* ToString_1(::System::String* format)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR3D_TOSTRING_1_OFFSET))(this, format);
		}

		static ::System::Double Dot(::MeshDecimator::Math::Vector3d& lhs, ::MeshDecimator::Math::Vector3d& rhs)
		{
			return ((::System::Double(*)(::MeshDecimator::Math::Vector3d&, ::MeshDecimator::Math::Vector3d&))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR3D_DOT_OFFSET))(lhs, rhs);
		}

		static ::System::Void Cross(::MeshDecimator::Math::Vector3d& lhs, ::MeshDecimator::Math::Vector3d& rhs, ::MeshDecimator::Math::Vector3d& result)
		{
			return ((::System::Void(*)(::MeshDecimator::Math::Vector3d&, ::MeshDecimator::Math::Vector3d&, ::MeshDecimator::Math::Vector3d&))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR3D_CROSS_OFFSET))(lhs, rhs, result);
		}

		static ::System::Double Angle(::MeshDecimator::Math::Vector3d& from, ::MeshDecimator::Math::Vector3d& to)
		{
			return ((::System::Double(*)(::MeshDecimator::Math::Vector3d&, ::MeshDecimator::Math::Vector3d&))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR3D_ANGLE_OFFSET))(from, to);
		}

		static ::System::Void Lerp(::MeshDecimator::Math::Vector3d& a, ::MeshDecimator::Math::Vector3d& b, ::System::Double t, ::MeshDecimator::Math::Vector3d& result)
		{
			return ((::System::Void(*)(::MeshDecimator::Math::Vector3d&, ::MeshDecimator::Math::Vector3d&, ::System::Double, ::MeshDecimator::Math::Vector3d&))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR3D_LERP_OFFSET))(a, b, t, result);
		}

		static ::System::Void Scale_1(::MeshDecimator::Math::Vector3d& a, ::MeshDecimator::Math::Vector3d& b, ::MeshDecimator::Math::Vector3d& result)
		{
			return ((::System::Void(*)(::MeshDecimator::Math::Vector3d&, ::MeshDecimator::Math::Vector3d&, ::MeshDecimator::Math::Vector3d&))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR3D_SCALE_1_OFFSET))(a, b, result);
		}

		static ::System::Void Normalize_1(::MeshDecimator::Math::Vector3d& value, ::MeshDecimator::Math::Vector3d& result)
		{
			return ((::System::Void(*)(::MeshDecimator::Math::Vector3d&, ::MeshDecimator::Math::Vector3d&))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR3D_NORMALIZE_1_OFFSET))(value, result);
		}
	};
}
