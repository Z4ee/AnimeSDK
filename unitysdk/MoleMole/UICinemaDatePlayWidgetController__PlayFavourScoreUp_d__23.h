#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8B550A61FC9DDA82_Enum_3_05F7423D39739F87.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UICinemaDatePlayWidgetController; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace System::Threading { class CancellationTokenSource; }

#define MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER__PLAYFAVOURSCOREUP_D__23_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x827E10)
#define MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER__PLAYFAVOURSCOREUP_D__23_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

namespace MoleMole
{
	inline static constexpr unsigned int UICinemaDatePlayWidgetController__PlayFavourScoreUp_d__23_TypeDefinitionIndex = 73030;

	struct alignas(8) UICinemaDatePlayWidgetController__PlayFavourScoreUp_d__23
	{
		::MoleMole::UICinemaDatePlayWidgetController* __4__this; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x18
		::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::Class_1_8B550A61FC9DDA82_Enum_3_05F7423D39739F87> __u__1; // 0x28
		::System::Threading::CancellationTokenSource* tokenSource; // 0x38
		::System::Int32 __1__state; // 0x40

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER__PLAYFAVOURSCOREUP_D__23_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMADATEPLAYWIDGETCONTROLLER__PLAYFAVOURSCOREUP_D__23_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
