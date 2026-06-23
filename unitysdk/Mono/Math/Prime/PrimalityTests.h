#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Math/Prime/ConfidenceFactor.h"
#include "unitysdk/System/Object.h"

namespace Mono::Math { class BigInteger; }

#define MONO_MATH_PRIME_PRIMALITYTESTS_GETSPPROUNDS_OFFSET UNITYSDK_OFFSET(0x1DB5AA20)
#define MONO_MATH_PRIME_PRIMALITYTESTS_RABINMILLERTEST_OFFSET UNITYSDK_OFFSET(0x1DB5AFA0)
#define MONO_MATH_PRIME_PRIMALITYTESTS_SMALLPRIMESPPTEST_OFFSET UNITYSDK_OFFSET(0x1DB5AC00)
#define MONO_MATH_PRIME_PRIMALITYTESTS_TEST_OFFSET UNITYSDK_OFFSET(0x1DB5ABC0)
#define MONO_MATH_PRIME_PRIMALITYTESTS__CTOR_OFFSET UNITYSDK_OFFSET(0x1DB5AA10)

namespace Mono::Math::Prime
{
	inline static constexpr unsigned int PrimalityTests_TypeDefinitionIndex = 2486;

	class PrimalityTests : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_MATH_PRIME_PRIMALITYTESTS__CTOR_OFFSET))(this);
		}

		static ::System::Int32 GetSPPRounds(::Mono::Math::BigInteger* bi, ::Mono::Math::Prime::ConfidenceFactor confidence)
		{
			return ((::System::Int32(*)(::Mono::Math::BigInteger*, ::Mono::Math::Prime::ConfidenceFactor))((::PBYTE)hIl2Cpp + MONO_MATH_PRIME_PRIMALITYTESTS_GETSPPROUNDS_OFFSET))(bi, confidence);
		}

		static ::System::Boolean Test(::Mono::Math::BigInteger* n, ::Mono::Math::Prime::ConfidenceFactor confidence)
		{
			return ((::System::Boolean(*)(::Mono::Math::BigInteger*, ::Mono::Math::Prime::ConfidenceFactor))((::PBYTE)hIl2Cpp + MONO_MATH_PRIME_PRIMALITYTESTS_TEST_OFFSET))(n, confidence);
		}

		static ::System::Boolean RabinMillerTest(::Mono::Math::BigInteger* n, ::Mono::Math::Prime::ConfidenceFactor confidence)
		{
			return ((::System::Boolean(*)(::Mono::Math::BigInteger*, ::Mono::Math::Prime::ConfidenceFactor))((::PBYTE)hIl2Cpp + MONO_MATH_PRIME_PRIMALITYTESTS_RABINMILLERTEST_OFFSET))(n, confidence);
		}

		static ::System::Boolean SmallPrimeSppTest(::Mono::Math::BigInteger* bi, ::Mono::Math::Prime::ConfidenceFactor confidence)
		{
			return ((::System::Boolean(*)(::Mono::Math::BigInteger*, ::Mono::Math::Prime::ConfidenceFactor))((::PBYTE)hIl2Cpp + MONO_MATH_PRIME_PRIMALITYTESTS_SMALLPRIMESPPTEST_OFFSET))(bi, confidence);
		}
	};
}
