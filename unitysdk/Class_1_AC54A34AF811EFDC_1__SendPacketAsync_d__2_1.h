#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/RPG/Client/PacketSendResult_1.h"
#include "unitysdk/Struct_2_31852543D3677906.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

namespace Google::Protobuf { class IMessage; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

inline static constexpr unsigned int Class_1_AC54A34AF811EFDC_1__SendPacketAsync_d__2_1_TypeDefinitionIndex = 79178;

template <typename TRsp>
struct Class_1_AC54A34AF811EFDC_1__SendPacketAsync_d__2_1
{
	::System::Int32 __1__state; // 0x0
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<TRsp> __t__builder; // 0x0
	::Google::Protobuf::IMessage* data; // 0x0
	::Struct_2_31852543D3677906 options; // 0x0
	::System::Threading::CancellationToken ct; // 0x0
	::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::RPG::Client::PacketSendResult_1<TRsp>> __u__1; // 0x0
};
