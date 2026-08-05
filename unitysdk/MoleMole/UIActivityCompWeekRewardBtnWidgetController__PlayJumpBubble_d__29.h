#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UIActivityCompWeekRewardBtnWidgetController; }
namespace System { class String; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UIACTIVITYCOMPWEEKREWARDBTNWIDGETCONTROLLER__PLAYJUMPBUBBLE_D__29_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x88B430)
#define MOLEMOLE_UIACTIVITYCOMPWEEKREWARDBTNWIDGETCONTROLLER__PLAYJUMPBUBBLE_D__29_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityCompWeekRewardBtnWidgetController__PlayJumpBubble_d__29_TypeDefinitionIndex = 40568;

	struct alignas(8) UIActivityCompWeekRewardBtnWidgetController__PlayJumpBubble_d__29
	{
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder __t__builder; // 0x20
		::MoleMole::UIActivityCompWeekRewardBtnWidgetController* __4__this; // 0x28
		::System::String* bubbleText; // 0x30
		::System::Int32 __1__state; // 0x38

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCOMPWEEKREWARDBTNWIDGETCONTROLLER__PLAYJUMPBUBBLE_D__29_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCOMPWEEKREWARDBTNWIDGETCONTROLLER__PLAYJUMPBUBBLE_D__29_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
