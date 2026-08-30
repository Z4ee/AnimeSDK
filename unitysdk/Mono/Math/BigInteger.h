#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Math/BigInteger_Sign.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }
namespace System::Security::Cryptography { class RandomNumberGenerator; }

#define MONO_MATH_BIGINTEGER_BITCOUNT_OFFSET UNITYSDK_OFFSET(0x1BB18FB0)
#define MONO_MATH_BIGINTEGER_EQUALS_OFFSET UNITYSDK_OFFSET(0x1BB19D80)
#define MONO_MATH_BIGINTEGER_GENERATEPSEUDOPRIME_OFFSET UNITYSDK_OFFSET(0x1BB1A890)
#define MONO_MATH_BIGINTEGER_GENERATERANDOM_1_OFFSET UNITYSDK_OFFSET(0x1BB18F50)
#define MONO_MATH_BIGINTEGER_GENERATERANDOM_OFFSET UNITYSDK_OFFSET(0x1BB18DC0)
#define MONO_MATH_BIGINTEGER_GETBYTES_OFFSET UNITYSDK_OFFSET(0x1BB19280)
#define MONO_MATH_BIGINTEGER_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x1BB19BE0)
#define MONO_MATH_BIGINTEGER_GET_RNG_OFFSET UNITYSDK_OFFSET(0x1BB18CD0)
#define MONO_MATH_BIGINTEGER_INCR2_OFFSET UNITYSDK_OFFSET(0x1BB1AA00)
#define MONO_MATH_BIGINTEGER_LOWESTSETBIT_OFFSET UNITYSDK_OFFSET(0x1BB191F0)
#define MONO_MATH_BIGINTEGER_MODINVERSE_OFFSET UNITYSDK_OFFSET(0x1BB19F00)
#define MONO_MATH_BIGINTEGER_NORMALIZE_OFFSET UNITYSDK_OFFSET(0x1BB16EF0)
#define MONO_MATH_BIGINTEGER_OP_DIVISION_OFFSET UNITYSDK_OFFSET(0x1BB182C0)
#define MONO_MATH_BIGINTEGER_OP_EQUALITY_1_OFFSET UNITYSDK_OFFSET(0x1BB195B0)
#define MONO_MATH_BIGINTEGER_OP_EQUALITY_OFFSET UNITYSDK_OFFSET(0x1BB173D0)
#define MONO_MATH_BIGINTEGER_OP_GREATERTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0x1BB19730)
#define MONO_MATH_BIGINTEGER_OP_GREATERTHAN_OFFSET UNITYSDK_OFFSET(0x1BB196F0)
#define MONO_MATH_BIGINTEGER_OP_IMPLICIT_1_OFFSET UNITYSDK_OFFSET(0x1BB17020)
#define MONO_MATH_BIGINTEGER_OP_IMPLICIT_OFFSET UNITYSDK_OFFSET(0x1BB16FA0)
#define MONO_MATH_BIGINTEGER_OP_INEQUALITY_1_OFFSET UNITYSDK_OFFSET(0x1BB19650)
#define MONO_MATH_BIGINTEGER_OP_INEQUALITY_OFFSET UNITYSDK_OFFSET(0x1BB19500)
#define MONO_MATH_BIGINTEGER_OP_LEFTSHIFT_OFFSET UNITYSDK_OFFSET(0x1BB18740)
#define MONO_MATH_BIGINTEGER_OP_LESSTHANOREQUAL_OFFSET UNITYSDK_OFFSET(0x1BB19750)
#define MONO_MATH_BIGINTEGER_OP_LESSTHAN_OFFSET UNITYSDK_OFFSET(0x1BB19710)
#define MONO_MATH_BIGINTEGER_OP_MODULUS_1_OFFSET UNITYSDK_OFFSET(0x1BB179D0)
#define MONO_MATH_BIGINTEGER_OP_MODULUS_OFFSET UNITYSDK_OFFSET(0x1BB17820)
#define MONO_MATH_BIGINTEGER_OP_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x1BB182E0)
#define MONO_MATH_BIGINTEGER_OP_RIGHTSHIFT_OFFSET UNITYSDK_OFFSET(0x1BB189D0)
#define MONO_MATH_BIGINTEGER_OP_SUBTRACTION_OFFSET UNITYSDK_OFFSET(0x1BB170D0)
#define MONO_MATH_BIGINTEGER_SETBIT_1_OFFSET UNITYSDK_OFFSET(0x1BB19180)
#define MONO_MATH_BIGINTEGER_SETBIT_OFFSET UNITYSDK_OFFSET(0x1BB19130)
#define MONO_MATH_BIGINTEGER_TESTBIT_OFFSET UNITYSDK_OFFSET(0x1BB190A0)
#define MONO_MATH_BIGINTEGER_TOSTRING_1_OFFSET UNITYSDK_OFFSET(0x1BB197B0)
#define MONO_MATH_BIGINTEGER_TOSTRING_2_OFFSET UNITYSDK_OFFSET(0x1BB19D40)
#define MONO_MATH_BIGINTEGER_TOSTRING_OFFSET UNITYSDK_OFFSET(0x1BB19770)
#define MONO_MATH_BIGINTEGER__CCTOR_OFFSET UNITYSDK_OFFSET(0x1BB1AA70)
#define MONO_MATH_BIGINTEGER__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1BB16AC0)
#define MONO_MATH_BIGINTEGER__CTOR_2_OFFSET UNITYSDK_OFFSET(0x1BB16BD0)
#define MONO_MATH_BIGINTEGER__CTOR_3_OFFSET UNITYSDK_OFFSET(0x1BB16C80)
#define MONO_MATH_BIGINTEGER__CTOR_4_OFFSET UNITYSDK_OFFSET(0x1BB16F50)
#define MONO_MATH_BIGINTEGER__CTOR_OFFSET UNITYSDK_OFFSET(0x1BB16A90)

