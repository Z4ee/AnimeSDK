#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UIGeneralNewsBubbleRowWidgetController; }
namespace System { class String; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER__SWITCHICON_D__167_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x8AE260)
#define MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER__SWITCHICON_D__167_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralNewsBubbleRowWidgetController__SwitchIcon_d__167_TypeDefinitionIndex = 43628;

	struct alignas(8) UIGeneralNewsBubbleRowWidgetController__SwitchIcon_d__167
	{
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x10
		::MoleMole::UIGeneralNewsBubbleRowWidgetController* __4__this; // 0x20
		::System::String* _nextIconPath_5__2; // 0x28
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x30
		::System::Int32 __1__state; // 0x40

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER__SWITCHICON_D__167_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALNEWSBUBBLEROWWIDGETCONTROLLER__SWITCHICON_D__167_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
