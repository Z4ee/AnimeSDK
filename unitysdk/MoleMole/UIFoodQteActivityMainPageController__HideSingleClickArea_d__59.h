#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UIFoodQteActivityMainPageController; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace UnityEngine { class RectTransform; }

#define MOLEMOLE_UIFOODQTEACTIVITYMAINPAGECONTROLLER__HIDESINGLECLICKAREA_D__59_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x875E20)
#define MOLEMOLE_UIFOODQTEACTIVITYMAINPAGECONTROLLER__HIDESINGLECLICKAREA_D__59_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

namespace MoleMole
{
	inline static constexpr unsigned int UIFoodQteActivityMainPageController__HideSingleClickArea_d__59_TypeDefinitionIndex = 50397;

	struct alignas(8) UIFoodQteActivityMainPageController__HideSingleClickArea_d__59
	{
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder __t__builder; // 0x10
		::MoleMole::UIFoodQteActivityMainPageController* __4__this; // 0x18
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x20
		::UnityEngine::RectTransform* rectTransform; // 0x30
		::System::Int32 __1__state; // 0x38

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFOODQTEACTIVITYMAINPAGECONTROLLER__HIDESINGLECLICKAREA_D__59_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFOODQTEACTIVITYMAINPAGECONTROLLER__HIDESINGLECLICKAREA_D__59_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
