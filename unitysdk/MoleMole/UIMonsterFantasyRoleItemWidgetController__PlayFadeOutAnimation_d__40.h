#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/PlayerLoopTiming.h"
#include "unitysdk/Cysharp/Threading/Tasks/YieldAwaitable_Awaiter.h"
#include "unitysdk/MoleMole/FadeAnimationData.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole { class UIMonsterFantasyRoleItemWidgetController; }
namespace System { class String; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MOLEMOLE_UIMONSTERFANTASYROLEITEMWIDGETCONTROLLER__PLAYFADEOUTANIMATION_D__40_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7A7430)
#define MOLEMOLE_UIMONSTERFANTASYROLEITEMWIDGETCONTROLLER__PLAYFADEOUTANIMATION_D__40_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2661E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMonsterFantasyRoleItemWidgetController__PlayFadeOutAnimation_d__40_TypeDefinitionIndex = 54697;

	struct alignas(8) UIMonsterFantasyRoleItemWidgetController__PlayFadeOutAnimation_d__40
	{
		::MoleMole::FadeAnimationData _fadeConfig_5__2; // 0x10
		::System::Threading::CancellationToken token; // 0x20
		::MoleMole::UIMonsterFantasyRoleItemWidgetController* __4__this; // 0x28
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x30
		::System::String* key; // 0x40
		::Cysharp::Threading::Tasks::PlayerLoopTiming timing; // 0x48
		::System::Int32 __1__state; // 0x4C
		::Cysharp::Threading::Tasks::YieldAwaitable_Awaiter __u__1; // 0x50
		::System::Single _timeLeft_5__3; // 0x54

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYROLEITEMWIDGETCONTROLLER__PLAYFADEOUTANIMATION_D__40_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYROLEITEMWIDGETCONTROLLER__PLAYFADEOUTANIMATION_D__40_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
