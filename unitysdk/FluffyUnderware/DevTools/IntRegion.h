#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define FLUFFYUNDERWARE_DEVTOOLS_INTREGION_CLAMP_OFFSET UNITYSDK_OFFSET(0x960620)
#define FLUFFYUNDERWARE_DEVTOOLS_INTREGION_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x9607F0)
#define FLUFFYUNDERWARE_DEVTOOLS_INTREGION_EQUALS_OFFSET UNITYSDK_OFFSET(0x9607D0)
#define FLUFFYUNDERWARE_DEVTOOLS_INTREGION_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x9187E0)
#define FLUFFYUNDERWARE_DEVTOOLS_INTREGION_GET_HIGH_OFFSET UNITYSDK_OFFSET(0x9606C0)
#define FLUFFYUNDERWARE_DEVTOOLS_INTREGION_GET_LENGTHPOSITIVE_OFFSET UNITYSDK_OFFSET(0x960710)
#define FLUFFYUNDERWARE_DEVTOOLS_INTREGION_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x92B670)
#define FLUFFYUNDERWARE_DEVTOOLS_INTREGION_GET_LOW_OFFSET UNITYSDK_OFFSET(0x960690)
#define FLUFFYUNDERWARE_DEVTOOLS_INTREGION_GET_POSITIVE_OFFSET UNITYSDK_OFFSET(0x960680)
#define FLUFFYUNDERWARE_DEVTOOLS_INTREGION_GET_RANDOM_OFFSET UNITYSDK_OFFSET(0x9606F0)
#define FLUFFYUNDERWARE_DEVTOOLS_INTREGION_GET_ZEROONE_OFFSET UNITYSDK_OFFSET(0x1B2D48F0)
#define FLUFFYUNDERWARE_DEVTOOLS_INTREGION_MAKEPOSITIVE_OFFSET UNITYSDK_OFFSET(0x960600)
#define FLUFFYUNDERWARE_DEVTOOLS_INTREGION_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x1B2D4B40)
#define FLUFFYUNDERWARE_DEVTOOLS_INTREGION_OP_DIVISION_OFFSET UNITYSDK_OFFSET(0x1B2D4BE0)
#define FLUFFYUNDERWARE_DEVTOOLS_INTREGION_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1B2D4C10)
#define FLUFFYUNDERWARE_DEVTOOLS_INTREGION_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1B2D4C30)
#define FLUFFYUNDERWARE_DEVTOOLS_INTREGION_OP_MULTIPLY_1_OFFSET UNITYSDK_OFFSET(0x1B2D4BC0)
#define FLUFFYUNDERWARE_DEVTOOLS_INTREGION_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x1B2D4BA0)
#define FLUFFYUNDERWARE_DEVTOOLS_INTREGION_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x1B2D4B60)
#define FLUFFYUNDERWARE_DEVTOOLS_INTREGION_OP_UNARYNEGATION_OFFSET UNITYSDK_OFFSET(0x1B2D4B80)
#define FLUFFYUNDERWARE_DEVTOOLS_INTREGION_SET_HIGH_OFFSET UNITYSDK_OFFSET(0x9606D0)
#define FLUFFYUNDERWARE_DEVTOOLS_INTREGION_SET_LOW_OFFSET UNITYSDK_OFFSET(0x9606A0)
#define FLUFFYUNDERWARE_DEVTOOLS_INTREGION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x960730)
#define FLUFFYUNDERWARE_DEVTOOLS_INTREGION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x9605F0)
#define FLUFFYUNDERWARE_DEVTOOLS_INTREGION__CTOR_OFFSET UNITYSDK_OFFSET(0x9605E0)

namespace FluffyUnderware::DevTools
{
	inline static constexpr unsigned int IntRegion_TypeDefinitionIndex = 25853;

	struct alignas(4) IntRegion
	{
		::System::Int32 From; // 0x10
		::System::Int32 To; // 0x14
		::System::Boolean SimpleValue; // 0x18

