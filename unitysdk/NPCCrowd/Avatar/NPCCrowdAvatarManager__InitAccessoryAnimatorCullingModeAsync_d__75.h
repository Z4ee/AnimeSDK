#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::Accessories { class NPCAccessory; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace UnityEngine { class Animator; }

#define NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER__INITACCESSORYANIMATORCULLINGMODEASYNC_D__75_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x7C0B60)
#define NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER__INITACCESSORYANIMATORCULLINGMODEASYNC_D__75_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

namespace NPCCrowd::Avatar
{
	inline static constexpr unsigned int NPCCrowdAvatarManager__InitAccessoryAnimatorCullingModeAsync_d__75_TypeDefinitionIndex = 60735;

	struct alignas(8) NPCCrowdAvatarManager__InitAccessoryAnimatorCullingModeAsync_d__75
	{
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x10
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder __t__builder; // 0x20
		::NPCCrowd::Accessories::NPCAccessory* accessory; // 0x28
		::UnityEngine::Animator* _animator_5__2; // 0x30
		::System::Int32 __1__state; // 0x38

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER__INITACCESSORYANIMATORCULLINGMODEASYNC_D__75_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER__INITACCESSORYANIMATORCULLINGMODEASYNC_D__75_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
