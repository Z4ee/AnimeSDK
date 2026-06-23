#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncVoidMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UIInLevelMainPageController; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UIINLEVELMAINPAGECONTROLLER__HIDEWITHDELAY_D__127_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x8242B0)
#define MOLEMOLE_UIINLEVELMAINPAGECONTROLLER__HIDEWITHDELAY_D__127_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x5B0AE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIInLevelMainPageController__HideWithDelay_d__127_TypeDefinitionIndex = 82572;

	struct alignas(8) UIInLevelMainPageController__HideWithDelay_d__127
	{
		::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder; // 0x10
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x30
		::MoleMole::UIInLevelMainPageController* __4__this; // 0x40
		::System::Int32 __1__state; // 0x48

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELMAINPAGECONTROLLER__HIDEWITHDELAY_D__127_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIINLEVELMAINPAGECONTROLLER__HIDEWITHDELAY_D__127_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
