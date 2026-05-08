#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UIQuestionsAnswerPageController; }
namespace MoleMole { class UIQuestionsAnswerPageController___c__DisplayClass26_0; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UIQUESTIONSANSWERPAGECONTROLLER__STARTGAMETASK_D__26_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x76DB70)
#define MOLEMOLE_UIQUESTIONSANSWERPAGECONTROLLER__STARTGAMETASK_D__26_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2661E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIQuestionsAnswerPageController__StartGameTask_d__26_TypeDefinitionIndex = 81710;

	struct alignas(8) UIQuestionsAnswerPageController__StartGameTask_d__26
	{
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder __t__builder; // 0x10
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x18
		::MoleMole::UIQuestionsAnswerPageController* __4__this; // 0x28
		::MoleMole::UIQuestionsAnswerPageController___c__DisplayClass26_0* __8__1; // 0x30
		::System::Boolean restart; // 0x38
		::System::Int32 __1__state; // 0x3C
		::System::Int32 stageId; // 0x40

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERPAGECONTROLLER__STARTGAMETASK_D__26_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERPAGECONTROLLER__STARTGAMETASK_D__26_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
