#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8B550A61FC9DDA82_Enum_3_05F7423D39739F87.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncVoidMethodBuilder.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UIInterKnowCoursePanelWidgetController; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UIINTERKNOWCOURSEPANELWIDGETCONTROLLER__ONCLICKNEWSEASON_D__78_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x821740)
#define MOLEMOLE_UIINTERKNOWCOURSEPANELWIDGETCONTROLLER__ONCLICKNEWSEASON_D__78_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x67A600)

namespace MoleMole
{
	inline static constexpr unsigned int UIInterKnowCoursePanelWidgetController__OnClickNewSeason_d__78_TypeDefinitionIndex = 43766;

	struct alignas(8) UIInterKnowCoursePanelWidgetController__OnClickNewSeason_d__78
	{
		::System::Threading::CancellationToken _cancelToken_5__2; // 0x10
		::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::Class_1_8B550A61FC9DDA82_Enum_3_05F7423D39739F87> __u__1; // 0x18
		::MoleMole::UIInterKnowCoursePanelWidgetController* __4__this; // 0x28
		::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder; // 0x30
		::System::Int32 index; // 0x50
		::System::Int32 __1__state; // 0x54

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOWCOURSEPANELWIDGETCONTROLLER__ONCLICKNEWSEASON_D__78_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINTERKNOWCOURSEPANELWIDGETCONTROLLER__ONCLICKNEWSEASON_D__78_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
