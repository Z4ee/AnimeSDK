#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_6D17A92E4F636970_Enum_3_05F7423D39739F87.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncVoidMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UICinemaGeneralStartTipsWidgetController; }
namespace System { class Action; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UICINEMAGENERALSTARTTIPSWIDGETCONTROLLER__PLAYENTERANIM_D__6_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7AE2B0)
#define MOLEMOLE_UICINEMAGENERALSTARTTIPSWIDGETCONTROLLER__PLAYENTERANIM_D__6_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x55E040)

namespace MoleMole
{
	inline static constexpr unsigned int UICinemaGeneralStartTipsWidgetController__PlayEnterAnim_d__6_TypeDefinitionIndex = 68825;

	struct alignas(8) UICinemaGeneralStartTipsWidgetController__PlayEnterAnim_d__6
	{
		::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::Class_1_6D17A92E4F636970_Enum_3_05F7423D39739F87> __u__1; // 0x10
		::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder; // 0x20
		::System::Action* finishCallback; // 0x40
		::MoleMole::UICinemaGeneralStartTipsWidgetController* __4__this; // 0x48
		::System::Int32 __1__state; // 0x50

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAGENERALSTARTTIPSWIDGETCONTROLLER__PLAYENTERANIM_D__6_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICINEMAGENERALSTARTTIPSWIDGETCONTROLLER__PLAYENTERANIM_D__6_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
