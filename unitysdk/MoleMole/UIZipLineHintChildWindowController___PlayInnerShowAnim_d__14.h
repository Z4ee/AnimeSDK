#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8B550A61FC9DDA82_Enum_3_05F7423D39739F87.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UIZipLineHintChildWindowController; }
namespace System { class Action; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UIZIPLINEHINTCHILDWINDOWCONTROLLER___PLAYINNERSHOWANIM_D__14_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7CF4C0)
#define MOLEMOLE_UIZIPLINEHINTCHILDWINDOWCONTROLLER___PLAYINNERSHOWANIM_D__14_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

namespace MoleMole
{
	inline static constexpr unsigned int UIZipLineHintChildWindowController___PlayInnerShowAnim_d__14_TypeDefinitionIndex = 83998;

	struct alignas(8) UIZipLineHintChildWindowController___PlayInnerShowAnim_d__14
	{
		::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::Class_1_8B550A61FC9DDA82_Enum_3_05F7423D39739F87> __u__1; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder __t__builder; // 0x20
		::System::Action* onFinish; // 0x28
		::MoleMole::UIZipLineHintChildWindowController* __4__this; // 0x30
		::System::Int32 __1__state; // 0x38

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZIPLINEHINTCHILDWINDOWCONTROLLER___PLAYINNERSHOWANIM_D__14_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZIPLINEHINTCHILDWINDOWCONTROLLER___PLAYINNERSHOWANIM_D__14_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
