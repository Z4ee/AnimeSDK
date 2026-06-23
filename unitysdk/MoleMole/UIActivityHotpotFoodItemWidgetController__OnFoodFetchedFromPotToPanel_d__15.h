#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_8B550A61FC9DDA82_Enum_3_05F7423D39739F87.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UIActivityHotpotFoodItemWidgetController; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UIACTIVITYHOTPOTFOODITEMWIDGETCONTROLLER__ONFOODFETCHEDFROMPOTTOPANEL_D__15_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x85AC00)
#define MOLEMOLE_UIACTIVITYHOTPOTFOODITEMWIDGETCONTROLLER__ONFOODFETCHEDFROMPOTTOPANEL_D__15_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityHotpotFoodItemWidgetController__OnFoodFetchedFromPotToPanel_d__15_TypeDefinitionIndex = 79275;

	struct alignas(8) UIActivityHotpotFoodItemWidgetController__OnFoodFetchedFromPotToPanel_d__15
	{
		::MoleMole::UIActivityHotpotFoodItemWidgetController* __4__this; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x18
		::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::Class_1_8B550A61FC9DDA82_Enum_3_05F7423D39739F87> __u__1; // 0x28
		::System::Int32 __1__state; // 0x38

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTFOODITEMWIDGETCONTROLLER__ONFOODFETCHEDFROMPOTTOPANEL_D__15_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTFOODITEMWIDGETCONTROLLER__ONFOODFETCHEDFROMPOTTOPANEL_D__15_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
