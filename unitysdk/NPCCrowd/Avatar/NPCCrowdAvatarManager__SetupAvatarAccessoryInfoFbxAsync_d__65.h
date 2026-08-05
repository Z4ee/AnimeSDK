#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::Accessories { class NPCAccessoryAvatarAssetsSO; }
namespace NPCCrowd::Accessories { class NPCAccessoryReferenceComponentInfo; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace UnityEngine { class Avatar; }
namespace UnityEngine { class Mesh; }

#define NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER__SETUPAVATARACCESSORYINFOFBXASYNC_D__65_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x6AA910)
#define NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER__SETUPAVATARACCESSORYINFOFBXASYNC_D__65_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

namespace NPCCrowd::Avatar
{
	inline static constexpr unsigned int NPCCrowdAvatarManager__SetupAvatarAccessoryInfoFbxAsync_d__65_TypeDefinitionIndex = 60737;

	struct alignas(8) NPCCrowdAvatarManager__SetupAvatarAccessoryInfoFbxAsync_d__65
	{
		::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::UnityEngine::Mesh*> __u__1; // 0x10
		::NPCCrowd::Accessories::NPCAccessoryAvatarAssetsSO* avatarAss; // 0x28
		::System::Threading::CancellationToken cancellationToken; // 0x30
		::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::UnityEngine::Avatar*> __u__2; // 0x38
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x50
		::NPCCrowd::Accessories::NPCAccessoryReferenceComponentInfo* cpInfo; // 0x60
		::System::Int32 __1__state; // 0x68

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER__SETUPAVATARACCESSORYINFOFBXASYNC_D__65_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER__SETUPAVATARACCESSORYINFOFBXASYNC_D__65_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
