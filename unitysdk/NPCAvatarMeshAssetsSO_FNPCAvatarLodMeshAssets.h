#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Cysharp/Threading/Tasks/UniTask_1.h"
#include "unitysdk/ENPCAvatarBodyPart.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/Threading/CancellationToken.h"

namespace NPCCrowd { class NPCSoftMaterialPathList; }
namespace NPCCrowd { class NPCSoftMeshPath; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Material; }
namespace UnityEngine { class Mesh; }

#define NPCAVATARMESHASSETSSO_FNPCAVATARLODMESHASSETS_GETGPUMESHLOD2ASYNC_OFFSET UNITYSDK_OFFSET(0x106ED130)
#define NPCAVATARMESHASSETSSO_FNPCAVATARLODMESHASSETS_GETGPUMESHLOD2SYNC_OFFSET UNITYSDK_OFFSET(0x106ED0B0)
#define NPCAVATARMESHASSETSSO_FNPCAVATARLODMESHASSETS_GETGPUMESHLOD3ASYNC_OFFSET UNITYSDK_OFFSET(0x106ED290)
#define NPCAVATARMESHASSETSSO_FNPCAVATARLODMESHASSETS_GETGPUMESHLOD3SYNC_OFFSET UNITYSDK_OFFSET(0x106ED210)
#define NPCAVATARMESHASSETSSO_FNPCAVATARLODMESHASSETS_GETLOD0MESHASYNC_OFFSET UNITYSDK_OFFSET(0x106EC970)
#define NPCAVATARMESHASSETSSO_FNPCAVATARLODMESHASSETS_GETLOD0MESHSYNC_OFFSET UNITYSDK_OFFSET(0x106EC8F0)
#define NPCAVATARMESHASSETSSO_FNPCAVATARLODMESHASSETS_GETLOD1MESHASYNC_OFFSET UNITYSDK_OFFSET(0x106ECAE0)
#define NPCAVATARMESHASSETSSO_FNPCAVATARLODMESHASSETS_GETLOD1MESHSYNC_OFFSET UNITYSDK_OFFSET(0x106ECA60)
#define NPCAVATARMESHASSETSSO_FNPCAVATARLODMESHASSETS_GETLOD2MESHASYNC_OFFSET UNITYSDK_OFFSET(0x106ECC40)
#define NPCAVATARMESHASSETSSO_FNPCAVATARLODMESHASSETS_GETLOD2MESHSYNC_OFFSET UNITYSDK_OFFSET(0x106ECBC0)
#define NPCAVATARMESHASSETSSO_FNPCAVATARLODMESHASSETS_GETLOD3MESHASYNC_OFFSET UNITYSDK_OFFSET(0x106ECDB0)
#define NPCAVATARMESHASSETSSO_FNPCAVATARLODMESHASSETS_GETLOD3MESHSYNC_OFFSET UNITYSDK_OFFSET(0x106ECD30)
#define NPCAVATARMESHASSETSSO_FNPCAVATARLODMESHASSETS_GETMATERIALSASYNC_OFFSET UNITYSDK_OFFSET(0x106ECF30)
#define NPCAVATARMESHASSETSSO_FNPCAVATARLODMESHASSETS_GETMATERIALSSYNC_OFFSET UNITYSDK_OFFSET(0x106ECEB0)
#define NPCAVATARMESHASSETSSO_FNPCAVATARLODMESHASSETS_GETUIMATERIALSSYNC_OFFSET UNITYSDK_OFFSET(0x106ED030)
#define NPCAVATARMESHASSETSSO_FNPCAVATARLODMESHASSETS_UNLOADEDASSETS_OFFSET UNITYSDK_OFFSET(0x106ED380)
#define NPCAVATARMESHASSETSSO_FNPCAVATARLODMESHASSETS__CTOR_OFFSET UNITYSDK_OFFSET(0x106ED480)

inline static constexpr unsigned int NPCAvatarMeshAssetsSO_FNPCAvatarLodMeshAssets_TypeDefinitionIndex = 67200;

