#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Nullable_1.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncTaskMethodBuilder_1.h"
#include "unitysdk/System/Runtime/CompilerServices/ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

namespace Mono::Net::Security { class AsyncProtocolRequest; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MONO_NET_SECURITY_ASYNCPROTOCOLREQUEST__INNERREAD_D__25_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x386E150)
#define MONO_NET_SECURITY_ASYNCPROTOCOLREQUEST__INNERREAD_D__25_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x38690F0)

namespace Mono::Net::Security
{
	inline static constexpr unsigned int AsyncProtocolRequest__InnerRead_d__25_TypeDefinitionIndex = 2418;

	struct alignas(8) AsyncProtocolRequest__InnerRead_d__25
	{
		::System::Runtime::CompilerServices::ConfiguredTaskAwaitable_1_ConfiguredTaskAwaiter<::System::Int32> __u__1; // 0x10
		::System::Threading::CancellationToken cancellationToken; // 0x20
		::System::Runtime::CompilerServices::AsyncTaskMethodBuilder_1<::System::Nullable_1<::System::Int32>> __t__builder; // 0x28
		::Mono::Net::Security::AsyncProtocolRequest* __4__this; // 0x40
		::System::Int32 _requestedSize_5__1; // 0x48
		::System::Int32 __1__state; // 0x4C
		::System::Nullable_1<::System::Int32> _totalRead_5__2; // 0x50

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_ASYNCPROTOCOLREQUEST__INNERREAD_D__25_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MONO_NET_SECURITY_ASYNCPROTOCOLREQUEST__INNERREAD_D__25_SETSTATEMACHINE_OFFSET))(this, a1);
		}
	};
}
