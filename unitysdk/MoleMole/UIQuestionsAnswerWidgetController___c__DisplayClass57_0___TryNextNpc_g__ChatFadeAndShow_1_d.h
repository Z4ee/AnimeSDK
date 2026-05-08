#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_1_6CC3841F9D35D206;
namespace MoleMole { class UIQuestionsAnswerWidgetController___c__DisplayClass57_0; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER___C__DISPLAYCLASS57_0___TRYNEXTNPC_G__CHATFADEANDSHOW_1_D_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x75A5F0)
#define MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER___C__DISPLAYCLASS57_0___TRYNEXTNPC_G__CHATFADEANDSHOW_1_D_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2661E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIQuestionsAnswerWidgetController___c__DisplayClass57_0___TryNextNpc_g__ChatFadeAndShow_1_d_TypeDefinitionIndex = 74587;

	struct alignas(8) UIQuestionsAnswerWidgetController___c__DisplayClass57_0___TryNextNpc_g__ChatFadeAndShow_1_d
	{
		::MoleMole::UIQuestionsAnswerWidgetController___c__DisplayClass57_0* __4__this; // 0x10
		::System::Collections::Generic::List_1<::Class_1_6CC3841F9D35D206*>* _optionList_5__2; // 0x18
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x20
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x30
		::System::Int32 __1__state; // 0x40

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER___C__DISPLAYCLASS57_0___TRYNEXTNPC_G__CHATFADEANDSHOW_1_D_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUESTIONSANSWERWIDGETCONTROLLER___C__DISPLAYCLASS57_0___TRYNEXTNPC_G__CHATFADEANDSHOW_1_D_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
