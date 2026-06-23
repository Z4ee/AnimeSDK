#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_3_C91109162D964E4D_Struct_2_05E939B2CEBE19D9.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UIActivityHotpotInGamePageController; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UIACTIVITYHOTPOTINGAMEPAGECONTROLLER__FETCHBYSPOONINTERNAL_D__154_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x82D620)
#define MOLEMOLE_UIACTIVITYHOTPOTINGAMEPAGECONTROLLER__FETCHBYSPOONINTERNAL_D__154_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityHotpotInGamePageController__FetchBySpoonInternal_d__154_TypeDefinitionIndex = 75071;

	struct alignas(8) UIActivityHotpotInGamePageController__FetchBySpoonInternal_d__154
	{
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x10
		::MoleMole::UIActivityHotpotInGamePageController* __4__this; // 0x20
		::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::Class_3_C91109162D964E4D_Struct_2_05E939B2CEBE19D9> __u__1; // 0x28
		::System::Int32 __1__state; // 0x48

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTINGAMEPAGECONTROLLER__FETCHBYSPOONINTERNAL_D__154_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTINGAMEPAGECONTROLLER__FETCHBYSPOONINTERNAL_D__154_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
