#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/PlayerLoopTiming.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UIRidusGotBooPageController; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UIRIDUSGOTBOOPAGECONTROLLER__WAITUNTILTIMECURSOR_D__211_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x8152E0)
#define MOLEMOLE_UIRIDUSGOTBOOPAGECONTROLLER__WAITUNTILTIMECURSOR_D__211_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

namespace MoleMole
{
	inline static constexpr unsigned int UIRidusGotBooPageController__WaitUntilTimeCursor_d__211_TypeDefinitionIndex = 40726;

	struct alignas(8) UIRidusGotBooPageController__WaitUntilTimeCursor_d__211
	{
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x10
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x20
		::System::Threading::CancellationToken token; // 0x30
		::MoleMole::UIRidusGotBooPageController* __4__this; // 0x38
		::System::Single resumeTime; // 0x40
		::Cysharp::Threading::Tasks::PlayerLoopTiming timing; // 0x44
		::System::Int32 __1__state; // 0x48

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOPAGECONTROLLER__WAITUNTILTIMECURSOR_D__211_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIRIDUSGOTBOOPAGECONTROLLER__WAITUNTILTIMECURSOR_D__211_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
