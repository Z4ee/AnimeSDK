#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/Enum_3_D3384FC764485EA3.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncVoidMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UISuibianTempleManageDetailPageController; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UISUIBIANTEMPLEMANAGEDETAILPAGECONTROLLER__REFRESHSUBWIDGET_D__34_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7BC2F0)
#define MOLEMOLE_UISUIBIANTEMPLEMANAGEDETAILPAGECONTROLLER__REFRESHSUBWIDGET_D__34_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x6CB1D0)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianTempleManageDetailPageController__RefreshSubWidget_d__34_TypeDefinitionIndex = 52229;

	struct alignas(8) UISuibianTempleManageDetailPageController__RefreshSubWidget_d__34
	{
		::MoleMole::UISuibianTempleManageDetailPageController* __4__this; // 0x10
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x18
		::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder; // 0x28
		::Enum_3_D3384FC764485EA3 _oldDetailType_5__2; // 0x48
		::Enum_3_D3384FC764485EA3 type; // 0x4C
		::System::Boolean switchClick; // 0x50
		::System::Int32 __1__state; // 0x54

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEMANAGEDETAILPAGECONTROLLER__REFRESHSUBWIDGET_D__34_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEMANAGEDETAILPAGECONTROLLER__REFRESHSUBWIDGET_D__34_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
