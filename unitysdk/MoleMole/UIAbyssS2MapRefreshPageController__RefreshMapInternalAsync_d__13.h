#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueType.h"

class Class_3_991B96FD979B03A4_18;
class Class_3_FEAEF2C224F31131;
namespace MoleMole { class UIAbyssS2MapRefreshPageController; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace System::Threading { class CancellationTokenSource; }

#define MOLEMOLE_UIABYSSS2MAPREFRESHPAGECONTROLLER__REFRESHMAPINTERNALASYNC_D__13_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x777AD0)
#define MOLEMOLE_UIABYSSS2MAPREFRESHPAGECONTROLLER__REFRESHMAPINTERNALASYNC_D__13_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2661E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssS2MapRefreshPageController__RefreshMapInternalAsync_d__13_TypeDefinitionIndex = 49119;

	struct alignas(8) UIAbyssS2MapRefreshPageController__RefreshMapInternalAsync_d__13
	{
		::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::Class_3_991B96FD979B03A4_18*> __u__1; // 0x10
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__3; // 0x28
		::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::System::ValueTuple_2<::System::Boolean, ::Class_3_FEAEF2C224F31131*>> __u__2; // 0x38
		::System::Threading::CancellationTokenSource* cts; // 0x58
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x60
		::MoleMole::UIAbyssS2MapRefreshPageController* __4__this; // 0x70
		::System::Boolean _needReSortProps_5__2; // 0x78
		::System::Int32 __1__state; // 0x7C
		::System::Int32 itemId; // 0x80

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPREFRESHPAGECONTROLLER__REFRESHMAPINTERNALASYNC_D__13_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPREFRESHPAGECONTROLLER__REFRESHMAPINTERNALASYNC_D__13_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
