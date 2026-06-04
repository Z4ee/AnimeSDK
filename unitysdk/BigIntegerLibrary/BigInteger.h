#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BigIntegerLibrary/Sign.h"
#include "unitysdk/System/Object.h"

namespace BigIntegerLibrary { class BigInteger_DigitContainer; }
namespace System { class String; }

#define BIGINTEGERLIBRARY_BIGINTEGER_ABS_OFFSET UNITYSDK_OFFSET(0x1B5312E0)
#define BIGINTEGERLIBRARY_BIGINTEGER_ADDITION_OFFSET UNITYSDK_OFFSET(0x1B531340)
#define BIGINTEGERLIBRARY_BIGINTEGER_ADD_OFFSET UNITYSDK_OFFSET(0x1B531C70)
#define BIGINTEGERLIBRARY_BIGINTEGER_COMPARETO_1_OFFSET UNITYSDK_OFFSET(0x1B530E90)
#define BIGINTEGERLIBRARY_BIGINTEGER_COMPARETO_OFFSET UNITYSDK_OFFSET(0x1B530AA0)
#define BIGINTEGERLIBRARY_BIGINTEGER_DIFFERENCE_OFFSET UNITYSDK_OFFSET(0x1B5348B0)
#define BIGINTEGERLIBRARY_BIGINTEGER_DIVIDEBYBIGNUMBERSMALLER_OFFSET UNITYSDK_OFFSET(0x1B534640)
#define BIGINTEGERLIBRARY_BIGINTEGER_DIVIDEBYBIGNUMBER_OFFSET UNITYSDK_OFFSET(0x1B533A40)
#define BIGINTEGERLIBRARY_BIGINTEGER_DIVIDEBYONEDIGITNUMBER_OFFSET UNITYSDK_OFFSET(0x1B533790)
#define BIGINTEGERLIBRARY_BIGINTEGER_DIVISION_OFFSET UNITYSDK_OFFSET(0x1B533230)
#define BIGINTEGERLIBRARY_BIGINTEGER_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1B5305F0)
#define BIGINTEGERLIBRARY_BIGINTEGER_EQUALS_OFFSET UNITYSDK_OFFSET(0x1B530440)
#define BIGINTEGERLIBRARY_BIGINTEGER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1B530650)
#define BIGINTEGERLIBRARY_BIGINTEGER_GREATEROREQUAL_OFFSET UNITYSDK_OFFSET(0x1B5310C0)
#define BIGINTEGERLIBRARY_BIGINTEGER_GREATER_OFFSET UNITYSDK_OFFSET(0x1B530B50)
#define BIGINTEGERLIBRARY_BIGINTEGER_MODULO_OFFSET UNITYSDK_OFFSET(0x1B533FE0)
#define BIGINTEGERLIBRARY_BIGINTEGER_MULTIPLICATION_OFFSET UNITYSDK_OFFSET(0x1B532A60)
#define BIGINTEGERLIBRARY_BIGINTEGER_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x1B532D10)
#define BIGINTEGERLIBRARY_BIGINTEGER_OPPOSITE_OFFSET UNITYSDK_OFFSET(0x1B530FB0)
#define BIGINTEGERLIBRARY_BIGINTEGER_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x1B5303E0)
#define BIGINTEGERLIBRARY_BIGINTEGER_OP_DIVISION_OFFSET UNITYSDK_OFFSET(0x1B534370)
#define BIGINTEGERLIBRARY_BIGINTEGER_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1B532CD0)
#define BIGINTEGERLIBRARY_BIGINTEGER_OP_GREATERTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0x1B531B60)
#define BIGINTEGERLIBRARY_BIGINTEGER_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1B530390)
#define BIGINTEGERLIBRARY_BIGINTEGER_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1B531080)
#define BIGINTEGERLIBRARY_BIGINTEGER_OP_LESSTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0x1B531F20)
#define BIGINTEGERLIBRARY_BIGINTEGER_OP_LESSTHAN_OFFSET UNITYSDK_OFFSET(0x1B533730)
#define BIGINTEGERLIBRARY_BIGINTEGER_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x1B530330)
#define BIGINTEGERLIBRARY_BIGINTEGER_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x1B5343D0)
#define BIGINTEGERLIBRARY_BIGINTEGER_OP_UNARYNEGATION_OFFSET UNITYSDK_OFFSET(0x1B531FD0)
#define BIGINTEGERLIBRARY_BIGINTEGER_PARSE_OFFSET UNITYSDK_OFFSET(0x1B530A50)
#define BIGINTEGERLIBRARY_BIGINTEGER_SMALLEROREQUAL_OFFSET UNITYSDK_OFFSET(0x1B531270)
#define BIGINTEGERLIBRARY_BIGINTEGER_SMALLER_OFFSET UNITYSDK_OFFSET(0x1B531170)
#define BIGINTEGERLIBRARY_BIGINTEGER_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x1B532320)
#define BIGINTEGERLIBRARY_BIGINTEGER_SUBTRACT_OFFSET UNITYSDK_OFFSET(0x1B532030)
#define BIGINTEGERLIBRARY_BIGINTEGER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1B5306E0)
#define BIGINTEGERLIBRARY_BIGINTEGER_TRIAL_OFFSET UNITYSDK_OFFSET(0x1B534430)
#define BIGINTEGERLIBRARY_BIGINTEGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B534A70)
#define BIGINTEGERLIBRARY_BIGINTEGER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B52FB70)
#define BIGINTEGERLIBRARY_BIGINTEGER__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1B52FC70)
#define BIGINTEGERLIBRARY_BIGINTEGER__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1B52FE00)
#define BIGINTEGERLIBRARY_BIGINTEGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B52F9C0)

