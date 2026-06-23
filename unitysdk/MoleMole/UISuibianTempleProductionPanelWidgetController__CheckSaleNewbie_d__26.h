#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UISUIBIANTEMPLEPRODUCTIONPANELWIDGETCONTROLLER__CHECKSALENEWBIE_D__26_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7BC300)
#define MOLEMOLE_UISUIBIANTEMPLEPRODUCTIONPANELWIDGETCONTROLLER__CHECKSALENEWBIE_D__26_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianTempleProductionPanelWidgetController__CheckSaleNewbie_d__26_TypeDefinitionIndex = 51210;

	struct alignas(8) UISuibianTempleProductionPanelWidgetController__CheckSaleNewbie_d__26
	{
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x20
		::System::Int32 __1__state; // 0x30

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEPRODUCTIONPANELWIDGETCONTROLLER__CHECKSALENEWBIE_D__26_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEPRODUCTIONPANELWIDGETCONTROLLER__CHECKSALENEWBIE_D__26_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
