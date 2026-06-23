#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/NPCCrowd/Lod/ELODLevel.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class NPCAvatarMeshAssetsSO_FNPCAvatarLodMeshAssets;
namespace NPCCrowd { template <typename T> class NPCSoftAssetPath_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace UnityEngine { class Mesh; }

#define NPCAVATARUTILS__GETPARTGPUMESHASYNC_D__41_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x5B0C60)
#define NPCAVATARUTILS__GETPARTGPUMESHASYNC_D__41_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

inline static constexpr unsigned int NPCAvatarUtils__GetPartGPUMeshAsync_d__41_TypeDefinitionIndex = 52688;

struct alignas(8) NPCAvatarUtils__GetPartGPUMeshAsync_d__41
{
	::NPCAvatarMeshAssetsSO_FNPCAvatarLodMeshAssets* meshAss; // 0x10
	::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::UnityEngine::Mesh*> __u__1; // 0x18
	::System::Threading::CancellationToken cancellationToken; // 0x30
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::UnityEngine::Mesh*> __t__builder; // 0x38
	::NPCCrowd::NPCSoftAssetPath_1<::UnityEngine::Mesh*>* assetRef; // 0x50
	::System::Int32 __1__state; // 0x58
	::System::Boolean useSimpleModelMode; // 0x5C
	::NPCCrowd::Lod::ELODLevel lodLevel; // 0x60

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCAVATARUTILS__GETPARTGPUMESHASYNC_D__41_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + NPCAVATARUTILS__GETPARTGPUMESHASYNC_D__41_SETSTATEMACHINE_OFFSET))(this, stateMachine);
	}
};
