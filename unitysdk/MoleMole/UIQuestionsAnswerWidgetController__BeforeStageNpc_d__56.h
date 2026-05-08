#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_3_C3F0E3B5AB5977AE_4;
namespace MoleMole { class UIQuestionsAnswerWidgetController; }
namespace MoleMole { class UIQuestionsAnswerWidgetController___c__DisplayClass56_0; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER__BEFORESTAGENPC_D__56_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x777810)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER__BEFORESTAGENPC_D__56_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2661E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIQuestionsAnswerWidgetController__BeforeStageNpc_d__56_TypeDefinitionIndex = 74567;

	struct alignas(8) UIQuestionsAnswerWidgetController__BeforeStageNpc_d__56
	{
		::Class_3_C3F0E3B5AB5977AE_4* _next_5__2; // 0x10
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x18
		::MoleMole::UIQuestionsAnswerWidgetController___c__DisplayClass56_0* __8__1; // 0x28
		::MoleMole::UIQuestionsAnswerWidgetController* __4__this; // 0x30
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x38
		::System::Int32 __1__state; // 0x48
		::System::Int32 index; // 0x4C

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER__BEFORESTAGENPC_D__56_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER__BEFORESTAGENPC_D__56_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
