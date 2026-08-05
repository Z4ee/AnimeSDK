#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UIMainCityClockWidgetController; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER__SETCLOCKSTORYEND_D__40_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x87F2A0)
#define MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER__SETCLOCKSTORYEND_D__40_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityClockWidgetController__SetClockStoryEnd_d__40_TypeDefinitionIndex = 85925;

	struct alignas(8) UIMainCityClockWidgetController__SetClockStoryEnd_d__40
	{
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder __t__builder; // 0x10
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x18
		::MoleMole::UIMainCityClockWidgetController* __4__this; // 0x28
		::System::Int32 __1__state; // 0x30

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER__SETCLOCKSTORYEND_D__40_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYCLOCKWIDGETCONTROLLER__SETCLOCKSTORYEND_D__40_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
