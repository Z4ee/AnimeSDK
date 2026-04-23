#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Math/BigInteger_Sign.h"
#include "unitysdk/System/Object.h"

namespace Mono::Math { class BigInteger; }

#define MONO_MATH_BIGINTEGER_KERNEL_COMPARE_OFFSET UNITYSDK_OFFSET(0x1775CA30)
#define MONO_MATH_BIGINTEGER_KERNEL_DWORDDIVMOD_OFFSET UNITYSDK_OFFSET(0x17760750)
#define MONO_MATH_BIGINTEGER_KERNEL_DWORDMOD_OFFSET UNITYSDK_OFFSET(0x1775CFE0)
#define MONO_MATH_BIGINTEGER_KERNEL_LEFTSHIFT_OFFSET UNITYSDK_OFFSET(0x1775DEB0)
#define MONO_MATH_BIGINTEGER_KERNEL_MINUSEQ_OFFSET UNITYSDK_OFFSET(0x17760330)
#define MONO_MATH_BIGINTEGER_KERNEL_MODINVERSE_1_OFFSET UNITYSDK_OFFSET(0x1775F780)
#define MONO_MATH_BIGINTEGER_KERNEL_MODINVERSE_OFFSET UNITYSDK_OFFSET(0x17760B00)
#define MONO_MATH_BIGINTEGER_KERNEL_MULTIBYTEDIVIDE_OFFSET UNITYSDK_OFFSET(0x1775D0A0)
#define MONO_MATH_BIGINTEGER_KERNEL_MULTIPLYMOD2P32PMOD_OFFSET UNITYSDK_OFFSET(0x17760A00)
#define MONO_MATH_BIGINTEGER_KERNEL_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x1775DDB0)
#define MONO_MATH_BIGINTEGER_KERNEL_PLUSEQ_OFFSET UNITYSDK_OFFSET(0x177604B0)
#define MONO_MATH_BIGINTEGER_KERNEL_RIGHTSHIFT_OFFSET UNITYSDK_OFFSET(0x1775E190)
#define MONO_MATH_BIGINTEGER_KERNEL_SINGLEBYTEDIVIDEINPLACE_OFFSET UNITYSDK_OFFSET(0x1775F360)
#define MONO_MATH_BIGINTEGER_KERNEL_SUBTRACT_OFFSET UNITYSDK_OFFSET(0x1775CC10)

namespace Mono::Math
{
	inline static constexpr unsigned int BigInteger_Kernel_TypeDefinitionIndex = 2306;

	class BigInteger_Kernel : public ::System::Object
	{
	public:
		static ::Mono::Math::BigInteger* Subtract(::Mono::Math::BigInteger* big, ::Mono::Math::BigInteger* small)
		{
			return ((::Mono::Math::BigInteger*(*)(::Mono::Math::BigInteger*, ::Mono::Math::BigInteger*))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_KERNEL_SUBTRACT_OFFSET))(big, small);
		}

