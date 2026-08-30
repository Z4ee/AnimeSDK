#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client { template <typename T> class PendingRspEntry_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

namespace RPG::Client
{
	inline static constexpr unsigned int PendingRspEntry_1___WatchTimeoutAsync_d__23_TypeDefinitionIndex = 69374;

	template <typename TRsp>
	struct PendingRspEntry_1___WatchTimeoutAsync_d__23
	{
		::System::Int32 __1__state; // 0x0
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder __t__builder; // 0x0
		::System::Threading::CancellationToken cancelToken; // 0x0
		::RPG::Client::PendingRspEntry_1<TRsp>* __4__this; // 0x0
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x0
	};
}
