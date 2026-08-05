#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UICinemaSinglePlayWidgetController; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER__PLAYFEVERSTARTEFFECT_D__16_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x879940)
#define MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER__PLAYFEVERSTARTEFFECT_D__16_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

namespace MoleMole
{
	inline static constexpr unsigned int UICinemaSinglePlayWidgetController__PlayFeverStartEffect_d__16_TypeDefinitionIndex = 46348;

	struct alignas(8) UICinemaSinglePlayWidgetController__PlayFeverStartEffect_d__16
	{
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x10
		::MoleMole::UICinemaSinglePlayWidgetController* __4__this; // 0x20
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x28
		::System::Int32 __1__state; // 0x38

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER__PLAYFEVERSTARTEFFECT_D__16_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMASINGLEPLAYWIDGETCONTROLLER__PLAYFEVERSTARTEFFECT_D__16_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
