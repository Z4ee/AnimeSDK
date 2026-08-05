#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BigIntegerLibrary/Sign.h"
#include "unitysdk/System/Object.h"

namespace BigIntegerLibrary { class BigInteger_DigitContainer; }
namespace System { class String; }

#define BIGINTEGERLIBRARY_BIGINTEGER_ABS_OFFSET UNITYSDK_OFFSET(0x1BE61F30)
#define BIGINTEGERLIBRARY_BIGINTEGER_ADDITION_OFFSET UNITYSDK_OFFSET(0x1BE61F90)
#define BIGINTEGERLIBRARY_BIGINTEGER_ADD_OFFSET UNITYSDK_OFFSET(0x1BE628C0)
#define BIGINTEGERLIBRARY_BIGINTEGER_COMPARETO_1_OFFSET UNITYSDK_OFFSET(0x1BE61AE0)
#define BIGINTEGERLIBRARY_BIGINTEGER_COMPARETO_OFFSET UNITYSDK_OFFSET(0x1BE61620)
#define BIGINTEGERLIBRARY_BIGINTEGER_DIFFERENCE_OFFSET UNITYSDK_OFFSET(0x1BE65780)
#define BIGINTEGERLIBRARY_BIGINTEGER_DIVIDEBYBIGNUMBERSMALLER_OFFSET UNITYSDK_OFFSET(0x1BE65480)
#define BIGINTEGERLIBRARY_BIGINTEGER_DIVIDEBYBIGNUMBER_OFFSET UNITYSDK_OFFSET(0x1BE647A0)
#define BIGINTEGERLIBRARY_BIGINTEGER_DIVIDEBYONEDIGITNUMBER_OFFSET UNITYSDK_OFFSET(0x1BE64490)
#define BIGINTEGERLIBRARY_BIGINTEGER_DIVISION_OFFSET UNITYSDK_OFFSET(0x1BE63F10)
#define BIGINTEGERLIBRARY_BIGINTEGER_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1BE61120)
#define BIGINTEGERLIBRARY_BIGINTEGER_EQUALS_OFFSET UNITYSDK_OFFSET(0x1BE60F20)
#define BIGINTEGERLIBRARY_BIGINTEGER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1BE61180)
#define BIGINTEGERLIBRARY_BIGINTEGER_GREATEROREQUAL_OFFSET UNITYSDK_OFFSET(0x1BE61D10)
#define BIGINTEGERLIBRARY_BIGINTEGER_GREATER_OFFSET UNITYSDK_OFFSET(0x1BE616D0)
#define BIGINTEGERLIBRARY_BIGINTEGER_MODULO_OFFSET UNITYSDK_OFFSET(0x1BE64D70)
#define BIGINTEGERLIBRARY_BIGINTEGER_MULTIPLICATION_OFFSET UNITYSDK_OFFSET(0x1BE637D0)
#define BIGINTEGERLIBRARY_BIGINTEGER_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x1BE63A80)
#define BIGINTEGERLIBRARY_BIGINTEGER_OPPOSITE_OFFSET UNITYSDK_OFFSET(0x1BE61C00)
#define BIGINTEGERLIBRARY_BIGINTEGER_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x1BE60EC0)
#define BIGINTEGERLIBRARY_BIGINTEGER_OP_DIVISION_OFFSET UNITYSDK_OFFSET(0x1BE65100)
#define BIGINTEGERLIBRARY_BIGINTEGER_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1BE63A40)
#define BIGINTEGERLIBRARY_BIGINTEGER_OP_GREATERTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0x1BE627B0)
#define BIGINTEGERLIBRARY_BIGINTEGER_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1BE60E70)
#define BIGINTEGERLIBRARY_BIGINTEGER_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1BE61CD0)
#define BIGINTEGERLIBRARY_BIGINTEGER_OP_LESSTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0x1BE62BE0)
#define BIGINTEGERLIBRARY_BIGINTEGER_OP_LESSTHAN_OFFSET UNITYSDK_OFFSET(0x1BE64430)
#define BIGINTEGERLIBRARY_BIGINTEGER_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x1BE60E10)
#define BIGINTEGERLIBRARY_BIGINTEGER_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x1BE65160)
#define BIGINTEGERLIBRARY_BIGINTEGER_OP_UNARYNEGATION_OFFSET UNITYSDK_OFFSET(0x1BE62C90)
#define BIGINTEGERLIBRARY_BIGINTEGER_PARSE_OFFSET UNITYSDK_OFFSET(0x1BE615D0)
#define BIGINTEGERLIBRARY_BIGINTEGER_SMALLEROREQUAL_OFFSET UNITYSDK_OFFSET(0x1BE61EC0)
#define BIGINTEGERLIBRARY_BIGINTEGER_SMALLER_OFFSET UNITYSDK_OFFSET(0x1BE61DC0)
#define BIGINTEGERLIBRARY_BIGINTEGER_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x1BE63090)
#define BIGINTEGERLIBRARY_BIGINTEGER_SUBTRACT_OFFSET UNITYSDK_OFFSET(0x1BE62CF0)
#define BIGINTEGERLIBRARY_BIGINTEGER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1BE61230)
#define BIGINTEGERLIBRARY_BIGINTEGER_TRIAL_OFFSET UNITYSDK_OFFSET(0x1BE651C0)
#define BIGINTEGERLIBRARY_BIGINTEGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BE65980)
#define BIGINTEGERLIBRARY_BIGINTEGER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1BE60570)
#define BIGINTEGERLIBRARY_BIGINTEGER__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1BE60670)
#define BIGINTEGERLIBRARY_BIGINTEGER__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1BE60820)
#define BIGINTEGERLIBRARY_BIGINTEGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE60350)

