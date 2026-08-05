#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/FNpcAvatarGenericParams_AccessoryInfo.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::Accessories { class NPCAccessoryAvatarAssetsSO; }
namespace NPCCrowd::Accessories { class NPCAccessoryReferenceComponentInfo; }
namespace NPCCrowd::Animation { class NPCUnionAnimator; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace UnityEngine { class Material; }

#define NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER__SETUPAVATARACCESSORYINFOMATERIALASYNC_D__66_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x69E8A0)
#define NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER__SETUPAVATARACCESSORYINFOMATERIALASYNC_D__66_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

namespace NPCCrowd::Avatar
{
	inline static constexpr unsigned int NPCCrowdAvatarManager__SetupAvatarAccessoryInfoMaterialAsync_d__66_TypeDefinitionIndex = 60721;

	struct alignas(8) NPCCrowdAvatarManager__SetupAvatarAccessoryInfoMaterialAsync_d__66
	{
		::System::Threading::CancellationToken cancellationToken; // 0x10
		::NPCCrowd::Accessories::NPCAccessoryReferenceComponentInfo* cpInfo; // 0x18
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x20
		::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::Il2CppArray<::UnityEngine::Material*>*> __u__1; // 0x30
		::FNpcAvatarGenericParams_AccessoryInfo accessoryInfo; // 0x48
		::NPCCrowd::Accessories::NPCAccessoryAvatarAssetsSO* avatarAss; // 0xB0
		::NPCCrowd::Animation::NPCUnionAnimator* unionAnimator; // 0xB8
		::System::Int32 __1__state; // 0xC0

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER__SETUPAVATARACCESSORYINFOMATERIALASYNC_D__66_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER__SETUPAVATARACCESSORYINFOMATERIALASYNC_D__66_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
