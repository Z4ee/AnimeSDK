#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8B550A61FC9DDA82_Enum_3_05F7423D39739F87.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UIQuestionsAnswerScreenSettleContext; }
namespace MoleMole { class UIQuestionsAnswerScreenWidgetController; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UIQUESTIONSANSWERSCREENWIDGETCONTROLLER__CHANGETOSETTLE_D__13_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x8535C0)
#define MOLEMOLE_UIQUESTIONSANSWERSCREENWIDGETCONTROLLER__CHANGETOSETTLE_D__13_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

namespace MoleMole
{
	inline static constexpr unsigned int UIQuestionsAnswerScreenWidgetController__ChangeToSettle_d__13_TypeDefinitionIndex = 81798;

	struct alignas(8) UIQuestionsAnswerScreenWidgetController__ChangeToSettle_d__13
	{
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x10
		::System::Threading::CancellationToken cts; // 0x20
		::MoleMole::UIQuestionsAnswerScreenSettleContext* context; // 0x28
		::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::Class_1_8B550A61FC9DDA82_Enum_3_05F7423D39739F87> __u__1; // 0x30
		::MoleMole::UIQuestionsAnswerScreenWidgetController* __4__this; // 0x40
		::System::Int32 __1__state; // 0x48

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERSCREENWIDGETCONTROLLER__CHANGETOSETTLE_D__13_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERSCREENWIDGETCONTROLLER__CHANGETOSETTLE_D__13_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
