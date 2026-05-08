#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Mono/Net/Security/AsyncOperationStatus.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncTaskMethodBuilder.h"
#include "unitysdk/System/Runtime/CompilerServices/ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter.h"
#include "unitysdk/System/Runtime/CompilerServices/ConfiguredTaskAwaitable_ConfiguredTaskAwaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

namespace Mono::Net::Security { class AsyncProtocolRequest; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MONO_NET_SECURITY_ASYNCPROTOCOLREQUEST__PROCESSOPERATION_D__24_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x8FEBC0)
#define MONO_NET_SECURITY_ASYNCPROTOCOLREQUEST__PROCESSOPERATION_D__24_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x5C4D00)

namespace Mono::Net::Security
{
	inline static constexpr unsigned int AsyncProtocolRequest__ProcessOperation_d__24_TypeDefinitionIndex = 2612;

	struct alignas(8) AsyncProtocolRequest__ProcessOperation_d__24
	{
		::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__2; // 0x10
		::Mono::Net::Security::AsyncProtocolRequest* __4__this; // 0x20
		::System::Threading::CancellationToken cancellationToken; // 0x28
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder __t__builder; // 0x30
		::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Nullable_1<::System::Int32>> __u__1; // 0x48
		::Mono::Net::Security::AsyncOperationStatus _newStatus_5__2; // 0x58
		::Mono::Net::Security::AsyncOperationStatus _status_5__1; // 0x5C
		::System::Int32 __1__state; // 0x60

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_ASYNCPROTOCOLREQUEST__PROCESSOPERATION_D__24_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_ASYNCPROTOCOLREQUEST__PROCESSOPERATION_D__24_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
