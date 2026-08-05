#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define MESHDECIMATOR_MATH_VECTOR4I_CLAMP_OFFSET UNITYSDK_OFFSET(0xA0FCE0)
#define MESHDECIMATOR_MATH_VECTOR4I_EQUALS_1_OFFSET UNITYSDK_OFFSET(0xA0FDD0)
#define MESHDECIMATOR_MATH_VECTOR4I_EQUALS_OFFSET UNITYSDK_OFFSET(0xA0FD60)
#define MESHDECIMATOR_MATH_VECTOR4I_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA0FD40)
#define MESHDECIMATOR_MATH_VECTOR4I_GET_ITEM_OFFSET UNITYSDK_OFFSET(0xA0FB70)
#define MESHDECIMATOR_MATH_VECTOR4I_GET_MAGNITUDESQR_OFFSET UNITYSDK_OFFSET(0xA0FB30)
#define MESHDECIMATOR_MATH_VECTOR4I_GET_MAGNITUDE_OFFSET UNITYSDK_OFFSET(0xA0FAC0)
#define MESHDECIMATOR_MATH_VECTOR4I_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x1E278510)
#define MESHDECIMATOR_MATH_VECTOR4I_OP_DIVISION_OFFSET UNITYSDK_OFFSET(0x1E2785D0)
#define MESHDECIMATOR_MATH_VECTOR4I_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1E278640)
#define MESHDECIMATOR_MATH_VECTOR4I_OP_EXPLICIT_1_OFFSET UNITYSDK_OFFSET(0x1E2786B0)
#define MESHDECIMATOR_MATH_VECTOR4I_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x1E2786A0)
#define MESHDECIMATOR_MATH_VECTOR4I_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1E278670)
#define MESHDECIMATOR_MATH_VECTOR4I_OP_MULTIPLY_1_OFFSET UNITYSDK_OFFSET(0x1E278590)
#define MESHDECIMATOR_MATH_VECTOR4I_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x1E278550)
#define MESHDECIMATOR_MATH_VECTOR4I_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x1E278530)
#define MESHDECIMATOR_MATH_VECTOR4I_OP_UNARYNEGATION_OFFSET UNITYSDK_OFFSET(0x1E278620)
#define MESHDECIMATOR_MATH_VECTOR4I_SCALE_1_OFFSET UNITYSDK_OFFSET(0x1E2788E0)
#define MESHDECIMATOR_MATH_VECTOR4I_SCALE_OFFSET UNITYSDK_OFFSET(0xA0FCB0)
#define MESHDECIMATOR_MATH_VECTOR4I_SET_ITEM_OFFSET UNITYSDK_OFFSET(0xA0FC00)
#define MESHDECIMATOR_MATH_VECTOR4I_SET_OFFSET UNITYSDK_OFFSET(0x6245C0)
#define MESHDECIMATOR_MATH_VECTOR4I_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0xA0FE50)
#define MESHDECIMATOR_MATH_VECTOR4I_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA0FE00)
#define MESHDECIMATOR_MATH_VECTOR4I__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E278910)
#define MESHDECIMATOR_MATH_VECTOR4I__CTOR_1_OFFSET UNITYSDK_OFFSET(0x6245C0)
#define MESHDECIMATOR_MATH_VECTOR4I__CTOR_OFFSET UNITYSDK_OFFSET(0xA0FCA0)

namespace MeshDecimator::Math
{
	inline static constexpr unsigned int Vector4i_TypeDefinitionIndex = 35487;

	struct alignas(4) Vector4i
	{
		static ::MeshDecimator::Math::Vector4i* StaticGet_zero()
		{
			return (::MeshDecimator::Math::Vector4i*)Il2CppClass::FromTypeDefinitionIndex(Vector4i_TypeDefinitionIndex)->GetStaticField(0x8760);
		}
		::System::Int32 x; // 0x10
		::System::Int32 y; // 0x14
		::System::Int32 z; // 0x18
		::System::Int32 w; // 0x1C

