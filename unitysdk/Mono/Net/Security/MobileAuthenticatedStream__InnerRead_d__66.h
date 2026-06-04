#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.h"
#include "unitysdk/System/Runtime/CompilerServices/ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

namespace Mono::Net::Security { class MobileAuthenticatedStream; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM__INNERREAD_D__66_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x386E180)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM__INNERREAD_D__66_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x144610)

namespace Mono::Net::Security
{
	inline static constexpr unsigned int MobileAuthenticatedStream__InnerRead_d__66_TypeDefinitionIndex = 2430;

	struct alignas(8) MobileAuthenticatedStream__InnerRead_d__66
	{
		::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Int32> __u__1; // 0x10
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Int32> __t__builder; // 0x20
		::System::Threading::CancellationToken cancellationToken; // 0x38
		::Mono::Net::Security::MobileAuthenticatedStream* __4__this; // 0x40
		::System::Int32 __1__state; // 0x48
		::System::Boolean sync; // 0x4C
		::System::Int32 requestedSize; // 0x50

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM__INNERREAD_D__66_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM__INNERREAD_D__66_SETSTATEMACHINE_OFFSET))(this, a1);
		}
	};
}
