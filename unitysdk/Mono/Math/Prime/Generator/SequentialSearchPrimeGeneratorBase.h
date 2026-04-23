#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Math/Prime/Generator/PrimeGeneratorBase.h"

namespace Mono::Math { class BigInteger; }
namespace System { class Object; }

#define MONO_MATH_PRIME_GENERATOR_SEQUENTIALSEARCHPRIMEGENERATORBASE_GENERATENEWPRIME_1_OFFSET UNITYSDK_OFFSET(0x17761AD0)
#define MONO_MATH_PRIME_GENERATOR_SEQUENTIALSEARCHPRIMEGENERATORBASE_GENERATENEWPRIME_OFFSET UNITYSDK_OFFSET(0x177601E0)
#define MONO_MATH_PRIME_GENERATOR_SEQUENTIALSEARCHPRIMEGENERATORBASE_GENERATESEARCHBASE_OFFSET UNITYSDK_OFFSET(0x177619E0)
#define MONO_MATH_PRIME_GENERATOR_SEQUENTIALSEARCHPRIMEGENERATORBASE_ISPRIMEACCEPTABLE_OFFSET UNITYSDK_OFFSET(0x177625D0)
#define MONO_MATH_PRIME_GENERATOR_SEQUENTIALSEARCHPRIMEGENERATORBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x177601D0)

namespace Mono::Math::Prime::Generator
{
	inline static constexpr unsigned int SequentialSearchPrimeGeneratorBase_TypeDefinitionIndex = 2311;

	class SequentialSearchPrimeGeneratorBase : public ::Mono::Math::Prime::Generator::PrimeGeneratorBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_MATH_PRIME_GENERATOR_SEQUENTIALSEARCHPRIMEGENERATORBASE__CTOR_OFFSET))(this);
		}

		::Mono::Math::BigInteger* GenerateSearchBase(::System::Int32 bits, ::System::Object* context)
		{
			return ((::Mono::Math::BigInteger*(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + MONO_MATH_PRIME_GENERATOR_SEQUENTIALSEARCHPRIMEGENERATORBASE_GENERATESEARCHBASE_OFFSET))(this, bits, context);
		}

		::Mono::Math::BigInteger* GenerateNewPrime(::System::Int32 bits)
		{
			return ((::Mono::Math::BigInteger*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_MATH_PRIME_GENERATOR_SEQUENTIALSEARCHPRIMEGENERATORBASE_GENERATENEWPRIME_OFFSET))(this, bits);
		}

		::Mono::Math::BigInteger* GenerateNewPrime_1(::System::Int32 bits, ::System::Object* context)
		{
			return ((::Mono::Math::BigInteger*(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + MONO_MATH_PRIME_GENERATOR_SEQUENTIALSEARCHPRIMEGENERATORBASE_GENERATENEWPRIME_1_OFFSET))(this, bits, context);
		}

		::System::Boolean IsPrimeAcceptable(::Mono::Math::BigInteger* bi, ::System::Object* context)
		{
			return ((::System::Boolean(*)(::PVOID, ::Mono::Math::BigInteger*, ::System::Object*))((::PBYTE)hIl2Cpp + MONO_MATH_PRIME_GENERATOR_SEQUENTIALSEARCHPRIMEGENERATORBASE_ISPRIMEACCEPTABLE_OFFSET))(this, bi, context);
		}
	};
}
