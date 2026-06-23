#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UISuibianTempleProductionPanelWidgetController; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UISUIBIANTEMPLEPRODUCTIONPANELWIDGETCONTROLLER__CHECKGETPRODUCTNEWBIE_D__27_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x6CB380)
#define MOLEMOLE_UISUIBIANTEMPLEPRODUCTIONPANELWIDGETCONTROLLER__CHECKGETPRODUCTNEWBIE_D__27_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianTempleProductionPanelWidgetController__CheckGetProductNewBie_d__27_TypeDefinitionIndex = 51211;

	struct alignas(8) UISuibianTempleProductionPanelWidgetController__CheckGetProductNewBie_d__27
	{
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x10
		::MoleMole::UISuibianTempleProductionPanelWidgetController* __4__this; // 0x20
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x28
		::System::Int32 __1__state; // 0x38

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEPRODUCTIONPANELWIDGETCONTROLLER__CHECKGETPRODUCTNEWBIE_D__27_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEPRODUCTIONPANELWIDGETCONTROLLER__CHECKGETPRODUCTNEWBIE_D__27_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
