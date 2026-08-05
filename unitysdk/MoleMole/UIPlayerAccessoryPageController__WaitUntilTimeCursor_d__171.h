#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/PlayerLoopTiming.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UIPlayerAccessoryPageController; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UIPLAYERACCESSORYPAGECONTROLLER__WAITUNTILTIMECURSOR_D__171_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x817310)
#define MOLEMOLE_UIPLAYERACCESSORYPAGECONTROLLER__WAITUNTILTIMECURSOR_D__171_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

namespace MoleMole
{
	inline static constexpr unsigned int UIPlayerAccessoryPageController__WaitUntilTimeCursor_d__171_TypeDefinitionIndex = 51572;

	struct alignas(8) UIPlayerAccessoryPageController__WaitUntilTimeCursor_d__171
	{
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x10
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x20
		::System::Threading::CancellationToken token; // 0x30
		::MoleMole::UIPlayerAccessoryPageController* __4__this; // 0x38
		::System::Single resumeTime; // 0x40
		::Cysharp::Threading::Tasks::PlayerLoopTiming timing; // 0x44
		::System::Int32 __1__state; // 0x48

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPLAYERACCESSORYPAGECONTROLLER__WAITUNTILTIMECURSOR_D__171_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPLAYERACCESSORYPAGECONTROLLER__WAITUNTILTIMECURSOR_D__171_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
