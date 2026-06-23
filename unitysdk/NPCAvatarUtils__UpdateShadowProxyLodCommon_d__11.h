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

#define NPCAVATARUTILS__UPDATESHADOWPROXYLODCOMMON_D__11_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x799D60)
#define NPCAVATARUTILS__UPDATESHADOWPROXYLODCOMMON_D__11_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x283610)

inline static constexpr unsigned int NPCAvatarUtils__UpdateShadowProxyLodCommon_d__11_TypeDefinitionIndex = 52696;

struct alignas(8) NPCAvatarUtils__UpdateShadowProxyLodCommon_d__11
{
	::System::Threading::CancellationToken cancellationToken; // 0x10
	::NPCCrowd::Lod::NPCCrowdLodRuntimeData* lodRuntimeData; // 0x18
	::NPCAvatarMeshAssetsSO* assetSo; // 0x20
	::NPCCrowd::Avatar::NPCAvatarGOReference* goInfo; // 0x28
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskVoidMethodBuilder __t__builder; // 0x30
	::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::UnityEngine::Mesh*> __u__1; // 0x38
	::MoleMole::ECrowdShadowFineness _newShadowFineness_5__2; // 0x50
	::NPCCrowd::Lod::ELODLevel lod; // 0x54
	::System::Int32 __1__state; // 0x58
	::NPCCrowd::Lod::ELODLevel oldLod; // 0x5C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCAVATARUTILS__UPDATESHADOWPROXYLODCOMMON_D__11_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + NPCAVATARUTILS__UPDATESHADOWPROXYLODCOMMON_D__11_SETSTATEMACHINE_OFFSET))(this, stateMachine);
	}
};
