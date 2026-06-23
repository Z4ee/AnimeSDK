#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UICoopLevelRewardRowWidgetController; }
namespace MoleMole { class UICoopLevelRewardRowWidgetController___c__DisplayClass11_0; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UICOOPLEVELREWARDROWWIDGETCONTROLLER__ONCLICKGETREWARD_ASYNC_D__11_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7EA7C0)
#define MOLEMOLE_UICOOPLEVELREWARDROWWIDGETCONTROLLER__ONCLICKGETREWARD_ASYNC_D__11_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

namespace MoleMole
{
	inline static constexpr unsigned int UICoopLevelRewardRowWidgetController__OnClickGetReward_Async_d__11_TypeDefinitionIndex = 51343;

	struct alignas(8) UICoopLevelRewardRowWidgetController__OnClickGetReward_Async_d__11
	{
		::MoleMole::UICoopLevelRewardRowWidgetController___c__DisplayClass11_0* __8__1; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x18
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x28
		::MoleMole::UICoopLevelRewardRowWidgetController* __4__this; // 0x38
		::System::Int32 __1__state; // 0x40

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPLEVELREWARDROWWIDGETCONTROLLER__ONCLICKGETREWARD_ASYNC_D__11_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPLEVELREWARDROWWIDGETCONTROLLER__ONCLICKGETREWARD_ASYNC_D__11_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
