#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BigIntegerLibrary/Sign.h"
#include "unitysdk/System/Object.h"

namespace BigIntegerLibrary { class Base10BigInteger_DigitContainer; }
namespace System { class String; }

#define BIGINTEGERLIBRARY_BASE10BIGINTEGER_ABS_OFFSET UNITYSDK_OFFSET(0x1B52DF30)
#define BIGINTEGERLIBRARY_BASE10BIGINTEGER_ADDITION_OFFSET UNITYSDK_OFFSET(0x1B52DF90)
#define BIGINTEGERLIBRARY_BASE10BIGINTEGER_ADD_OFFSET UNITYSDK_OFFSET(0x1B52E8C0)
#define BIGINTEGERLIBRARY_BASE10BIGINTEGER_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1B52D6D0)
#define BIGINTEGERLIBRARY_BASE10BIGINTEGER_EQUALS_OFFSET UNITYSDK_OFFSET(0x1B52D520)
#define BIGINTEGERLIBRARY_BASE10BIGINTEGER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1B52D730)
#define BIGINTEGERLIBRARY_BASE10BIGINTEGER_GREATEROREQUAL_OFFSET UNITYSDK_OFFSET(0x1B52DE10)
#define BIGINTEGERLIBRARY_BASE10BIGINTEGER_GREATER_OFFSET UNITYSDK_OFFSET(0x1B52DAD0)
#define BIGINTEGERLIBRARY_BASE10BIGINTEGER_MULTIPLICATION_OFFSET UNITYSDK_OFFSET(0x1B52EFA0)
#define BIGINTEGERLIBRARY_BASE10BIGINTEGER_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x1B52F250)
#define BIGINTEGERLIBRARY_BASE10BIGINTEGER_OPPOSITE_OFFSET UNITYSDK_OFFSET(0x1B52D9C0)
#define BIGINTEGERLIBRARY_BASE10BIGINTEGER_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x1B52F7F0)
#define BIGINTEGERLIBRARY_BASE10BIGINTEGER_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1B52F210)
#define BIGINTEGERLIBRARY_BASE10BIGINTEGER_OP_GREATERTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0x1B52E7B0)
#define BIGINTEGERLIBRARY_BASE10BIGINTEGER_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1B52F7A0)
#define BIGINTEGERLIBRARY_BASE10BIGINTEGER_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1B52DA90)
#define BIGINTEGERLIBRARY_BASE10BIGINTEGER_OP_LESSTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0x1B52EBB0)
#define BIGINTEGERLIBRARY_BASE10BIGINTEGER_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x1B52F850)
#define BIGINTEGERLIBRARY_BASE10BIGINTEGER_OP_UNARYNEGATION_OFFSET UNITYSDK_OFFSET(0x1B52EC60)
#define BIGINTEGERLIBRARY_BASE10BIGINTEGER_SET_NUMBERSIGN_OFFSET UNITYSDK_OFFSET(0x1B52D0A0)
#define BIGINTEGERLIBRARY_BASE10BIGINTEGER_SMALLEROREQUAL_OFFSET UNITYSDK_OFFSET(0x1B52DEC0)
#define BIGINTEGERLIBRARY_BASE10BIGINTEGER_SUBTRACT_OFFSET UNITYSDK_OFFSET(0x1B52ECC0)
#define BIGINTEGERLIBRARY_BASE10BIGINTEGER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1B52D7C0)
#define BIGINTEGERLIBRARY_BASE10BIGINTEGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1B52F8B0)
#define BIGINTEGERLIBRARY_BASE10BIGINTEGER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1B52D260)
#define BIGINTEGERLIBRARY_BASE10BIGINTEGER__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1B52D390)
#define BIGINTEGERLIBRARY_BASE10BIGINTEGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B52D0B0)

namespace BigIntegerLibrary
{
	inline static constexpr unsigned int Base10BigInteger_TypeDefinitionIndex = 6496;

