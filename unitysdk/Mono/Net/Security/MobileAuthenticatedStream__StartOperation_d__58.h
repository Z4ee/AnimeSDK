#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Net/Security/MobileAuthenticatedStream_OperationType.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.h"
#include "unitysdk/System/Runtime/CompilerServices/ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

namespace Mono::Net::Security { class AsyncProtocolRequest; }
namespace Mono::Net::Security { class AsyncProtocolResult; }
namespace Mono::Net::Security { class MobileAuthenticatedStream; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM__STARTOPERATION_D__58_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x8A8890)
#define MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM__STARTOPERATION_D__58_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x55E040)

namespace Mono::Net::Security
{
	inline static constexpr unsigned int MobileAuthenticatedStream__StartOperation_d__58_TypeDefinitionIndex = 2625;

	struct alignas(8) MobileAuthenticatedStream__StartOperation_d__58
	{
		::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::Mono::Net::Security::AsyncProtocolResult*> __u__1; // 0x10
		::Mono::Net::Security::AsyncProtocolRequest* asyncRequest; // 0x20
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Int32> __t__builder; // 0x28
		::System::Threading::CancellationToken cancellationToken; // 0x40
		::Mono::Net::Security::MobileAuthenticatedStream* __4__this; // 0x48
		::System::Int32 __1__state; // 0x50
		::Mono::Net::Security::MobileAuthenticatedStream_OperationType type; // 0x54

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM__STARTOPERATION_D__58_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_MOBILEAUTHENTICATEDSTREAM__STARTOPERATION_D__58_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