		::System::Void _ctor(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_INTREGION__CTOR_OFFSET))(this, value);
		}

		::System::Void _ctor_1(::System::Int32 A, ::System::Int32 B)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_INTREGION__CTOR_1_OFFSET))(this, A, B);
		}

		static ::FluffyUnderware::DevTools::IntRegion get_ZeroOne()
		{
			return ((::FluffyUnderware::DevTools::IntRegion(*)())((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_INTREGION_GET_ZEROONE_OFFSET))();
		}

		::System::Void MakePositive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_INTREGION_MAKEPOSITIVE_OFFSET))(this);
		}

		::System::Void Clamp(::System::Int32 low, ::System::Int32 high)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_INTREGION_CLAMP_OFFSET))(this, low, high);
		}

		::System::Boolean get_Positive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_INTREGION_GET_POSITIVE_OFFSET))(this);
		}

		::System::Int32 get_Low()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_INTREGION_GET_LOW_OFFSET))(this);
		}

		::System::Void set_Low(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_INTREGION_SET_LOW_OFFSET))(this, value);
		}

		::System::Int32 get_High()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_INTREGION_GET_HIGH_OFFSET))(this);
		}

		::System::Void set_High(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_INTREGION_SET_HIGH_OFFSET))(this, value);
		}

		::System::Int32 get_Random()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_INTREGION_GET_RANDOM_OFFSET))(this);
		}

		::System::Int32 get_Length()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_INTREGION_GET_LENGTH_OFFSET))(this);
		}

		::System::Int32 get_LengthPositive()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_INTREGION_GET_LENGTHPOSITIVE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_INTREGION_TOSTRING_OFFSET))(this);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_INTREGION_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::FluffyUnderware::DevTools::IntRegion other)
		{
			return ((::System::Boolean(*)(::PVOID, ::FluffyUnderware::DevTools::IntRegion))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_INTREGION_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_INTREGION_EQUALS_1_OFFSET))(this, other);
		}

		static ::FluffyUnderware::DevTools::IntRegion op_Addition(::FluffyUnderware::DevTools::IntRegion a, ::FluffyUnderware::DevTools::IntRegion b)
		{
			return ((::FluffyUnderware::DevTools::IntRegion(*)(::FluffyUnderware::DevTools::IntRegion, ::FluffyUnderware::DevTools::IntRegion))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_INTREGION_OP_ADDITION_OFFSET))(a, b);
		}

		static ::FluffyUnderware::DevTools::IntRegion op_Subtraction(::FluffyUnderware::DevTools::IntRegion a, ::FluffyUnderware::DevTools::IntRegion b)
		{
			return ((::FluffyUnderware::DevTools::IntRegion(*)(::FluffyUnderware::DevTools::IntRegion, ::FluffyUnderware::DevTools::IntRegion))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_INTREGION_OP_SUBTRACTION_OFFSET))(a, b);
		}

		static ::FluffyUnderware::DevTools::IntRegion op_UnaryNegation(::FluffyUnderware::DevTools::IntRegion a)
		{
			return ((::FluffyUnderware::DevTools::IntRegion(*)(::FluffyUnderware::DevTools::IntRegion))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_INTREGION_OP_UNARYNEGATION_OFFSET))(a);
		}

		static ::FluffyUnderware::DevTools::IntRegion op_Multiply(::FluffyUnderware::DevTools::IntRegion a, ::System::Int32 v)
		{
			return ((::FluffyUnderware::DevTools::IntRegion(*)(::FluffyUnderware::DevTools::IntRegion, ::System::Int32))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_INTREGION_OP_MULTIPLY_OFFSET))(a, v);
		}

		static ::FluffyUnderware::DevTools::IntRegion op_Multiply_1(::System::Int32 v, ::FluffyUnderware::DevTools::IntRegion a)
		{
			return ((::FluffyUnderware::DevTools::IntRegion(*)(::System::Int32, ::FluffyUnderware::DevTools::IntRegion))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_INTREGION_OP_MULTIPLY_1_OFFSET))(v, a);
		}

		static ::FluffyUnderware::DevTools::IntRegion op_Division(::FluffyUnderware::DevTools::IntRegion a, ::System::Int32 v)
		{
			return ((::FluffyUnderware::DevTools::IntRegion(*)(::FluffyUnderware::DevTools::IntRegion, ::System::Int32))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_INTREGION_OP_DIVISION_OFFSET))(a, v);
		}

		static ::System::Boolean op_Equality(::FluffyUnderware::DevTools::IntRegion lhs, ::FluffyUnderware::DevTools::IntRegion rhs)
		{
			return ((::System::Boolean(*)(::FluffyUnderware::DevTools::IntRegion, ::FluffyUnderware::DevTools::IntRegion))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_INTREGION_OP_EQUALITY_OFFSET))(lhs, rhs);
		}

		static ::System::Boolean op_Inequality(::FluffyUnderware::DevTools::IntRegion lhs, ::FluffyUnderware::DevTools::IntRegion rhs)
		{
			return ((::System::Boolean(*)(::FluffyUnderware::DevTools::IntRegion, ::FluffyUnderware::DevTools::IntRegion))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_INTREGION_OP_INEQUALITY_OFFSET))(lhs, rhs);
		}
	};
}
