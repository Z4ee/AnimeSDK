#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UIRidusGotBooPageController; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UIRIDUSGOTBOOPAGECONTROLLER__SHOWEOUSFEVEREFFECT_D__32_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7612C0)
#define MOLEMOLE_UIRIDUSGOTBOOPAGECONTROLLER__SHOWEOUSFEVEREFFECT_D__32_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

namespace MoleMole
{
	inline static constexpr unsigned int UIRidusGotBooPageController__ShowEousFeverEffect_d__32_TypeDefinitionIndex = 40744;

	struct alignas(8) UIRidusGotBooPageController__ShowEousFeverEffect_d__32
	{
		::MoleMole::UIRidusGotBooPageController* __4__this; // 0x10
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x18
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder __t__builder; // 0x28
		::System::Boolean state; // 0x30
		::System::Int32 __1__state; // 0x34
		::System::Single delayTime; // 0x38

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOPAGECONTROLLER__SHOWEOUSFEVEREFFECT_D__32_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOPAGECONTROLLER__SHOWEOUSFEVEREFFECT_D__32_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
