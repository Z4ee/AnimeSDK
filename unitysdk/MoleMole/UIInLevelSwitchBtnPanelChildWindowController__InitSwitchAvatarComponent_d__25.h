#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UIInLevelSwitchBtnPanelChildWindowController; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER__INITSWITCHAVATARCOMPONENT_D__25_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x821720)
#define MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER__INITSWITCHAVATARCOMPONENT_D__25_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelSwitchBtnPanelChildWindowController__InitSwitchAvatarComponent_d__25_TypeDefinitionIndex = 61401;

	struct alignas(8) UIInLevelSwitchBtnPanelChildWindowController__InitSwitchAvatarComponent_d__25
	{
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder __t__builder; // 0x10
		::MoleMole::UIInLevelSwitchBtnPanelChildWindowController* __4__this; // 0x18
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x20
		::System::Int32 __1__state; // 0x30

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER__INITSWITCHAVATARCOMPONENT_D__25_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELSWITCHBTNPANELCHILDWINDOWCONTROLLER__INITSWITCHAVATARCOMPONENT_D__25_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
