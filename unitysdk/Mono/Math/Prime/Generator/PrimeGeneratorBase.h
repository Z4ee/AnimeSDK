#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Math/Prime/ConfidenceFactor.h"
#include "unitysdk/System/Object.h"

namespace Mono::Math { class BigInteger; }
namespace Mono::Math::Prime { class PrimalityTest; }

#define MONO_MATH_PRIME_GENERATOR_PRIMEGENERATORBASE_GET_CONFIDENCE_OFFSET UNITYSDK_OFFSET(0x1851DE30)
#define MONO_MATH_PRIME_GENERATOR_PRIMEGENERATORBASE_GET_PRIMALITYTEST_OFFSET UNITYSDK_OFFSET(0x1851DE40)
#define MONO_MATH_PRIME_GENERATOR_PRIMEGENERATORBASE_GET_TRIALDIVISIONBOUNDS_OFFSET UNITYSDK_OFFSET(0x1851DEB0)
#define MONO_MATH_PRIME_GENERATOR_PRIMEGENERATORBASE__CTOR_OFFSET UNITYSDK_OFFSET(0x1851DEC0)

namespace Mono::Math::Prime::Generator
{
	inline static constexpr unsigned int PrimeGeneratorBase_TypeDefinitionIndex = 2310;

	class PrimeGeneratorBase : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_MATH_PRIME_GENERATOR_PRIMEGENERATORBASE__CTOR_OFFSET))(this);
		}

		::Mono::Math::Prime::ConfidenceFactor get_Confidence()
		{
			return ((::Mono::Math::Prime::ConfidenceFactor(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_MATH_PRIME_GENERATOR_PRIMEGENERATORBASE_GET_CONFIDENCE_OFFSET))(this);
		}

		::Mono::Math::Prime::PrimalityTest* get_PrimalityTest()
		{
			return ((::Mono::Math::Prime::PrimalityTest*(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_MATH_PRIME_GENERATOR_PRIMEGENERATORBASE_GET_PRIMALITYTEST_OFFSET))(this);
		}

		::System::Int32 get_TrialDivisionBounds()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_MATH_PRIME_GENERATOR_PRIMEGENERATORBASE_GET_TRIALDIVISIONBOUNDS_OFFSET))(this);
		}
	};
}
