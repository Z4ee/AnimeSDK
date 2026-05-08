#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Runtime/CompilerServices/AsyncVoidMethodBuilder.h"
#include "unitysdk/System/ValueType.h"

namespace DG::Tweening { class DOTweenAnimation; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define DG_TWEENING_DOTWEENANIMATION__AWAKE_D__32_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x6E66C0)
#define DG_TWEENING_DOTWEENANIMATION__AWAKE_D__32_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x5C4D00)

namespace DG::Tweening
{
	inline static constexpr unsigned int DOTweenAnimation__Awake_d__32_TypeDefinitionIndex = 85919;

	struct alignas(8) DOTweenAnimation__Awake_d__32
	{
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x10
		::DG::Tweening::DOTweenAnimation* __4__this; // 0x20
		::System::Runtime::CompilerServices::AsyncVoidMethodBuilder __t__builder; // 0x28
		::System::Int32 __1__state; // 0x48

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + DG_TWEENING_DOTWEENANIMATION__AWAKE_D__32_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + DG_TWEENING_DOTWEENANIMATION__AWAKE_D__32_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
