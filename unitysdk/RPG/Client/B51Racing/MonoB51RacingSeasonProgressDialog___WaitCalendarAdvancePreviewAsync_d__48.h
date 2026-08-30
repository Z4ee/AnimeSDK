#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client::B51Racing { class MonoB51RacingSeasonProgressDialog; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace System::Threading { class CancellationTokenSource; }

#define RPG_CLIENT_B51RACING_MONOB51RACINGSEASONPROGRESSDIALOG___WAITCALENDARADVANCEPREVIEWASYNC_D__48_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x3B17E80)
#define RPG_CLIENT_B51RACING_MONOB51RACINGSEASONPROGRESSDIALOG___WAITCALENDARADVANCEPREVIEWASYNC_D__48_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x10F00)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int MonoB51RacingSeasonProgressDialog___WaitCalendarAdvancePreviewAsync_d__48_TypeDefinitionIndex = 80653;

	struct alignas(8) MonoB51RacingSeasonProgressDialog___WaitCalendarAdvancePreviewAsync_d__48
	{
		::RPG::Client::B51Racing::MonoB51RacingSeasonProgressDialog* __4__this; // 0x10
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x18
		::System::Threading::CancellationTokenSource* cts; // 0x28
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x30
		::System::Int32 __1__state; // 0x40
		::System::Single _targetTime_5__2; // 0x44

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGSEASONPROGRESSDIALOG___WAITCALENDARADVANCEPREVIEWASYNC_D__48_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_MONOB51RACINGSEASONPROGRESSDIALOG___WAITCALENDARADVANCEPREVIEWASYNC_D__48_SETSTATEMACHINE_OFFSET))(this, a1);
		}
	};
}
