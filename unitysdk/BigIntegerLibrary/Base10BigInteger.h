#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/BigIntegerLibrary/Sign.h"
#include "unitysdk/System/Object.h"

namespace BigIntegerLibrary { class Base10BigInteger_DigitContainer; }
namespace System { class String; }

#define BIGINTEGERLIBRARY_BASE10BIGINTEGER_ABS_OFFSET UNITYSDK_OFFSET(0x1BE5E850)
#define BIGINTEGERLIBRARY_BASE10BIGINTEGER_ADDITION_OFFSET UNITYSDK_OFFSET(0x1BE5E8B0)
#define BIGINTEGERLIBRARY_BASE10BIGINTEGER_ADD_OFFSET UNITYSDK_OFFSET(0x1BE5F1E0)
#define BIGINTEGERLIBRARY_BASE10BIGINTEGER_EQUALS_1_OFFSET UNITYSDK_OFFSET(0x1BE5DEE0)
#define BIGINTEGERLIBRARY_BASE10BIGINTEGER_EQUALS_OFFSET UNITYSDK_OFFSET(0x1BE5DCE0)
#define BIGINTEGERLIBRARY_BASE10BIGINTEGER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1BE5DF40)
#define BIGINTEGERLIBRARY_BASE10BIGINTEGER_GREATEROREQUAL_OFFSET UNITYSDK_OFFSET(0x1BE5E730)
#define BIGINTEGERLIBRARY_BASE10BIGINTEGER_GREATER_OFFSET UNITYSDK_OFFSET(0x1BE5E320)
#define BIGINTEGERLIBRARY_BASE10BIGINTEGER_MULTIPLICATION_OFFSET UNITYSDK_OFFSET(0x1BE5F9C0)
#define BIGINTEGERLIBRARY_BASE10BIGINTEGER_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x1BE5FC70)
#define BIGINTEGERLIBRARY_BASE10BIGINTEGER_OPPOSITE_OFFSET UNITYSDK_OFFSET(0x1BE5E210)
#define BIGINTEGERLIBRARY_BASE10BIGINTEGER_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x1BE60180)
#define BIGINTEGERLIBRARY_BASE10BIGINTEGER_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1BE5FC30)
#define BIGINTEGERLIBRARY_BASE10BIGINTEGER_OP_GREATERTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0x1BE5F0D0)
#define BIGINTEGERLIBRARY_BASE10BIGINTEGER_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1BE60130)
#define BIGINTEGERLIBRARY_BASE10BIGINTEGER_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1BE5E2E0)
#define BIGINTEGERLIBRARY_BASE10BIGINTEGER_OP_LESSTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0x1BE5F530)
#define BIGINTEGERLIBRARY_BASE10BIGINTEGER_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x1BE601E0)
#define BIGINTEGERLIBRARY_BASE10BIGINTEGER_OP_UNARYNEGATION_OFFSET UNITYSDK_OFFSET(0x1BE5F5E0)
#define BIGINTEGERLIBRARY_BASE10BIGINTEGER_SET_NUMBERSIGN_OFFSET UNITYSDK_OFFSET(0x1BE5D7E0)
#define BIGINTEGERLIBRARY_BASE10BIGINTEGER_SMALLEROREQUAL_OFFSET UNITYSDK_OFFSET(0x1BE5E7E0)
#define BIGINTEGERLIBRARY_BASE10BIGINTEGER_SUBTRACT_OFFSET UNITYSDK_OFFSET(0x1BE5F640)
#define BIGINTEGERLIBRARY_BASE10BIGINTEGER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1BE5DFF0)
#define BIGINTEGERLIBRARY_BASE10BIGINTEGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BE60240)
#define BIGINTEGERLIBRARY_BASE10BIGINTEGER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1BE5DA10)
#define BIGINTEGERLIBRARY_BASE10BIGINTEGER__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1BE5DB30)
#define BIGINTEGERLIBRARY_BASE10BIGINTEGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BE5D7F0)

namespace BigIntegerLibrary
{
	inline static constexpr unsigned int Base10BigInteger_TypeDefinitionIndex = 19534;