		static ::System::Void MinusEq(::Mono::Math::BigInteger* big, ::Mono::Math::BigInteger* small)
		{
			return ((::System::Void(*)(::Mono::Math::BigInteger*, ::Mono::Math::BigInteger*))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_KERNEL_MINUSEQ_OFFSET))(big, small);
		}

		static ::System::Void PlusEq(::Mono::Math::BigInteger* bi1, ::Mono::Math::BigInteger* bi2)
		{
			return ((::System::Void(*)(::Mono::Math::BigInteger*, ::Mono::Math::BigInteger*))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_KERNEL_PLUSEQ_OFFSET))(bi1, bi2);
		}

		static ::Mono::Math::BigInteger_Sign Compare(::Mono::Math::BigInteger* bi1, ::Mono::Math::BigInteger* bi2)
		{
			return ((::Mono::Math::BigInteger_Sign(*)(::Mono::Math::BigInteger*, ::Mono::Math::BigInteger*))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_KERNEL_COMPARE_OFFSET))(bi1, bi2);
		}

		static ::System::UInt32 SingleByteDivideInPlace(::Mono::Math::BigInteger* n, ::System::UInt32 d)
		{
			return ((::System::UInt32(*)(::Mono::Math::BigInteger*, ::System::UInt32))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_KERNEL_SINGLEBYTEDIVIDEINPLACE_OFFSET))(n, d);
		}

		static ::System::UInt32 DwordMod(::Mono::Math::BigInteger* n, ::System::UInt32 d)
		{
			return ((::System::UInt32(*)(::Mono::Math::BigInteger*, ::System::UInt32))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_KERNEL_DWORDMOD_OFFSET))(n, d);
		}

		static ::Il2CppArray<::Mono::Math::BigInteger*>* DwordDivMod(::Mono::Math::BigInteger* n, ::System::UInt32 d)
		{
			return ((::Il2CppArray<::Mono::Math::BigInteger*>*(*)(::Mono::Math::BigInteger*, ::System::UInt32))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_KERNEL_DWORDDIVMOD_OFFSET))(n, d);
		}

		static ::Il2CppArray<::Mono::Math::BigInteger*>* multiByteDivide(::Mono::Math::BigInteger* bi1, ::Mono::Math::BigInteger* bi2)
		{
			return ((::Il2CppArray<::Mono::Math::BigInteger*>*(*)(::Mono::Math::BigInteger*, ::Mono::Math::BigInteger*))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_KERNEL_MULTIBYTEDIVIDE_OFFSET))(bi1, bi2);
		}

		static ::Mono::Math::BigInteger* LeftShift(::Mono::Math::BigInteger* bi, ::System::Int32 n)
		{
			return ((::Mono::Math::BigInteger*(*)(::Mono::Math::BigInteger*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_KERNEL_LEFTSHIFT_OFFSET))(bi, n);
		}

		static ::Mono::Math::BigInteger* RightShift(::Mono::Math::BigInteger* bi, ::System::Int32 n)
		{
			return ((::Mono::Math::BigInteger*(*)(::Mono::Math::BigInteger*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_KERNEL_RIGHTSHIFT_OFFSET))(bi, n);
		}

		static ::System::Void Multiply(::Il2CppArray<::System::UInt32>* x, ::System::UInt32 xOffset, ::System::UInt32 xLen, ::Il2CppArray<::System::UInt32>* y, ::System::UInt32 yOffset, ::System::UInt32 yLen, ::Il2CppArray<::System::UInt32>* d, ::System::UInt32 dOffset)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::UInt32>*, ::System::UInt32, ::System::UInt32, ::Il2CppArray<::System::UInt32>*, ::System::UInt32, ::System::UInt32, ::Il2CppArray<::System::UInt32>*, ::System::UInt32))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_KERNEL_MULTIPLY_OFFSET))(x, xOffset, xLen, y, yOffset, yLen, d, dOffset);
		}

		static ::System::Void MultiplyMod2p32pmod(::Il2CppArray<::System::UInt32>* x, ::System::Int32 xOffset, ::System::Int32 xLen, ::Il2CppArray<::System::UInt32>* y, ::System::Int32 yOffest, ::System::Int32 yLen, ::Il2CppArray<::System::UInt32>* d, ::System::Int32 dOffset, ::System::Int32 mod)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::UInt32>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::UInt32>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::UInt32>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_KERNEL_MULTIPLYMOD2P32PMOD_OFFSET))(x, xOffset, xLen, y, yOffest, yLen, d, dOffset, mod);
		}

		static ::System::UInt32 modInverse(::Mono::Math::BigInteger* bi, ::System::UInt32 modulus)
		{
			return ((::System::UInt32(*)(::Mono::Math::BigInteger*, ::System::UInt32))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_KERNEL_MODINVERSE_OFFSET))(bi, modulus);
		}

		static ::Mono::Math::BigInteger* modInverse_1(::Mono::Math::BigInteger* bi, ::Mono::Math::BigInteger* modulus)
		{
			return ((::Mono::Math::BigInteger*(*)(::Mono::Math::BigInteger*, ::Mono::Math::BigInteger*))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_KERNEL_MODINVERSE_1_OFFSET))(bi, modulus);
		}
	};
}
