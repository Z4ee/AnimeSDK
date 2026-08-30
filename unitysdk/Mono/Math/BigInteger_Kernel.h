#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Math/BigInteger_Sign.h"
#include "unitysdk/System/Object.h"

namespace Mono::Math { class BigInteger; }

#define MONO_MATH_BIGINTEGER_KERNEL_COMPARE_OFFSET UNITYSDK_OFFSET(0x1D233230)
#define MONO_MATH_BIGINTEGER_KERNEL_DWORDDIVMOD_OFFSET UNITYSDK_OFFSET(0x1D236C20)
#define MONO_MATH_BIGINTEGER_KERNEL_DWORDMOD_OFFSET UNITYSDK_OFFSET(0x1D2336F0)
#define MONO_MATH_BIGINTEGER_KERNEL_LEFTSHIFT_OFFSET UNITYSDK_OFFSET(0x1D234500)
#define MONO_MATH_BIGINTEGER_KERNEL_MINUSEQ_OFFSET UNITYSDK_OFFSET(0x1D2368B0)
#define MONO_MATH_BIGINTEGER_KERNEL_MODINVERSE_1_OFFSET UNITYSDK_OFFSET(0x1D235CC0)
#define MONO_MATH_BIGINTEGER_KERNEL_MODINVERSE_OFFSET UNITYSDK_OFFSET(0x1D236FF0)
#define MONO_MATH_BIGINTEGER_KERNEL_MULTIBYTEDIVIDE_OFFSET UNITYSDK_OFFSET(0x1D2337B0)
#define MONO_MATH_BIGINTEGER_KERNEL_MULTIPLYMOD2P32PMOD_OFFSET UNITYSDK_OFFSET(0x1D236EF0)
#define MONO_MATH_BIGINTEGER_KERNEL_MULTIPLY_OFFSET UNITYSDK_OFFSET(0x1D234400)
#define MONO_MATH_BIGINTEGER_KERNEL_PLUSEQ_OFFSET UNITYSDK_OFFSET(0x1D236A00)
#define MONO_MATH_BIGINTEGER_KERNEL_RIGHTSHIFT_OFFSET UNITYSDK_OFFSET(0x1D234790)
#define MONO_MATH_BIGINTEGER_KERNEL_SINGLEBYTEDIVIDEINPLACE_OFFSET UNITYSDK_OFFSET(0x1D2358B0)
#define MONO_MATH_BIGINTEGER_KERNEL_SUBTRACT_OFFSET UNITYSDK_OFFSET(0x1D2333A0)

namespace Mono::Math
{
	inline static constexpr unsigned int BigInteger_Kernel_TypeDefinitionIndex = 2317;

	class BigInteger_Kernel : public ::System::Object
	{
	public:
		static ::Mono::Math::BigInteger* Subtract(::Mono::Math::BigInteger* a1, ::Mono::Math::BigInteger* a2)
		{
			return ((::Mono::Math::BigInteger*(*)(::Mono::Math::BigInteger*, ::Mono::Math::BigInteger*))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_KERNEL_SUBTRACT_OFFSET))(a1, a2);
		}

