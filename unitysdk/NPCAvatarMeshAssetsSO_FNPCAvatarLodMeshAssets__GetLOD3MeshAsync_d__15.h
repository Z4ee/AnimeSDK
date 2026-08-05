#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class NPCAvatarMeshAssetsSO_FNPCAvatarLodMeshAssets;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace UnityEngine { class Mesh; }

#define NPCAVATARMESHASSETSSO_FNPCAVATARLODMESHASSETS__GETLOD3MESHASYNC_D__15_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x69C6D0)
#define NPCAVATARMESHASSETSSO_FNPCAVATARLODMESHASSETS__GETLOD3MESHASYNC_D__15_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int NPCAvatarMeshAssetsSO_FNPCAvatarLodMeshAssets__GetLOD3MeshAsync_d__15_TypeDefinitionIndex = 55895;

struct alignas(8) NPCAvatarMeshAssetsSO_FNPCAvatarLodMeshAssets__GetLOD3MeshAsync_d__15
{
	::NPCAvatarMeshAssetsSO_FNPCAvatarLodMeshAssets* __4__this; // 0x10
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::UnityEngine::Mesh*> __t__builder; // 0x18
	::System::Threading::CancellationToken cancellationToken; // 0x30
	::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::UnityEngine::Mesh*> __u__1; // 0x38
	::System::Int32 __1__state; // 0x50

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCAVATARMESHASSETSSO_FNPCAVATARLODMESHASSETS__GETLOD3MESHASYNC_D__15_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + NPCAVATARMESHASSETSSO_FNPCAVATARLODMESHASSETS__GETLOD3MESHASYNC_D__15_SETSTATEMACHINE_OFFSET))(this, stateMachine);
	}
};
