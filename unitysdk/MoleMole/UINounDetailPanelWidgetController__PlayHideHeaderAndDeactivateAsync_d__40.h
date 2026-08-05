#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UINounDetailPanelWidgetController; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER__PLAYHIDEHEADERANDDEACTIVATEASYNC_D__40_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x871C40)
#define MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER__PLAYHIDEHEADERANDDEACTIVATEASYNC_D__40_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

namespace MoleMole
{
	inline static constexpr unsigned int UINounDetailPanelWidgetController__PlayHideHeaderAndDeactivateAsync_d__40_TypeDefinitionIndex = 55926;

	struct alignas(8) UINounDetailPanelWidgetController__PlayHideHeaderAndDeactivateAsync_d__40
	{
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x20
		::MoleMole::UINounDetailPanelWidgetController* __4__this; // 0x30
		::System::Int32 __1__state; // 0x38

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER__PLAYHIDEHEADERANDDEACTIVATEASYNC_D__40_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER__PLAYHIDEHEADERANDDEACTIVATEASYNC_D__40_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
