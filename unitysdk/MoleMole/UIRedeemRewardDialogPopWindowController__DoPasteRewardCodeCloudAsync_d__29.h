#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncVoidMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UIRedeemRewardDialogPopWindowController; }
namespace System { class String; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UIREDEEMREWARDDIALOGPOPWINDOWCONTROLLER__DOPASTEREWARDCODECLOUDASYNC_D__29_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x82EE50)
#define MOLEMOLE_UIREDEEMREWARDDIALOGPOPWINDOWCONTROLLER__DOPASTEREWARDCODECLOUDASYNC_D__29_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x6CB1D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRedeemRewardDialogPopWindowController__DoPasteRewardCodeCloudAsync_d__29_TypeDefinitionIndex = 86885;

	struct alignas(8) UIRedeemRewardDialogPopWindowController__DoPasteRewardCodeCloudAsync_d__29
	{
		::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::System::String*> __u__1; // 0x10
		::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder; // 0x28
		::MoleMole::UIRedeemRewardDialogPopWindowController* __4__this; // 0x48
		::System::Int32 __1__state; // 0x50

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREDEEMREWARDDIALOGPOPWINDOWCONTROLLER__DOPASTEREWARDCODECLOUDASYNC_D__29_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIREDEEMREWARDDIALOGPOPWINDOWCONTROLLER__DOPASTEREWARDCODECLOUDASYNC_D__29_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