class NPCAvatarMeshAssetsSO_FNPCAvatarLodMeshAssets : public ::System::Object
{
public:
	::System::Int32 id; // 0x10
	::ENPCAvatarBodyPart part; // 0x14
	::System::Int32 number; // 0x18
	::System::Collections::Generic::List_1<::System::Int32>* logicTags; // 0x20
	::NPCCrowd::NPCSoftMeshPath* meshLOD0; // 0x28
	::NPCCrowd::NPCSoftMeshPath* meshLOD1; // 0x30
	::NPCCrowd::NPCSoftMeshPath* meshLOD2; // 0x38
	::NPCCrowd::NPCSoftMeshPath* meshLOD3; // 0x40
	::NPCCrowd::NPCSoftMaterialPathList* materials; // 0x48
	::System::String* seqFrameKey; // 0x50
	::NPCCrowd::NPCSoftMaterialPathList* uiMaterials; // 0x58
	::NPCCrowd::NPCSoftMeshPath* gpuMeshLOD2; // 0x60
	::NPCCrowd::NPCSoftMeshPath* gpuMeshLOD3; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCAVATARMESHASSETSSO_FNPCAVATARLODMESHASSETS__CTOR_OFFSET))(this);
	}

	::UnityEngine::Mesh* GetLOD0MeshSync()
	{
		return ((::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCAVATARMESHASSETSSO_FNPCAVATARLODMESHASSETS_GETLOD0MESHSYNC_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Mesh*> GetLOD0MeshAsync(::System::Threading::CancellationToken cancellationToken)
	{
		return ((::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Mesh*>(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + NPCAVATARMESHASSETSSO_FNPCAVATARLODMESHASSETS_GETLOD0MESHASYNC_OFFSET))(this, cancellationToken);
	}

	::UnityEngine::Mesh* GetLOD1MeshSync()
	{
		return ((::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCAVATARMESHASSETSSO_FNPCAVATARLODMESHASSETS_GETLOD1MESHSYNC_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Mesh*> GetLOD1MeshAsync(::System::Threading::CancellationToken cancellationToken)
	{
		return ((::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Mesh*>(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + NPCAVATARMESHASSETSSO_FNPCAVATARLODMESHASSETS_GETLOD1MESHASYNC_OFFSET))(this, cancellationToken);
	}

	::UnityEngine::Mesh* GetLOD2MeshSync()
	{
		return ((::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCAVATARMESHASSETSSO_FNPCAVATARLODMESHASSETS_GETLOD2MESHSYNC_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Mesh*> GetLOD2MeshAsync(::System::Threading::CancellationToken cancellationToken)
	{
		return ((::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Mesh*>(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + NPCAVATARMESHASSETSSO_FNPCAVATARLODMESHASSETS_GETLOD2MESHASYNC_OFFSET))(this, cancellationToken);
	}

	::UnityEngine::Mesh* GetLOD3MeshSync()
	{
		return ((::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCAVATARMESHASSETSSO_FNPCAVATARLODMESHASSETS_GETLOD3MESHSYNC_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Mesh*> GetLOD3MeshAsync(::System::Threading::CancellationToken cancellationToken)
	{
		return ((::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Mesh*>(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + NPCAVATARMESHASSETSSO_FNPCAVATARLODMESHASSETS_GETLOD3MESHASYNC_OFFSET))(this, cancellationToken);
	}

	::Il2CppArray<::UnityEngine::Material*>* GetMaterialsSync()
	{
		return ((::Il2CppArray<::UnityEngine::Material*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCAVATARMESHASSETSSO_FNPCAVATARLODMESHASSETS_GETMATERIALSSYNC_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask_1<::Il2CppArray<::UnityEngine::Material*>*> GetMaterialsAsync(::System::Threading::CancellationToken cancellationToken)
	{
		return ((::Cysharp::Threading::Tasks::UniTask_1<::Il2CppArray<::UnityEngine::Material*>*>(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + NPCAVATARMESHASSETSSO_FNPCAVATARLODMESHASSETS_GETMATERIALSASYNC_OFFSET))(this, cancellationToken);
	}

	::Il2CppArray<::UnityEngine::Material*>* GetUIMaterialsSync()
	{
		return ((::Il2CppArray<::UnityEngine::Material*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCAVATARMESHASSETSSO_FNPCAVATARLODMESHASSETS_GETUIMATERIALSSYNC_OFFSET))(this);
	}

	::UnityEngine::Mesh* GetGPUMeshLOD2Sync()
	{
		return ((::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCAVATARMESHASSETSSO_FNPCAVATARLODMESHASSETS_GETGPUMESHLOD2SYNC_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Mesh*> GetGPUMeshLOD2Async(::System::Threading::CancellationToken cancellationToken)
	{
		return ((::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Mesh*>(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + NPCAVATARMESHASSETSSO_FNPCAVATARLODMESHASSETS_GETGPUMESHLOD2ASYNC_OFFSET))(this, cancellationToken);
	}

	::UnityEngine::Mesh* GetGPUMeshLOD3Sync()
	{
		return ((::UnityEngine::Mesh*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCAVATARMESHASSETSSO_FNPCAVATARLODMESHASSETS_GETGPUMESHLOD3SYNC_OFFSET))(this);
	}

	::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Mesh*> GetGPUMeshLOD3Async(::System::Threading::CancellationToken cancellationToken)
	{
		return ((::Cysharp::Threading::Tasks::UniTask_1<::UnityEngine::Mesh*>(*)(::PVOID, ::System::Threading::CancellationToken))((::PBYTE)hIl2Cpp + NPCAVATARMESHASSETSSO_FNPCAVATARLODMESHASSETS_GETGPUMESHLOD3ASYNC_OFFSET))(this, cancellationToken);
	}

	::System::Void UnLoadedAssets()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCAVATARMESHASSETSSO_FNPCAVATARLODMESHASSETS_UNLOADEDASSETS_OFFSET))(this);
	}
};