namespace BigIntegerLibrary
{
	inline static constexpr unsigned int BigInteger_TypeDefinitionIndex = 19476;

	class BigInteger : public ::System::Object
	{
	public:
		static ::BigIntegerLibrary::BigInteger** StaticGet_One()
		{
			return (::BigIntegerLibrary::BigInteger**)Il2CppClass::FromTypeDefinitionIndex(BigInteger_TypeDefinitionIndex)->GetStaticField(0x8AD0);
		}
		static ::BigIntegerLibrary::BigInteger** StaticGet_Ten()
		{
			return (::BigIntegerLibrary::BigInteger**)Il2CppClass::FromTypeDefinitionIndex(BigInteger_TypeDefinitionIndex)->GetStaticField(0x8AD8);
		}
		static ::BigIntegerLibrary::BigInteger** StaticGet_Two()
		{
			return (::BigIntegerLibrary::BigInteger**)Il2CppClass::FromTypeDefinitionIndex(BigInteger_TypeDefinitionIndex)->GetStaticField(0x8AE0);
		}
		static ::BigIntegerLibrary::BigInteger** StaticGet_Zero()
		{
			return (::BigIntegerLibrary::BigInteger**)Il2CppClass::FromTypeDefinitionIndex(BigInteger_TypeDefinitionIndex)->GetStaticField(0x8AE8);
		}
		::BigIntegerLibrary::BigInteger_DigitContainer* digits; // 0x10
		::System::Int32 size; // 0x18
		::BigIntegerLibrary::Sign sign; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BIGINTEGER__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Int64 n)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BIGINTEGER__CTOR_1_OFFSET))(this, n);
		}

		::System::Void _ctor_2(::BigIntegerLibrary::BigInteger* n)
		{
			return ((::System::Void(*)(::PVOID, ::BigIntegerLibrary::BigInteger*))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BIGINTEGER__CTOR_2_OFFSET))(this, n);
		}

		::System::Void _ctor_3(::System::String* numberString)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BIGINTEGER__CTOR_3_OFFSET))(this, numberString);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BIGINTEGER__CCTOR_OFFSET))();
		}

		::System::Boolean Equals(::BigIntegerLibrary::BigInteger* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::BigIntegerLibrary::BigInteger*))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BIGINTEGER_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* o)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BIGINTEGER_EQUALS_1_OFFSET))(this, o);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BIGINTEGER_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BIGINTEGER_TOSTRING_OFFSET))(this);
		}

		static ::BigIntegerLibrary::BigInteger* Parse(::System::String* str)
		{
			return ((::BigIntegerLibrary::BigInteger*(*)(::System::String*))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BIGINTEGER_PARSE_OFFSET))(str);
		}

		::System::Int32 CompareTo(::BigIntegerLibrary::BigInteger* other)
		{
			return ((::System::Int32(*)(::PVOID, ::BigIntegerLibrary::BigInteger*))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BIGINTEGER_COMPARETO_OFFSET))(this, other);
		}

		::System::Int32 CompareTo_1(::System::Object* obj)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BIGINTEGER_COMPARETO_1_OFFSET))(this, obj);
		}

		static ::BigIntegerLibrary::BigInteger* Opposite(::BigIntegerLibrary::BigInteger* n)
		{
			return ((::BigIntegerLibrary::BigInteger*(*)(::BigIntegerLibrary::BigInteger*))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BIGINTEGER_OPPOSITE_OFFSET))(n);
		}

		static ::System::Boolean Greater(::BigIntegerLibrary::BigInteger* a, ::BigIntegerLibrary::BigInteger* b)
		{
			return ((::System::Boolean(*)(::BigIntegerLibrary::BigInteger*, ::BigIntegerLibrary::BigInteger*))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BIGINTEGER_GREATER_OFFSET))(a, b);
		}

		static ::System::Boolean GreaterOrEqual(::BigIntegerLibrary::BigInteger* a, ::BigIntegerLibrary::BigInteger* b)
		{
			return ((::System::Boolean(*)(::BigIntegerLibrary::BigInteger*, ::BigIntegerLibrary::BigInteger*))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BIGINTEGER_GREATEROREQUAL_OFFSET))(a, b);
		}

		static ::System::Boolean Smaller(::BigIntegerLibrary::BigInteger* a, ::BigIntegerLibrary::BigInteger* b)
		{
			return ((::System::Boolean(*)(::BigIntegerLibrary::BigInteger*, ::BigIntegerLibrary::BigInteger*))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BIGINTEGER_SMALLER_OFFSET))(a, b);
		}

		static ::System::Boolean SmallerOrEqual(::BigIntegerLibrary::BigInteger* a, ::BigIntegerLibrary::BigInteger* b)
		{
			return ((::System::Boolean(*)(::BigIntegerLibrary::BigInteger*, ::BigIntegerLibrary::BigInteger*))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BIGINTEGER_SMALLEROREQUAL_OFFSET))(a, b);
		}

		static ::BigIntegerLibrary::BigInteger* Abs(::BigIntegerLibrary::BigInteger* n)
		{
			return ((::BigIntegerLibrary::BigInteger*(*)(::BigIntegerLibrary::BigInteger*))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BIGINTEGER_ABS_OFFSET))(n);
		}

		static ::BigIntegerLibrary::BigInteger* Addition(::BigIntegerLibrary::BigInteger* a, ::BigIntegerLibrary::BigInteger* b)
		{
			return ((::BigIntegerLibrary::BigInteger*(*)(::BigIntegerLibrary::BigInteger*, ::BigIntegerLibrary::BigInteger*))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BIGINTEGER_ADDITION_OFFSET))(a, b);
		}

		static ::BigIntegerLibrary::BigInteger* Subtraction(::BigIntegerLibrary::BigInteger* a, ::BigIntegerLibrary::BigInteger* b)
		{
			return ((::BigIntegerLibrary::BigInteger*(*)(::BigIntegerLibrary::BigInteger*, ::BigIntegerLibrary::BigInteger*))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BIGINTEGER_SUBTRACTION_OFFSET))(a, b);
		}

		static ::BigIntegerLibrary::BigInteger* Multiplication(::BigIntegerLibrary::BigInteger* a, ::BigIntegerLibrary::BigInteger* b)
		{
			return ((::BigIntegerLibrary::BigInteger*(*)(::BigIntegerLibrary::BigInteger*, ::BigIntegerLibrary::BigInteger*))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BIGINTEGER_MULTIPLICATION_OFFSET))(a, b);
		}

		static ::BigIntegerLibrary::BigInteger* Division(::BigIntegerLibrary::BigInteger* a, ::BigIntegerLibrary::BigInteger* b)
		{
			return ((::BigIntegerLibrary::BigInteger*(*)(::BigIntegerLibrary::BigInteger*, ::BigIntegerLibrary::BigInteger*))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BIGINTEGER_DIVISION_OFFSET))(a, b);
		}

		static ::BigIntegerLibrary::BigInteger* Modulo(::BigIntegerLibrary::BigInteger* a, ::BigIntegerLibrary::BigInteger* b)
		{
			return ((::BigIntegerLibrary::BigInteger*(*)(::BigIntegerLibrary::BigInteger*, ::BigIntegerLibrary::BigInteger*))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BIGINTEGER_MODULO_OFFSET))(a, b);
		}

		static ::BigIntegerLibrary::BigInteger* op_Implicit(::System::Int64 n)
		{
			return ((::BigIntegerLibrary::BigInteger*(*)(::System::Int64))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BIGINTEGER_OP_IMPLICIT_OFFSET))(n);
		}

		static ::System::Boolean op_Equality(::BigIntegerLibrary::BigInteger* a, ::BigIntegerLibrary::BigInteger* b)
		{
			return ((::System::Boolean(*)(::BigIntegerLibrary::BigInteger*, ::BigIntegerLibrary::BigInteger*))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BIGINTEGER_OP_EQUALITY_OFFSET))(a, b);
		}

		static ::System::Boolean op_Inequality(::BigIntegerLibrary::BigInteger* a, ::BigIntegerLibrary::BigInteger* b)
		{
			return ((::System::Boolean(*)(::BigIntegerLibrary::BigInteger*, ::BigIntegerLibrary::BigInteger*))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BIGINTEGER_OP_INEQUALITY_OFFSET))(a, b);
		}

		static ::System::Boolean op_LessThan(::BigIntegerLibrary::BigInteger* a, ::BigIntegerLibrary::BigInteger* b)
		{
			return ((::System::Boolean(*)(::BigIntegerLibrary::BigInteger*, ::BigIntegerLibrary::BigInteger*))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BIGINTEGER_OP_LESSTHAN_OFFSET))(a, b);
		}

		static ::System::Boolean op_GreaterThanOrEqual(::BigIntegerLibrary::BigInteger* a, ::BigIntegerLibrary::BigInteger* b)
		{
			return ((::System::Boolean(*)(::BigIntegerLibrary::BigInteger*, ::BigIntegerLibrary::BigInteger*))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BIGINTEGER_OP_GREATERTHANOREQUAL_OFFSET))(a, b);
		}

		static ::System::Boolean op_LessThanOrEqual(::BigIntegerLibrary::BigInteger* a, ::BigIntegerLibrary::BigInteger* b)
		{
			return ((::System::Boolean(*)(::BigIntegerLibrary::BigInteger*, ::BigIntegerLibrary::BigInteger*))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BIGINTEGER_OP_LESSTHANOREQUAL_OFFSET))(a, b);
		}

		static ::BigIntegerLibrary::BigInteger* op_UnaryNegation(::BigIntegerLibrary::BigInteger* n)
		{
			return ((::BigIntegerLibrary::BigInteger*(*)(::BigIntegerLibrary::BigInteger*))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BIGINTEGER_OP_UNARYNEGATION_OFFSET))(n);
		}

		static ::BigIntegerLibrary::BigInteger* op_Addition(::BigIntegerLibrary::BigInteger* a, ::BigIntegerLibrary::BigInteger* b)
		{
			return ((::BigIntegerLibrary::BigInteger*(*)(::BigIntegerLibrary::BigInteger*, ::BigIntegerLibrary::BigInteger*))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BIGINTEGER_OP_ADDITION_OFFSET))(a, b);
		}

		static ::BigIntegerLibrary::BigInteger* op_Subtraction(::BigIntegerLibrary::BigInteger* a, ::BigIntegerLibrary::BigInteger* b)
		{
			return ((::BigIntegerLibrary::BigInteger*(*)(::BigIntegerLibrary::BigInteger*, ::BigIntegerLibrary::BigInteger*))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BIGINTEGER_OP_SUBTRACTION_OFFSET))(a, b);
		}

		static ::BigIntegerLibrary::BigInteger* op_Multiply(::BigIntegerLibrary::BigInteger* a, ::BigIntegerLibrary::BigInteger* b)
		{
			return ((::BigIntegerLibrary::BigInteger*(*)(::BigIntegerLibrary::BigInteger*, ::BigIntegerLibrary::BigInteger*))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BIGINTEGER_OP_MULTIPLY_OFFSET))(a, b);
		}

		static ::BigIntegerLibrary::BigInteger* op_Division(::BigIntegerLibrary::BigInteger* a, ::BigIntegerLibrary::BigInteger* b)
		{
			return ((::BigIntegerLibrary::BigInteger*(*)(::BigIntegerLibrary::BigInteger*, ::BigIntegerLibrary::BigInteger*))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BIGINTEGER_OP_DIVISION_OFFSET))(a, b);
		}

		static ::BigIntegerLibrary::BigInteger* Add(::BigIntegerLibrary::BigInteger* a, ::BigIntegerLibrary::BigInteger* b)
		{
			return ((::BigIntegerLibrary::BigInteger*(*)(::BigIntegerLibrary::BigInteger*, ::BigIntegerLibrary::BigInteger*))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BIGINTEGER_ADD_OFFSET))(a, b);
		}

		static ::BigIntegerLibrary::BigInteger* Subtract(::BigIntegerLibrary::BigInteger* a, ::BigIntegerLibrary::BigInteger* b)
		{
			return ((::BigIntegerLibrary::BigInteger*(*)(::BigIntegerLibrary::BigInteger*, ::BigIntegerLibrary::BigInteger*))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BIGINTEGER_SUBTRACT_OFFSET))(a, b);
		}

		static ::BigIntegerLibrary::BigInteger* Multiply(::BigIntegerLibrary::BigInteger* a, ::BigIntegerLibrary::BigInteger* b)
		{
			return ((::BigIntegerLibrary::BigInteger*(*)(::BigIntegerLibrary::BigInteger*, ::BigIntegerLibrary::BigInteger*))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BIGINTEGER_MULTIPLY_OFFSET))(a, b);
		}

		static ::BigIntegerLibrary::BigInteger* DivideByOneDigitNumber(::BigIntegerLibrary::BigInteger* a, ::System::Int64 b)
		{
			return ((::BigIntegerLibrary::BigInteger*(*)(::BigIntegerLibrary::BigInteger*, ::System::Int64))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BIGINTEGER_DIVIDEBYONEDIGITNUMBER_OFFSET))(a, b);
		}

		static ::BigIntegerLibrary::BigInteger* DivideByBigNumber(::BigIntegerLibrary::BigInteger* a, ::BigIntegerLibrary::BigInteger* b)
		{
			return ((::BigIntegerLibrary::BigInteger*(*)(::BigIntegerLibrary::BigInteger*, ::BigIntegerLibrary::BigInteger*))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BIGINTEGER_DIVIDEBYBIGNUMBER_OFFSET))(a, b);
		}

		static ::System::Boolean DivideByBigNumberSmaller(::BigIntegerLibrary::BigInteger* r, ::BigIntegerLibrary::BigInteger* dq, ::System::Int32 k, ::System::Int32 m)
		{
			return ((::System::Boolean(*)(::BigIntegerLibrary::BigInteger*, ::BigIntegerLibrary::BigInteger*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BIGINTEGER_DIVIDEBYBIGNUMBERSMALLER_OFFSET))(r, dq, k, m);
		}

		static ::System::Void Difference(::BigIntegerLibrary::BigInteger* r, ::BigIntegerLibrary::BigInteger* dq, ::System::Int32 k, ::System::Int32 m)
		{
			return ((::System::Void(*)(::BigIntegerLibrary::BigInteger*, ::BigIntegerLibrary::BigInteger*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BIGINTEGER_DIFFERENCE_OFFSET))(r, dq, k, m);
		}

		static ::System::Int64 Trial(::BigIntegerLibrary::BigInteger* r, ::BigIntegerLibrary::BigInteger* d, ::System::Int32 k, ::System::Int32 m)
		{
			return ((::System::Int64(*)(::BigIntegerLibrary::BigInteger*, ::BigIntegerLibrary::BigInteger*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BIGINTEGER_TRIAL_OFFSET))(r, d, k, m);
		}
	};
}