	class Base10BigInteger : public ::System::Object
	{
	public:
		static ::BigIntegerLibrary::Base10BigInteger** StaticGet_One()
		{
			return (::BigIntegerLibrary::Base10BigInteger**)Il2CppClass::FromTypeDefinitionIndex(Base10BigInteger_TypeDefinitionIndex)->GetStaticField(0x8AC0);
		}
		static ::BigIntegerLibrary::Base10BigInteger** StaticGet_Zero()
		{
			return (::BigIntegerLibrary::Base10BigInteger**)Il2CppClass::FromTypeDefinitionIndex(Base10BigInteger_TypeDefinitionIndex)->GetStaticField(0x8AC8);
		}
		::BigIntegerLibrary::Base10BigInteger_DigitContainer* digits; // 0x10
		::System::Int32 size; // 0x18
		::BigIntegerLibrary::Sign sign; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BASE10BIGINTEGER__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Int64 n)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int64))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BASE10BIGINTEGER__CTOR_1_OFFSET))(this, n);
		}

		::System::Void _ctor_2(::BigIntegerLibrary::Base10BigInteger* n)
		{
			return ((::System::Void(*)(::PVOID, ::BigIntegerLibrary::Base10BigInteger*))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BASE10BIGINTEGER__CTOR_2_OFFSET))(this, n);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BASE10BIGINTEGER__CCTOR_OFFSET))();
		}

		::System::Void set_NumberSign(::BigIntegerLibrary::Sign value)
		{
			return ((::System::Void(*)(::PVOID, ::BigIntegerLibrary::Sign))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BASE10BIGINTEGER_SET_NUMBERSIGN_OFFSET))(this, value);
		}

		::System::Boolean Equals(::BigIntegerLibrary::Base10BigInteger* other)
		{
			return ((::System::Boolean(*)(::PVOID, ::BigIntegerLibrary::Base10BigInteger*))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BASE10BIGINTEGER_EQUALS_OFFSET))(this, other);
		}

		::System::Boolean Equals_1(::System::Object* o)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BASE10BIGINTEGER_EQUALS_1_OFFSET))(this, o);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BASE10BIGINTEGER_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BASE10BIGINTEGER_TOSTRING_OFFSET))(this);
		}

		static ::BigIntegerLibrary::Base10BigInteger* Opposite(::BigIntegerLibrary::Base10BigInteger* n)
		{
			return ((::BigIntegerLibrary::Base10BigInteger*(*)(::BigIntegerLibrary::Base10BigInteger*))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BASE10BIGINTEGER_OPPOSITE_OFFSET))(n);
		}

		static ::System::Boolean Greater(::BigIntegerLibrary::Base10BigInteger* a, ::BigIntegerLibrary::Base10BigInteger* b)
		{
			return ((::System::Boolean(*)(::BigIntegerLibrary::Base10BigInteger*, ::BigIntegerLibrary::Base10BigInteger*))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BASE10BIGINTEGER_GREATER_OFFSET))(a, b);
		}

		static ::System::Boolean GreaterOrEqual(::BigIntegerLibrary::Base10BigInteger* a, ::BigIntegerLibrary::Base10BigInteger* b)
		{
			return ((::System::Boolean(*)(::BigIntegerLibrary::Base10BigInteger*, ::BigIntegerLibrary::Base10BigInteger*))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BASE10BIGINTEGER_GREATEROREQUAL_OFFSET))(a, b);
		}

		static ::System::Boolean SmallerOrEqual(::BigIntegerLibrary::Base10BigInteger* a, ::BigIntegerLibrary::Base10BigInteger* b)
		{
			return ((::System::Boolean(*)(::BigIntegerLibrary::Base10BigInteger*, ::BigIntegerLibrary::Base10BigInteger*))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BASE10BIGINTEGER_SMALLEROREQUAL_OFFSET))(a, b);
		}

		static ::BigIntegerLibrary::Base10BigInteger* Abs(::BigIntegerLibrary::Base10BigInteger* n)
		{
			return ((::BigIntegerLibrary::Base10BigInteger*(*)(::BigIntegerLibrary::Base10BigInteger*))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BASE10BIGINTEGER_ABS_OFFSET))(n);
		}

		static ::BigIntegerLibrary::Base10BigInteger* Addition(::BigIntegerLibrary::Base10BigInteger* a, ::BigIntegerLibrary::Base10BigInteger* b)
		{
			return ((::BigIntegerLibrary::Base10BigInteger*(*)(::BigIntegerLibrary::Base10BigInteger*, ::BigIntegerLibrary::Base10BigInteger*))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BASE10BIGINTEGER_ADDITION_OFFSET))(a, b);
		}

		static ::BigIntegerLibrary::Base10BigInteger* Multiplication(::BigIntegerLibrary::Base10BigInteger* a, ::BigIntegerLibrary::Base10BigInteger* b)
		{
			return ((::BigIntegerLibrary::Base10BigInteger*(*)(::BigIntegerLibrary::Base10BigInteger*, ::BigIntegerLibrary::Base10BigInteger*))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BASE10BIGINTEGER_MULTIPLICATION_OFFSET))(a, b);
		}

		static ::BigIntegerLibrary::Base10BigInteger* op_Implicit(::System::Int64 n)
		{
			return ((::BigIntegerLibrary::Base10BigInteger*(*)(::System::Int64))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BASE10BIGINTEGER_OP_IMPLICIT_OFFSET))(n);
		}

		static ::System::Boolean op_Equality(::BigIntegerLibrary::Base10BigInteger* a, ::BigIntegerLibrary::Base10BigInteger* b)
		{
			return ((::System::Boolean(*)(::BigIntegerLibrary::Base10BigInteger*, ::BigIntegerLibrary::Base10BigInteger*))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BASE10BIGINTEGER_OP_EQUALITY_OFFSET))(a, b);
		}

		static ::System::Boolean op_Inequality(::BigIntegerLibrary::Base10BigInteger* a, ::BigIntegerLibrary::Base10BigInteger* b)
		{
			return ((::System::Boolean(*)(::BigIntegerLibrary::Base10BigInteger*, ::BigIntegerLibrary::Base10BigInteger*))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BASE10BIGINTEGER_OP_INEQUALITY_OFFSET))(a, b);
		}

		static ::System::Boolean op_GreaterThanOrEqual(::BigIntegerLibrary::Base10BigInteger* a, ::BigIntegerLibrary::Base10BigInteger* b)
		{
			return ((::System::Boolean(*)(::BigIntegerLibrary::Base10BigInteger*, ::BigIntegerLibrary::Base10BigInteger*))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BASE10BIGINTEGER_OP_GREATERTHANOREQUAL_OFFSET))(a, b);
		}

		static ::System::Boolean op_LessThanOrEqual(::BigIntegerLibrary::Base10BigInteger* a, ::BigIntegerLibrary::Base10BigInteger* b)
		{
			return ((::System::Boolean(*)(::BigIntegerLibrary::Base10BigInteger*, ::BigIntegerLibrary::Base10BigInteger*))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BASE10BIGINTEGER_OP_LESSTHANOREQUAL_OFFSET))(a, b);
		}

		static ::BigIntegerLibrary::Base10BigInteger* op_UnaryNegation(::BigIntegerLibrary::Base10BigInteger* n)
		{
			return ((::BigIntegerLibrary::Base10BigInteger*(*)(::BigIntegerLibrary::Base10BigInteger*))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BASE10BIGINTEGER_OP_UNARYNEGATION_OFFSET))(n);
		}

		static ::BigIntegerLibrary::Base10BigInteger* op_Addition(::BigIntegerLibrary::Base10BigInteger* a, ::BigIntegerLibrary::Base10BigInteger* b)
		{
			return ((::BigIntegerLibrary::Base10BigInteger*(*)(::BigIntegerLibrary::Base10BigInteger*, ::BigIntegerLibrary::Base10BigInteger*))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BASE10BIGINTEGER_OP_ADDITION_OFFSET))(a, b);
		}

		static ::BigIntegerLibrary::Base10BigInteger* op_Multiply(::BigIntegerLibrary::Base10BigInteger* a, ::BigIntegerLibrary::Base10BigInteger* b)
		{
			return ((::BigIntegerLibrary::Base10BigInteger*(*)(::BigIntegerLibrary::Base10BigInteger*, ::BigIntegerLibrary::Base10BigInteger*))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BASE10BIGINTEGER_OP_MULTIPLY_OFFSET))(a, b);
		}

		static ::BigIntegerLibrary::Base10BigInteger* Add(::BigIntegerLibrary::Base10BigInteger* a, ::BigIntegerLibrary::Base10BigInteger* b)
		{
			return ((::BigIntegerLibrary::Base10BigInteger*(*)(::BigIntegerLibrary::Base10BigInteger*, ::BigIntegerLibrary::Base10BigInteger*))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BASE10BIGINTEGER_ADD_OFFSET))(a, b);
		}

		static ::BigIntegerLibrary::Base10BigInteger* Subtract(::BigIntegerLibrary::Base10BigInteger* a, ::BigIntegerLibrary::Base10BigInteger* b)
		{
			return ((::BigIntegerLibrary::Base10BigInteger*(*)(::BigIntegerLibrary::Base10BigInteger*, ::BigIntegerLibrary::Base10BigInteger*))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BASE10BIGINTEGER_SUBTRACT_OFFSET))(a, b);
		}

		static ::BigIntegerLibrary::Base10BigInteger* Multiply(::BigIntegerLibrary::Base10BigInteger* a, ::BigIntegerLibrary::Base10BigInteger* b)
		{
			return ((::BigIntegerLibrary::Base10BigInteger*(*)(::BigIntegerLibrary::Base10BigInteger*, ::BigIntegerLibrary::Base10BigInteger*))((::PBYTE)hIl2Cpp + BIGINTEGERLIBRARY_BASE10BIGINTEGER_MULTIPLY_OFFSET))(a, b);
		}
	};
}
