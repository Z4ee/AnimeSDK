#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_6D17A92E4F636970_Enum_3_05F7423D39739F87.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/System/ValueType.h"

class MonoUITableScrollV2_TableScrollPluginScrollViewFade;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLVIEWFADE__PLAYFADEINANIMATIONINNER_D__15_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x6B1050)
#define MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLVIEWFADE__PLAYFADEINANIMATIONINNER_D__15_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2661E0)

inline static constexpr unsigned int MonoUITableScrollV2_TableScrollPluginScrollViewFade__PlayFadeInAnimationInner_d__15_TypeDefinitionIndex = 54050;

struct alignas(8) MonoUITableScrollV2_TableScrollPluginScrollViewFade__PlayFadeInAnimationInner_d__15
{
	::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::Class_1_6D17A92E4F636970_Enum_3_05F7423D39739F87> __u__1; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder __t__builder; // 0x20
	::MonoUITableScrollV2_TableScrollPluginScrollViewFade* __4__this; // 0x28
	::System::Int32 __1__state; // 0x30

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLVIEWFADE__PLAYFADEINANIMATIONINNER_D__15_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MONOUITABLESCROLLV2_TABLESCROLLPLUGINSCROLLVIEWFADE__PLAYFADEINANIMATIONINNER_D__15_SETSTATEMACHINE_OFFSET))(this, stateMachine);
	}
};
