#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8B550A61FC9DDA82_Enum_3_05F7423D39739F87.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UIQuestionsAnswerWidgetController; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER__WAITBLACKSCREENFADEOUT_D__104_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7C5200)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER__WAITBLACKSCREENFADEOUT_D__104_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

namespace MoleMole
{
	inline static constexpr unsigned int UIQuestionsAnswerWidgetController__WaitBlackscreenFadeOut_d__104_TypeDefinitionIndex = 88953;

	struct alignas(8) UIQuestionsAnswerWidgetController__WaitBlackscreenFadeOut_d__104
	{
		::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::Class_1_8B550A61FC9DDA82_Enum_3_05F7423D39739F87> __u__2; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x20
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x30
		::MoleMole::UIQuestionsAnswerWidgetController* __4__this; // 0x40
		::System::Int32 __1__state; // 0x48

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER__WAITBLACKSCREENFADEOUT_D__104_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER__WAITBLACKSCREENFADEOUT_D__104_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
