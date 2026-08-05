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

#define NPCAVATARUTILS__LOADMESHCPULODASYNC_D__19_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x731770)
#define NPCAVATARUTILS__LOADMESHCPULODASYNC_D__19_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int NPCAvatarUtils__LoadMeshCPULODAsync_d__19_TypeDefinitionIndex = 53555;

struct alignas(8) NPCAvatarUtils__LoadMeshCPULODAsync_d__19
{
	::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::Il2CppArray<::UnityEngine::Mesh*>*> __u__1; // 0x10
	::NPCCrowd::Avatar::NPCAvatarGOReference* goInfo; // 0x28
	::NPCAvatarMeshAssetsSO* assetSo; // 0x30
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x38
	::System::Threading::CancellationToken cancellationToken; // 0x48
	::System::Collections::Generic::List_1<::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Mesh*>>* _tasks_5__2; // 0x50
	::System::Int32 __1__state; // 0x58
	::NPCCrowd::Lod::ELODLevel lod; // 0x5C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCAVATARUTILS__LOADMESHCPULODASYNC_D__19_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + NPCAVATARUTILS__LOADMESHCPULODASYNC_D__19_SETSTATEMACHINE_OFFSET))(this, stateMachine);
	}
};
