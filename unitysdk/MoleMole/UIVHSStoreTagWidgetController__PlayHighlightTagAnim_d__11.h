#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UIVHSStoreTagWidgetController; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UIVHSSTORETAGWIDGETCONTROLLER__PLAYHIGHLIGHTTAGANIM_D__11_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x740430)
#define MOLEMOLE_UIVHSSTORETAGWIDGETCONTROLLER__PLAYHIGHLIGHTTAGANIM_D__11_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

namespace MoleMole
{
	inline static constexpr unsigned int UIVHSStoreTagWidgetController__PlayHighlightTagAnim_d__11_TypeDefinitionIndex = 66237;

	struct alignas(8) UIVHSStoreTagWidgetController__PlayHighlightTagAnim_d__11
	{
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder __t__builder; // 0x10
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x18
		::MoleMole::UIVHSStoreTagWidgetController* __4__this; // 0x28
		::System::Threading::CancellationToken cancellationToken; // 0x30
		::System::Boolean skipAnim; // 0x38
		::System::Boolean highlight; // 0x39
		::System::Int32 __1__state; // 0x3C
		::System::Single animDelayTime; // 0x40

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
