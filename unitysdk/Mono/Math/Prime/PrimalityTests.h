#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Math/Prime/ConfidenceFactor.h"
#include "unitysdk/System/Object.h"

namespace Mono::Math { class BigInteger; }

#define MONO_MATH_PRIME_PRIMALITYTESTS_GETSPPROUNDS_OFFSET UNITYSDK_OFFSET(0x161369D0)
#define MONO_MATH_PRIME_PRIMALITYTESTS_RABINMILLERTEST_OFFSET UNITYSDK_OFFSET(0x16136B70)

namespace Mono::Math::Prime
{
	inline static constexpr unsigned int PrimalityTests_TypeDefinitionIndex = 2308;

	class PrimalityTests : public ::System::Object
	{
	public:
		static ::System::Int32 GetSPPRounds(::Mono::Math::BigInteger* bi, ::Mono::Math::Prime::ConfidenceFactor confidence)
		{
			return ((::System::Int32(*)(::Mono::Math::BigInteger*, ::Mono::Math::Prime::ConfidenceFactor))((::PBYTE)hIl2Cpp + MONO_MATH_PRIME_PRIMALITYTESTS_GETSPPROUNDS_OFFSET))(bi, confidence);
		}

		static ::System::Boolean RabinMillerTest(::Mono::Math::BigInteger* n, ::Mono::Math::Prime::ConfidenceFactor confidence)
		{
			return ((::System::Boolean(*)(::Mono::Math::BigInteger*, ::Mono::Math::Prime::ConfidenceFactor))((::PBYTE)hIl2Cpp + MONO_MATH_PRIME_PRIMALITYTESTS_RABINMILLERTEST_OFFSET))(n, confidence);
		}
	};
}
