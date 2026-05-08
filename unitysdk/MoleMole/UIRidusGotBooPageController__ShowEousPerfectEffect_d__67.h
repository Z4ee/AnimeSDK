#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UIRidusGotBooPageController; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UIRIDUSGOTBOOPAGECONTROLLER__SHOWEOUSPERFECTEFFECT_D__67_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x75A580)
#define MOLEMOLE_UIRIDUSGOTBOOPAGECONTROLLER__SHOWEOUSPERFECTEFFECT_D__67_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2661E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRidusGotBooPageController__ShowEousPerfectEffect_d__67_TypeDefinitionIndex = 75528;

	struct alignas(8) UIRidusGotBooPageController__ShowEousPerfectEffect_d__67
	{
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder __t__builder; // 0x10
		::MoleMole::UIRidusGotBooPageController* __4__this; // 0x18
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x20
		::System::Int32 __1__state; // 0x30
		::System::Boolean state; // 0x34
		::System::Single delayTime; // 0x38

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOPAGECONTROLLER__SHOWEOUSPERFECTEFFECT_D__67_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOPAGECONTROLLER__SHOWEOUSPERFECTEFFECT_D__67_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
