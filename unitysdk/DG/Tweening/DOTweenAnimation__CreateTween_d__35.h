#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/Cysharp/Threading/Tasks/YieldAwaitable_Awaiter.h"
#include "unitysdk/System/ValueType.h"

namespace DG::Tweening { class DOTweenAnimation; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define DG_TWEENING_DOTWEENANIMATION__CREATETWEEN_D__35_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7A6DE0)
#define DG_TWEENING_DOTWEENANIMATION__CREATETWEEN_D__35_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

namespace DG::Tweening
{
	inline static constexpr unsigned int DOTweenAnimation__CreateTween_d__35_TypeDefinitionIndex = 95373;

	struct alignas(8) DOTweenAnimation__CreateTween_d__35
	{
		::DG::Tweening::DOTweenAnimation* __4__this; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x18
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x28
		::Cysharp::Threading::Tasks::YieldAwaitable_Awaiter __u__2; // 0x38
		::System::Int32 __1__state; // 0x3C

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_DOTWEENANIMATION__CREATETWEEN_D__35_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + DG_TWEENING_DOTWEENANIMATION__CREATETWEEN_D__35_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
