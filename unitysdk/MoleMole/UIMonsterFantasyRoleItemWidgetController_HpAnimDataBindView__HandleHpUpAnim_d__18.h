#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UIMonsterFantasyRoleItemWidgetController_HpAnimDataBindView; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UIMONSTERFANTASYROLEITEMWIDGETCONTROLLER_HPANIMDATABINDVIEW__HANDLEHPUPANIM_D__18_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x785640)
#define MOLEMOLE_UIMONSTERFANTASYROLEITEMWIDGETCONTROLLER_HPANIMDATABINDVIEW__HANDLEHPUPANIM_D__18_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2661E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMonsterFantasyRoleItemWidgetController_HpAnimDataBindView__HandleHpUpAnim_d__18_TypeDefinitionIndex = 54694;

	struct alignas(8) UIMonsterFantasyRoleItemWidgetController_HpAnimDataBindView__HandleHpUpAnim_d__18
	{
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x10
		::MoleMole::UIMonsterFantasyRoleItemWidgetController_HpAnimDataBindView* __4__this; // 0x20
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x28
		::System::Int32 __1__state; // 0x38

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYROLEITEMWIDGETCONTROLLER_HPANIMDATABINDVIEW__HANDLEHPUPANIM_D__18_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYROLEITEMWIDGETCONTROLLER_HPANIMDATABINDVIEW__HANDLEHPUPANIM_D__18_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
