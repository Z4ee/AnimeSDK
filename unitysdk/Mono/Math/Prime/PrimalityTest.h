#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Math/Prime/ConfidenceFactor.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Mono::Math { class BigInteger; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MONO_MATH_PRIME_PRIMALITYTEST_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x1851E620)
#define MONO_MATH_PRIME_PRIMALITYTEST_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x1851E6A0)
#define MONO_MATH_PRIME_PRIMALITYTEST_INVOKE_OFFSET UNITYSDK_OFFSET(0x1851E510)
#define MONO_MATH_PRIME_PRIMALITYTEST__CTOR_OFFSET UNITYSDK_OFFSET(0x1851E530)

namespace Mono::Math::Prime
{
	inline static constexpr unsigned int PrimalityTest_TypeDefinitionIndex = 2308;

	class PrimalityTest : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* a1, ::System::IntPtr a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_MATH_PRIME_PRIMALITYTEST__CTOR_OFFSET))(this, a1, a2);
		}

		::System::Boolean Invoke(::Mono::Math::BigInteger* a1, ::Mono::Math::Prime::ConfidenceFactor a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::Mono::Math::BigInteger*, ::Mono::Math::Prime::ConfidenceFactor))((::PBYTE)hIl2Cpp + MONO_MATH_PRIME_PRIMALITYTEST_INVOKE_OFFSET))(this, a1, a2);
		}

		::System::IAsyncResult* BeginInvoke(::Mono::Math::BigInteger* a1, ::Mono::Math::Prime::ConfidenceFactor a2, ::System::AsyncCallback* a3, ::System::Object* a4)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Mono::Math::BigInteger*, ::Mono::Math::Prime::ConfidenceFactor, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MONO_MATH_PRIME_PRIMALITYTEST_BEGININVOKE_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MONO_MATH_PRIME_PRIMALITYTEST_ENDINVOKE_OFFSET))(this, a1);
		}
	};
}
