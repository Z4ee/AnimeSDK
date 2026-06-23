#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/Struct_2_32BC8A3A2B32C8F9.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UIAbyssS2MapRefreshPageController; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace System::Threading { class CancellationTokenSource; }

#define MOLEMOLE_UIABYSSS2MAPREFRESHPAGECONTROLLER__REFRESHMAP_D__12_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x82D600)
#define MOLEMOLE_UIABYSSS2MAPREFRESHPAGECONTROLLER__REFRESHMAP_D__12_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssS2MapRefreshPageController__RefreshMap_d__12_TypeDefinitionIndex = 56657;

	struct alignas(8) UIAbyssS2MapRefreshPageController__RefreshMap_d__12
	{
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x10
		::MoleMole::UIAbyssS2MapRefreshPageController* __4__this; // 0x20
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x28
		::System::Threading::CancellationTokenSource* __7__wrap1; // 0x38
		::Struct_2_32BC8A3A2B32C8F9 ___5__3; // 0x40
		::System::Int32 itemId; // 0x48
		::System::Int32 __1__state; // 0x4C

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPREFRESHPAGECONTROLLER__REFRESHMAP_D__12_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPREFRESHPAGECONTROLLER__REFRESHMAP_D__12_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
