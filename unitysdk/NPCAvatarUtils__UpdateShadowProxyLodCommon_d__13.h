#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskVoidMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/MoleMole/ECrowdShadowFineness.h"
#include "unitysdk/NPCCrowd/Lod/ELODLevel.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class NPCAvatarMeshAssetsSO;
namespace NPCCrowd::Avatar { class NPCAvatarGOReference; }
namespace NPCCrowd::Lod { class NPCCrowdLodRuntimeData; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace UnityEngine { class Mesh; }

#define NPCAVATARUTILS__UPDATESHADOWPROXYLODCOMMON_D__13_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x5EC7B0)
#define NPCAVATARUTILS__UPDATESHADOWPROXYLODCOMMON_D__13_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int NPCAvatarUtils__UpdateShadowProxyLodCommon_d__13_TypeDefinitionIndex = 53556;

struct alignas(8) NPCAvatarUtils__UpdateShadowProxyLodCommon_d__13
{
	::NPCCrowd::Avatar::NPCAvatarGOReference* goInfo; // 0x10
	::System::Threading::CancellationToken cancellationToken; // 0x18
	::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::UnityEngine::Mesh*> __u__1; // 0x20
	::NPCAvatarMeshAssetsSO* assetSo; // 0x38
	::NPCCrowd::Lod::NPCCrowdLodRuntimeData* lodRuntimeData; // 0x40
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder __t__builder; // 0x48
	::NPCCrowd::Lod::ELODLevel lod; // 0x50
	::System::Int32 __1__state; // 0x54
	::MoleMole::ECrowdShadowFineness _newShadowFineness_5__2; // 0x58
	::NPCCrowd::Lod::ELODLevel oldLod; // 0x5C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCAVATARUTILS__UPDATESHADOWPROXYLODCOMMON_D__13_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + NPCAVATARUTILS__UPDATESHADOWPROXYLODCOMMON_D__13_SETSTATEMACHINE_OFFSET))(this, stateMachine);
	}
};
