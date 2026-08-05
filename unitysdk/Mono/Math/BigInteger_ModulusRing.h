#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace Mono::Math { class BigInteger; }

#define MONO_MATH_BIGINTEGER_MODULUSRING_BARRETTREDUCTION_OFFSET UNITYSDK_OFFSET(0x1F9A33A0)
#define MONO_MATH_BIGINTEGER_MODULUSRING_DIFFERENCE_OFFSET UNITYSDK_OFFSET(0x1F9A3AF0)
#define MONO_MATH_BIGINTEGER_MODULUSRING_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x1F9A38C0)
#define MONO_MATH_BIGINTEGER_MODULUSRING_POW_1_OFFSET UNITYSDK_OFFSET(0x1F9A3EB0)
#define MONO_MATH_BIGINTEGER_MODULUSRING_POW_OFFSET UNITYSDK_OFFSET(0x1F9A3CF0)
#define MONO_MATH_BIGINTEGER_MODULUSRING__CTOR_OFFSET UNITYSDK_OFFSET(0x1F9A3270)

namespace Mono::Math
{
	inline static constexpr unsigned int BigInteger_ModulusRing_TypeDefinitionIndex = 2482;

	class BigInteger_ModulusRing : public ::System::Object
	{
	public:
		::Mono::Math::BigInteger* mod; // 0x10
		::Mono::Math::BigInteger* constant; // 0x18

		::System::Void _ctor(::Mono::Math::BigInteger* modulus)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Math::BigInteger*))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_MODULUSRING__CTOR_OFFSET))(this, modulus);
		}

		::System::Void BarrettReduction(::Mono::Math::BigInteger* x)
		{
			return ((::System::Void(*)(::PVOID, ::Mono::Math::BigInteger*))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_MODULUSRING_BARRETTREDUCTION_OFFSET))(this, x);
		}

		::Mono::Math::BigInteger* Multiply(::Mono::Math::BigInteger* a, ::Mono::Math::BigInteger* b)
		{
			return ((::Mono::Math::BigInteger*(*)(::PVOID, ::Mono::Math::BigInteger*, ::Mono::Math::BigInteger*))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_MODULUSRING_MULTIPLY_OFFSET))(this, a, b);
		}

		::Mono::Math::BigInteger* Difference(::Mono::Math::BigInteger* a, ::Mono::Math::BigInteger* b)
		{
			return ((::Mono::Math::BigInteger*(*)(::PVOID, ::Mono::Math::BigInteger*, ::Mono::Math::BigInteger*))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_MODULUSRING_DIFFERENCE_OFFSET))(this, a, b);
		}

		::Mono::Math::BigInteger* Pow(::Mono::Math::BigInteger* a, ::Mono::Math::BigInteger* k)
		{
			return ((::Mono::Math::BigInteger*(*)(::PVOID, ::Mono::Math::BigInteger*, ::Mono::Math::BigInteger*))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_MODULUSRING_POW_OFFSET))(this, a, k);
		}

		::Mono::Math::BigInteger* Pow_1(::System::UInt32 b, ::Mono::Math::BigInteger* exp)
		{
			return ((::Mono::Math::BigInteger*(*)(::PVOID, ::System::UInt32, ::Mono::Math::BigInteger*))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_MODULUSRING_POW_1_OFFSET))(this, b, exp);
		}
	};
}
