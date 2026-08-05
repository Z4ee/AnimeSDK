#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.h"
#include "unitysdk/System/Runtime/CompilerServices/ConfiguredTaskAwaitable_ConfiguredTaskAwaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

namespace Mono::Net::Security { class AsyncProtocolRequest; }
namespace Mono::Net::Security { class AsyncProtocolResult; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MONO_NET_SECURITY_ASYNCPROTOCOLREQUEST__STARTOPERATION_D__23_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x95C5E0)
#define MONO_NET_SECURITY_ASYNCPROTOCOLREQUEST__STARTOPERATION_D__23_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x7DEF30)

namespace Mono::Net::Security
{
	inline static constexpr unsigned int AsyncProtocolRequest__StartOperation_d__23_TypeDefinitionIndex = 2610;

	struct alignas(8) AsyncProtocolRequest__StartOperation_d__23
	{
		::System::Threading::CancellationToken cancellationToken; // 0x10
		::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_ConfiguredTaskAwaiter __u__1; // 0x18
		::Mono::Net::Security::AsyncProtocolRequest* __4__this; // 0x28
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::Mono::Net::Security::AsyncProtocolResult*> __t__builder; // 0x30
		::System::Int32 __1__state; // 0x48

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_ASYNCPROTOCOLREQUEST__STARTOPERATION_D__23_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_ASYNCPROTOCOLREQUEST__STARTOPERATION_D__23_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
