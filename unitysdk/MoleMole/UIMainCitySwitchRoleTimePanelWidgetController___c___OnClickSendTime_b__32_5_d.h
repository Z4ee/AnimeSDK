#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UIMAINCITYSWITCHROLETIMEPANELWIDGETCONTROLLER___C___ONCLICKSENDTIME_B__32_5_D_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x87E5B0)
#define MOLEMOLE_UIMAINCITYSWITCHROLETIMEPANELWIDGETCONTROLLER___C___ONCLICKSENDTIME_B__32_5_D_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCitySwitchRoleTimePanelWidgetController___c___OnClickSendTime_b__32_5_d_TypeDefinitionIndex = 55667;

	struct alignas(8) UIMainCitySwitchRoleTimePanelWidgetController___c___OnClickSendTime_b__32_5_d
	{
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x10
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x20
		::System::Threading::CancellationToken token; // 0x30
		::System::Int32 __1__state; // 0x38

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLETIMEPANELWIDGETCONTROLLER___C___ONCLICKSENDTIME_B__32_5_D_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYSWITCHROLETIMEPANELWIDGETCONTROLLER___C___ONCLICKSENDTIME_B__32_5_D_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
