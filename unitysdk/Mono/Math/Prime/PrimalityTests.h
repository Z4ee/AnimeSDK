#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Math/Prime/ConfidenceFactor.h"
#include "unitysdk/System/Object.h"

namespace Mono::Math { class BigInteger; }

#define MONO_MATH_PRIME_PRIMALITYTESTS_GETSPPROUNDS_OFFSET UNITYSDK_OFFSET(0x1D238810)
#define MONO_MATH_PRIME_PRIMALITYTESTS_RABINMILLERTEST_OFFSET UNITYSDK_OFFSET(0x1D2389B0)

namespace Mono::Math::Prime
{
	inline static constexpr unsigned int PrimalityTests_TypeDefinitionIndex = 2320;

	class PrimalityTests : public ::System::Object
	{
	public:
		static ::System::Int32 GetSPPRounds(::Mono::Math::BigInteger* a1, ::Mono::Math::Prime::ConfidenceFactor a2)
		{
			return ((::System::Int32(*)(::Mono::Math::BigInteger*, ::Mono::Math::Prime::ConfidenceFactor))((::PBYTE)hIl2Cpp + MONO_MATH_PRIME_PRIMALITYTESTS_GETSPPROUNDS_OFFSET))(a1, a2);
		}

		static ::System::Boolean RabinMillerTest(::Mono::Math::BigInteger* a1, ::Mono::Math::Prime::ConfidenceFactor a2)
		{
			return ((::System::Boolean(*)(::Mono::Math::BigInteger*, ::Mono::Math::Prime::ConfidenceFactor))((::PBYTE)hIl2Cpp + MONO_MATH_PRIME_PRIMALITYTESTS_RABINMILLERTEST_OFFSET))(a1, a2);
		}
	};
}
