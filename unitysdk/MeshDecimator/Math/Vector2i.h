#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define MESHDECIMATOR_MATH_VECTOR2I_CLAMP_OFFSET UNITYSDK_OFFSET(0xA0E550)
#define MESHDECIMATOR_MATH_VECTOR2I_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x6340C0)
#define MESHDECIMATOR_MATH_VECTOR2I_EQUALS_OFFSET UNITYSDK_OFFSET(0xA0E590)
#define MESHDECIMATOR_MATH_VECTOR2I_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0xA0E580)
#define MESHDECIMATOR_MATH_VECTOR2I_GET_ITEM_OFFSET UNITYSDK_OFFSET(0xA0E430)
#define MESHDECIMATOR_MATH_VECTOR2I_GET_MAGNITUDESQR_OFFSET UNITYSDK_OFFSET(0xA0E420)
#define MESHDECIMATOR_MATH_VECTOR2I_GET_MAGNITUDE_OFFSET UNITYSDK_OFFSET(0xA0E3E0)
#define MESHDECIMATOR_MATH_VECTOR2I_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x1E275750)
#define MESHDECIMATOR_MATH_VECTOR2I_OP_DIVISION_OFFSET UNITYSDK_OFFSET(0x1E2757D0)
#define MESHDECIMATOR_MATH_VECTOR2I_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1E275810)
#define MESHDECIMATOR_MATH_VECTOR2I_OP_EXPLICIT_1_OFFSET UNITYSDK_OFFSET(0x1E275850)
#define MESHDECIMATOR_MATH_VECTOR2I_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x1E275830)
#define MESHDECIMATOR_MATH_VECTOR2I_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1E275820)
#define MESHDECIMATOR_MATH_VECTOR2I_OP_MULTIPLY_1_OFFSET UNITYSDK_OFFSET(0x1E2757B0)
#define MESHDECIMATOR_MATH_VECTOR2I_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x1E275790)
#define MESHDECIMATOR_MATH_VECTOR2I_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x1E275770)
#define MESHDECIMATOR_MATH_VECTOR2I_OP_UNARYNEGATION_OFFSET UNITYSDK_OFFSET(0x1E2757F0)
#define MESHDECIMATOR_MATH_VECTOR2I_SCALE_1_OFFSET UNITYSDK_OFFSET(0x1E2759C0)
#define MESHDECIMATOR_MATH_VECTOR2I_SCALE_OFFSET UNITYSDK_OFFSET(0xA0E530)
#define MESHDECIMATOR_MATH_VECTOR2I_SET_ITEM_OFFSET UNITYSDK_OFFSET(0xA0E4B0)
#define MESHDECIMATOR_MATH_VECTOR2I_SET_OFFSET UNITYSDK_OFFSET(0x312BA0)
#define MESHDECIMATOR_MATH_VECTOR2I_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0xA0E620)
#define MESHDECIMATOR_MATH_VECTOR2I_TOSTRING_OFFSET UNITYSDK_OFFSET(0xA0E5F0)
#define MESHDECIMATOR_MATH_VECTOR2I__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E2759E0)
#define MESHDECIMATOR_MATH_VECTOR2I__CTOR_1_OFFSET UNITYSDK_OFFSET(0x312BA0)
#define MESHDECIMATOR_MATH_VECTOR2I__CTOR_OFFSET UNITYSDK_OFFSET(0x474910)

namespace MeshDecimator::Math
{
	inline static constexpr unsigned int Vector2i_TypeDefinitionIndex = 35481;

	struct alignas(4) Vector2i
	{
		static ::MeshDecimator::Math::Vector2i* StaticGet_zero()
		{
			return (::MeshDecimator::Math::Vector2i*)Il2CppClass::FromTypeDefinitionIndex(Vector2i_TypeDefinitionIndex)->GetStaticField(0x86E0);
		}
		::System::Int32 x; // 0x10
		::System::Int32 y; // 0x14

