#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8B550A61FC9DDA82_Enum_3_05F7423D39739F87.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncVoidMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UIZenkovRouletteMobileWidgetController; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UIZENKOVROULETTEMOBILEWIDGETCONTROLLER__ONROOTBUTTONPOINTERUP_D__14_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x86A9A0)
#define MOLEMOLE_UIZENKOVROULETTEMOBILEWIDGETCONTROLLER__ONROOTBUTTONPOINTERUP_D__14_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x7DEF30)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovRouletteMobileWidgetController__OnRootButtonPointerUp_d__14_TypeDefinitionIndex = 82033;

	struct alignas(8) UIZenkovRouletteMobileWidgetController__OnRootButtonPointerUp_d__14
	{
		::MoleMole::UIZenkovRouletteMobileWidgetController* __4__this; // 0x10
		::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::Class_1_8B550A61FC9DDA82_Enum_3_05F7423D39739F87> __u__1; // 0x18
		::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder; // 0x28
		::System::Int32 __1__state; // 0x48

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVROULETTEMOBILEWIDGETCONTROLLER__ONROOTBUTTONPOINTERUP_D__14_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVROULETTEMOBILEWIDGETCONTROLLER__ONROOTBUTTONPOINTERUP_D__14_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
