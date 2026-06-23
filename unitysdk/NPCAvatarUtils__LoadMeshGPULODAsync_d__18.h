#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/NPCCrowd/Lod/ELODLevel.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class NPCAvatarMeshAssetsSO;
namespace NPCCrowd::Avatar { class NPCAvatarGOReference; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace UnityEngine { class Mesh; }

#define NPCAVATARUTILS__LOADMESHGPULODASYNC_D__18_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x410260)
#define NPCAVATARUTILS__LOADMESHGPULODASYNC_D__18_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

inline static constexpr unsigned int NPCAvatarUtils__LoadMeshGPULODAsync_d__18_TypeDefinitionIndex = 52697;

struct alignas(8) NPCAvatarUtils__LoadMeshGPULODAsync_d__18
{
	::NPCCrowd::Avatar::NPCAvatarGOReference* goInfo; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x18
	::System::Threading::CancellationToken cancellationToken; // 0x28
	::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::Il2CppArray<::UnityEngine::Mesh*>*> __u__1; // 0x30
	::System::Collections::Generic::List_1<::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Mesh*>>* _tasks_5__2; // 0x48
	::NPCAvatarMeshAssetsSO* assetSo; // 0x50
	::NPCCrowd::Lod::ELODLevel lod; // 0x58
	::System::Boolean useSimpleModelMode; // 0x5C
	::System::Int32 __1__state; // 0x60

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCAVATARUTILS__LOADMESHGPULODASYNC_D__18_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + NPCAVATARUTILS__LOADMESHGPULODASYNC_D__18_SETSTATEMACHINE_OFFSET))(this, stateMachine);
	}
};
