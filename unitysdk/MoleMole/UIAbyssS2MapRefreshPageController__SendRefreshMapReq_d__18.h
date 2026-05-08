#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/Threading/CancellationTokenRegistration.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueType.h"

class Class_3_FEAEF2C224F31131;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UIABYSSS2MAPREFRESHPAGECONTROLLER__SENDREFRESHMAPREQ_D__18_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x79EFE0)
#define MOLEMOLE_UIABYSSS2MAPREFRESHPAGECONTROLLER__SENDREFRESHMAPREQ_D__18_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2661E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssS2MapRefreshPageController__SendRefreshMapReq_d__18_TypeDefinitionIndex = 49118;

	struct alignas(8) UIAbyssS2MapRefreshPageController__SendRefreshMapReq_d__18
	{
		::System::Threading::CancellationTokenRegistration __7__wrap1; // 0x10
		::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::System::ValueTuple_2<::System::Boolean, ::Class_3_FEAEF2C224F31131*>> __u__1; // 0x28
		::System::Threading::CancellationToken ctsToken; // 0x48
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::System::ValueTuple_2<::System::Boolean, ::Class_3_FEAEF2C224F31131*>> __t__builder; // 0x50
		::System::Int32 targetRouteMapID; // 0x70
		::System::Int32 __1__state; // 0x74

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPREFRESHPAGECONTROLLER__SENDREFRESHMAPREQ_D__18_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MAPREFRESHPAGECONTROLLER__SENDREFRESHMAPREQ_D__18_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
