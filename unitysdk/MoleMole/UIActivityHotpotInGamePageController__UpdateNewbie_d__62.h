#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/MoleMole/UIActivityHotpotInGamePageController_NewbieData.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncVoidMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UIActivityHotpotInGamePageController; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UIACTIVITYHOTPOTINGAMEPAGECONTROLLER__UPDATENEWBIE_D__62_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x82DCC0)
#define MOLEMOLE_UIACTIVITYHOTPOTINGAMEPAGECONTROLLER__UPDATENEWBIE_D__62_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x6CB1D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityHotpotInGamePageController__UpdateNewbie_d__62_TypeDefinitionIndex = 75067;

	struct alignas(8) UIActivityHotpotInGamePageController__UpdateNewbie_d__62
	{
		::MoleMole::UIActivityHotpotInGamePageController_NewbieData _targetNewbie_5__2; // 0x10
		::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder; // 0x28
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x48
		::MoleMole::UIActivityHotpotInGamePageController* __4__this; // 0x58
		::System::Int32 __1__state; // 0x60

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTINGAMEPAGECONTROLLER__UPDATENEWBIE_D__62_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTINGAMEPAGECONTROLLER__UPDATENEWBIE_D__62_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
