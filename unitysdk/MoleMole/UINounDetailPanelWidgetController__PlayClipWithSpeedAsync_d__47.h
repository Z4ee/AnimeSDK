#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class Class_1_2CD6915EC12D64B9;
namespace MoleMole { class UINounDetailPanelWidgetController; }
namespace System { class String; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace UnityEngine { class AnimationState; }

#define MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER__PLAYCLIPWITHSPEEDASYNC_D__47_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x884370)
#define MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER__PLAYCLIPWITHSPEEDASYNC_D__47_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

namespace MoleMole
{
	inline static constexpr unsigned int UINounDetailPanelWidgetController__PlayClipWithSpeedAsync_d__47_TypeDefinitionIndex = 55923;

	struct alignas(8) UINounDetailPanelWidgetController__PlayClipWithSpeedAsync_d__47
	{
		::UnityEngine::AnimationState* _state_5__2; // 0x10
		::System::String* clipName; // 0x18
		::Class_1_2CD6915EC12D64B9* helper; // 0x20
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x28
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x38
		::MoleMole::UINounDetailPanelWidgetController* __4__this; // 0x48
		::System::Int32 __1__state; // 0x50
		::System::Single speed; // 0x54

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER__PLAYCLIPWITHSPEEDASYNC_D__47_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINOUNDETAILPANELWIDGETCONTROLLER__PLAYCLIPWITHSPEEDASYNC_D__47_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
