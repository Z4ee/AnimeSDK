#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UIMAINCITYTIMETIPSPOPWINDOWCONTROLLER___C___ONMODTIMERSP_B__16_2_D_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x87E590)
#define MOLEMOLE_UIMAINCITYTIMETIPSPOPWINDOWCONTROLLER___C___ONMODTIMERSP_B__16_2_D_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityTimeTipsPopWindowController___c___OnModTimeRsp_b__16_2_d_TypeDefinitionIndex = 65804;

	struct alignas(8) UIMainCityTimeTipsPopWindowController___c___OnModTimeRsp_b__16_2_d
	{
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x10
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x20
		::System::Threading::CancellationToken token; // 0x30
		::System::Int32 __1__state; // 0x38

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYTIMETIPSPOPWINDOWCONTROLLER___C___ONMODTIMERSP_B__16_2_D_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYTIMETIPSPOPWINDOWCONTROLLER___C___ONMODTIMERSP_B__16_2_D_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
