#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Math/Prime/Generator/SequentialSearchPrimeGeneratorBase.h"

namespace Mono::Math { class BigInteger; }
namespace System { class Object; }

#define MONO_MATH_PRIME_GENERATOR_NEXTPRIMEFINDER_GENERATESEARCHBASE_OFFSET UNITYSDK_OFFSET(0x1FBC5C60)
#define MONO_MATH_PRIME_GENERATOR_NEXTPRIMEFINDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1FBC5D60)

namespace Mono::Math::Prime::Generator
{
	inline static constexpr unsigned int NextPrimeFinder_TypeDefinitionIndex = 2487;

	class NextPrimeFinder : public ::Mono::Math::Prime::Generator::SequentialSearchPrimeGeneratorBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_MATH_PRIME_GENERATOR_NEXTPRIMEFINDER__CTOR_OFFSET))(this);
		}

		::Mono::Math::BigInteger* GenerateSearchBase(::System::Int32 bits, ::System::Object* Context)
		{
			return ((::Mono::Math::BigInteger*(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + MONO_MATH_PRIME_GENERATOR_NEXTPRIMEFINDER_GENERATESEARCHBASE_OFFSET))(this, bits, Context);
		}
	};
}
