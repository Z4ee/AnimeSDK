#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_C91109162D964E4D_Struct_2_05E939B2CEBE19D9.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UIActivityHotpotInGamePageController; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UIACTIVITYHOTPOTINGAMEPAGECONTROLLER__FETCHBYCLICKINTERNAL_D__28_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x8BE890)
#define MOLEMOLE_UIACTIVITYHOTPOTINGAMEPAGECONTROLLER__FETCHBYCLICKINTERNAL_D__28_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityHotpotInGamePageController__FetchByClickInternal_d__28_TypeDefinitionIndex = 87260;

	struct alignas(8) UIActivityHotpotInGamePageController__FetchByClickInternal_d__28
	{
		::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::Class_3_C91109162D964E4D_Struct_2_05E939B2CEBE19D9> __u__1; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x30
		::MoleMole::UIActivityHotpotInGamePageController* __4__this; // 0x40
		::System::Int32 __1__state; // 0x48

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTINGAMEPAGECONTROLLER__FETCHBYCLICKINTERNAL_D__28_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTINGAMEPAGECONTROLLER__FETCHBYCLICKINTERNAL_D__28_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
