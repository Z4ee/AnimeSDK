#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Math/Prime/ConfidenceFactor.h"
#include "unitysdk/System/MulticastDelegate.h"

namespace Mono::Math { class BigInteger; }
namespace System { class AsyncCallback; }
namespace System { class IAsyncResult; }
namespace System { class Object; }

#define MONO_MATH_PRIME_PRIMALITYTEST_BEGININVOKE_OFFSET UNITYSDK_OFFSET(0x177625E0)
#define MONO_MATH_PRIME_PRIMALITYTEST_ENDINVOKE_OFFSET UNITYSDK_OFFSET(0x17762660)
#define MONO_MATH_PRIME_PRIMALITYTEST_INVOKE_OFFSET UNITYSDK_OFFSET(0x17762070)
#define MONO_MATH_PRIME_PRIMALITYTEST__CTOR_OFFSET UNITYSDK_OFFSET(0x177619A0)

namespace Mono::Math::Prime
{
	inline static constexpr unsigned int PrimalityTest_TypeDefinitionIndex = 2308;

	class PrimalityTest : public ::System::MulticastDelegate
	{
	public:
		::System::Void _ctor(::System::Object* object, ::System::IntPtr method)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*, ::System::IntPtr))((::PBYTE)hIl2Cpp + MONO_MATH_PRIME_PRIMALITYTEST__CTOR_OFFSET))(this, object, method);
		}

		::System::Boolean Invoke(::Mono::Math::BigInteger* bi, ::Mono::Math::Prime::ConfidenceFactor confidence)
		{
			return ((::System::Boolean(*)(::PVOID, ::Mono::Math::BigInteger*, ::Mono::Math::Prime::ConfidenceFactor))((::PBYTE)hIl2Cpp + MONO_MATH_PRIME_PRIMALITYTEST_INVOKE_OFFSET))(this, bi, confidence);
		}

		::System::IAsyncResult* BeginInvoke(::Mono::Math::BigInteger* bi, ::Mono::Math::Prime::ConfidenceFactor confidence, ::System::AsyncCallback* callback, ::System::Object* object)
		{
			return ((::System::IAsyncResult*(*)(::PVOID, ::Mono::Math::BigInteger*, ::Mono::Math::Prime::ConfidenceFactor, ::System::AsyncCallback*, ::System::Object*))((::PBYTE)hIl2Cpp + MONO_MATH_PRIME_PRIMALITYTEST_BEGININVOKE_OFFSET))(this, bi, confidence, callback, object);
		}

		::System::Boolean EndInvoke(::System::IAsyncResult* result)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::IAsyncResult*))((::PBYTE)hIl2Cpp + MONO_MATH_PRIME_PRIMALITYTEST_ENDINVOKE_OFFSET))(this, result);
		}
	};
}
