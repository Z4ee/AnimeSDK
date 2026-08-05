#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UIVHSStoreTagWidgetController; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UIVHSSTORETAGWIDGETCONTROLLER__PLAYHIGHLIGHTTAGANIM_D__11_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x836840)
#define MOLEMOLE_UIVHSSTORETAGWIDGETCONTROLLER__PLAYHIGHLIGHTTAGANIM_D__11_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

namespace MoleMole
{
	inline static constexpr unsigned int UIVHSStoreTagWidgetController__PlayHighlightTagAnim_d__11_TypeDefinitionIndex = 75927;

	struct alignas(8) UIVHSStoreTagWidgetController__PlayHighlightTagAnim_d__11
	{
		::MoleMole::UIVHSStoreTagWidgetController* __4__this; // 0x10
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x18
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder __t__builder; // 0x28
		::System::Threading::CancellationToken cancellationToken; // 0x30
		::System::Int32 __1__state; // 0x38
		::System::Single animDelayTime; // 0x3C
		::System::Boolean skipAnim; // 0x40
		::System::Boolean highlight; // 0x41

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORETAGWIDGETCONTROLLER__PLAYHIGHLIGHTTAGANIM_D__11_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIVHSSTORETAGWIDGETCONTROLLER__PLAYHIGHLIGHTTAGANIM_D__11_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