		::System::Void _ctor(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR2I__CTOR_OFFSET))(this, value);
		}

		::System::Void _ctor_1(::System::Int32 x, ::System::Int32 y)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR2I__CTOR_1_OFFSET))(this, x, y);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR2I__CCTOR_OFFSET))();
		}

		::System::Int32 get_Magnitude()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR2I_GET_MAGNITUDE_OFFSET))(this);
		}

		::System::Int32 get_MagnitudeSqr()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR2I_GET_MAGNITUDESQR_OFFSET))(this);
		}

		::System::Int32 get_Item(::System::Int32 index)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR2I_GET_ITEM_OFFSET))(this, index);
		}

		::System::Void set_Item(::System::Int32 index, ::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR2I_SET_ITEM_OFFSET))(this, index, value);
		}

		static ::MeshDecimator::Math::Vector2i op_Addition(::MeshDecimator::Math::Vector2i a, ::MeshDecimator::Math::Vector2i b)
		{
			return ((::MeshDecimator::Math::Vector2i(*)(::MeshDecimator::Math::Vector2i, ::MeshDecimator::Math::Vector2i))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR2I_OP_ADDITION_OFFSET))(a, b);
		}

		static ::MeshDecimator::Math::Vector2i op_Subtraction(::MeshDecimator::Math::Vector2i a, ::MeshDecimator::Math::Vector2i b)
		{
			return ((::MeshDecimator::Math::Vector2i(*)(::MeshDecimator::Math::Vector2i, ::MeshDecimator::Math::Vector2i))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR2I_OP_SUBTRACTION_OFFSET))(a, b);
		}

		static ::MeshDecimator::Math::Vector2i op_Multiply(::MeshDecimator::Math::Vector2i a, ::System::Int32 d)
		{
			return ((::MeshDecimator::Math::Vector2i(*)(::MeshDecimator::Math::Vector2i, ::System::Int32))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR2I_OP_MULTIPLY_OFFSET))(a, d);
		}

		static ::MeshDecimator::Math::Vector2i op_Multiply_1(::System::Int32 d, ::MeshDecimator::Math::Vector2i a)
		{
			return ((::MeshDecimator::Math::Vector2i(*)(::System::Int32, ::MeshDecimator::Math::Vector2i))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR2I_OP_MULTIPLY_1_OFFSET))(d, a);
		}

		static ::MeshDecimator::Math::Vector2i op_Division(::MeshDecimator::Math::Vector2i a, ::System::Int32 d)
		{
			return ((::MeshDecimator::Math::Vector2i(*)(::MeshDecimator::Math::Vector2i, ::System::Int32))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR2I_OP_DIVISION_OFFSET))(a, d);
		}

		static ::MeshDecimator::Math::Vector2i op_UnaryNegation(::MeshDecimator::Math::Vector2i a)
		{
			return ((::MeshDecimator::Math::Vector2i(*)(::MeshDecimator::Math::Vector2i))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR2I_OP_UNARYNEGATION_OFFSET))(a);
		}

		static ::System::Boolean op_Equality(::MeshDecimator::Math::Vector2i lhs, ::MeshDecimator::Math::Vector2i rhs)
		{
			return ((::System::Boolean(*)(::MeshDecimator::Math::Vector2i, ::MeshDecimator::Math::Vector2i))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR2I_OP_EQUALITY_OFFSET))(lhs, rhs);
		}

		static ::System::Boolean op_Inequality(::MeshDecimator::Math::Vector2i lhs, ::MeshDecimator::Math::Vector2i rhs)
		{
			return ((::System::Boolean(*)(::MeshDecimator::Math::Vector2i, ::MeshDecimator::Math::Vector2i))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR2I_OP_INEQUALITY_OFFSET))(lhs, rhs);
		}

		/*
		static ::MeshDecimator::Math::Vector2i op_Explicit(::MeshDecimator::Math::Vector2 v)
		{
			return ((::MeshDecimator::Math::Vector2i(*)(::MeshDecimator::Math::Vector2))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR2I_OP_EXPLICIT_OFFSET))(v);
		}
		*/

		/*
		static ::MeshDecimator::Math::Vector2i op_Explicit_1(::MeshDecimator::Math::Vector2d v)
		{
			return ((::MeshDecimator::Math::Vector2i(*)(::MeshDecimator::Math::Vector2d))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR2I_OP_EXPLICIT_1_OFFSET))(v);
		}
		*/

		::System::Void Set(::System::Int32 x, ::System::Int32 y)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR2I_SET_OFFSET))(this, x, y);
		}

		::System::Void Scale(::MeshDecimator::Math::Vector2i& scale)
		{
			return ((::System::Void(*)(::PVOID, ::MeshDecimator::Math::Vector2i&))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR2I_SCALE_OFFSET))(this, scale);
		}

		::System::Void Clamp(::System::Int32 min, ::System::Int32 max)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR2I_CLAMP_OFFSET))(this, min, max);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR2I_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR2I_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::MeshDecimator::Math::Vector2i other)
		{
			return ((::System::Boolean(*)(::PVOID, ::MeshDecimator::Math::Vector2i))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR2I_EQUALS_1_OFFSET))(this, other);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR2I_TOSTRING_OFFSET))(this);
		}

		::System::String* ToString_1(::System::String* format)
		{
			return ((::System::String*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR2I_TOSTRING_1_OFFSET))(this, format);
		}

		static ::System::Void Scale_1(::MeshDecimator::Math::Vector2i& a, ::MeshDecimator::Math::Vector2i& b, ::MeshDecimator::Math::Vector2i& result)
		{
			return ((::System::Void(*)(::MeshDecimator::Math::Vector2i&, ::MeshDecimator::Math::Vector2i&, ::MeshDecimator::Math::Vector2i&))((::PBYTE)hIl2Cpp + MESHDECIMATOR_MATH_VECTOR2I_SCALE_1_OFFSET))(a, b, result);
		}
	};
}
