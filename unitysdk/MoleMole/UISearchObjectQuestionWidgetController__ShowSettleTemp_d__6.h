#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8B550A61FC9DDA82_Enum_3_05F7423D39739F87.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UISearchObjectQuestionWidgetController; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UISEARCHOBJECTQUESTIONWIDGETCONTROLLER__SHOWSETTLETEMP_D__6_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x81E8B0)
#define MOLEMOLE_UISEARCHOBJECTQUESTIONWIDGETCONTROLLER__SHOWSETTLETEMP_D__6_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

namespace MoleMole
{
	inline static constexpr unsigned int UISearchObjectQuestionWidgetController__ShowSettleTemp_d__6_TypeDefinitionIndex = 72067;

	struct alignas(8) UISearchObjectQuestionWidgetController__ShowSettleTemp_d__6
	{
		::MoleMole::UISearchObjectQuestionWidgetController* __4__this; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder __t__builder; // 0x18
		::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::Class_1_8B550A61FC9DDA82_Enum_3_05F7423D39739F87> __u__1; // 0x20
		::System::Int32 __1__state; // 0x30

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISEARCHOBJECTQUESTIONWIDGETCONTROLLER__SHOWSETTLETEMP_D__6_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISEARCHOBJECTQUESTIONWIDGETCONTROLLER__SHOWSETTLETEMP_D__6_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
