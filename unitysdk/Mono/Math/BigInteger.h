#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Math/BigInteger_Sign.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Security::Cryptography { class RandomNumberGenerator; }

#define MONO_MATH_BIGINTEGER_BITCOUNT_OFFSET UNITYSDK_OFFSET(0x1775E7B0)
#define MONO_MATH_BIGINTEGER_EQUALS_OFFSET UNITYSDK_OFFSET(0x1775F600)
#define MONO_MATH_BIGINTEGER_GENERATEPSEUDOPRIME_OFFSET UNITYSDK_OFFSET(0x17760160)
#define MONO_MATH_BIGINTEGER_GENERATERANDOM_1_OFFSET UNITYSDK_OFFSET(0x1775E750)
#define MONO_MATH_BIGINTEGER_GENERATERANDOM_OFFSET UNITYSDK_OFFSET(0x1775E5A0)
#define MONO_MATH_BIGINTEGER_GETBYTES_OFFSET UNITYSDK_OFFSET(0x1775EAB0)
#define MONO_MATH_BIGINTEGER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1775F450)
#define MONO_MATH_BIGINTEGER_GET_RNG_OFFSET UNITYSDK_OFFSET(0x1775E4B0)
#define MONO_MATH_BIGINTEGER_INCR2_OFFSET UNITYSDK_OFFSET(0x17760200)
#define MONO_MATH_BIGINTEGER_LOWESTSETBIT_OFFSET UNITYSDK_OFFSET(0x1775EA20)
#define MONO_MATH_BIGINTEGER_MODINVERSE_OFFSET UNITYSDK_OFFSET(0x1775F770)
#define MONO_MATH_BIGINTEGER_NORMALIZE_OFFSET UNITYSDK_OFFSET(0x1775C4E0)
#define MONO_MATH_BIGINTEGER_OP_DIVISION_OFFSET UNITYSDK_OFFSET(0x1775DA70)
#define MONO_MATH_BIGINTEGER_OP_EQUALITY_1_OFFSET UNITYSDK_OFFSET(0x1775EE10)
#define MONO_MATH_BIGINTEGER_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1775C970)
#define MONO_MATH_BIGINTEGER_OP_GREATERTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0x1775EF90)
#define MONO_MATH_BIGINTEGER_OP_GREATERTHAN_OFFSET UNITYSDK_OFFSET(0x1775EF50)
#define MONO_MATH_BIGINTEGER_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x1775C630)
#define MONO_MATH_BIGINTEGER_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1775C5B0)
#define MONO_MATH_BIGINTEGER_OP_INEQUALITY_1_OFFSET UNITYSDK_OFFSET(0x1775EEB0)
#define MONO_MATH_BIGINTEGER_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1775ED40)
#define MONO_MATH_BIGINTEGER_OP_LEFTSHIFT_OFFSET UNITYSDK_OFFSET(0x1775DEA0)
#define MONO_MATH_BIGINTEGER_OP_LESSTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0x1775EFB0)
#define MONO_MATH_BIGINTEGER_OP_LESSTHAN_OFFSET UNITYSDK_OFFSET(0x1775EF70)
#define MONO_MATH_BIGINTEGER_OP_MODULUS_1_OFFSET UNITYSDK_OFFSET(0x1775D070)
#define MONO_MATH_BIGINTEGER_OP_MODULUS_OFFSET UNITYSDK_OFFSET(0x1775CEB0)
#define MONO_MATH_BIGINTEGER_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x1775DAA0)
#define MONO_MATH_BIGINTEGER_OP_RIGHTSHIFT_OFFSET UNITYSDK_OFFSET(0x1775E180)
#define MONO_MATH_BIGINTEGER_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x1775C6E0)
#define MONO_MATH_BIGINTEGER_SETBIT_1_OFFSET UNITYSDK_OFFSET(0x1775E9A0)
#define MONO_MATH_BIGINTEGER_SETBIT_OFFSET UNITYSDK_OFFSET(0x1775E950)
#define MONO_MATH_BIGINTEGER_TESTBIT_OFFSET UNITYSDK_OFFSET(0x1775E8B0)
#define MONO_MATH_BIGINTEGER_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x1775F010)
#define MONO_MATH_BIGINTEGER_TOSTRING_2_OFFSET UNITYSDK_OFFSET(0x1775F5C0)
#define MONO_MATH_BIGINTEGER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1775EFD0)
#define MONO_MATH_BIGINTEGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x177602A0)
#define MONO_MATH_BIGINTEGER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1775BFC0)
#define MONO_MATH_BIGINTEGER__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1775C0C0)
#define MONO_MATH_BIGINTEGER__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1775C190)
#define MONO_MATH_BIGINTEGER__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1775C550)
#define MONO_MATH_BIGINTEGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1775BF90)

namespace Mono::Math
{
	inline static constexpr unsigned int BigInteger_TypeDefinitionIndex = 2303;

