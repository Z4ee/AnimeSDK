#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Math/BigInteger_Sign.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Security::Cryptography { class RandomNumberGenerator; }

#define MONO_MATH_BIGINTEGER_ADD_OFFSET UNITYSDK_OFFSET(0x1E0E14E0)
#define MONO_MATH_BIGINTEGER_BITCOUNT_OFFSET UNITYSDK_OFFSET(0x1E0E2150)
#define MONO_MATH_BIGINTEGER_CLEARBIT_OFFSET UNITYSDK_OFFSET(0x1E0E2460)
#define MONO_MATH_BIGINTEGER_CLEAR_OFFSET UNITYSDK_OFFSET(0x1E0E2D50)
#define MONO_MATH_BIGINTEGER_COMPARE_OFFSET UNITYSDK_OFFSET(0x1E0E2A60)
#define MONO_MATH_BIGINTEGER_DIVID_1_OFFSET UNITYSDK_OFFSET(0x1E0E1AE0)
#define MONO_MATH_BIGINTEGER_DIVID_OFFSET UNITYSDK_OFFSET(0x1E0E1A20)
#define MONO_MATH_BIGINTEGER_EQUALS_OFFSET UNITYSDK_OFFSET(0x1E0E2F60)
#define MONO_MATH_BIGINTEGER_GCD_OFFSET UNITYSDK_OFFSET(0x1E0E30D0)
#define MONO_MATH_BIGINTEGER_GENERATEPSEUDOPRIME_OFFSET UNITYSDK_OFFSET(0x1E0E3630)
#define MONO_MATH_BIGINTEGER_GENERATERANDOM_1_OFFSET UNITYSDK_OFFSET(0x1E0E1F20)
#define MONO_MATH_BIGINTEGER_GENERATERANDOM_OFFSET UNITYSDK_OFFSET(0x1E0E1D40)
#define MONO_MATH_BIGINTEGER_GETBYTES_OFFSET UNITYSDK_OFFSET(0x1E0E2540)
#define MONO_MATH_BIGINTEGER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1E0E2DB0)
#define MONO_MATH_BIGINTEGER_GET_RNG_OFFSET UNITYSDK_OFFSET(0x1E0E1C30)
#define MONO_MATH_BIGINTEGER_INCR2_OFFSET UNITYSDK_OFFSET(0x1E0E36A0)
#define MONO_MATH_BIGINTEGER_ISPROBABLEPRIME_OFFSET UNITYSDK_OFFSET(0x1E0E3160)
#define MONO_MATH_BIGINTEGER_LOWESTSETBIT_OFFSET UNITYSDK_OFFSET(0x1E0E24B0)
#define MONO_MATH_BIGINTEGER_MODINVERSE_OFFSET UNITYSDK_OFFSET(0x1E0E30E0)
#define MONO_MATH_BIGINTEGER_MODPOW_OFFSET UNITYSDK_OFFSET(0x1E0E30F0)
#define MONO_MATH_BIGINTEGER_MODULUS_1_OFFSET UNITYSDK_OFFSET(0x1E0E1820)
#define MONO_MATH_BIGINTEGER_MODULUS_2_OFFSET UNITYSDK_OFFSET(0x1E0E1990)
#define MONO_MATH_BIGINTEGER_MODULUS_OFFSET UNITYSDK_OFFSET(0x1E0E15A0)
#define MONO_MATH_BIGINTEGER_MULTIPLY_1_OFFSET UNITYSDK_OFFSET(0x1E0E1BD0)
#define MONO_MATH_BIGINTEGER_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x1E0E1B70)
#define MONO_MATH_BIGINTEGER_NEXTHIGHESTPRIME_OFFSET UNITYSDK_OFFSET(0x1E0E35D0)
#define MONO_MATH_BIGINTEGER_NORMALIZE_OFFSET UNITYSDK_OFFSET(0x1E0DFEB0)
#define MONO_MATH_BIGINTEGER_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x1E0E09F0)
#define MONO_MATH_BIGINTEGER_OP_DIVISION_1_OFFSET UNITYSDK_OFFSET(0x1E0E1150)
#define MONO_MATH_BIGINTEGER_OP_DIVISION_OFFSET UNITYSDK_OFFSET(0x1E0E10E0)
#define MONO_MATH_BIGINTEGER_OP_EQUALITY_1_OFFSET UNITYSDK_OFFSET(0x1E0E28A0)
#define MONO_MATH_BIGINTEGER_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1E0E0AD0)
#define MONO_MATH_BIGINTEGER_OP_GREATERTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0x1E0E2A20)
#define MONO_MATH_BIGINTEGER_OP_GREATERTHAN_OFFSET UNITYSDK_OFFSET(0x1E0E29E0)
#define MONO_MATH_BIGINTEGER_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x1E0E0300)
#define MONO_MATH_BIGINTEGER_OP_IMPLICIT_2_OFFSET UNITYSDK_OFFSET(0x1E0E03D0)
#define MONO_MATH_BIGINTEGER_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1E0E0260)
#define MONO_MATH_BIGINTEGER_OP_INEQUALITY_1_OFFSET UNITYSDK_OFFSET(0x1E0E2940)
#define MONO_MATH_BIGINTEGER_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1E0E27D0)
#define MONO_MATH_BIGINTEGER_OP_LEFTSHIFT_OFFSET UNITYSDK_OFFSET(0x1E0E14C0)
#define MONO_MATH_BIGINTEGER_OP_LESSTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0x1E0E2A40)
#define MONO_MATH_BIGINTEGER_OP_LESSTHAN_OFFSET UNITYSDK_OFFSET(0x1E0E2A00)
#define MONO_MATH_BIGINTEGER_OP_MODULUS_1_OFFSET UNITYSDK_OFFSET(0x1E0E0F70)
#define MONO_MATH_BIGINTEGER_OP_MODULUS_2_OFFSET UNITYSDK_OFFSET(0x1E0E10A0)
#define MONO_MATH_BIGINTEGER_OP_MODULUS_OFFSET UNITYSDK_OFFSET(0x1E0E0D20)
#define MONO_MATH_BIGINTEGER_OP_MULTIPLY_1_OFFSET UNITYSDK_OFFSET(0x1E0E0920)
#define MONO_MATH_BIGINTEGER_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x1E0E1190)
#define MONO_MATH_BIGINTEGER_OP_RIGHTSHIFT_OFFSET UNITYSDK_OFFSET(0x1E0E14D0)
#define MONO_MATH_BIGINTEGER_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x1E0E0B90)
#define MONO_MATH_BIGINTEGER_PARSE_OFFSET UNITYSDK_OFFSET(0x1E0E0420)
#define MONO_MATH_BIGINTEGER_RANDOMIZE_1_OFFSET UNITYSDK_OFFSET(0x1E0E2250)
#define MONO_MATH_BIGINTEGER_RANDOMIZE_OFFSET UNITYSDK_OFFSET(0x1E0E1F80)
#define MONO_MATH_BIGINTEGER_SETBIT_1_OFFSET UNITYSDK_OFFSET(0x1E0E23E0)
#define MONO_MATH_BIGINTEGER_SETBIT_OFFSET UNITYSDK_OFFSET(0x1E0E2390)
#define MONO_MATH_BIGINTEGER_SUBTRACT_OFFSET UNITYSDK_OFFSET(0x1E0E1540)
#define MONO_MATH_BIGINTEGER_TESTBIT_1_OFFSET UNITYSDK_OFFSET(0x1E0E22F0)
#define MONO_MATH_BIGINTEGER_TESTBIT_OFFSET UNITYSDK_OFFSET(0x1E0E22B0)
#define MONO_MATH_BIGINTEGER_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x1E0E2AB0)
#define MONO_MATH_BIGINTEGER_TOSTRING_2_OFFSET UNITYSDK_OFFSET(0x1E0E2F20)
#define MONO_MATH_BIGINTEGER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1E0E2A70)
#define MONO_MATH_BIGINTEGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1E0E3740)
#define MONO_MATH_BIGINTEGER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1E0DF8B0)
#define MONO_MATH_BIGINTEGER__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1E0DF900)
#define MONO_MATH_BIGINTEGER__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1E0DFA50)
#define MONO_MATH_BIGINTEGER__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1E0DFB40)
#define MONO_MATH_BIGINTEGER__CTOR_5_OFFSET UNITYSDK_OFFSET(0x1E0DFF20)
#define MONO_MATH_BIGINTEGER__CTOR_6_OFFSET UNITYSDK_OFFSET(0x1E0E0150)
#define MONO_MATH_BIGINTEGER__CTOR_7_OFFSET UNITYSDK_OFFSET(0x1E0E01C0)
#define MONO_MATH_BIGINTEGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E0DF860)

