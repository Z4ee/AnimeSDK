#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UISuibianTempleBuddyAddPointPopWindowController; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UISUIBIANTEMPLEBUDDYADDPOINTPOPWINDOWCONTROLLER__DOADDPOINT_D__11_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7856B0)
#define MOLEMOLE_UISUIBIANTEMPLEBUDDYADDPOINTPOPWINDOWCONTROLLER__DOADDPOINT_D__11_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2661E0)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianTempleBuddyAddPointPopWindowController__DoAddPoint_d__11_TypeDefinitionIndex = 47370;

	struct alignas(8) UISuibianTempleBuddyAddPointPopWindowController__DoAddPoint_d__11
	{
		::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::System::Int32> __u__1; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder __t__builder; // 0x20
		::MoleMole::UISuibianTempleBuddyAddPointPopWindowController* __4__this; // 0x28
		::System::Int32 __1__state; // 0x30

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEBUDDYADDPOINTPOPWINDOWCONTROLLER__DOADDPOINT_D__11_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEBUDDYADDPOINTPOPWINDOWCONTROLLER__DOADDPOINT_D__11_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
