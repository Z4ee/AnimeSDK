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

#define MOLEMOLE_UIMONSTERFANTASYROLEITEMWIDGETCONTROLLER__PLAYFADEINANIMATION_D__38_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x87E5D0)
#define MOLEMOLE_UIMONSTERFANTASYROLEITEMWIDGETCONTROLLER__PLAYFADEINANIMATION_D__38_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

namespace MoleMole
{
	inline static constexpr unsigned int UIMonsterFantasyRoleItemWidgetController__PlayFadeInAnimation_d__38_TypeDefinitionIndex = 45819;

	struct alignas(8) UIMonsterFantasyRoleItemWidgetController__PlayFadeInAnimation_d__38
	{
		::MoleMole::UIMonsterFantasyRoleItemWidgetController* __4__this; // 0x10
		::MoleMole::FadeAnimationData _fadeConfig_5__2; // 0x18
		::System::String* key; // 0x28
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x30
		::System::Threading::CancellationToken token; // 0x40
		::System::Int32 __1__state; // 0x48
		::Cysharp::Threading::Tasks::PlayerLoopTiming timing; // 0x4C
		::System::Single _timeLeft_5__3; // 0x50
		::Cysharp::Threading::Tasks::YieldAwaitable_Awaiter __u__1; // 0x54

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