namespace BigIntegerLibrary
{
	inline static constexpr unsigned int BigInteger_TypeDefinitionIndex = 6441;

	class BigInteger : public ::System::Object
	{
	public:
		static ::BigIntegerLibrary::BigInteger** StaticGet_Zero()
		{
			return (::BigIntegerLibrary::BigInteger**)Il2CppClass::FromTypeDefinitionIndex(BigInteger_TypeDefinitionIndex)->GetStaticField(0x2FE0);
		}
		static ::BigIntegerLibrary::BigInteger** StaticGet_One()
		{
			return (::BigIntegerLibrary::BigInteger**)Il2CppClass::FromTypeDefinitionIndex(BigInteger_TypeDefinitionIndex)->GetStaticField(0x2FE8);
		}
		static ::BigIntegerLibrary::BigInteger** StaticGet_Ten()
		{
			return (::BigIntegerLibrary::BigInteger**)Il2CppClass::FromTypeDefinitionIndex(BigInteger_TypeDefinitionIndex)->GetStaticField(0x2FF0);
		}
		static ::BigIntegerLibrary::BigInteger** StaticGet_Two()
		{
			return (::BigIntegerLibrary::BigInteger**)Il2CppClass::FromTypeDefinitionIndex(BigInteger_TypeDefinitionIndex)->GetStaticField(0x2FF8);
		}
		::BigIntegerLibrary::BigInteger_DigitContainer* digits; // 0x10
		::BigIntegerLibrary::Sign sign; // 0x18
		::System::Int32 size; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BIGINTEGER__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BIGINTEGER__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::BigIntegerLibrary::BigInteger* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BigIntegerLibrary::BigInteger*))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BIGINTEGER__CTOR_2_OFFSET))(this, a1);
		}

		::System::Void _ctor_3(::System::String* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BIGINTEGER__CTOR_3_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BIGINTEGER__CCTOR_OFFSET))();
		}

		::System::Boolean Equals(::BigIntegerLibrary::BigInteger* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BigIntegerLibrary::BigInteger*))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BIGINTEGER_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BIGINTEGER_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BIGINTEGER_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BIGINTEGER_TOSTRING_OFFSET))(this);
		}

		static ::BigIntegerLibrary::BigInteger* Parse(::System::String* a1)
		{
			return ((::BigIntegerLibrary::BigInteger*(*)(::System::String*))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BIGINTEGER_PARSE_OFFSET))(a1);
		}

		::System::Int32 CompareTo(::BigIntegerLibrary::BigInteger* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::BigIntegerLibrary::BigInteger*))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BIGINTEGER_COMPARETO_OFFSET))(this, a1);
		}

		::System::Int32 CompareTo_1(::System::Object* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BIGINTEGER_COMPARETO_1_OFFSET))(this, a1);
		}

		static ::BigIntegerLibrary::BigInteger* Opposite(::BigIntegerLibrary::BigInteger* a1)
		{
			return ((::BigIntegerLibrary::BigInteger*(*)(::BigIntegerLibrary::BigInteger*))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BIGINTEGER_OPPOSITE_OFFSET))(a1);
		}

		static ::System::Boolean Greater(::BigIntegerLibrary::BigInteger* a1, ::BigIntegerLibrary::BigInteger* a2)
		{
			return ((::System::Boolean(*)(::BigIntegerLibrary::BigInteger*, ::BigIntegerLibrary::BigInteger*))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BIGINTEGER_GREATER_OFFSET))(a1, a2);
		}

		static ::System::Boolean GreaterOrEqual(::BigIntegerLibrary::BigInteger* a1, ::BigIntegerLibrary::BigInteger* a2)
		{
			return ((::System::Boolean(*)(::BigIntegerLibrary::BigInteger*, ::BigIntegerLibrary::BigInteger*))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BIGINTEGER_GREATEROREQUAL_OFFSET))(a1, a2);
		}

		static ::System::Boolean Smaller(::BigIntegerLibrary::BigInteger* a1, ::BigIntegerLibrary::BigInteger* a2)
		{
			return ((::System::Boolean(*)(::BigIntegerLibrary::BigInteger*, ::BigIntegerLibrary::BigInteger*))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BIGINTEGER_SMALLER_OFFSET))(a1, a2);
		}

		static ::System::Boolean SmallerOrEqual(::BigIntegerLibrary::BigInteger* a1, ::BigIntegerLibrary::BigInteger* a2)
		{
			return ((::System::Boolean(*)(::BigIntegerLibrary::BigInteger*, ::BigIntegerLibrary::BigInteger*))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BIGINTEGER_SMALLEROREQUAL_OFFSET))(a1, a2);
		}

		static ::BigIntegerLibrary::BigInteger* Abs(::BigIntegerLibrary::BigInteger* a1)
		{
			return ((::BigIntegerLibrary::BigInteger*(*)(::BigIntegerLibrary::BigInteger*))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BIGINTEGER_ABS_OFFSET))(a1);
		}

		static ::BigIntegerLibrary::BigInteger* Addition(::BigIntegerLibrary::BigInteger* a1, ::BigIntegerLibrary::BigInteger* a2)
		{
			return ((::BigIntegerLibrary::BigInteger*(*)(::BigIntegerLibrary::BigInteger*, ::BigIntegerLibrary::BigInteger*))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BIGINTEGER_ADDITION_OFFSET))(a1, a2);
		}

		static ::BigIntegerLibrary::BigInteger* Subtraction(::BigIntegerLibrary::BigInteger* a1, ::BigIntegerLibrary::BigInteger* a2)
		{
			return ((::BigIntegerLibrary::BigInteger*(*)(::BigIntegerLibrary::BigInteger*, ::BigIntegerLibrary::BigInteger*))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BIGINTEGER_SUBTRACTION_OFFSET))(a1, a2);
		}

		static ::BigIntegerLibrary::BigInteger* Multiplication(::BigIntegerLibrary::BigInteger* a1, ::BigIntegerLibrary::BigInteger* a2)
		{
			return ((::BigIntegerLibrary::BigInteger*(*)(::BigIntegerLibrary::BigInteger*, ::BigIntegerLibrary::BigInteger*))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BIGINTEGER_MULTIPLICATION_OFFSET))(a1, a2);
		}

		static ::BigIntegerLibrary::BigInteger* Division(::BigIntegerLibrary::BigInteger* a1, ::BigIntegerLibrary::BigInteger* a2)
		{
			return ((::BigIntegerLibrary::BigInteger*(*)(::BigIntegerLibrary::BigInteger*, ::BigIntegerLibrary::BigInteger*))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BIGINTEGER_DIVISION_OFFSET))(a1, a2);
		}

		static ::BigIntegerLibrary::BigInteger* Modulo(::BigIntegerLibrary::BigInteger* a1, ::BigIntegerLibrary::BigInteger* a2)
		{
			return ((::BigIntegerLibrary::BigInteger*(*)(::BigIntegerLibrary::BigInteger*, ::BigIntegerLibrary::BigInteger*))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BIGINTEGER_MODULO_OFFSET))(a1, a2);
		}

		static ::BigIntegerLibrary::BigInteger* op_Implicit(::System::Int64 a1)
		{
			return ((::BigIntegerLibrary::BigInteger*(*)(::System::Int64))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BIGINTEGER_OP_IMPLICIT_OFFSET))(a1);
		}

		static ::System::Boolean op_Equality(::BigIntegerLibrary::BigInteger* a1, ::BigIntegerLibrary::BigInteger* a2)
		{
			return ((::System::Boolean(*)(::BigIntegerLibrary::BigInteger*, ::BigIntegerLibrary::BigInteger*))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BIGINTEGER_OP_EQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Inequality(::BigIntegerLibrary::BigInteger* a1, ::BigIntegerLibrary::BigInteger* a2)
		{
			return ((::System::Boolean(*)(::BigIntegerLibrary::BigInteger*, ::BigIntegerLibrary::BigInteger*))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BIGINTEGER_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_LessThan(::BigIntegerLibrary::BigInteger* a1, ::BigIntegerLibrary::BigInteger* a2)
		{
			return ((::System::Boolean(*)(::BigIntegerLibrary::BigInteger*, ::BigIntegerLibrary::BigInteger*))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BIGINTEGER_OP_LESSTHAN_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_GreaterThanOrEqual(::BigIntegerLibrary::BigInteger* a1, ::BigIntegerLibrary::BigInteger* a2)
		{
			return ((::System::Boolean(*)(::BigIntegerLibrary::BigInteger*, ::BigIntegerLibrary::BigInteger*))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BIGINTEGER_OP_GREATERTHANOREQUAL_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_LessThanOrEqual(::BigIntegerLibrary::BigInteger* a1, ::BigIntegerLibrary::BigInteger* a2)
		{
			return ((::System::Boolean(*)(::BigIntegerLibrary::BigInteger*, ::BigIntegerLibrary::BigInteger*))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BIGINTEGER_OP_LESSTHANOREQUAL_OFFSET))(a1, a2);
		}

		static ::BigIntegerLibrary::BigInteger* op_UnaryNegation(::BigIntegerLibrary::BigInteger* a1)
		{
			return ((::BigIntegerLibrary::BigInteger*(*)(::BigIntegerLibrary::BigInteger*))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BIGINTEGER_OP_UNARYNEGATION_OFFSET))(a1);
		}

		static ::BigIntegerLibrary::BigInteger* op_Addition(::BigIntegerLibrary::BigInteger* a1, ::BigIntegerLibrary::BigInteger* a2)
		{
			return ((::BigIntegerLibrary::BigInteger*(*)(::BigIntegerLibrary::BigInteger*, ::BigIntegerLibrary::BigInteger*))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BIGINTEGER_OP_ADDITION_OFFSET))(a1, a2);
		}

		static ::BigIntegerLibrary::BigInteger* op_Subtraction(::BigIntegerLibrary::BigInteger* a1, ::BigIntegerLibrary::BigInteger* a2)
		{
			return ((::BigIntegerLibrary::BigInteger*(*)(::BigIntegerLibrary::BigInteger*, ::BigIntegerLibrary::BigInteger*))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BIGINTEGER_OP_SUBTRACTION_OFFSET))(a1, a2);
		}

		static ::BigIntegerLibrary::BigInteger* op_Multiply(::BigIntegerLibrary::BigInteger* a1, ::BigIntegerLibrary::BigInteger* a2)
		{
			return ((::BigIntegerLibrary::BigInteger*(*)(::BigIntegerLibrary::BigInteger*, ::BigIntegerLibrary::BigInteger*))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BIGINTEGER_OP_MULTIPLY_OFFSET))(a1, a2);
		}

		static ::BigIntegerLibrary::BigInteger* op_Division(::BigIntegerLibrary::BigInteger* a1, ::BigIntegerLibrary::BigInteger* a2)
		{
			return ((::BigIntegerLibrary::BigInteger*(*)(::BigIntegerLibrary::BigInteger*, ::BigIntegerLibrary::BigInteger*))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BIGINTEGER_OP_DIVISION_OFFSET))(a1, a2);
		}

		static ::BigIntegerLibrary::BigInteger* Add(::BigIntegerLibrary::BigInteger* a1, ::BigIntegerLibrary::BigInteger* a2)
		{
			return ((::BigIntegerLibrary::BigInteger*(*)(::BigIntegerLibrary::BigInteger*, ::BigIntegerLibrary::BigInteger*))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BIGINTEGER_ADD_OFFSET))(a1, a2);
		}

		static ::BigIntegerLibrary::BigInteger* Subtract(::BigIntegerLibrary::BigInteger* a1, ::BigIntegerLibrary::BigInteger* a2)
		{
			return ((::BigIntegerLibrary::BigInteger*(*)(::BigIntegerLibrary::BigInteger*, ::BigIntegerLibrary::BigInteger*))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BIGINTEGER_SUBTRACT_OFFSET))(a1, a2);
		}

		static ::BigIntegerLibrary::BigInteger* Multiply(::BigIntegerLibrary::BigInteger* a1, ::BigIntegerLibrary::BigInteger* a2)
		{
			return ((::BigIntegerLibrary::BigInteger*(*)(::BigIntegerLibrary::BigInteger*, ::BigIntegerLibrary::BigInteger*))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BIGINTEGER_MULTIPLY_OFFSET))(a1, a2);
		}

		static ::BigIntegerLibrary::BigInteger* DivideByOneDigitNumber(::BigIntegerLibrary::BigInteger* a1, ::System::Int64 a2)
		{
			return ((::BigIntegerLibrary::BigInteger*(*)(::BigIntegerLibrary::BigInteger*, ::System::Int64))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BIGINTEGER_DIVIDEBYONEDIGITNUMBER_OFFSET))(a1, a2);
		}

		static ::BigIntegerLibrary::BigInteger* DivideByBigNumber(::BigIntegerLibrary::BigInteger* a1, ::BigIntegerLibrary::BigInteger* a2)
		{
			return ((::BigIntegerLibrary::BigInteger*(*)(::BigIntegerLibrary::BigInteger*, ::BigIntegerLibrary::BigInteger*))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BIGINTEGER_DIVIDEBYBIGNUMBER_OFFSET))(a1, a2);
		}

		static ::System::Boolean DivideByBigNumberSmaller(::BigIntegerLibrary::BigInteger* a1, ::BigIntegerLibrary::BigInteger* a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Boolean(*)(::BigIntegerLibrary::BigInteger*, ::BigIntegerLibrary::BigInteger*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BIGINTEGER_DIVIDEBYBIGNUMBERSMALLER_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Void Difference(::BigIntegerLibrary::BigInteger* a1, ::BigIntegerLibrary::BigInteger* a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::BigIntegerLibrary::BigInteger*, ::BigIntegerLibrary::BigInteger*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BIGINTEGER_DIFFERENCE_OFFSET))(a1, a2, a3, a4);
		}

		static ::System::Int64 Trial(::BigIntegerLibrary::BigInteger* a1, ::BigIntegerLibrary::BigInteger* a2, ::System::Int32 a3, ::System::Int32 a4)
		{
			return ((::System::Int64(*)(::BigIntegerLibrary::BigInteger*, ::BigIntegerLibrary::BigInteger*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BIGINTEGER_TRIAL_OFFSET))(a1, a2, a3, a4);
		}
	};
}
