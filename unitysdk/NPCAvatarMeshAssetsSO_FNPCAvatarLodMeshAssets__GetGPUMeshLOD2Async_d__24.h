#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class NPCAvatarMeshAssetsSO_FNPCAvatarLodMeshAssets;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace UnityEngine { class Mesh; }

#define NPCAVATARMESHASSETSSO_FNPCAVATARLODMESHASSETS__GETGPUMESHLOD2ASYNC_D__24_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x64FE10)
#define NPCAVATARMESHASSETSSO_FNPCAVATARLODMESHASSETS__GETGPUMESHLOD2ASYNC_D__24_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

inline static constexpr unsigned int NPCAvatarMeshAssetsSO_FNPCAvatarLodMeshAssets__GetGPUMeshLOD2Async_d__24_TypeDefinitionIndex = 67204;

struct alignas(8) NPCAvatarMeshAssetsSO_FNPCAvatarLodMeshAssets__GetGPUMeshLOD2Async_d__24
{
	::System::Threading::CancellationToken cancellationToken; // 0x10
	::NPCAvatarMeshAssetsSO_FNPCAvatarLodMeshAssets* __4__this; // 0x18
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::UnityEngine::Mesh*> __t__builder; // 0x20
	::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::UnityEngine::Mesh*> __u__1; // 0x38
	::System::Int32 __1__state; // 0x50

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCAVATARMESHASSETSSO_FNPCAVATARLODMESHASSETS__GETGPUMESHLOD2ASYNC_D__24_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + NPCAVATARMESHASSETSSO_FNPCAVATARLODMESHASSETS__GETGPUMESHLOD2ASYNC_D__24_SETSTATEMACHINE_OFFSET))(this, stateMachine);
	}
};
