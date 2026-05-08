#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_Awaiter.h"
#include "unitysdk/NPCCrowd/Lod/ELODLevel.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class Class_3_F2DAD7F45F518868;
class Class_3_FFD0045B4597F294;
class NPCAvatarMeshAssetsSO;
class NPCAvatarRuntimeData;
namespace NPCCrowd::Accessories { class NPCAccessory; }
namespace NPCCrowd::Avatar { class NPCAvatarGOReference; }
namespace NPCCrowd::Lod { class NPCCrowdLodRuntimeData; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }

#define NPCAVATARUTILS__LOADNEWLODASSET_D__42_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x72D7A0)
#define NPCAVATARUTILS__LOADNEWLODASSET_D__42_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x2661E0)

inline static constexpr unsigned int NPCAvatarUtils__LoadNewLODAsset_d__42_TypeDefinitionIndex = 59891;

struct alignas(8) NPCAvatarUtils__LoadNewLODAsset_d__42
{
	::System::Threading::CancellationToken cancellationToken; // 0x10
	::NPCAvatarRuntimeData* avatarRuntimeData; // 0x18
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder __t__builder; // 0x20
	::NPCCrowd::Avatar::NPCAvatarGOReference* _goInfo_5__2; // 0x30
	::System::Collections::Generic::List_1<::NPCCrowd::Accessories::NPCAccessory*>* accessories; // 0x38
	::NPCAvatarMeshAssetsSO* _assetSo_5__3; // 0x40
	::Cysharp::Threading::Tasks::UniTask_Awaiter __u__1; // 0x48
	::Class_3_FFD0045B4597F294* materialComponent; // 0x58
	::Class_3_F2DAD7F45F518868* npcCmp; // 0x60
	::NPCCrowd::Lod::NPCCrowdLodRuntimeData* lodRuntimeData; // 0x68
	::System::Boolean useGpuLod; // 0x70
	::System::Boolean _enableGpuLod_5__4; // 0x71
	::NPCCrowd::Lod::ELODLevel lod; // 0x74
	::System::Int32 __1__state; // 0x78
	::NPCCrowd::Lod::ELODLevel oldLod; // 0x7C

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCAVATARUTILS__LOADNEWLODASSET_D__42_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + NPCAVATARUTILS__LOADNEWLODASSET_D__42_SETSTATEMACHINE_OFFSET))(this, stateMachine);
	}
};