		::System::Void _ctor(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR4I__CTOR_OFFSET))(this, value);
		}

		::System::Void _ctor_1(::System::Int32 x, ::System::Int32 y, ::System::Int32 z, ::System::Int32 w)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR4I__CTOR_1_OFFSET))(this, x, y, z, w);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR4I__CCTOR_OFFSET))();
		}

		::System::Int32 get_Magnitude()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR4I_GET_MAGNITUDE_OFFSET))(this);
		}

		::System::Int32 get_MagnitudeSqr()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR4I_GET_MAGNITUDESQR_OFFSET))(this);
		}

		::System::Int32 get_Item(::System::Int32 index)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR4I_GET_ITEM_OFFSET))(this, index);
		}

		::System::Void set_Item(::System::Int32 index, ::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR4I_SET_ITEM_OFFSET))(this, index, value);
		}

		static ::MeshDecimator::Math::Vector4i op_Addition(::MeshDecimator::Math::Vector4i a, ::MeshDecimator::Math::Vector4i b)
		{
			return ((::MeshDecimator::Math::Vector4i(*)(::MeshDecimator::Math::Vector4i, ::MeshDecimator::Math::Vector4i))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR4I_OP_ADDITION_OFFSET))(a, b);
		}

		static ::MeshDecimator::Math::Vector4i op_Subtraction(::MeshDecimator::Math::Vector4i a, ::MeshDecimator::Math::Vector4i b)
		{
			return ((::MeshDecimator::Math::Vector4i(*)(::MeshDecimator::Math::Vector4i, ::MeshDecimator::Math::Vector4i))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR4I_OP_SUBTRACTION_OFFSET))(a, b);
		}

		static ::MeshDecimator::Math::Vector4i op_Multiply(::MeshDecimator::Math::Vector4i a, ::System::Int32 d)
		{
			return ((::MeshDecimator::Math::Vector4i(*)(::MeshDecimator::Math::Vector4i, ::System::Int32))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR4I_OP_MULTIPLY_OFFSET))(a, d);
		}

		static ::MeshDecimator::Math::Vector4i op_Multiply_1(::System::Int32 d, ::MeshDecimator::Math::Vector4i a)
		{
			return ((::MeshDecimator::Math::Vector4i(*)(::System::Int32, ::MeshDecimator::Math::Vector4i))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR4I_OP_MULTIPLY_1_OFFSET))(d, a);
		}

		static ::MeshDecimator::Math::Vector4i op_Division(::MeshDecimator::Math::Vector4i a, ::System::Int32 d)
		{
			return ((::MeshDecimator::Math::Vector4i(*)(::MeshDecimator::Math::Vector4i, ::System::Int32))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR4I_OP_DIVISION_OFFSET))(a, d);
		}

		static ::MeshDecimator::Math::Vector4i op_UnaryNegation(::MeshDecimator::Math::Vector4i a)
		{
			return ((::MeshDecimator::Math::Vector4i(*)(::MeshDecimator::Math::Vector4i))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR4I_OP_UNARYNEGATION_OFFSET))(a);
		}

		static ::System::Boolean op_Equality(::MeshDecimator::Math::Vector4i lhs, ::MeshDecimator::Math::Vector4i rhs)
		{
			return ((::System::Boolean(*)(::MeshDecimator::Math::Vector4i, ::MeshDecimator::Math::Vector4i))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR4I_OP_EQUALITY_OFFSET))(lhs, rhs);
		}

		static ::System::Boolean op_Inequality(::MeshDecimator::Math::Vector4i lhs, ::MeshDecimator::Math::Vector4i rhs)
		{
			return ((::System::Boolean(*)(::MeshDecimator::Math::Vector4i, ::MeshDecimator::Math::Vector4i))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR4I_OP_INEQUALITY_OFFSET))(lhs, rhs);
		}

		/*
		static ::MeshDecimator::Math::Vector4i op_Explicit(::MeshDecimator::Math::Vector4 v)
		{
			return ((::MeshDecimator::Math::Vector4i(*)(::MeshDecimator::Math::Vector4))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR4I_OP_EXPLICIT_OFFSET))(v);
		}
		*/

		/*
		static ::MeshDecimator::Math::Vector4i op_Explicit_1(::MeshDecimator::Math::Vector4d v)
		{
			return ((::MeshDecimator::Math::Vector4i(*)(::MeshDecimator::Math::Vector4d))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR4I_OP_EXPLICIT_1_OFFSET))(v);
		}
		*/

		::System::Void Set(::System::Int32 x, ::System::Int32 y, ::System::Int32 z, ::System::Int32 w)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR4I_SET_OFFSET))(this, x, y, z, w);
		}

		::System::Void Scale(::MeshDecimator::Math::Vector4i& scale)
		{
			return ((::System::Void(*)(::PVOID, ::MeshDecimator::Math::Vector4i&))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR4I_SCALE_OFFSET))(this, scale);
		}

		::System::Void Clamp(::System::Int32 min, ::System::Int32 max)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR4I_CLAMP_OFFSET))(this, min, max);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR4I_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR4I_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::MeshDecimator::Math::Vector4i other)
		{
			return ((::System::Boolean(*)(::PVOID, ::MeshDecimator::Math::Vector4i))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR4I_EQUALS_1_OFFSET))(this, other);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR4I_TOSTRING_OFFSET))(this);
		}

		::System::String* ToString_1(::System::String* format)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR4I_TOSTRING_1_OFFSET))(this, format);
		}

		static ::System::Void Scale_1(::MeshDecimator::Math::Vector4i& a, ::MeshDecimator::Math::Vector4i& b, ::MeshDecimator::Math::Vector4i& result)
		{
			return ((::System::Void(*)(::MeshDecimator::Math::Vector4i&, ::MeshDecimator::Math::Vector4i&, ::MeshDecimator::Math::Vector4i&))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR4I_SCALE_1_OFFSET))(a, b, result);
		}
	};
}