namespace Mono::Math
{
	inline static constexpr unsigned int BigInteger_TypeDefinitionIndex = 2314;

	class BigInteger : public ::System::Object
	{
	public:
		static ::System::Security::Cryptography::RandomNumberGenerator** StaticGet_rng()
		{
			return (::System::Security::Cryptography::RandomNumberGenerator**)Il2CppClass::FromTypeDefinitionIndex(BigInteger_TypeDefinitionIndex)->GetStaticField(0x2AD00);
		}
		static ::Il2CppArray<::System::UInt32>** StaticGet_smallPrimes()
		{
			return (::Il2CppArray<::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(BigInteger_TypeDefinitionIndex)->GetStaticField(0x2AD08);
		}
		::Il2CppArray<::System::UInt32>* data; // 0x10
		::System::UInt32 length; // 0x18

		::System::Void _ctor(::Mono::Math::BigInteger_Sign a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Math::BigInteger_Sign, ::System::UInt32))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_1(::Mono::Math::BigInteger* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Math::BigInteger*))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER__CTOR_1_OFFSET))(this, a1);
		}

		::System::Void _ctor_2(::Mono::Math::BigInteger* a1, ::System::UInt32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Math::BigInteger*, ::System::UInt32))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER__CTOR_2_OFFSET))(this, a1, a2);
		}

		::System::Void _ctor_3(::Il2CppArray<::System::Byte>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Byte>*))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER__CTOR_3_OFFSET))(this, a1);
		}

		::System::Void _ctor_4(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER__CTOR_4_OFFSET))(this, a1);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER__CCTOR_OFFSET))();
		}

		static ::Mono::Math::BigInteger* op_Implicit(::System::UInt32 a1)
		{
			return ((::Mono::Math::BigInteger*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_OP_IMPLICIT_OFFSET))(a1);
		}

		static ::Mono::Math::BigInteger* op_Implicit_1(::System::Int32 a1)
		{
			return ((::Mono::Math::BigInteger*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_OP_IMPLICIT_1_OFFSET))(a1);
		}

		static ::Mono::Math::BigInteger* op_Subtraction(::Mono::Math::BigInteger* a1, ::Mono::Math::BigInteger* a2)
		{
			return ((::Mono::Math::BigInteger*(*)(::Mono::Math::BigInteger*, ::Mono::Math::BigInteger*))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_OP_SUBTRACTION_OFFSET))(a1, a2);
		}

		static ::System::UInt32 op_Modulus(::Mono::Math::BigInteger* a1, ::System::UInt32 a2)
		{
			return ((::System::UInt32(*)(::Mono::Math::BigInteger*, ::System::UInt32))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_OP_MODULUS_OFFSET))(a1, a2);
		}

		static ::Mono::Math::BigInteger* op_Modulus_1(::Mono::Math::BigInteger* a1, ::Mono::Math::BigInteger* a2)
		{
			return ((::Mono::Math::BigInteger*(*)(::Mono::Math::BigInteger*, ::Mono::Math::BigInteger*))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_OP_MODULUS_1_OFFSET))(a1, a2);
		}

		static ::Mono::Math::BigInteger* op_Division(::Mono::Math::BigInteger* a1, ::Mono::Math::BigInteger* a2)
		{
			return ((::Mono::Math::BigInteger*(*)(::Mono::Math::BigInteger*, ::Mono::Math::BigInteger*))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_OP_DIVISION_OFFSET))(a1, a2);
		}

		static ::Mono::Math::BigInteger* op_Multiply(::Mono::Math::BigInteger* a1, ::Mono::Math::BigInteger* a2)
		{
			return ((::Mono::Math::BigInteger*(*)(::Mono::Math::BigInteger*, ::Mono::Math::BigInteger*))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_OP_MULTIPLY_OFFSET))(a1, a2);
		}

		static ::Mono::Math::BigInteger* op_LeftShift(::Mono::Math::BigInteger* a1, ::System::Int32 a2)
		{
			return ((::Mono::Math::BigInteger*(*)(::Mono::Math::BigInteger*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_OP_LEFTSHIFT_OFFSET))(a1, a2);
		}

		static ::Mono::Math::BigInteger* op_RightShift(::Mono::Math::BigInteger* a1, ::System::Int32 a2)
		{
			return ((::Mono::Math::BigInteger*(*)(::Mono::Math::BigInteger*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_OP_RIGHTSHIFT_OFFSET))(a1, a2);
		}

		static ::System::Security::Cryptography::RandomNumberGenerator* get_Rng()
		{
			return ((::System::Security::Cryptography::RandomNumberGenerator*(*)())((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_GET_RNG_OFFSET))();
		}

		static ::Mono::Math::BigInteger* GenerateRandom(::System::Int32 a1, ::System::Security::Cryptography::RandomNumberGenerator* a2)
		{
			return ((::Mono::Math::BigInteger*(*)(::System::Int32, ::System::Security::Cryptography::RandomNumberGenerator*))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_GENERATERANDOM_OFFSET))(a1, a2);
		}

		static ::Mono::Math::BigInteger* GenerateRandom_1(::System::Int32 a1)
		{
			return ((::Mono::Math::BigInteger*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_GENERATERANDOM_1_OFFSET))(a1);
		}

		::System::Int32 BitCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_BITCOUNT_OFFSET))(this);
		}

		::System::Boolean TestBit(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_TESTBIT_OFFSET))(this, a1);
		}

		::System::Void SetBit(::System::UInt32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_SETBIT_OFFSET))(this, a1);
		}

		::System::Void SetBit_1(::System::UInt32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::Boolean))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_SETBIT_1_OFFSET))(this, a1, a2);
		}

		::System::Int32 LowestSetBit()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_LOWESTSETBIT_OFFSET))(this);
		}

		::Il2CppArray<::System::Byte>* GetBytes()
		{
			return ((::Il2CppArray<::System::Byte>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_GETBYTES_OFFSET))(this);
		}

		static ::System::Boolean op_Equality(::Mono::Math::BigInteger* a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::Mono::Math::BigInteger*, ::System::UInt32))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_OP_EQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Inequality(::Mono::Math::BigInteger* a1, ::System::UInt32 a2)
		{
			return ((::System::Boolean(*)(::Mono::Math::BigInteger*, ::System::UInt32))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_OP_INEQUALITY_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Equality_1(::Mono::Math::BigInteger* a1, ::Mono::Math::BigInteger* a2)
		{
			return ((::System::Boolean(*)(::Mono::Math::BigInteger*, ::Mono::Math::BigInteger*))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_OP_EQUALITY_1_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_Inequality_1(::Mono::Math::BigInteger* a1, ::Mono::Math::BigInteger* a2)
		{
			return ((::System::Boolean(*)(::Mono::Math::BigInteger*, ::Mono::Math::BigInteger*))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_OP_INEQUALITY_1_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_GreaterThan(::Mono::Math::BigInteger* a1, ::Mono::Math::BigInteger* a2)
		{
			return ((::System::Boolean(*)(::Mono::Math::BigInteger*, ::Mono::Math::BigInteger*))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_OP_GREATERTHAN_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_LessThan(::Mono::Math::BigInteger* a1, ::Mono::Math::BigInteger* a2)
		{
			return ((::System::Boolean(*)(::Mono::Math::BigInteger*, ::Mono::Math::BigInteger*))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_OP_LESSTHAN_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_GreaterThanOrEqual(::Mono::Math::BigInteger* a1, ::Mono::Math::BigInteger* a2)
		{
			return ((::System::Boolean(*)(::Mono::Math::BigInteger*, ::Mono::Math::BigInteger*))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_OP_GREATERTHANOREQUAL_OFFSET))(a1, a2);
		}

		static ::System::Boolean op_LessThanOrEqual(::Mono::Math::BigInteger* a1, ::Mono::Math::BigInteger* a2)
		{
			return ((::System::Boolean(*)(::Mono::Math::BigInteger*, ::Mono::Math::BigInteger*))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_OP_LESSTHANOREQUAL_OFFSET))(a1, a2);
		}

		::System::String* ToString(::System::UInt32 a1)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_TOSTRING_OFFSET))(this, a1);
		}

		::System::String* ToString_1(::System::UInt32 a1, ::System::String* a2)
		{
			return ((::System::String*(*)(::PVOID, ::System::UInt32, ::System::String*))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_TOSTRING_1_OFFSET))(this, a1, a2);
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

		::System::Boolean Equals(::System::Object* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_EQUALS_OFFSET))(this, a1);
		}

		::Mono::Math::BigInteger* ModInverse(::Mono::Math::BigInteger* a1)
		{
			return ((::Mono::Math::BigInteger*(*)(::PVOID, ::Mono::Math::BigInteger*))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_MODINVERSE_OFFSET))(this, a1);
		}

		static ::Mono::Math::BigInteger* GeneratePseudoPrime(::System::Int32 a1)
		{
			return ((::Mono::Math::BigInteger*(*)(::System::Int32))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_GENERATEPSEUDOPRIME_OFFSET))(a1);
		}

		::System::Void Incr2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_INCR2_OFFSET))(this);
		}
	};
}
