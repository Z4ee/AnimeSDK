#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/Enum_3_39A9A0109BB4AB63.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UICinemaSinglePlayWidgetController; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER__SHOWPLAYEREFFECT_D__36_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7ADE10)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER__SHOWPLAYEREFFECT_D__36_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2661E0)

namespace MoleMole
{
	inline static constexpr unsigned int UICinemaSinglePlayWidgetController__ShowPlayerEffect_d__36_TypeDefinitionIndex = 66483;

	struct alignas(8) UICinemaSinglePlayWidgetController__ShowPlayerEffect_d__36
	{
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder __t__builder; // 0x20
		::MoleMole::UICinemaSinglePlayWidgetController* __4__this; // 0x28
		::System::Boolean isShow; // 0x30
		::Enum_3_39A9A0109BB4AB63 effectTypeEnum; // 0x34
		::System::Int32 __1__state; // 0x38

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER__SHOWPLAYEREFFECT_D__36_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER__SHOWPLAYEREFFECT_D__36_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