		static ::System::Void MinusEq(::Mono::Math::BigInteger* a1, ::Mono::Math::BigInteger* a2)
		{
			return ((::System::Void(*)(::Mono::Math::BigInteger*, ::Mono::Math::BigInteger*))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_KERNEL_MINUSEQ_OFFSET))(a1, a2);
		}

		static ::System::Void PlusEq(::Mono::Math::BigInteger* a1, ::Mono::Math::BigInteger* a2)
		{
			return ((::System::Void(*)(::Mono::Math::BigInteger*, ::Mono::Math::BigInteger*))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_KERNEL_PLUSEQ_OFFSET))(a1, a2);
		}

		static ::Mono::Math::BigInteger_Sign Compare(::Mono::Math::BigInteger* a1, ::Mono::Math::BigInteger* a2)
		{
			return ((::Mono::Math::BigInteger_Sign(*)(::Mono::Math::BigInteger*, ::Mono::Math::BigInteger*))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_KERNEL_COMPARE_OFFSET))(a1, a2);
		}

		static ::System::UInt32 SingleByteDivideInPlace(::Mono::Math::BigInteger* a1, ::System::UInt32 a2)
		{
			return ((::System::UInt32(*)(::Mono::Math::BigInteger*, ::System::UInt32))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_KERNEL_SINGLEBYTEDIVIDEINPLACE_OFFSET))(a1, a2);
		}

		static ::System::UInt32 DwordMod(::Mono::Math::BigInteger* a1, ::System::UInt32 a2)
		{
			return ((::System::UInt32(*)(::Mono::Math::BigInteger*, ::System::UInt32))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_KERNEL_DWORDMOD_OFFSET))(a1, a2);
		}

		static ::Il2CppArray<::Mono::Math::BigInteger*>* DwordDivMod(::Mono::Math::BigInteger* a1, ::System::UInt32 a2)
		{
			return ((::Il2CppArray<::Mono::Math::BigInteger*>*(*)(::Mono::Math::BigInteger*, ::System::UInt32))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_KERNEL_DWORDDIVMOD_OFFSET))(a1, a2);
		}

		static ::Il2CppArray<::Mono::Math::BigInteger*>* multiByteDivide(::Mono::Math::BigInteger* a1, ::Mono::Math::BigInteger* a2)
		{
			return ((::Il2CppArray<::Mono::Math::BigInteger*>*(*)(::Mono::Math::BigInteger*, ::Mono::Math::BigInteger*))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_KERNEL_MULTIBYTEDIVIDE_OFFSET))(a1, a2);
		}

		static ::Mono::Math::BigInteger* LeftShift(::Mono::Math::BigInteger* a1, ::System::Int32 a2)
		{
			return ((::Mono::Math::BigInteger*(*)(::Mono::Math::BigInteger*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_KERNEL_LEFTSHIFT_OFFSET))(a1, a2);
		}

		static ::Mono::Math::BigInteger* RightShift(::Mono::Math::BigInteger* a1, ::System::Int32 a2)
		{
			return ((::Mono::Math::BigInteger*(*)(::Mono::Math::BigInteger*, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_KERNEL_RIGHTSHIFT_OFFSET))(a1, a2);
		}

		static ::System::Void Multiply(::Il2CppArray<::System::UInt32>* a1, ::System::UInt32 a2, ::System::UInt32 a3, ::Il2CppArray<::System::UInt32>* a4, ::System::UInt32 a5, ::System::UInt32 a6, ::Il2CppArray<::System::UInt32>* a7, ::System::UInt32 a8)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::UInt32>*, ::System::UInt32, ::System::UInt32, ::Il2CppArray<::System::UInt32>*, ::System::UInt32, ::System::UInt32, ::Il2CppArray<::System::UInt32>*, ::System::UInt32))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_KERNEL_MULTIPLY_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8);
		}

		static ::System::Void MultiplyMod2p32pmod(::Il2CppArray<::System::UInt32>* a1, ::System::Int32 a2, ::System::Int32 a3, ::Il2CppArray<::System::UInt32>* a4, ::System::Int32 a5, ::System::Int32 a6, ::Il2CppArray<::System::UInt32>* a7, ::System::Int32 a8, ::System::Int32 a9)
		{
			return ((::System::Void(*)(::Il2CppArray<::System::UInt32>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::UInt32>*, ::System::Int32, ::System::Int32, ::Il2CppArray<::System::UInt32>*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_KERNEL_MULTIPLYMOD2P32PMOD_OFFSET))(a1, a2, a3, a4, a5, a6, a7, a8, a9);
		}

		static ::System::UInt32 modInverse(::Mono::Math::BigInteger* a1, ::System::UInt32 a2)
		{
			return ((::System::UInt32(*)(::Mono::Math::BigInteger*, ::System::UInt32))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_KERNEL_MODINVERSE_OFFSET))(a1, a2);
		}

		static ::Mono::Math::BigInteger* modInverse_1(::Mono::Math::BigInteger* a1, ::Mono::Math::BigInteger* a2)
		{
			return ((::Mono::Math::BigInteger*(*)(::Mono::Math::BigInteger*, ::Mono::Math::BigInteger*))((::PBYTE)hIl2Cpp + MONO_MATH_BIGINTEGER_KERNEL_MODINVERSE_1_OFFSET))(a1, a2);
		}
	};
}
