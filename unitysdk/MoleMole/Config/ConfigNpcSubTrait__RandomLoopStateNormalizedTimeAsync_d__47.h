#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/YieldAwaitable_Awaiter.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueType.h"

namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace UnityEngine { class Animator; }

#define MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT__RANDOMLOOPSTATENORMALIZEDTIMEASYNC_D__47_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x8297E0)
#define MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT__RANDOMLOOPSTATENORMALIZEDTIMEASYNC_D__47_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigNpcSubTrait__RandomLoopStateNormalizedTimeAsync_d__47_TypeDefinitionIndex = 69860;

	struct alignas(8) ConfigNpcSubTrait__RandomLoopStateNormalizedTimeAsync_d__47
	{
		::UnityEngine::Animator* animator; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder __t__builder; // 0x18
		::Cysharp::Threading::Tasks::YieldAwaitable_Awaiter __u__1; // 0x20
		::System::ValueTuple_2<::System::Single, ::System::Single> randomRange; // 0x24
		::System::Int32 __1__state; // 0x2C

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT__RANDOMLOOPSTATENORMALIZEDTIMEASYNC_D__47_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGNPCSUBTRAIT__RANDOMLOOPSTATENORMALIZEDTIMEASYNC_D__47_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
