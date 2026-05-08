#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class Object; }
namespace System { class String; }

#define FLUFFYUNDERWARE_DEVTOOLS_FLOATREGION_CLAMP_OFFSET UNITYSDK_OFFSET(0x960270)
#define FLUFFYUNDERWARE_DEVTOOLS_FLOATREGION_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x960520)
#define FLUFFYUNDERWARE_DEVTOOLS_FLOATREGION_EQUALS_OFFSET UNITYSDK_OFFSET(0x9604B0)
#define FLUFFYUNDERWARE_DEVTOOLS_FLOATREGION_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x918170)
#define FLUFFYUNDERWARE_DEVTOOLS_FLOATREGION_GET_HIGH_OFFSET UNITYSDK_OFFSET(0x960340)
#define FLUFFYUNDERWARE_DEVTOOLS_FLOATREGION_GET_LENGTHPOSITIVE_OFFSET UNITYSDK_OFFSET(0x9603D0)
#define FLUFFYUNDERWARE_DEVTOOLS_FLOATREGION_GET_LENGTH_OFFSET UNITYSDK_OFFSET(0x9603C0)
#define FLUFFYUNDERWARE_DEVTOOLS_FLOATREGION_GET_LOW_OFFSET UNITYSDK_OFFSET(0x960300)
#define FLUFFYUNDERWARE_DEVTOOLS_FLOATREGION_GET_NEXT_OFFSET UNITYSDK_OFFSET(0x9603A0)
#define FLUFFYUNDERWARE_DEVTOOLS_FLOATREGION_GET_POSITIVE_OFFSET UNITYSDK_OFFSET(0x9602F0)
#define FLUFFYUNDERWARE_DEVTOOLS_FLOATREGION_GET_RANDOM_OFFSET UNITYSDK_OFFSET(0x960380)
#define FLUFFYUNDERWARE_DEVTOOLS_FLOATREGION_GET_ZEROONE_OFFSET UNITYSDK_OFFSET(0x1B2D40E0)
#define FLUFFYUNDERWARE_DEVTOOLS_FLOATREGION_MAKEPOSITIVE_OFFSET UNITYSDK_OFFSET(0x960250)
#define FLUFFYUNDERWARE_DEVTOOLS_FLOATREGION_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x1B2D44D0)
#define FLUFFYUNDERWARE_DEVTOOLS_FLOATREGION_OP_DIVISION_OFFSET UNITYSDK_OFFSET(0x1B2D4570)
#define FLUFFYUNDERWARE_DEVTOOLS_FLOATREGION_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1B2D4590)
#define FLUFFYUNDERWARE_DEVTOOLS_FLOATREGION_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1B2D4620)
#define FLUFFYUNDERWARE_DEVTOOLS_FLOATREGION_OP_MULTIPLY_1_OFFSET UNITYSDK_OFFSET(0x1B2D4550)
#define FLUFFYUNDERWARE_DEVTOOLS_FLOATREGION_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x1B2D4530)
#define FLUFFYUNDERWARE_DEVTOOLS_FLOATREGION_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x1B2D44F0)
#define FLUFFYUNDERWARE_DEVTOOLS_FLOATREGION_OP_UNARYNEGATION_OFFSET UNITYSDK_OFFSET(0x1B2D4510)
#define FLUFFYUNDERWARE_DEVTOOLS_FLOATREGION_SET_HIGH_OFFSET UNITYSDK_OFFSET(0x960360)
#define FLUFFYUNDERWARE_DEVTOOLS_FLOATREGION_SET_LOW_OFFSET UNITYSDK_OFFSET(0x960320)
#define FLUFFYUNDERWARE_DEVTOOLS_FLOATREGION_TOSTRING_OFFSET UNITYSDK_OFFSET(0x960400)
#define FLUFFYUNDERWARE_DEVTOOLS_FLOATREGION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x960240)
#define FLUFFYUNDERWARE_DEVTOOLS_FLOATREGION__CTOR_OFFSET UNITYSDK_OFFSET(0x960230)

namespace FluffyUnderware::DevTools
{
	inline static constexpr unsigned int FloatRegion_TypeDefinitionIndex = 25850;

	struct alignas(4) FloatRegion
	{
		::System::Single From; // 0x10
		::System::Single To; // 0x14
		::System::Boolean SimpleValue; // 0x18

