#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8B550A61FC9DDA82_Enum_3_05F7423D39739F87.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UIInLevelRoleHudWidgetChildWindowController_HpAnimDataBindView; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UIINLEVELROLEHUDWIDGETCHILDWINDOWCONTROLLER_HPANIMDATABINDVIEW__HANDLEHPUPANIM_D__17_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x846730)
#define MOLEMOLE_UIINLEVELROLEHUDWIDGETCHILDWINDOWCONTROLLER_HPANIMDATABINDVIEW__HANDLEHPUPANIM_D__17_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelRoleHudWidgetChildWindowController_HpAnimDataBindView__HandleHpUpAnim_d__17_TypeDefinitionIndex = 43998;

	struct alignas(8) UIInLevelRoleHudWidgetChildWindowController_HpAnimDataBindView__HandleHpUpAnim_d__17
	{
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder __t__builder; // 0x10
		::MoleMole::UIInLevelRoleHudWidgetChildWindowController_HpAnimDataBindView* __4__this; // 0x18
		::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::Class_1_8B550A61FC9DDA82_Enum_3_05F7423D39739F87> __u__1; // 0x20
		::System::Int32 __1__state; // 0x30

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELROLEHUDWIDGETCHILDWINDOWCONTROLLER_HPANIMDATABINDVIEW__HANDLEHPUPANIM_D__17_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELROLEHUDWIDGETCHILDWINDOWCONTROLLER_HPANIMDATABINDVIEW__HANDLEHPUPANIM_D__17_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
