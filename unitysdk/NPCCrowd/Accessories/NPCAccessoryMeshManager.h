#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/NPCCrowd/EUnloadAssetReason.h"
#include "unitysdk/NPCCrowd/NPCCrowdModuleManagerBase.h"

namespace NPCCrowd::Accessories { class NPCAccessoryAvatarAssetsSO; }
namespace NPCCrowd::Accessories { class NPCAccessoryLodMeshAssets; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_ACCESSORIES_NPCACCESSORYMESHMANAGER_GETACCESSORYAVATARASSET_OFFSET UNITYSDK_OFFSET(0xD88C270)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMESHMANAGER_GETACCESSORYMESHASSET_OFFSET UNITYSDK_OFFSET(0xD88C160)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMESHMANAGER_GETALLLODMESH_OFFSET UNITYSDK_OFFSET(0xD88B220)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMESHMANAGER_GET_OFFSET UNITYSDK_OFFSET(0xD88AF70)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMESHMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0xD88B0F0)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMESHMANAGER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xD88C8D0)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMESHMANAGER_ONPRELOADFINISHED_OFFSET UNITYSDK_OFFSET(0xD88B500)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMESHMANAGER_PRELOADASSETS_OFFSET UNITYSDK_OFFSET(0xD88B260)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMESHMANAGER_RELEASERESOURCES_OFFSET UNITYSDK_OFFSET(0xD88C780)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMESHMANAGER_SETAVATARASSETS_OFFSET UNITYSDK_OFFSET(0xD88BD30)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMESHMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xD88CAE0)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMESHMANAGER___BASE_INIT_OFFSET UNITYSDK_OFFSET(0xD88CAF0)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMESHMANAGER___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xD88CB80)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMESHMANAGER___BASE_ONPRELOADFINISHED_OFFSET UNITYSDK_OFFSET(0xD88CC10)

namespace NPCCrowd::Accessories
{
	inline static constexpr unsigned int NPCAccessoryMeshManager_TypeDefinitionIndex = 91278;

	class NPCAccessoryMeshManager : public ::NPCCrowd::NPCCrowdModuleManagerBase
	{
	public:
		static ::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>** StaticGet_meshAssetsLoaders()
		{
			return (::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>**)Il2CppClass::FromTypeDefinitionIndex(NPCAccessoryMeshManager_TypeDefinitionIndex)->GetStaticField(0x51BF0);
		}
		::System::Collections::Generic::List_1<::NPCCrowd::Accessories::NPCAccessoryAvatarAssetsSO*>* meshConfigSO; // 0x18
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::NPCCrowd::Accessories::NPCAccessoryLodMeshAssets*>* allLodMeshIDDicts; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMESHMANAGER__CTOR_OFFSET))(this);
		}

		static ::NPCCrowd::Accessories::NPCAccessoryMeshManager* Get()
		{
			return ((::NPCCrowd::Accessories::NPCAccessoryMeshManager*(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMESHMANAGER_GET_OFFSET))();
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMESHMANAGER_INIT_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::Int32, ::NPCCrowd::Accessories::NPCAccessoryLodMeshAssets*>* GetAllLodMesh()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::NPCCrowd::Accessories::NPCAccessoryLodMeshAssets*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMESHMANAGER_GETALLLODMESH_OFFSET))(this);
		}

		static ::System::Void PreloadAssets(::System::String* packedTag, ::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>* waitedRequest)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>*))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMESHMANAGER_PRELOADASSETS_OFFSET))(packedTag, waitedRequest);
		}

		::System::Void OnPreloadFinished()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMESHMANAGER_ONPRELOADFINISHED_OFFSET))(this);
		}

		::System::Void SetAvatarAssets(::System::Collections::Generic::List_1<::NPCCrowd::Accessories::NPCAccessoryAvatarAssetsSO*>* allSo)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::NPCCrowd::Accessories::NPCAccessoryAvatarAssetsSO*>*))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMESHMANAGER_SETAVATARASSETS_OFFSET))(this, allSo);
		}

		::System::Boolean GetAccessoryMeshAsset(::System::Int32 id, ::NPCCrowd::Accessories::NPCAccessoryLodMeshAssets*& meshAss)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NPCCrowd::Accessories::NPCAccessoryLodMeshAssets*&))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMESHMANAGER_GETACCESSORYMESHASSET_OFFSET))(this, id, meshAss);
		}

		::System::Boolean GetAccessoryAvatarAsset(::System::Int32 id, ::NPCCrowd::Accessories::NPCAccessoryAvatarAssetsSO*& avatarAss, ::NPCCrowd::Accessories::NPCAccessoryLodMeshAssets*& meshAss)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::NPCCrowd::Accessories::NPCAccessoryAvatarAssetsSO*&, ::NPCCrowd::Accessories::NPCAccessoryLodMeshAssets*&))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMESHMANAGER_GETACCESSORYAVATARASSET_OFFSET))(this, id, avatarAss, meshAss);
		}

		::System::Void ReleaseResources(::NPCCrowd::EUnloadAssetReason reason)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::EUnloadAssetReason))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMESHMANAGER_RELEASERESOURCES_OFFSET))(this, reason);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMESHMANAGER_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMESHMANAGER___BASE_INIT_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMESHMANAGER___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnPreloadFinished()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYMESHMANAGER___BASE_ONPRELOADFINISHED_OFFSET))(this);
		}
	};
}
