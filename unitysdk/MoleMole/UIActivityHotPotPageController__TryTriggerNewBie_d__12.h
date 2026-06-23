#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncVoidMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

class Class_2_00AA8DEB4906FE64;
namespace MoleMole { class UIActivityHotPotPageController; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UIACTIVITYHOTPOTPAGECONTROLLER__TRYTRIGGERNEWBIE_D__12_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x82DCB0)
#define MOLEMOLE_UIACTIVITYHOTPOTPAGECONTROLLER__TRYTRIGGERNEWBIE_D__12_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x67A600)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityHotPotPageController__TryTriggerNewBie_d__12_TypeDefinitionIndex = 66676;

	struct alignas(8) UIActivityHotPotPageController__TryTriggerNewBie_d__12
	{
		::MoleMole::UIActivityHotPotPageController* __4__this; // 0x10
		::Class_2_00AA8DEB4906FE64* _newbieModel_5__2; // 0x18
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x20
		::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder; // 0x30
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
