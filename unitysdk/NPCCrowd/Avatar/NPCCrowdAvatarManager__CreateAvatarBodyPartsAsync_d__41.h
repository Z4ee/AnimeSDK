#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class FNpcAvatarGenericParams_PartInfo;
class NPCAvatarMeshAssetsSO;
namespace NPCCrowd::Animation { class NPCCrowdAnimator; }
namespace NPCCrowd::Avatar { class NPCAvatarGOReferenceComponentInfo; }
namespace NPCCrowd::Avatar { class NPCCrowdAvatarManager; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace UnityEngine { class GameObject; }

#define NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER__CREATEAVATARBODYPARTSASYNC_D__41_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x5A3000)
#define NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER__CREATEAVATARBODYPARTSASYNC_D__41_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

namespace NPCCrowd::Avatar
{
	inline static constexpr unsigned int NPCCrowdAvatarManager__CreateAvatarBodyPartsAsync_d__41_TypeDefinitionIndex = 60727;

	struct alignas(8) NPCCrowdAvatarManager__CreateAvatarBodyPartsAsync_d__41
	{
		::System::Collections::Generic::List_1<::NPCCrowd::Avatar::NPCAvatarGOReferenceComponentInfo*>* _allPartsGo_5__2; // 0x10
		::NPCAvatarMeshAssetsSO* assetSo; // 0x18
		::System::Threading::CancellationToken cancellationToken; // 0x20
		::NPCCrowd::Avatar::NPCCrowdAvatarManager* __4__this; // 0x28
		::Il2CppArray<::FNpcAvatarGenericParams_PartInfo*>* partInfos; // 0x30
		::NPCCrowd::Animation::NPCCrowdAnimator* gpuAnimator; // 0x38
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::System::Collections::Generic::List_1<::NPCCrowd::Avatar::NPCAvatarGOReferenceComponentInfo*>*> __t__builder; // 0x40
		::UnityEngine::GameObject* avatarGo; // 0x58
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x60
		::System::Int32 __1__state; // 0x70
		::System::Boolean enableGPULod; // 0x74

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER__CREATEAVATARBODYPARTSASYNC_D__41_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER__CREATEAVATARBODYPARTSASYNC_D__41_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
