#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8B550A61FC9DDA82_Enum_3_05F7423D39739F87.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UICinemaPlayBubble04NormalWidgetController; }
namespace System { class String; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UICINEMAPLAYBUBBLE04NORMALWIDGETCONTROLLER__PLAYBUBBLEANIMATION_D__7_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x89D6A0)
#define MOLEMOLE_UICINEMAPLAYBUBBLE04NORMALWIDGETCONTROLLER__PLAYBUBBLEANIMATION_D__7_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

namespace MoleMole
{
	inline static constexpr unsigned int UICinemaPlayBubble04NormalWidgetController__PlayBubbleAnimation_d__7_TypeDefinitionIndex = 73894;

	struct alignas(8) UICinemaPlayBubble04NormalWidgetController__PlayBubbleAnimation_d__7
	{
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder __t__builder; // 0x10
		::System::String* animString; // 0x18
		::MoleMole::UICinemaPlayBubble04NormalWidgetController* __4__this; // 0x20
		::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::Class_1_8B550A61FC9DDA82_Enum_3_05F7423D39739F87> __u__1; // 0x28
		::System::Int32 __1__state; // 0x38
		::System::Boolean isHide; // 0x3C

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYBUBBLE04NORMALWIDGETCONTROLLER__PLAYBUBBLEANIMATION_D__7_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAPLAYBUBBLE04NORMALWIDGETCONTROLLER__PLAYBUBBLEANIMATION_D__7_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
