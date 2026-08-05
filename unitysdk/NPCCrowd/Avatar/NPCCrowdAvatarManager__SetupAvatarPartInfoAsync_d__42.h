#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class NPCAvatarMeshAssetsSO_FNPCAvatarLodMeshAssets;
namespace NPCCrowd::Animation { class NPCCrowdAnimator; }
namespace NPCCrowd::Avatar { class NPCAvatarGOReferenceComponentInfo; }
namespace NPCCrowd::Avatar { class NPCCrowdAvatarManager; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }

#define NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER__SETUPAVATARPARTINFOASYNC_D__42_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x634750)
#define NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER__SETUPAVATARPARTINFOASYNC_D__42_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

namespace NPCCrowd::Avatar
{
	inline static constexpr unsigned int NPCCrowdAvatarManager__SetupAvatarPartInfoAsync_d__42_TypeDefinitionIndex = 60726;

	struct alignas(8) NPCCrowdAvatarManager__SetupAvatarPartInfoAsync_d__42
	{
		::System::Threading::CancellationToken cancellationToken; // 0x10
		::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::Il2CppArray<::UnityEngine::Material*>*> __u__1; // 0x18
		::NPCCrowd::Avatar::NPCCrowdAvatarManager* __4__this; // 0x30
		::UnityEngine::GameObject* avatarGo; // 0x38
		::NPCCrowd::Animation::NPCCrowdAnimator* gpuAnimator; // 0x40
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x48
		::NPCCrowd::Avatar::NPCAvatarGOReferenceComponentInfo* partGoInfo; // 0x58
		::NPCAvatarMeshAssetsSO_FNPCAvatarLodMeshAssets* meshAss; // 0x60
		::System::Boolean enableGPULod; // 0x68
		::System::Int32 __1__state; // 0x6C

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER__SETUPAVATARPARTINFOASYNC_D__42_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER__SETUPAVATARPARTINFOASYNC_D__42_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