	class BigInteger : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::UInt32>** StaticGet_smallPrimes()
		{
			return (::Il2CppArray<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(BigInteger_TypeDefinitionIndex)->GetStaticField(0x10CE0);
		}
		static ::System::Security::Cryptography::RandomNumberGenerator** StaticGet_rng()
		{
			return (::System::Security::Cryptography::RandomNumberGenerator**)Il2CppClass::FromTypeDefinitionIndex(BigInteger_TypeDefinitionIndex)->GetStaticField(0x10CE8);
		}
		::Il2CppArray<::System::UInt32>* data; // 0x10
		::System::UInt32 length; // 0x18

		::System::Void _ctor(::Mono::Math::BigInteger_Sign sign, ::System::UInt32 len)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Math::BigInteger_Sign, ::System::UInt32))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER__CTOR_OFFSET))(this, sign, len);
		}

		::System::Void _ctor_1(::Mono::Math::BigInteger* bi)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Math::BigInteger*))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER__CTOR_1_OFFSET))(this, bi);
		}

		::System::Void _ctor_2(::Mono::Math::BigInteger* bi, ::System::UInt32 len)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Math::BigInteger*, ::System::UInt32))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER__CTOR_2_OFFSET))(this, bi, len);
		}

		::System::Void _ctor_3(::Il2CppArray<::System::Byte>* inData)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER__CTOR_3_OFFSET))(this, inData);
		}

		::System::Void _ctor_4(::System::UInt32 ui)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER__CTOR_4_OFFSET))(this, ui);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER__CCTOR_OFFSET))();
		}

		static ::Mono::Math::BigInteger* op_Implicit(::System::UInt32 value)
		{
			return ((::Mono::Math::BigInteger*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_OP_IMPLICIT_OFFSET))(value);
		}

		static ::Mono::Math::BigInteger* op_Implicit_1(::System::Int32 value)
		{
			return ((::Mono::Math::BigInteger*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_OP_IMPLICIT_1_OFFSET))(value);
		}

		static ::Mono::Math::BigInteger* op_Subtraction(::Mono::Math::BigInteger* bi1, ::Mono::Math::BigInteger* bi2)
		{
			return ((::Mono::Math::BigInteger*(*)(::Mono::Math::BigInteger*, ::Mono::Math::BigInteger*))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_OP_SUBTRACTION_OFFSET))(bi1, bi2);
		}

		static ::System::UInt32 op_Modulus(::Mono::Math::BigInteger* bi, ::System::UInt32 ui)
		{
			return ((::System::UInt32(*)(::Mono::Math::BigInteger*, ::System::UInt32))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_OP_MODULUS_OFFSET))(bi, ui);
		}

		static ::Mono::Math::BigInteger* op_Modulus_1(::Mono::Math::BigInteger* bi1, ::Mono::Math::BigInteger* bi2)
		{
			return ((::Mono::Math::BigInteger*(*)(::Mono::Math::BigInteger*, ::Mono::Math::BigInteger*))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_OP_MODULUS_1_OFFSET))(bi1, bi2);
		}

		static ::Mono::Math::BigInteger* op_Division(::Mono::Math::BigInteger* bi1, ::Mono::Math::BigInteger* bi2)
		{
			return ((::Mono::Math::BigInteger*(*)(::Mono::Math::BigInteger*, ::Mono::Math::BigInteger*))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_OP_DIVISION_OFFSET))(bi1, bi2);
		}

		static ::Mono::Math::BigInteger* op_Multiply(::Mono::Math::BigInteger* bi1, ::Mono::Math::BigInteger* bi2)
		{
			return ((::Mono::Math::BigInteger*(*)(::Mono::Math::BigInteger*, ::Mono::Math::BigInteger*))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_OP_MULTIPLY_OFFSET))(bi1, bi2);
		}

		static ::Mono::Math::BigInteger* op_LeftShift(::Mono::Math::BigInteger* bi1, ::System::Int32 shiftVal)
		{
			return ((::Mono::Math::BigInteger*(*)(::Mono::Math::BigInteger*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_OP_LEFTSHIFT_OFFSET))(bi1, shiftVal);
		}

		static ::Mono::Math::BigInteger* op_RightShift(::Mono::Math::BigInteger* bi1, ::System::Int32 shiftVal)
		{
			return ((::Mono::Math::BigInteger*(*)(::Mono::Math::BigInteger*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_OP_RIGHTSHIFT_OFFSET))(bi1, shiftVal);
		}

		static ::System::Security::Cryptography::RandomNumberGenerator* get_Rng()
		{
			return ((::System::Security::Cryptography::RandomNumberGenerator*(*)())((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_GET_RNG_OFFSET))();
		}

		static ::Mono::Math::BigInteger* GenerateRandom(::System::Int32 bits, ::System::Security::Cryptography::RandomNumberGenerator* rng)
		{
			return ((::Mono::Math::BigInteger*(*)(::System::Int32, ::System::Security::Cryptography::RandomNumberGenerator*))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_GENERATERANDOM_OFFSET))(bits, rng);
		}

		static ::Mono::Math::BigInteger* GenerateRandom_1(::System::Int32 bits)
		{
			return ((::Mono::Math::BigInteger*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_GENERATERANDOM_1_OFFSET))(bits);
		}

		::System::Int32 BitCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_BITCOUNT_OFFSET))(this);
		}

		::System::Boolean TestBit(::System::Int32 bitNum)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_TESTBIT_OFFSET))(this, bitNum);
		}

		::System::Void SetBit(::System::UInt32 bitNum)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_SETBIT_OFFSET))(this, bitNum);
		}

		::System::Void SetBit_1(::System::UInt32 bitNum, ::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_SETBIT_1_OFFSET))(this, bitNum, value);
		}

		::System::Int32 LowestSetBit()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_LOWESTSETBIT_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* GetBytes()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_GETBYTES_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::Mono::Math::BigInteger* bi1, ::System::UInt32 ui)
		{
			return ((::System::Boolean(*)(::Mono::Math::BigInteger*, ::System::UInt32))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_OP_EQUALITY_OFFSET))(bi1, ui);
		}

		static ::System::Boolean op_Inequality(::Mono::Math::BigInteger* bi1, ::System::UInt32 ui)
		{
			return ((::System::Boolean(*)(::Mono::Math::BigInteger*, ::System::UInt32))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_OP_INEQUALITY_OFFSET))(bi1, ui);
		}

		static ::System::Boolean op_Equality_1(::Mono::Math::BigInteger* bi1, ::Mono::Math::BigInteger* bi2)
		{
			return ((::System::Boolean(*)(::Mono::Math::BigInteger*, ::Mono::Math::BigInteger*))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_OP_EQUALITY_1_OFFSET))(bi1, bi2);
		}

		static ::System::Boolean op_Inequality_1(::Mono::Math::BigInteger* bi1, ::Mono::Math::BigInteger* bi2)
		{
			return ((::System::Boolean(*)(::Mono::Math::BigInteger*, ::Mono::Math::BigInteger*))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_OP_INEQUALITY_1_OFFSET))(bi1, bi2);
		}

		static ::System::Boolean op_GreaterThan(::Mono::Math::BigInteger* bi1, ::Mono::Math::BigInteger* bi2)
		{
			return ((::System::Boolean(*)(::Mono::Math::BigInteger*, ::Mono::Math::BigInteger*))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_OP_GREATERTHAN_OFFSET))(bi1, bi2);
		}

		static ::System::Boolean op_LessThan(::Mono::Math::BigInteger* bi1, ::Mono::Math::BigInteger* bi2)
		{
			return ((::System::Boolean(*)(::Mono::Math::BigInteger*, ::Mono::Math::BigInteger*))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_OP_LESSTHAN_OFFSET))(bi1, bi2);
		}

		static ::System::Boolean op_GreaterThanOrEqual(::Mono::Math::BigInteger* bi1, ::Mono::Math::BigInteger* bi2)
		{
			return ((::System::Boolean(*)(::Mono::Math::BigInteger*, ::Mono::Math::BigInteger*))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_OP_GREATERTHANOREQUAL_OFFSET))(bi1, bi2);
		}

		static ::System::Boolean op_LessThanOrEqual(::Mono::Math::BigInteger* bi1, ::Mono::Math::BigInteger* bi2)
		{
			return ((::System::Boolean(*)(::Mono::Math::BigInteger*, ::Mono::Math::BigInteger*))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_OP_LESSTHANOREQUAL_OFFSET))(bi1, bi2);
		}

		::System::String* ToString(::System::UInt32 radix)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_TOSTRING_OFFSET))(this, radix);
		}

		::System::String* ToString_1(::System::UInt32 radix, ::System::String* characterSet)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_TOSTRING_1_OFFSET))(this, radix, characterSet);
		}

		::System::Void Normalize()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_NORMALIZE_OFFSET))(this);
		}

		::System::Int32 GetHashCode()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_GETHASHCODE_OFFSET))(this);
		}

		::System::String* ToString_2()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_TOSTRING_2_OFFSET))(this);
		}

		::System::Boolean Equals(::System::Object* o)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_EQUALS_OFFSET))(this, o);
		}

		::Mono::Math::BigInteger* ModInverse(::Mono::Math::BigInteger* modulus)
		{
			return ((::Mono::Math::BigInteger*(*)(::PVOID, ::Mono::Math::BigInteger*))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_MODINVERSE_OFFSET))(this, modulus);
		}

		static ::Mono::Math::BigInteger* GeneratePseudoPrime(::System::Int32 bits)
		{
			return ((::Mono::Math::BigInteger*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_GENERATEPSEUDOPRIME_OFFSET))(bits);
		}

		::System::Void Incr2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_INCR2_OFFSET))(this);
		}
	};
}
