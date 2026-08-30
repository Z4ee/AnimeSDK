#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncVoidMethodBuilder.h"
#include "unitysdk/System/Runtime/CompilerServices/TaskAwaiter_1.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client { class NetworkManager; }
namespace System { class String; }
namespace System::Net { class IPHostEntry; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define RPG_CLIENT_NETWORKMANAGER___GETIPADDRESSASYNC_D__4_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x1540F0)
#define RPG_CLIENT_NETWORKMANAGER___GETIPADDRESSASYNC_D__4_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x14FD80)

namespace RPG::Client
{
	inline static constexpr unsigned int NetworkManager___GetIPAddressAsync_d__4_TypeDefinitionIndex = 69343;

	struct alignas(8) NetworkManager___GetIPAddressAsync_d__4
	{
		::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder; // 0x10
		::System::String* url; // 0x30
		::RPG::Client::NetworkManager* __4__this; // 0x38
		::System::Runtime::CompilerServices::TaskAwaiter_1<::System::Net::IPHostEntry*> __u__1; // 0x40
		::System::Int32 __1__state; // 0x48

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKMANAGER___GETIPADDRESSASYNC_D__4_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + RPG_CLIENT_NETWORKMANAGER___GETIPADDRESSASYNC_D__4_SETSTATEMACHINE_OFFSET))(this, a1);
		}
	};
}
