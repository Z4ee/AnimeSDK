#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/RPG/Client/PacketSendResult_1.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Threading/CancellationTokenRegistration.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client { template <typename T> class PendingRspEntry_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace System::Threading { class CancellationTokenSource; }

namespace RPG::Client
{
	inline static constexpr unsigned int PendingRspEntry_1__AwaitAsync_d__21_TypeDefinitionIndex = 69373;

	template <typename TRsp>
	struct PendingRspEntry_1__AwaitAsync_d__21
	{
		::System::Int32 __1__state; // 0x0
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::RPG::Client::PacketSendResult_1<TRsp>> __t__builder; // 0x0
		::System::Threading::CancellationToken ct; // 0x0
		::RPG::Client::PendingRspEntry_1<TRsp>* __4__this; // 0x0
		::System::Threading::CancellationTokenRegistration _ctReg_5__2; // 0x0
		::System::Threading::CancellationTokenSource* _timeoutCts_5__3; // 0x0
		::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::RPG::Client::PacketSendResult_1<TRsp>> __u__1; // 0x0
	};
}
