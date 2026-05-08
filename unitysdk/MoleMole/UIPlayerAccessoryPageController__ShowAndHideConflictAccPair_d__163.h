#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_6D17A92E4F636970_Enum_3_05F7423D39739F87.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UIPlayerAccessoryPageController; }
namespace System { class String; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UIPLAYERACCESSORYPAGECONTROLLER__SHOWANDHIDECONFLICTACCPAIR_D__163_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x78D290)
#define MOLEMOLE_UIPLAYERACCESSORYPAGECONTROLLER__SHOWANDHIDECONFLICTACCPAIR_D__163_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2661E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIPlayerAccessoryPageController__ShowAndHideConflictAccPair_d__163_TypeDefinitionIndex = 65529;

	struct alignas(8) UIPlayerAccessoryPageController__ShowAndHideConflictAccPair_d__163
	{
		::MoleMole::UIPlayerAccessoryPageController* __4__this; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder __t__builder; // 0x18
		::System::String* conflictFormat; // 0x20
		::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::Class_1_6D17A92E4F636970_Enum_3_05F7423D39739F87> __u__1; // 0x28
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__2; // 0x38
		::System::Int32 __1__state; // 0x48
		::System::Int32 newAcc; // 0x4C
		::System::Int32 oldAcc; // 0x50

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPLAYERACCESSORYPAGECONTROLLER__SHOWANDHIDECONFLICTACCPAIR_D__163_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPLAYERACCESSORYPAGECONTROLLER__SHOWANDHIDECONFLICTACCPAIR_D__163_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