	class Base10BigInteger : public ::System::Object
	{
	public:
		static ::BigIntegerLibrary::Base10BigInteger** StaticGet_One()
		{
			return (::BigIntegerLibrary::Base10BigInteger**)Il2CppClass::FromTypeDefinitionIndex(Base10BigInteger_TypeDefinitionIndex)->GetStaticField(0x2F90);
		}
		static ::BigIntegerLibrary::Base10BigInteger** StaticGet_Zero()
		{
			return (::BigIntegerLibrary::Base10BigInteger**)Il2CppClass::FromTypeDefinitionIndex(Base10BigInteger_TypeDefinitionIndex)->GetStaticField(0x2F98);
		}
		::BigIntegerLibrary::Base10BigInteger_DigitContainer* digits; // 0x10
		::BigIntegerLibrary::Sign sign; // 0x18
		::System::Int32 size; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BASE10BIGINTEGER__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Int64 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BASE10BIGINTEGER__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::BigIntegerLibrary::Base10BigInteger* a1)
		{
			return ((::System::Void(*)(::PVOID, ::BigIntegerLibrary::Base10BigInteger*))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BASE10BIGINTEGER__CTOR_2_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BASE10BIGINTEGER__CCTOR_OFFSET))();
		}

		::System::Void set_NumberSign(::BigIntegerLibrary::Sign a1)
		{
			return ((::System::Void(*)(::PVOID, ::BigIntegerLibrary::Sign))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BASE10BIGINTEGER_SET_NUMBERSIGN_OFFSET))(this, a1);
		}

		::System::Boolean Equals(::BigIntegerLibrary::Base10BigInteger* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::BigIntegerLibrary::Base10BigInteger*))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BASE10BIGINTEGER_EQUALS_OFFSET))(this, a1);
		}

		::System::Boolean Equals_1(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BASE10BIGINTEGER_EQUALS_1_OFFSET))(this, a1);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BASE10BIGINTEGER_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BASE10BIGINTEGER_TOSTRING_OFFSET))(this);
		}

		static ::BigIntegerLibrary::Base10BigInteger* Opposite(::BigIntegerLibrary::Base10BigInteger* a1)
		{
			return ((::BigIntegerLibrary::Base10BigInteger*(*)(::BigIntegerLibrary::Base10BigInteger*))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BASE10BIGINTEGER_OPPOSITE_OFFSET))(a1);
		}

		static ::System::Boolean Greater(::BigIntegerLibrary::Base10BigInteger* a1, ::BigIntegerLibrary::Base10BigInteger* a2)
		{
			return ((::System::Boolean(*)(::BigIntegerLibrary::Base10BigInteger*, ::BigIntegerLibrary::Base10BigInteger*))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BASE10BIGINTEGER_GREATER_OFFSET))(a1, a2);
		}

		static ::System::Boolean GreaterOrEqual(::BigIntegerLibrary::Base10BigInteger* a1, ::BigIntegerLibrary::Base10BigInteger* a2)
		{
			return ((::System::Boolean(*)(::BigIntegerLibrary::Base10BigInteger*, ::BigIntegerLibrary::Base10BigInteger*))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BASE10BIGINTEGER_GREATEROREQUAL_OFFSET))(a1, a2);
		}

		static ::System::Boolean SmallerOrEqual(::BigIntegerLibrary::Base10BigInteger* a1, ::BigIntegerLibrary::Base10BigInteger* a2)
		{
			return ((::System::Boolean(*)(::BigIntegerLibrary::Base10BigInteger*, ::BigIntegerLibrary::Base10BigInteger*))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BASE10BIGINTEGER_SMALLEROREQUAL_OFFSET))(a1, a2);
		}

		static ::BigIntegerLibrary::Base10BigInteger* Abs(::BigIntegerLibrary::Base10BigInteger* a1)
		{
			return ((::BigIntegerLibrary::Base10BigInteger*(*)(::BigIntegerLibrary::Base10BigInteger*))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BASE10BIGINTEGER_ABS_OFFSET))(a1);
		}

		static ::BigIntegerLibrary::Base10BigInteger* Addition(::BigIntegerLibrary::Base10BigInteger* a1, ::BigIntegerLibrary::Base10BigInteger* a2)
		{
			return ((::BigIntegerLibrary::Base10BigInteger*(*)(::BigIntegerLibrary::Base10BigInteger*, ::BigIntegerLibrary::Base10BigInteger*))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BASE10BIGINTEGER_ADDITION_OFFSET))(a1, a2);
		}

		static ::BigIntegerLibrary::Base10BigInteger* Multiplication(::BigIntegerLibrary::Base10BigInteger* a1, ::BigIntegerLibrary::Base10BigInteger* a2)
		{
			return ((::BigIntegerLibrary::Base10BigInteger*(*)(::BigIntegerLibrary::Base10BigInteger*, ::BigIntegerLibrary::Base10BigInteger*))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BASE10BIGINTEGER_MULTIPLICATION_OFFSET))(a1, a2);
		}

		static ::BigIntegerLibrary::Base10BigInteger* op_Implicit(::System::Int64 a1)
		{
			return ((::BigIntegerLibrary::Base10BigInteger*(*)(::System::Int64))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BASE10BIGINTEGER_OP_IMPLICIT_OFFSET))(a1);
		}

		static ::System::Boolean op_Equality(::BigIntegerLibrary::Base10BigInteger* a1, ::BigIntegerLibrary::Base10BigInteger* a2)
		{
			return ((::System::Boolean(*)(::BigIntegerLibrary::Base10BigInteger*, ::BigIntegerLibrary::Base10BigInteger*))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BASE10BIGINTEGER_OP_EQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Inequality(::BigIntegerLibrary::Base10BigInteger* a1, ::BigIntegerLibrary::Base10BigInteger* a2)
		{
			return ((::System::Boolean(*)(::BigIntegerLibrary::Base10BigInteger*, ::BigIntegerLibrary::Base10BigInteger*))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BASE10BIGINTEGER_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_GreaterThanOrEqual(::BigIntegerLibrary::Base10BigInteger* a1, ::BigIntegerLibrary::Base10BigInteger* a2)
		{
			return ((::System::Boolean(*)(::BigIntegerLibrary::Base10BigInteger*, ::BigIntegerLibrary::Base10BigInteger*))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BASE10BIGINTEGER_OP_GREATERTHANOREQUAL_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_LessThanOrEqual(::BigIntegerLibrary::Base10BigInteger* a1, ::BigIntegerLibrary::Base10BigInteger* a2)
		{
			return ((::System::Boolean(*)(::BigIntegerLibrary::Base10BigInteger*, ::BigIntegerLibrary::Base10BigInteger*))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BASE10BIGINTEGER_OP_LESSTHANOREQUAL_OFFSET))(a1, a2);
		}

		static ::BigIntegerLibrary::Base10BigInteger* op_UnaryNegation(::BigIntegerLibrary::Base10BigInteger* a1)
		{
			return ((::BigIntegerLibrary::Base10BigInteger*(*)(::BigIntegerLibrary::Base10BigInteger*))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BASE10BIGINTEGER_OP_UNARYNEGATION_OFFSET))(a1);
		}

		static ::BigIntegerLibrary::Base10BigInteger* op_Addition(::BigIntegerLibrary::Base10BigInteger* a1, ::BigIntegerLibrary::Base10BigInteger* a2)
		{
			return ((::BigIntegerLibrary::Base10BigInteger*(*)(::BigIntegerLibrary::Base10BigInteger*, ::BigIntegerLibrary::Base10BigInteger*))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BASE10BIGINTEGER_OP_ADDITION_OFFSET))(a1, a2);
		}

		static ::BigIntegerLibrary::Base10BigInteger* op_Multiply(::BigIntegerLibrary::Base10BigInteger* a1, ::BigIntegerLibrary::Base10BigInteger* a2)
		{
			return ((::BigIntegerLibrary::Base10BigInteger*(*)(::BigIntegerLibrary::Base10BigInteger*, ::BigIntegerLibrary::Base10BigInteger*))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BASE10BIGINTEGER_OP_MULTIPLY_OFFSET))(a1, a2);
		}

		static ::BigIntegerLibrary::Base10BigInteger* Add(::BigIntegerLibrary::Base10BigInteger* a1, ::BigIntegerLibrary::Base10BigInteger* a2)
		{
			return ((::BigIntegerLibrary::Base10BigInteger*(*)(::BigIntegerLibrary::Base10BigInteger*, ::BigIntegerLibrary::Base10BigInteger*))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BASE10BIGINTEGER_ADD_OFFSET))(a1, a2);
		}

		static ::BigIntegerLibrary::Base10BigInteger* Subtract(::BigIntegerLibrary::Base10BigInteger* a1, ::BigIntegerLibrary::Base10BigInteger* a2)
		{
			return ((::BigIntegerLibrary::Base10BigInteger*(*)(::BigIntegerLibrary::Base10BigInteger*, ::BigIntegerLibrary::Base10BigInteger*))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BASE10BIGINTEGER_SUBTRACT_OFFSET))(a1, a2);
		}

		static ::BigIntegerLibrary::Base10BigInteger* Multiply(::BigIntegerLibrary::Base10BigInteger* a1, ::BigIntegerLibrary::Base10BigInteger* a2)
		{
			return ((::BigIntegerLibrary::Base10BigInteger*(*)(::BigIntegerLibrary::Base10BigInteger*, ::BigIntegerLibrary::Base10BigInteger*))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BASE10BIGINTEGER_MULTIPLY_OFFSET))(a1, a2);
		}
	};
}
