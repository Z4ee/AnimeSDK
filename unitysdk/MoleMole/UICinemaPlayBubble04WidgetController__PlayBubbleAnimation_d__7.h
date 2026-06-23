#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8B550A61FC9DDA82_Enum_3_05F7423D39739F87.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UICinemaPlayBubble04WidgetController; }
namespace System { class String; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UICINEMAPLAYBUBBLE04WIDGETCONTROLLER__PLAYBUBBLEANIMATION_D__7_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x82E360)
#define MOLEMOLE_UICINEMAPLAYBUBBLE04WIDGETCONTROLLER__PLAYBUBBLEANIMATION_D__7_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

namespace MoleMole
{
	inline static constexpr unsigned int UICinemaPlayBubble04WidgetController__PlayBubbleAnimation_d__7_TypeDefinitionIndex = 45029;

	struct alignas(8) UICinemaPlayBubble04WidgetController__PlayBubbleAnimation_d__7
	{
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__2; // 0x10
		::MoleMole::UICinemaPlayBubble04WidgetController* __4__this; // 0x20
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder __t__builder; // 0x28
		::System::String* animString; // 0x30
		::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::Class_1_8B550A61FC9DDA82_Enum_3_05F7423D39739F87> __u__1; // 0x38
		::System::Int32 __1__state; // 0x48
		::System::Boolean isHide; // 0x4C

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYBUBBLE04WIDGETCONTROLLER__PLAYBUBBLEANIMATION_D__7_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYBUBBLE04WIDGETCONTROLLER__PLAYBUBBLEANIMATION_D__7_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
