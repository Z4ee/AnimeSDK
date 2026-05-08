#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncVoidMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

class Class_2_47F3EABB6C9CDECD;
namespace MoleMole { class UIActivityHotPotPageController; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UIACTIVITYHOTPOTPAGECONTROLLER__TRYTRIGGERNEWBIE_D__12_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7A3350)
#define MOLEMOLE_UIACTIVITYHOTPOTPAGECONTROLLER__TRYTRIGGERNEWBIE_D__12_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x6069D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityHotPotPageController__TryTriggerNewBie_d__12_TypeDefinitionIndex = 67474;

	struct alignas(8) UIActivityHotPotPageController__TryTriggerNewBie_d__12
	{
		::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder; // 0x10
		::MoleMole::UIActivityHotPotPageController* __4__this; // 0x30
		::Class_2_47F3EABB6C9CDECD* _newbieModel_5__2; // 0x38
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x40
		::System::Int32 __1__state; // 0x50

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTPAGECONTROLLER__TRYTRIGGERNEWBIE_D__12_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTPAGECONTROLLER__TRYTRIGGERNEWBIE_D__12_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
