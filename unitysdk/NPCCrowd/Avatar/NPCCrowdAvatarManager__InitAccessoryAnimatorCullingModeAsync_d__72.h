#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::Accessories { class NPCAccessory; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace UnityEngine { class Animator; }

#define NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER__INITACCESSORYANIMATORCULLINGMODEASYNC_D__72_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x6B8F50)
#define NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER__INITACCESSORYANIMATORCULLINGMODEASYNC_D__72_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2661E0)

namespace NPCCrowd::Avatar
{
	inline static constexpr unsigned int NPCCrowdAvatarManager__InitAccessoryAnimatorCullingModeAsync_d__72_TypeDefinitionIndex = 58943;

	struct alignas(8) NPCCrowdAvatarManager__InitAccessoryAnimatorCullingModeAsync_d__72
	{
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder __t__builder; // 0x10
		::UnityEngine::Animator* _animator_5__2; // 0x18
		::NPCCrowd::Accessories::NPCAccessory* accessory; // 0x20
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x28
		::System::Int32 __1__state; // 0x38

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER__INITACCESSORYANIMATORCULLINGMODEASYNC_D__72_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER__INITACCESSORYANIMATORCULLINGMODEASYNC_D__72_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
