#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8B550A61FC9DDA82_Enum_3_05F7423D39739F87.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UIQuestionsAnswerChatPlayWidgetController; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UIQUESTIONSANSWERCHATPLAYWIDGETCONTROLLER__FADEOUTCHATANDHIDE_D__28_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7FFC90)
#define MOLEMOLE_UIQUESTIONSANSWERCHATPLAYWIDGETCONTROLLER__FADEOUTCHATANDHIDE_D__28_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

namespace MoleMole
{
	inline static constexpr unsigned int UIQuestionsAnswerChatPlayWidgetController__FadeOutChatAndHide_d__28_TypeDefinitionIndex = 43543;

	struct alignas(8) UIQuestionsAnswerChatPlayWidgetController__FadeOutChatAndHide_d__28
	{
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x10
		::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::Class_1_8B550A61FC9DDA82_Enum_3_05F7423D39739F87> __u__1; // 0x20
		::MoleMole::UIQuestionsAnswerChatPlayWidgetController* __4__this; // 0x30
		::System::Int32 __1__state; // 0x38

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERCHATPLAYWIDGETCONTROLLER__FADEOUTCHATANDHIDE_D__28_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERCHATPLAYWIDGETCONTROLLER__FADEOUTCHATANDHIDE_D__28_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
