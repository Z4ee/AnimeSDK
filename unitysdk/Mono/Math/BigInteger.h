#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Math/BigInteger_Sign.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Security::Cryptography { class RandomNumberGenerator; }

#define MONO_MATH_BIGINTEGER_ADD_OFFSET UNITYSDK_OFFSET(0x1BD99550)
#define MONO_MATH_BIGINTEGER_BITCOUNT_OFFSET UNITYSDK_OFFSET(0x1BD9A1C0)
#define MONO_MATH_BIGINTEGER_CLEARBIT_OFFSET UNITYSDK_OFFSET(0x1BD9A4D0)
#define MONO_MATH_BIGINTEGER_CLEAR_OFFSET UNITYSDK_OFFSET(0x1BD9ADC0)
#define MONO_MATH_BIGINTEGER_COMPARE_OFFSET UNITYSDK_OFFSET(0x1BD9AAD0)
#define MONO_MATH_BIGINTEGER_DIVID_1_OFFSET UNITYSDK_OFFSET(0x1BD99B50)
#define MONO_MATH_BIGINTEGER_DIVID_OFFSET UNITYSDK_OFFSET(0x1BD99A90)
#define MONO_MATH_BIGINTEGER_EQUALS_OFFSET UNITYSDK_OFFSET(0x1BD9AFD0)
#define MONO_MATH_BIGINTEGER_GCD_OFFSET UNITYSDK_OFFSET(0x1BD9B140)
#define MONO_MATH_BIGINTEGER_GENERATEPSEUDOPRIME_OFFSET UNITYSDK_OFFSET(0x1BD9B6A0)
#define MONO_MATH_BIGINTEGER_GENERATERANDOM_1_OFFSET UNITYSDK_OFFSET(0x1BD99F90)
#define MONO_MATH_BIGINTEGER_GENERATERANDOM_OFFSET UNITYSDK_OFFSET(0x1BD99DB0)
#define MONO_MATH_BIGINTEGER_GETBYTES_OFFSET UNITYSDK_OFFSET(0x1BD9A5B0)
#define MONO_MATH_BIGINTEGER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1BD9AE20)
#define MONO_MATH_BIGINTEGER_GET_RNG_OFFSET UNITYSDK_OFFSET(0x1BD99CA0)
#define MONO_MATH_BIGINTEGER_INCR2_OFFSET UNITYSDK_OFFSET(0x1BD9B710)
#define MONO_MATH_BIGINTEGER_ISPROBABLEPRIME_OFFSET UNITYSDK_OFFSET(0x1BD9B1D0)
#define MONO_MATH_BIGINTEGER_LOWESTSETBIT_OFFSET UNITYSDK_OFFSET(0x1BD9A520)
#define MONO_MATH_BIGINTEGER_MODINVERSE_OFFSET UNITYSDK_OFFSET(0x1BD9B150)
#define MONO_MATH_BIGINTEGER_MODPOW_OFFSET UNITYSDK_OFFSET(0x1BD9B160)
#define MONO_MATH_BIGINTEGER_MODULUS_1_OFFSET UNITYSDK_OFFSET(0x1BD99890)
#define MONO_MATH_BIGINTEGER_MODULUS_2_OFFSET UNITYSDK_OFFSET(0x1BD99A00)
#define MONO_MATH_BIGINTEGER_MODULUS_OFFSET UNITYSDK_OFFSET(0x1BD99610)
#define MONO_MATH_BIGINTEGER_MULTIPLY_1_OFFSET UNITYSDK_OFFSET(0x1BD99C40)
#define MONO_MATH_BIGINTEGER_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x1BD99BE0)
#define MONO_MATH_BIGINTEGER_NEXTHIGHESTPRIME_OFFSET UNITYSDK_OFFSET(0x1BD9B640)
#define MONO_MATH_BIGINTEGER_NORMALIZE_OFFSET UNITYSDK_OFFSET(0x1BD97F20)
#define MONO_MATH_BIGINTEGER_OP_ADDITION_OFFSET UNITYSDK_OFFSET(0x1BD98A60)
#define MONO_MATH_BIGINTEGER_OP_DIVISION_1_OFFSET UNITYSDK_OFFSET(0x1BD991C0)
#define MONO_MATH_BIGINTEGER_OP_DIVISION_OFFSET UNITYSDK_OFFSET(0x1BD99150)
#define MONO_MATH_BIGINTEGER_OP_EQUALITY_1_OFFSET UNITYSDK_OFFSET(0x1BD9A910)
#define MONO_MATH_BIGINTEGER_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1BD98B40)
#define MONO_MATH_BIGINTEGER_OP_GREATERTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0x1BD9AA90)
#define MONO_MATH_BIGINTEGER_OP_GREATERTHAN_OFFSET UNITYSDK_OFFSET(0x1BD9AA50)
#define MONO_MATH_BIGINTEGER_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x1BD98370)
#define MONO_MATH_BIGINTEGER_OP_IMPLICIT_2_OFFSET UNITYSDK_OFFSET(0x1BD98440)
#define MONO_MATH_BIGINTEGER_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1BD982D0)
#define MONO_MATH_BIGINTEGER_OP_INEQUALITY_1_OFFSET UNITYSDK_OFFSET(0x1BD9A9B0)
#define MONO_MATH_BIGINTEGER_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1BD9A840)
#define MONO_MATH_BIGINTEGER_OP_LEFTSHIFT_OFFSET UNITYSDK_OFFSET(0x1BD99530)
#define MONO_MATH_BIGINTEGER_OP_LESSTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0x1BD9AAB0)
#define MONO_MATH_BIGINTEGER_OP_LESSTHAN_OFFSET UNITYSDK_OFFSET(0x1BD9AA70)
#define MONO_MATH_BIGINTEGER_OP_MODULUS_1_OFFSET UNITYSDK_OFFSET(0x1BD98FE0)
#define MONO_MATH_BIGINTEGER_OP_MODULUS_2_OFFSET UNITYSDK_OFFSET(0x1BD99110)
#define MONO_MATH_BIGINTEGER_OP_MODULUS_OFFSET UNITYSDK_OFFSET(0x1BD98D90)
#define MONO_MATH_BIGINTEGER_OP_MULTIPLY_1_OFFSET UNITYSDK_OFFSET(0x1BD98990)
#define MONO_MATH_BIGINTEGER_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x1BD99200)
#define MONO_MATH_BIGINTEGER_OP_RIGHTSHIFT_OFFSET UNITYSDK_OFFSET(0x1BD99540)
#define MONO_MATH_BIGINTEGER_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x1BD98C00)
#define MONO_MATH_BIGINTEGER_PARSE_OFFSET UNITYSDK_OFFSET(0x1BD98490)
#define MONO_MATH_BIGINTEGER_RANDOMIZE_1_OFFSET UNITYSDK_OFFSET(0x1BD9A2C0)
#define MONO_MATH_BIGINTEGER_RANDOMIZE_OFFSET UNITYSDK_OFFSET(0x1BD99FF0)
#define MONO_MATH_BIGINTEGER_SETBIT_1_OFFSET UNITYSDK_OFFSET(0x1BD9A450)
#define MONO_MATH_BIGINTEGER_SETBIT_OFFSET UNITYSDK_OFFSET(0x1BD9A400)
#define MONO_MATH_BIGINTEGER_SUBTRACT_OFFSET UNITYSDK_OFFSET(0x1BD995B0)
#define MONO_MATH_BIGINTEGER_TESTBIT_1_OFFSET UNITYSDK_OFFSET(0x1BD9A360)
#define MONO_MATH_BIGINTEGER_TESTBIT_OFFSET UNITYSDK_OFFSET(0x1BD9A320)
#define MONO_MATH_BIGINTEGER_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x1BD9AB20)
#define MONO_MATH_BIGINTEGER_TOSTRING_2_OFFSET UNITYSDK_OFFSET(0x1BD9AF90)
#define MONO_MATH_BIGINTEGER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1BD9AAE0)
#define MONO_MATH_BIGINTEGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BD9B7B0)
#define MONO_MATH_BIGINTEGER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1BD97920)
#define MONO_MATH_BIGINTEGER__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1BD97970)
#define MONO_MATH_BIGINTEGER__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1BD97AC0)
#define MONO_MATH_BIGINTEGER__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1BD97BB0)
#define MONO_MATH_BIGINTEGER__CTOR_5_OFFSET UNITYSDK_OFFSET(0x1BD97F90)
#define MONO_MATH_BIGINTEGER__CTOR_6_OFFSET UNITYSDK_OFFSET(0x1BD981C0)
#define MONO_MATH_BIGINTEGER__CTOR_7_OFFSET UNITYSDK_OFFSET(0x1BD98230)
#define MONO_MATH_BIGINTEGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD978D0)

namespace Mono::Math
{
	inline static constexpr unsigned int BigInteger_TypeDefinitionIndex = 2481;

	class BigInteger : public ::System::Object
	{
	public:
		static ::Il2CppArray<::System::UInt32>** StaticGet_smallPrimes()
		{
			return (::Il2CppArray<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(BigInteger_TypeDefinitionIndex)->GetStaticField(0x2300);
		}
		static ::System::Security::Cryptography::RandomNumberGenerator** StaticGet_rng()
		{
			return (::System::Security::Cryptography::RandomNumberGenerator**)Il2CppClass::FromTypeDefinitionIndex(BigInteger_TypeDefinitionIndex)->GetStaticField(0x2308);
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