namespace Mono::Math
{
	inline static constexpr unsigned int BigInteger_TypeDefinitionIndex = 2480;

	class BigInteger : public ::System::Object
	{
	public:
		static ::System::Security::Cryptography::RandomNumberGenerator** StaticGet_rng()
		{
			return (::System::Security::Cryptography::RandomNumberGenerator**)Il2CppClass::FromTypeDefinitionIndex(BigInteger_TypeDefinitionIndex)->GetStaticField(0x2300);
		}
		static ::Il2CppArray<::System::UInt32>** StaticGet_smallPrimes()
		{
			return (::Il2CppArray<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(BigInteger_TypeDefinitionIndex)->GetStaticField(0x2308);
		}
		// static const ::System::UInt32 DEFAULT_LEN = 0x14; // 0x0
		// static const ::System::String* WouldReturnNegVal; // 0x0
		::Il2CppArray<::System::UInt32>* data; // 0x10
		::System::UInt32 length; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Mono::Math::BigInteger_Sign sign, ::System::UInt32 len)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Math::BigInteger_Sign, ::System::UInt32))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER__CTOR_1_OFFSET))(this, sign, len);
		}

		::System::Void _ctor_2(::Mono::Math::BigInteger* bi)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Math::BigInteger*))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER__CTOR_2_OFFSET))(this, bi);
		}

		::System::Void _ctor_3(::Mono::Math::BigInteger* bi, ::System::UInt32 len)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Math::BigInteger*, ::System::UInt32))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER__CTOR_3_OFFSET))(this, bi, len);
		}

		::System::Void _ctor_4(::Il2CppArray<::System::Byte>* inData)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER__CTOR_4_OFFSET))(this, inData);
		}

		::System::Void _ctor_5(::Il2CppArray<::System::UInt32>* inData)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::UInt32>*))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER__CTOR_5_OFFSET))(this, inData);
		}

		::System::Void _ctor_6(::System::UInt32 ui)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER__CTOR_6_OFFSET))(this, ui);
		}

		::System::Void _ctor_7(::System::UInt64 ul)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt64))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER__CTOR_7_OFFSET))(this, ul);
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

		static ::Mono::Math::BigInteger* op_Implicit_2(::System::UInt64 value)
		{
			return ((::Mono::Math::BigInteger*(*)(::System::UInt64))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_OP_IMPLICIT_2_OFFSET))(value);
		}

		static ::Mono::Math::BigInteger* Parse(::System::String* number)
		{
			return ((::Mono::Math::BigInteger*(*)(::System::String*))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_PARSE_OFFSET))(number);
		}

		static ::Mono::Math::BigInteger* op_Addition(::Mono::Math::BigInteger* bi1, ::Mono::Math::BigInteger* bi2)
		{
			return ((::Mono::Math::BigInteger*(*)(::Mono::Math::BigInteger*, ::Mono::Math::BigInteger*))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_OP_ADDITION_OFFSET))(bi1, bi2);
		}

		static ::Mono::Math::BigInteger* op_Subtraction(::Mono::Math::BigInteger* bi1, ::Mono::Math::BigInteger* bi2)
		{
			return ((::Mono::Math::BigInteger*(*)(::Mono::Math::BigInteger*, ::Mono::Math::BigInteger*))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_OP_SUBTRACTION_OFFSET))(bi1, bi2);
		}

		static ::System::Int32 op_Modulus(::Mono::Math::BigInteger* bi, ::System::Int32 i)
		{
			return ((::System::Int32(*)(::Mono::Math::BigInteger*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_OP_MODULUS_OFFSET))(bi, i);
		}

		static ::System::UInt32 op_Modulus_1(::Mono::Math::BigInteger* bi, ::System::UInt32 ui)
		{
			return ((::System::UInt32(*)(::Mono::Math::BigInteger*, ::System::UInt32))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_OP_MODULUS_1_OFFSET))(bi, ui);
		}

		static ::Mono::Math::BigInteger* op_Modulus_2(::Mono::Math::BigInteger* bi1, ::Mono::Math::BigInteger* bi2)
		{
			return ((::Mono::Math::BigInteger*(*)(::Mono::Math::BigInteger*, ::Mono::Math::BigInteger*))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_OP_MODULUS_2_OFFSET))(bi1, bi2);
		}

		static ::Mono::Math::BigInteger* op_Division(::Mono::Math::BigInteger* bi, ::System::Int32 i)
		{
			return ((::Mono::Math::BigInteger*(*)(::Mono::Math::BigInteger*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_OP_DIVISION_OFFSET))(bi, i);
		}

		static ::Mono::Math::BigInteger* op_Division_1(::Mono::Math::BigInteger* bi1, ::Mono::Math::BigInteger* bi2)
		{
			return ((::Mono::Math::BigInteger*(*)(::Mono::Math::BigInteger*, ::Mono::Math::BigInteger*))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_OP_DIVISION_1_OFFSET))(bi1, bi2);
		}

		static ::Mono::Math::BigInteger* op_Multiply(::Mono::Math::BigInteger* bi1, ::Mono::Math::BigInteger* bi2)
		{
			return ((::Mono::Math::BigInteger*(*)(::Mono::Math::BigInteger*, ::Mono::Math::BigInteger*))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_OP_MULTIPLY_OFFSET))(bi1, bi2);
		}

		static ::Mono::Math::BigInteger* op_Multiply_1(::Mono::Math::BigInteger* bi, ::System::Int32 i)
		{
			return ((::Mono::Math::BigInteger*(*)(::Mono::Math::BigInteger*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_OP_MULTIPLY_1_OFFSET))(bi, i);
		}

		static ::Mono::Math::BigInteger* op_LeftShift(::Mono::Math::BigInteger* bi1, ::System::Int32 shiftVal)
		{
			return ((::Mono::Math::BigInteger*(*)(::Mono::Math::BigInteger*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_OP_LEFTSHIFT_OFFSET))(bi1, shiftVal);
		}

		static ::Mono::Math::BigInteger* op_RightShift(::Mono::Math::BigInteger* bi1, ::System::Int32 shiftVal)
		{
			return ((::Mono::Math::BigInteger*(*)(::Mono::Math::BigInteger*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_OP_RIGHTSHIFT_OFFSET))(bi1, shiftVal);
		}

		static ::Mono::Math::BigInteger* Add(::Mono::Math::BigInteger* bi1, ::Mono::Math::BigInteger* bi2)
		{
			return ((::Mono::Math::BigInteger*(*)(::Mono::Math::BigInteger*, ::Mono::Math::BigInteger*))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_ADD_OFFSET))(bi1, bi2);
		}

		static ::Mono::Math::BigInteger* Subtract(::Mono::Math::BigInteger* bi1, ::Mono::Math::BigInteger* bi2)
		{
			return ((::Mono::Math::BigInteger*(*)(::Mono::Math::BigInteger*, ::Mono::Math::BigInteger*))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_SUBTRACT_OFFSET))(bi1, bi2);
		}

		static ::System::Int32 Modulus(::Mono::Math::BigInteger* bi, ::System::Int32 i)
		{
			return ((::System::Int32(*)(::Mono::Math::BigInteger*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_MODULUS_OFFSET))(bi, i);
		}

		static ::System::UInt32 Modulus_1(::Mono::Math::BigInteger* bi, ::System::UInt32 ui)
		{
			return ((::System::UInt32(*)(::Mono::Math::BigInteger*, ::System::UInt32))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_MODULUS_1_OFFSET))(bi, ui);
		}

		static ::Mono::Math::BigInteger* Modulus_2(::Mono::Math::BigInteger* bi1, ::Mono::Math::BigInteger* bi2)
		{
			return ((::Mono::Math::BigInteger*(*)(::Mono::Math::BigInteger*, ::Mono::Math::BigInteger*))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_MODULUS_2_OFFSET))(bi1, bi2);
		}

		static ::Mono::Math::BigInteger* Divid(::Mono::Math::BigInteger* bi, ::System::Int32 i)
		{
			return ((::Mono::Math::BigInteger*(*)(::Mono::Math::BigInteger*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_DIVID_OFFSET))(bi, i);
		}

		static ::Mono::Math::BigInteger* Divid_1(::Mono::Math::BigInteger* bi1, ::Mono::Math::BigInteger* bi2)
		{
			return ((::Mono::Math::BigInteger*(*)(::Mono::Math::BigInteger*, ::Mono::Math::BigInteger*))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_DIVID_1_OFFSET))(bi1, bi2);
		}

		static ::Mono::Math::BigInteger* Multiply(::Mono::Math::BigInteger* bi1, ::Mono::Math::BigInteger* bi2)
		{
			return ((::Mono::Math::BigInteger*(*)(::Mono::Math::BigInteger*, ::Mono::Math::BigInteger*))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_MULTIPLY_OFFSET))(bi1, bi2);
		}

		static ::Mono::Math::BigInteger* Multiply_1(::Mono::Math::BigInteger* bi, ::System::Int32 i)
		{
			return ((::Mono::Math::BigInteger*(*)(::Mono::Math::BigInteger*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_MULTIPLY_1_OFFSET))(bi, i);
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

		::System::Void Randomize(::System::Security::Cryptography::RandomNumberGenerator* rng)
		{
			return ((::System::Void(*)(::PVOID, ::System::Security::Cryptography::RandomNumberGenerator*))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_RANDOMIZE_OFFSET))(this, rng);
		}

		::System::Void Randomize_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_RANDOMIZE_1_OFFSET))(this);
		}

		::System::Int32 BitCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_BITCOUNT_OFFSET))(this);
		}

		::System::Boolean TestBit(::System::UInt32 bitNum)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_TESTBIT_OFFSET))(this, bitNum);
		}

		::System::Boolean TestBit_1(::System::Int32 bitNum)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_TESTBIT_1_OFFSET))(this, bitNum);
		}

		::System::Void SetBit(::System::UInt32 bitNum)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_SETBIT_OFFSET))(this, bitNum);
		}

		::System::Void ClearBit(::System::UInt32 bitNum)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_CLEARBIT_OFFSET))(this, bitNum);
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

		::Mono::Math::BigInteger_Sign Compare(::Mono::Math::BigInteger* bi)
		{
			return ((::Mono::Math::BigInteger_Sign(*)(::PVOID, ::Mono::Math::BigInteger*))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_COMPARE_OFFSET))(this, bi);
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

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_CLEAR_OFFSET))(this);
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

		::Mono::Math::BigInteger* GCD(::Mono::Math::BigInteger* bi)
		{
			return ((::Mono::Math::BigInteger*(*)(::PVOID, ::Mono::Math::BigInteger*))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_GCD_OFFSET))(this, bi);
		}

		::Mono::Math::BigInteger* ModInverse(::Mono::Math::BigInteger* modulus)
		{
			return ((::Mono::Math::BigInteger*(*)(::PVOID, ::Mono::Math::BigInteger*))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_MODINVERSE_OFFSET))(this, modulus);
		}

		::Mono::Math::BigInteger* ModPow(::Mono::Math::BigInteger* exp, ::Mono::Math::BigInteger* n)
		{
			return ((::Mono::Math::BigInteger*(*)(::PVOID, ::Mono::Math::BigInteger*, ::Mono::Math::BigInteger*))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_MODPOW_OFFSET))(this, exp, n);
		}

		::System::Boolean IsProbablePrime()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_ISPROBABLEPRIME_OFFSET))(this);
		}

		static ::Mono::Math::BigInteger* NextHighestPrime(::Mono::Math::BigInteger* bi)
		{
			return ((::Mono::Math::BigInteger*(*)(::Mono::Math::BigInteger*))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_NEXTHIGHESTPRIME_OFFSET))(bi);
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
