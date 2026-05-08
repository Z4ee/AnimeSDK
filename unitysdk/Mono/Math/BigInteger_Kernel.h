#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Math/BigInteger_Sign.h"
#include "unitysdk/System/Object.h"

namespace Mono::Math { class BigInteger; }

#define MONO_MATH_BIGINTEGER_KERNEL_ADDSAMESIGN_OFFSET UNITYSDK_OFFSET(0x1BCC9A40)
#define MONO_MATH_BIGINTEGER_KERNEL_COMPARE_OFFSET UNITYSDK_OFFSET(0x1BCCA450)
#define MONO_MATH_BIGINTEGER_KERNEL_DWORDDIVMOD_OFFSET UNITYSDK_OFFSET(0x1BCCA960)
#define MONO_MATH_BIGINTEGER_KERNEL_DWORDDIV_OFFSET UNITYSDK_OFFSET(0x1BCCA7B0)
#define MONO_MATH_BIGINTEGER_KERNEL_DWORDMOD_OFFSET UNITYSDK_OFFSET(0x1BCCA720)
#define MONO_MATH_BIGINTEGER_KERNEL_GCD_OFFSET UNITYSDK_OFFSET(0x1BCCC0F0)
#define MONO_MATH_BIGINTEGER_KERNEL_LEFTSHIFT_OFFSET UNITYSDK_OFFSET(0x1BCCB540)
#define MONO_MATH_BIGINTEGER_KERNEL_MINUSEQ_OFFSET UNITYSDK_OFFSET(0x1BCCA030)
#define MONO_MATH_BIGINTEGER_KERNEL_MODINVERSE_1_OFFSET UNITYSDK_OFFSET(0x1BCCC570)
#define MONO_MATH_BIGINTEGER_KERNEL_MODINVERSE_OFFSET UNITYSDK_OFFSET(0x1BCCC3A0)
#define MONO_MATH_BIGINTEGER_KERNEL_MULTIBYTEDIVIDE_OFFSET UNITYSDK_OFFSET(0x1BCCAC40)
#define MONO_MATH_BIGINTEGER_KERNEL_MULTIPLYBYDWORD_OFFSET UNITYSDK_OFFSET(0x1BCCBAC0)
#define MONO_MATH_BIGINTEGER_KERNEL_MULTIPLYMOD2P32PMOD_OFFSET UNITYSDK_OFFSET(0x1BCCBD50)
#define MONO_MATH_BIGINTEGER_KERNEL_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x1BCCBC60)
#define MONO_MATH_BIGINTEGER_KERNEL_PLUSEQ_OFFSET UNITYSDK_OFFSET(0x1BCCA1B0)
#define MONO_MATH_BIGINTEGER_KERNEL_RIGHTSHIFT_OFFSET UNITYSDK_OFFSET(0x1BCCB850)
#define MONO_MATH_BIGINTEGER_KERNEL_SINGLEBYTEDIVIDEINPLACE_OFFSET UNITYSDK_OFFSET(0x1BCCA630)
#define MONO_MATH_BIGINTEGER_KERNEL_SQUAREPOSITIVE_OFFSET UNITYSDK_OFFSET(0x1BCCBE50)
#define MONO_MATH_BIGINTEGER_KERNEL_SUBTRACT_OFFSET UNITYSDK_OFFSET(0x1BCC9D60)
#define MONO_MATH_BIGINTEGER_KERNEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1BCCD100)

namespace Mono::Math
{
	inline static constexpr unsigned int BigInteger_Kernel_TypeDefinitionIndex = 2484;

	class BigInteger_Kernel : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_KERNEL__CTOR_OFFSET))(this);
		}

		static ::Mono::Math::BigInteger* AddSameSign(::Mono::Math::BigInteger* bi1, ::Mono::Math::BigInteger* bi2)
		{
			return ((::Mono::Math::BigInteger*(*)(::Mono::Math::BigInteger*, ::Mono::Math::BigInteger*))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_KERNEL_ADDSAMESIGN_OFFSET))(bi1, bi2);
		}

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

		static ::Mono::Math::BigInteger* DwordDiv(::Mono::Math::BigInteger* n, ::System::UInt32 d)
		{
			return ((::Mono::Math::BigInteger*(*)(::Mono::Math::BigInteger*, ::System::UInt32))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_KERNEL_DWORDDIV_OFFSET))(n, d);
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

		static ::Mono::Math::BigInteger* MultiplyByDword(::Mono::Math::BigInteger* n, ::System::UInt32 f)
		{
			return ((::Mono::Math::BigInteger*(*)(::Mono::Math::BigInteger*, ::System::UInt32))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_KERNEL_MULTIPLYBYDWORD_OFFSET))(n, f);
		}

		static ::System::Void Multiply(::Il2CppArray<::System::UInt32>* x, ::System::UInt32 xOffset, ::System::UInt32 xLen, ::Il2CppArray<::System::UInt32>* y, ::System::UInt32 yOffset, ::System::UInt32 yLen, ::Il2CppArray<::System::UInt32>* d, ::System::UInt32 dOffset)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::UInt32>*, ::System::UInt32, ::System::UInt32, ::Il2CppArray<::System::UInt32>*, ::System::UInt32, ::System::UInt32, ::Il2CppArray<::System::UInt32>*, ::System::UInt32))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_KERNEL_MULTIPLY_OFFSET))(x, xOffset, xLen, y, yOffset, yLen, d, dOffset);
		}

		static ::System::Void MultiplyMod2p32pmod(::Il2CppArray<::System::UInt32>* x, ::System::Int32 xOffset, ::System::Int32 xLen, ::Il2CppArray<::System::UInt32>* y, ::System::Int32 yOffest, ::System::Int32 yLen, ::Il2CppArray<::System::UInt32>* d, ::System::Int32 dOffset, ::System::Int32 mod)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::UInt32>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::UInt32>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::UInt32>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_KERNEL_MULTIPLYMOD2P32PMOD_OFFSET))(x, xOffset, xLen, y, yOffest, yLen, d, dOffset, mod);
		}

		static ::System::Void SquarePositive(::Mono::Math::BigInteger* bi, ::Il2CppArray<::System::UInt32>*& wkSpace)
		{
			return ((::System::Void(*)(::Mono::Math::BigInteger*, ::Il2CppArray<::System::UInt32>*&))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_KERNEL_SQUAREPOSITIVE_OFFSET))(bi, wkSpace);
		}

		static ::Mono::Math::BigInteger* gcd(::Mono::Math::BigInteger* a, ::Mono::Math::BigInteger* b)
		{
			return ((::Mono::Math::BigInteger*(*)(::Mono::Math::BigInteger*, ::Mono::Math::BigInteger*))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_KERNEL_GCD_OFFSET))(a, b);
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
