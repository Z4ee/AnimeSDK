#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Mono::Math { class BigInteger; }

#define MONO_MATH_BIGINTEGER_MODULUSRING_BARRETTREDUCTION_OFFSET UNITYSDK_OFFSET(0x1B642F60)
#define MONO_MATH_BIGINTEGER_MODULUSRING_DIFFERENCE_OFFSET UNITYSDK_OFFSET(0x1B642D00)
#define MONO_MATH_BIGINTEGER_MODULUSRING_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x1B643470)
#define MONO_MATH_BIGINTEGER_MODULUSRING_POW_1_OFFSET UNITYSDK_OFFSET(0x1B643860)
#define MONO_MATH_BIGINTEGER_MODULUSRING_POW_OFFSET UNITYSDK_OFFSET(0x1B6436D0)
#define MONO_MATH_BIGINTEGER_MODULUSRING__CTOR_OFFSET UNITYSDK_OFFSET(0x1B642C10)

namespace Mono::Math
{
	inline static constexpr unsigned int BigInteger_ModulusRing_TypeDefinitionIndex = 2309;

	class BigInteger_ModulusRing : public ::System::Object
	{
	public:
		::Mono::Math::BigInteger* mod; // 0x10
		::Mono::Math::BigInteger* constant; // 0x18

		::System::Void _ctor(::Mono::Math::BigInteger* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Math::BigInteger*))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_MODULUSRING__CTOR_OFFSET))(this, a1);
		}

		::System::Void BarrettReduction(::Mono::Math::BigInteger* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Math::BigInteger*))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_MODULUSRING_BARRETTREDUCTION_OFFSET))(this, a1);
		}

		::Mono::Math::BigInteger* Multiply(::Mono::Math::BigInteger* a1, ::Mono::Math::BigInteger* a2)
		{
			return ((::Mono::Math::BigInteger*(*)(::PVOID, ::Mono::Math::BigInteger*, ::Mono::Math::BigInteger*))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_MODULUSRING_MULTIPLY_OFFSET))(this, a1, a2);
		}

		::Mono::Math::BigInteger* Difference(::Mono::Math::BigInteger* a1, ::Mono::Math::BigInteger* a2)
		{
			return ((::Mono::Math::BigInteger*(*)(::PVOID, ::Mono::Math::BigInteger*, ::Mono::Math::BigInteger*))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_MODULUSRING_DIFFERENCE_OFFSET))(this, a1, a2);
		}

		::Mono::Math::BigInteger* Pow(::Mono::Math::BigInteger* a1, ::Mono::Math::BigInteger* a2)
		{
			return ((::Mono::Math::BigInteger*(*)(::PVOID, ::Mono::Math::BigInteger*, ::Mono::Math::BigInteger*))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_MODULUSRING_POW_OFFSET))(this, a1, a2);
		}

		::Mono::Math::BigInteger* Pow_1(::System::UInt32 a1, ::Mono::Math::BigInteger* a2)
		{
			return ((::Mono::Math::BigInteger*(*)(::PVOID, ::System::UInt32, ::Mono::Math::BigInteger*))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_MODULUSRING_POW_1_OFFSET))(this, a1, a2);
		}
	};
}
