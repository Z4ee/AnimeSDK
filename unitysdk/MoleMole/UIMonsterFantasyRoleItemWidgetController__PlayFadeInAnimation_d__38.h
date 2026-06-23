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

#define MOLEMOLE_UIMONSTERFANTASYROLEITEMWIDGETCONTROLLER__PLAYFADEINANIMATION_D__38_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x82EE30)
#define MOLEMOLE_UIMONSTERFANTASYROLEITEMWIDGETCONTROLLER__PLAYFADEINANIMATION_D__38_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

namespace MoleMole
{
	inline static constexpr unsigned int UIMonsterFantasyRoleItemWidgetController__PlayFadeInAnimation_d__38_TypeDefinitionIndex = 57109;

	struct alignas(8) UIMonsterFantasyRoleItemWidgetController__PlayFadeInAnimation_d__38
	{
		::System::String* key; // 0x10
		::System::Threading::CancellationToken token; // 0x18
		::MoleMole::FadeAnimationData _fadeConfig_5__2; // 0x20
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x30
		::MoleMole::UIMonsterFantasyRoleItemWidgetController* __4__this; // 0x40
		::System::Single _timeLeft_5__3; // 0x48
		::Cysharp::Threading::Tasks::PlayerLoopTiming timing; // 0x4C
		::Cysharp::Threading::Tasks::YieldAwaitable_Awaiter __u__1; // 0x50
		::System::Int32 __1__state; // 0x54

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYROLEITEMWIDGETCONTROLLER__PLAYFADEINANIMATION_D__38_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMONSTERFANTASYROLEITEMWIDGETCONTROLLER__PLAYFADEINANIMATION_D__38_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
