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

#define NPCCROWD_ACCESSORIES_NPCACCESSORYMESHMANAGER_GETACCESSORYAVATARASSET_OFFSET UNITYSDK_OFFSET(0xD9360A0)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMESHMANAGER_GETACCESSORYMESHASSET_OFFSET UNITYSDK_OFFSET(0xD935F90)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMESHMANAGER_GETALLLODMESH_OFFSET UNITYSDK_OFFSET(0xD935000)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMESHMANAGER_GET_OFFSET UNITYSDK_OFFSET(0xD934D50)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMESHMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0xD934ED0)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMESHMANAGER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xD936700)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMESHMANAGER_ONPRELOADFINISHED_OFFSET UNITYSDK_OFFSET(0xD9352E0)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMESHMANAGER_PRELOADASSETS_OFFSET UNITYSDK_OFFSET(0xD935040)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMESHMANAGER_RELEASERESOURCES_OFFSET UNITYSDK_OFFSET(0xD9365B0)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMESHMANAGER_SETAVATARASSETS_OFFSET UNITYSDK_OFFSET(0xD935B40)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMESHMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xD936910)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMESHMANAGER___BASE_INIT_OFFSET UNITYSDK_OFFSET(0xD936920)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMESHMANAGER___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xD9369B0)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYMESHMANAGER___BASE_ONPRELOADFINISHED_OFFSET UNITYSDK_OFFSET(0xD936A40)

namespace NPCCrowd::Accessories
{
	inline static constexpr unsigned int NPCAccessoryMeshManager_TypeDefinitionIndex = 48313;

	class NPCAccessoryMeshManager : public ::NPCCrowd::NPCCrowdModuleManagerBase
	{
	public:
		static ::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>** StaticGet_meshAssetsLoaders()
		{
			return (::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>**)Il2CppClass::FromTypeDefinitionIndex(NPCAccessoryMeshManager_TypeDefinitionIndex)->GetStaticField(0x4B380);
		}
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::NPCCrowd::Accessories::NPCAccessoryLodMeshAssets*>* allLodMeshIDDicts; // 0x18
		::System::Collections::Generic::List_1<::NPCCrowd::Accessories::NPCAccessoryAvatarAssetsSO*>* meshConfigSO; // 0x20

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
