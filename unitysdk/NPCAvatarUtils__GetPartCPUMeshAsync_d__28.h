#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/NPCCrowd/Lod/ELODLevel.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class NPCAvatarMeshAssetsSO_FNPCAvatarLodMeshAssets;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace UnityEngine { class Mesh; }
template <typename T> class NPCSoftAssetPath_1;

#define NPCAVATARUTILS__GETPARTCPUMESHASYNC_D__28_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x5808C0)
#define NPCAVATARUTILS__GETPARTCPUMESHASYNC_D__28_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2661E0)

inline static constexpr unsigned int NPCAvatarUtils__GetPartCPUMeshAsync_d__28_TypeDefinitionIndex = 59885;

struct alignas(8) NPCAvatarUtils__GetPartCPUMeshAsync_d__28
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::UnityEngine::Mesh*> __t__builder; // 0x10
	::System::Threading::CancellationToken cancellationToken; // 0x28
	::NPCSoftAssetPath_1<::UnityEngine::Mesh*>* assetRef; // 0x30
	::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::UnityEngine::Mesh*> __u__1; // 0x38
	::NPCAvatarMeshAssetsSO_FNPCAvatarLodMeshAssets* meshAss; // 0x50
	::System::Int32 __1__state; // 0x58
	::NPCCrowd::Lod::ELODLevel lodLevel; // 0x5C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCAVATARUTILS__GETPARTCPUMESHASYNC_D__28_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + NPCAVATARUTILS__GETPARTCPUMESHASYNC_D__28_SETSTATEMACHINE_OFFSET))(this, stateMachine);
	}
};
