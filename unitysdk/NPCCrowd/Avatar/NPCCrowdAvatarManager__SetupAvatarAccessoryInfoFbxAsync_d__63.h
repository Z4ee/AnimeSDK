#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::Accessories { class NPCAccessoryReferenceComponentInfo; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace UnityEngine { class Avatar; }
namespace UnityEngine { class Mesh; }

#define NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER__SETUPAVATARACCESSORYINFOFBXASYNC_D__63_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x73CEE0)
#define NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER__SETUPAVATARACCESSORYINFOFBXASYNC_D__63_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2661E0)

namespace NPCCrowd::Avatar
{
	inline static constexpr unsigned int NPCCrowdAvatarManager__SetupAvatarAccessoryInfoFbxAsync_d__63_TypeDefinitionIndex = 58950;

	struct alignas(8) NPCCrowdAvatarManager__SetupAvatarAccessoryInfoFbxAsync_d__63
	{
		::NPCCrowd::Accessories::NPCAccessoryReferenceComponentInfo* cpInfo; // 0x10
		::System::Threading::CancellationToken cancellationToken; // 0x18
		::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::UnityEngine::Avatar*> __u__2; // 0x20
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x38
		::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::UnityEngine::Mesh*> __u__1; // 0x48
		::System::Int32 __1__state; // 0x60

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER__SETUPAVATARACCESSORYINFOFBXASYNC_D__63_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER__SETUPAVATARACCESSORYINFOFBXASYNC_D__63_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
