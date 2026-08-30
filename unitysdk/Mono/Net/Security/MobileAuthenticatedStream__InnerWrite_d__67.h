#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncTaskMethodBuilder.h"
#include "unitysdk/System/Runtime/CompilerServices/ConfiguredTaskAwaitable_ConfiguredTaskAwaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

namespace Mono::Net::Security { class MobileAuthenticatedStream; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM__INNERWRITE_D__67_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x3BA49F0)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM__INNERWRITE_D__67_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2DF7980)

namespace Mono::Net::Security
{
	inline static constexpr unsigned int MobileAuthenticatedStream__InnerWrite_d__67_TypeDefinitionIndex = 2442;

	struct alignas(8) MobileAuthenticatedStream__InnerWrite_d__67
	{
		::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1; // 0x10
		::System::Threading::CancellationToken cancellationToken; // 0x20
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder; // 0x28
		::Mono::Net::Security::MobileAuthenticatedStream* __4__this; // 0x40
		::System::Int32 __1__state; // 0x48
		::System::Boolean sync; // 0x4C

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM__INNERWRITE_D__67_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM__INNERWRITE_D__67_SETSTATEMACHINE_OFFSET))(this, a1);
		}
	};
}
