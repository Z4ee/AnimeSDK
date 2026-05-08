#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/FNpcAvatarGenericParams_AccessoryInfo.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::Accessories { class NPCAccessory; }
namespace NPCCrowd::Animation { class NPCUnionAnimator; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace UnityEngine { class GameObject; }

#define NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER__CREATEAVATARACCESSORIESASYNC_D__62_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x68E370)
#define NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER__CREATEAVATARACCESSORIESASYNC_D__62_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2661E0)

namespace NPCCrowd::Avatar
{
	inline static constexpr unsigned int NPCCrowdAvatarManager__CreateAvatarAccessoriesAsync_d__62_TypeDefinitionIndex = 58941;

	struct alignas(8) NPCCrowdAvatarManager__CreateAvatarAccessoriesAsync_d__62
	{
		::System::Collections::Generic::List_1<::NPCCrowd::Accessories::NPCAccessory*>* _accessories_5__2; // 0x10
		::System::Collections::Generic::List_1<::FNpcAvatarGenericParams_AccessoryInfo>* accessoryInfos; // 0x18
		::NPCCrowd::Animation::NPCUnionAnimator* unionAnimator; // 0x20
		::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::System::Collections::Generic::List_1<::NPCCrowd::Accessories::NPCAccessory*>*> __t__builder; // 0x28
		::UnityEngine::GameObject* avatarGo; // 0x40
		::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x48
		::System::Threading::CancellationToken cancellationToken; // 0x58
		::System::Int32 __1__state; // 0x60

		::System::Void MoveNext()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER__CREATEAVATARACCESSORIESASYNC_D__62_MOVENEXT_OFFSET))(this);
		}

		::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
		{
			return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCCROWDAVATARMANAGER__CREATEAVATARACCESSORIESASYNC_D__62_SETSTATEMACHINE_OFFSET))(this, stateMachine);
		}
	};
}
