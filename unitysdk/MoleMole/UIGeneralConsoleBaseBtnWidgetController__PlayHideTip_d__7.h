#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_6D17A92E4F636970_Enum_3_05F7423D39739F87.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncVoidMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UIGeneralConsoleBaseBtnWidgetController; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UIGENERALCONSOLEBASEBTNWIDGETCONTROLLER__PLAYHIDETIP_D__7_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7BD9A0)
#define MOLEMOLE_UIGENERALCONSOLEBASEBTNWIDGETCONTROLLER__PLAYHIDETIP_D__7_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x6069D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralConsoleBaseBtnWidgetController__PlayHideTip_d__7_TypeDefinitionIndex = 40783;

	struct alignas(8) UIGeneralConsoleBaseBtnWidgetController__PlayHideTip_d__7
	{
		::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder; // 0x10
		::MoleMole::UIGeneralConsoleBaseBtnWidgetController* __4__this; // 0x30
		::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::Class_1_6D17A92E4F636970_Enum_3_05F7423D39739F87> __u__1; // 0x38
		::System::Int32 __1__state; // 0x48

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALCONSOLEBASEBTNWIDGETCONTROLLER__PLAYHIDETIP_D__7_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALCONSOLEBASEBTNWIDGETCONTROLLER__PLAYHIDETIP_D__7_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
