#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8B550A61FC9DDA82_Enum_3_05F7423D39739F87.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UIQuestionsAnswerScreenDetailContext; }
namespace MoleMole { class UIQuestionsAnswerScreenWidgetController; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UIQUESTIONSANSWERSCREENWIDGETCONTROLLER__CHANGETODETAIL_D__10_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7C51C0)
#define MOLEMOLE_UIQUESTIONSANSWERSCREENWIDGETCONTROLLER__CHANGETODETAIL_D__10_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

namespace MoleMole
{
	inline static constexpr unsigned int UIQuestionsAnswerScreenWidgetController__ChangeToDetail_d__10_TypeDefinitionIndex = 81797;

	struct alignas(8) UIQuestionsAnswerScreenWidgetController__ChangeToDetail_d__10
	{
		::MoleMole::UIQuestionsAnswerScreenDetailContext* context; // 0x10
		::MoleMole::UIQuestionsAnswerScreenWidgetController* __4__this; // 0x18
		::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::Class_1_8B550A61FC9DDA82_Enum_3_05F7423D39739F87> __u__1; // 0x20
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x30
		::System::Int32 __1__state; // 0x40

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERSCREENWIDGETCONTROLLER__CHANGETODETAIL_D__10_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERSCREENWIDGETCONTROLLER__CHANGETODETAIL_D__10_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
