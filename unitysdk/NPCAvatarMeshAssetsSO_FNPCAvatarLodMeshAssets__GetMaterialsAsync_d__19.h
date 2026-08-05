#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/CompilerServices/AsyncUniTaskMethodBuilder_1.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1_Awaiter.h"
#include "unitysdk/System/Threading/CancellationToken.h"
#include "unitysdk/System/ValueType.h"

class NPCAvatarMeshAssetsSO_FNPCAvatarLodMeshAssets;
namespace System::Runtime::CompilerServices { class IAsyncStateMachine; }
namespace UnityEngine { class Material; }

#define NPCAVATARMESHASSETSSO_FNPCAVATARLODMESHASSETS__GETMATERIALSASYNC_D__19_MOVENEXT_OFFSET UNITYSDK_OFFSET(0x6514B0)
#define NPCAVATARMESHASSETSSO_FNPCAVATARLODMESHASSETS__GETMATERIALSASYNC_D__19_SETSTATEMACHINE_OFFSET UNITYSDK_OFFSET(0x296F30)

inline static constexpr unsigned int NPCAvatarMeshAssetsSO_FNPCAvatarLodMeshAssets__GetMaterialsAsync_d__19_TypeDefinitionIndex = 55894;

struct alignas(8) NPCAvatarMeshAssetsSO_FNPCAvatarLodMeshAssets__GetMaterialsAsync_d__19
{
	::Cysharp::Threading::Tasks::CompilerServices::AsyncUniTaskMethodBuilder_1<::Il2CppArray<::UnityEngine::Material*>*> __t__builder; // 0x10
	::System::Threading::CancellationToken cancellationToken; // 0x28
	::NPCAvatarMeshAssetsSO_FNPCAvatarLodMeshAssets* __4__this; // 0x30
	::Cysharp::Threading::Tasks::UniTask_1_Awaiter<::Il2CppArray<::UnityEngine::Material*>*> __u__1; // 0x38
	::System::Int32 __1__state; // 0x50

	::System::Void MoveNext()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCAVATARMESHASSETSSO_FNPCAVATARLODMESHASSETS__GETMATERIALSASYNC_D__19_MOVENEXT_OFFSET))(this);
	}

	::System::Void SetStateMachine(::System::Runtime::CompilerServices::IAsyncStateMachine* stateMachine)
	{
		return ((::System::Void(*)(::PVOID, ::System::Runtime::CompilerServices::IAsyncStateMachine*))((::PBYTE)hIl2Cpp + NPCAVATARMESHASSETSSO_FNPCAVATARLODMESHASSETS__GETMATERIALSASYNC_D__19_SETSTATEMACHINE_OFFSET))(this, stateMachine);
	}
};