		::System::Void _ctor(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_FLOATREGION__CTOR_OFFSET))(this, value);
		}

		::System::Void _ctor_1(::System::Single A, ::System::Single B)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_FLOATREGION__CTOR_1_OFFSET))(this, A, B);
		}

		static ::FluffyUnderware::DevTools::FloatRegion get_ZeroOne()
		{
			return ((::FluffyUnderware::DevTools::FloatRegion(*)())((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_FLOATREGION_GET_ZEROONE_OFFSET))();
		}

		::System::Void MakePositive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_FLOATREGION_MAKEPOSITIVE_OFFSET))(this);
		}

		::System::Void Clamp(::System::Single low, ::System::Single high)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_FLOATREGION_CLAMP_OFFSET))(this, low, high);
		}

		::System::Boolean get_Positive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_FLOATREGION_GET_POSITIVE_OFFSET))(this);
		}

		::System::Single get_Low()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_FLOATREGION_GET_LOW_OFFSET))(this);
		}

		::System::Void set_Low(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_FLOATREGION_SET_LOW_OFFSET))(this, value);
		}

		::System::Single get_High()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_FLOATREGION_GET_HIGH_OFFSET))(this);
		}

		::System::Void set_High(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_FLOATREGION_SET_HIGH_OFFSET))(this, value);
		}

		::System::Single get_Random()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_FLOATREGION_GET_RANDOM_OFFSET))(this);
		}

		::System::Single get_Next()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_FLOATREGION_GET_NEXT_OFFSET))(this);
		}

		::System::Single get_Length()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_FLOATREGION_GET_LENGTH_OFFSET))(this);
		}

		::System::Single get_LengthPositive()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_FLOATREGION_GET_LENGTHPOSITIVE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_FLOATREGION_TOSTRING_OFFSET))(this);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_FLOATREGION_GETHASHCODE_OFFSET))(this);
		}

		::System::Boolean Equals(::FluffyUnderware::DevTools::FloatRegion other)
		{
			return ((::System::Boolean(*)(::PVOID, ::FluffyUnderware::DevTools::FloatRegion))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_FLOATREGION_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_FLOATREGION_EQUALS_1_OFFSET))(this, other);
		}

		static ::FluffyUnderware::DevTools::FloatRegion op_Addition(::FluffyUnderware::DevTools::FloatRegion a, ::FluffyUnderware::DevTools::FloatRegion b)
		{
			return ((::FluffyUnderware::DevTools::FloatRegion(*)(::FluffyUnderware::DevTools::FloatRegion, ::FluffyUnderware::DevTools::FloatRegion))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_FLOATREGION_OP_ADDITION_OFFSET))(a, b);
		}

		static ::FluffyUnderware::DevTools::FloatRegion op_Subtraction(::FluffyUnderware::DevTools::FloatRegion a, ::FluffyUnderware::DevTools::FloatRegion b)
		{
			return ((::FluffyUnderware::DevTools::FloatRegion(*)(::FluffyUnderware::DevTools::FloatRegion, ::FluffyUnderware::DevTools::FloatRegion))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_FLOATREGION_OP_SUBTRACTION_OFFSET))(a, b);
		}

		static ::FluffyUnderware::DevTools::FloatRegion op_UnaryNegation(::FluffyUnderware::DevTools::FloatRegion a)
		{
			return ((::FluffyUnderware::DevTools::FloatRegion(*)(::FluffyUnderware::DevTools::FloatRegion))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_FLOATREGION_OP_UNARYNEGATION_OFFSET))(a);
		}

		static ::FluffyUnderware::DevTools::FloatRegion op_Multiply(::FluffyUnderware::DevTools::FloatRegion a, ::System::Single v)
		{
			return ((::FluffyUnderware::DevTools::FloatRegion(*)(::FluffyUnderware::DevTools::FloatRegion, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_FLOATREGION_OP_MULTIPLY_OFFSET))(a, v);
		}

		static ::FluffyUnderware::DevTools::FloatRegion op_Multiply_1(::System::Single v, ::FluffyUnderware::DevTools::FloatRegion a)
		{
			return ((::FluffyUnderware::DevTools::FloatRegion(*)(::System::Single, ::FluffyUnderware::DevTools::FloatRegion))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_FLOATREGION_OP_MULTIPLY_1_OFFSET))(v, a);
		}

		static ::FluffyUnderware::DevTools::FloatRegion op_Division(::FluffyUnderware::DevTools::FloatRegion a, ::System::Single v)
		{
			return ((::FluffyUnderware::DevTools::FloatRegion(*)(::FluffyUnderware::DevTools::FloatRegion, ::System::Single))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_FLOATREGION_OP_DIVISION_OFFSET))(a, v);
		}

		static ::System::Boolean op_Equality(::FluffyUnderware::DevTools::FloatRegion lhs, ::FluffyUnderware::DevTools::FloatRegion rhs)
		{
			return ((::System::Boolean(*)(::FluffyUnderware::DevTools::FloatRegion, ::FluffyUnderware::DevTools::FloatRegion))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_FLOATREGION_OP_EQUALITY_OFFSET))(lhs, rhs);
		}

		static ::System::Boolean op_Inequality(::FluffyUnderware::DevTools::FloatRegion lhs, ::FluffyUnderware::DevTools::FloatRegion rhs)
		{
			return ((::System::Boolean(*)(::FluffyUnderware::DevTools::FloatRegion, ::FluffyUnderware::DevTools::FloatRegion))((::PBYTE)hIl2Cpp + FLUFFYUNDERWARE_DEVTOOLS_FLOATREGION_OP_INEQUALITY_OFFSET))(lhs, rhs);
		}
	};
}
