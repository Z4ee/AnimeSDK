#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/PlayerLoopTiming.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UICinemaSinglePlayWidgetController; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER__WAITUNTILTIMECURSOR_D__25_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x85AAB0)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER__WAITUNTILTIMECURSOR_D__25_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

namespace MoleMole
{
	inline static constexpr unsigned int UICinemaSinglePlayWidgetController__WaitUntilTimeCursor_d__25_TypeDefinitionIndex = 46345;

	struct alignas(8) UICinemaSinglePlayWidgetController__WaitUntilTimeCursor_d__25
	{
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x10
		::System::Threading::CancellationToken token; // 0x20
		::MoleMole::UICinemaSinglePlayWidgetController* __4__this; // 0x28
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x30
		::System::Single resumeTime; // 0x40
		::Cysharp::Threading::Tasks::PlayerLoopTiming timing; // 0x44
		::System::Int32 __1__state; // 0x48

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER__WAITUNTILTIMECURSOR_D__25_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER__WAITUNTILTIMECURSOR_D__25_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
