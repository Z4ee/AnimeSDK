#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8B550A61FC9DDA82_Enum_3_05F7423D39739F87.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/MoleMole/UIFoodQteActivityMainPageController_EEmoji.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UIFoodQteActivityMainPageController; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UIFOODQTEACTIVITYMAINPAGECONTROLLER__PLAYEMOJI_D__43_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x866100)
#define MOLEMOLE_UIFOODQTEACTIVITYMAINPAGECONTROLLER__PLAYEMOJI_D__43_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

namespace MoleMole
{
	inline static constexpr unsigned int UIFoodQteActivityMainPageController__PlayEmoji_d__43_TypeDefinitionIndex = 50394;

	struct alignas(8) UIFoodQteActivityMainPageController__PlayEmoji_d__43
	{
		::MoleMole::UIFoodQteActivityMainPageController* __4__this; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder __t__builder; // 0x18
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__2; // 0x20
		::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::Class_1_8B550A61FC9DDA82_Enum_3_05F7423D39739F87> __u__1; // 0x30
		::MoleMole::UIFoodQteActivityMainPageController_EEmoji emojiState; // 0x40
		::System::Int32 __1__state; // 0x44
		::System::Boolean returnIdle; // 0x48

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFOODQTEACTIVITYMAINPAGECONTROLLER__PLAYEMOJI_D__43_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFOODQTEACTIVITYMAINPAGECONTROLLER__PLAYEMOJI_D__43_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
