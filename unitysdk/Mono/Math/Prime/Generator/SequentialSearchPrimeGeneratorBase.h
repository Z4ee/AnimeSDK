#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Math/Prime/Generator/PrimeGeneratorBase.h"

namespace Mono::Math { class BigInteger; }
namespace System { class Object; }

#define MONO_MATH_PRIME_GENERATOR_SEQUENTIALSEARCHPRIMEGENERATORBASE_GENERATENEWPRIME_1_OFFSET UNITYSDK_OFFSET(0x1B643A70)
#define MONO_MATH_PRIME_GENERATOR_SEQUENTIALSEARCHPRIMEGENERATORBASE_GENERATENEWPRIME_OFFSET UNITYSDK_OFFSET(0x1B642180)
#define MONO_MATH_PRIME_GENERATOR_SEQUENTIALSEARCHPRIMEGENERATORBASE_GENERATESEARCHBASE_OFFSET UNITYSDK_OFFSET(0x1B643990)
#define MONO_MATH_PRIME_GENERATOR_SEQUENTIALSEARCHPRIMEGENERATORBASE_ISPRIMEACCEPTABLE_OFFSET UNITYSDK_OFFSET(0x1B6440C0)
#define MONO_MATH_PRIME_GENERATOR_SEQUENTIALSEARCHPRIMEGENERATORBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B642170)

namespace Mono::Math::Prime::Generator
{
	inline static constexpr unsigned int SequentialSearchPrimeGeneratorBase_TypeDefinitionIndex = 2315;

	class SequentialSearchPrimeGeneratorBase : public ::Mono::Math::Prime::Generator::PrimeGeneratorBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_MATH_PRIME_GENERATOR_SEQUENTIALSEARCHPRIMEGENERATORBASE__CTOR_OFFSET))(this);
		}

		::Mono::Math::BigInteger* GenerateSearchBase(::System::Int32 a1, ::System::Object* a2)
		{
			return ((::Mono::Math::BigInteger*(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + MONO_MATH_PRIME_GENERATOR_SEQUENTIALSEARCHPRIMEGENERATORBASE_GENERATESEARCHBASE_OFFSET))(this, a1, a2);
		}

		::Mono::Math::BigInteger* GenerateNewPrime(::System::Int32 a1)
		{
			return ((::Mono::Math::BigInteger*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_MATH_PRIME_GENERATOR_SEQUENTIALSEARCHPRIMEGENERATORBASE_GENERATENEWPRIME_OFFSET))(this, a1);
		}

		::Mono::Math::BigInteger* GenerateNewPrime_1(::System::Int32 a1, ::System::Object* a2)
		{
			return ((::Mono::Math::BigInteger*(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + MONO_MATH_PRIME_GENERATOR_SEQUENTIALSEARCHPRIMEGENERATORBASE_GENERATENEWPRIME_1_OFFSET))(this, a1, a2);
		}

		::System::Boolean IsPrimeAcceptable(::Mono::Math::BigInteger* a1, ::System::Object* a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Mono::Math::BigInteger*, ::System::Object*))((::PBYTE)hIl2Cpp + MONO_MATH_PRIME_GENERATOR_SEQUENTIALSEARCHPRIMEGENERATORBASE_ISPRIMEACCEPTABLE_OFFSET))(this, a1, a2);
		}
	};
}
