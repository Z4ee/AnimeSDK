#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UIAbyssS2MapRefreshPageController; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UIABYSSS2MAPREFRESHPAGECONTROLLER__UPDATEMAPANDPROPS_D__14_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x75C110)
#define MOLEMOLE_UIABYSSS2MAPREFRESHPAGECONTROLLER__UPDATEMAPANDPROPS_D__14_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2661E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssS2MapRefreshPageController__UpdateMapAndProps_d__14_TypeDefinitionIndex = 49117;

	struct alignas(8) UIAbyssS2MapRefreshPageController__UpdateMapAndProps_d__14
	{
		::MoleMole::UIAbyssS2MapRefreshPageController* __4__this; // 0x10
		::System::Threading::CancellationToken ctsToken; // 0x18
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x20
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x30
		::System::Boolean needReSortProps; // 0x40
		::System::Int32 __1__state; // 0x44

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPREFRESHPAGECONTROLLER__UPDATEMAPANDPROPS_D__14_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPREFRESHPAGECONTROLLER__UPDATEMAPANDPROPS_D__14_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
