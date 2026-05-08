#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_6D17A92E4F636970_Enum_3_05F7423D39739F87.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UIInLevelRoleHudSmallWidgetChildWindowController_HpAnimDataBindView; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UIINLEVELROLEHUDSMALLWIDGETCHILDWINDOWCONTROLLER_HPANIMDATABINDVIEW__HANDLEHPUPANIM_D__14_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x79EC10)
#define MOLEMOLE_UIINLEVELROLEHUDSMALLWIDGETCHILDWINDOWCONTROLLER_HPANIMDATABINDVIEW__HANDLEHPUPANIM_D__14_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2661E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelRoleHudSmallWidgetChildWindowController_HpAnimDataBindView__HandleHpUpAnim_d__14_TypeDefinitionIndex = 57908;

	struct alignas(8) UIInLevelRoleHudSmallWidgetChildWindowController_HpAnimDataBindView__HandleHpUpAnim_d__14
	{
		::MoleMole::UIInLevelRoleHudSmallWidgetChildWindowController_HpAnimDataBindView* __4__this; // 0x10
		::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::Class_1_6D17A92E4F636970_Enum_3_05F7423D39739F87> __u__1; // 0x18
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder __t__builder; // 0x28
		::System::Int32 __1__state; // 0x30

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELROLEHUDSMALLWIDGETCHILDWINDOWCONTROLLER_HPANIMDATABINDVIEW__HANDLEHPUPANIM_D__14_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELROLEHUDSMALLWIDGETCHILDWINDOWCONTROLLER_HPANIMDATABINDVIEW__HANDLEHPUPANIM_D__14_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
