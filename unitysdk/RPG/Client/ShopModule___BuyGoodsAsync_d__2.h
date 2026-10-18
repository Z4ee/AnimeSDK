#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/RPG/Client/PacketSendResult_1.h"
#include "unitysdk/System/ValueType.h"

namespace Proto { class BuyGoodsScRsp; }
namespace RPG::Client { class ShopModule; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define RPG_CLIENT_SHOPMODULE___BUYGOODSASYNC_D__2_MOVENEXT_OFFSET UNITYSDK_OFFSET(0xF1C00)
#define RPG_CLIENT_SHOPMODULE___BUYGOODSASYNC_D__2_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x10B0)

namespace RPG::Client
{
	inline static constexpr unsigned int ShopModule___BuyGoodsAsync_d__2_TypeDefinitionIndex = 67952;

	struct alignas(8) ShopModule___BuyGoodsAsync_d__2
	{
		::System::Collections::Generic::List_1<::System::UInt32>* optionalRewardIDList; // 0x10
		::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::RPG::Client::PacketSendResult_1<::Proto::BuyGoodsScRsp*>> __u__1; // 0x18
		::RPG::Client::ShopModule* __4__this; // 0x40
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder __t__builder; // 0x48
		::System::UInt32 token; // 0x50
		::System::UInt32 goodsID; // 0x54
		::System::UInt32 itemID; // 0x58
		::System::UInt32 shopID; // 0x5C
		::System::UInt32 num; // 0x60
		::System::Int32 __1__state; // 0x64

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHOPMODULE___BUYGOODSASYNC_D__2_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + RPG_CLIENT_SHOPMODULE___BUYGOODSASYNC_D__2_SETSTATEMACHINE_OFFSET))(this, a1);
		}
	};
}
