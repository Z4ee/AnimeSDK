#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8B550A61FC9DDA82_Enum_3_05F7423D39739F87.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UIInLevelRoleHudSmallWidgetChildWindowController_HpAnimDataBindView; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UIINLEVELROLEHUDSMALLWIDGETCHILDWINDOWCONTROLLER_HPANIMDATABINDVIEW__HANDLEHPUPANIM_D__17_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x87E5A0)
#define MOLEMOLE_UIINLEVELROLEHUDSMALLWIDGETCHILDWINDOWCONTROLLER_HPANIMDATABINDVIEW__HANDLEHPUPANIM_D__17_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelRoleHudSmallWidgetChildWindowController_HpAnimDataBindView__HandleHpUpAnim_d__17_TypeDefinitionIndex = 42737;

	struct alignas(8) UIInLevelRoleHudSmallWidgetChildWindowController_HpAnimDataBindView__HandleHpUpAnim_d__17
	{
		::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::Class_1_8B550A61FC9DDA82_Enum_3_05F7423D39739F87> __u__1; // 0x10
		::MoleMole::UIInLevelRoleHudSmallWidgetChildWindowController_HpAnimDataBindView* __4__this; // 0x20
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder __t__builder; // 0x28
		::System::Int32 __1__state; // 0x30

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELROLEHUDSMALLWIDGETCHILDWINDOWCONTROLLER_HPANIMDATABINDVIEW__HANDLEHPUPANIM_D__17_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELROLEHUDSMALLWIDGETCHILDWINDOWCONTROLLER_HPANIMDATABINDVIEW__HANDLEHPUPANIM_D__17_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
