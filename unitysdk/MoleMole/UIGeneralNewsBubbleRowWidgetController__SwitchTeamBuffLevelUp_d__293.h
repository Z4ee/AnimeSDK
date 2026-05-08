#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UIGeneralNewsBubbleRowWidgetController; }
namespace MoleMole { class UIGeneralNewsBubbleRowWidgetController___c__DisplayClass293_0; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER__SWITCHTEAMBUFFLEVELUP_D__293_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7A1F00)
#define MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER__SWITCHTEAMBUFFLEVELUP_D__293_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2661E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralNewsBubbleRowWidgetController__SwitchTeamBuffLevelUp_d__293_TypeDefinitionIndex = 73342;

	struct alignas(8) UIGeneralNewsBubbleRowWidgetController__SwitchTeamBuffLevelUp_d__293
	{
		::MoleMole::UIGeneralNewsBubbleRowWidgetController___c__DisplayClass293_0* __8__1; // 0x10
		::MoleMole::UIGeneralNewsBubbleRowWidgetController* __4__this; // 0x18
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x20
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder __t__builder; // 0x30
		::System::Int32 level; // 0x38
		::System::Int32 __1__state; // 0x3C

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER__SWITCHTEAMBUFFLEVELUP_D__293_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER__SWITCHTEAMBUFFLEVELUP_D__293_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
