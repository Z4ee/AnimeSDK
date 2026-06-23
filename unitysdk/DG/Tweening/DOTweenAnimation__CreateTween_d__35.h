#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/Cysharp/Threading/Tasks/YieldAwaitable_Awaiter.h"
#include "unitysdk/System/ValueType.h"

namespace DG::Tweening { class DOTweenAnimation; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define DG_TWEENING_DOTWEENANIMATION__CREATETWEEN_D__35_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x758E90)
#define DG_TWEENING_DOTWEENANIMATION__CREATETWEEN_D__35_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

namespace DG::Tweening
{
	inline static constexpr unsigned int DOTweenAnimation__CreateTween_d__35_TypeDefinitionIndex = 91478;

	struct alignas(8) DOTweenAnimation__CreateTween_d__35
	{
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x10
		::DG::Tweening::DOTweenAnimation* __4__this; // 0x20
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x28
		::System::Int32 __1__state; // 0x38
		::Cysharp::Threading::Tasks::YieldAwaitable_Awaiter __u__2; // 0x3C

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
