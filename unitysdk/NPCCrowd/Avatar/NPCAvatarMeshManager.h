#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENPCAvatarGender.h"
#include "unitysdk/ENPCAvatarSize.h"
#include "unitysdk/FNpcAvatarGenericParams.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/NPCCrowd/EUnloadAssetReason.h"
#include "unitysdk/NPCCrowd/NPCCrowdModuleManagerBase.h"

class NPCAvatarMeshAssetsSO;
class NPCAvatarMeshAssetsSO_FNPCAvatarLodMeshAssets;
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_AVATAR_NPCAVATARMESHMANAGER_GETALLLODMESH_OFFSET UNITYSDK_OFFSET(0x11943AE0)
#define NPCCROWD_AVATAR_NPCAVATARMESHMANAGER_GETAVATARMESHCONFIG_1_OFFSET UNITYSDK_OFFSET(0x11944D30)
#define NPCCROWD_AVATAR_NPCAVATARMESHMANAGER_GETAVATARMESHCONFIG_OFFSET UNITYSDK_OFFSET(0x11944B10)
#define NPCCROWD_AVATAR_NPCAVATARMESHMANAGER_GET_OFFSET UNITYSDK_OFFSET(0x11943830)
#define NPCCROWD_AVATAR_NPCAVATARMESHMANAGER_INIT_OFFSET UNITYSDK_OFFSET(0x119439B0)
#define NPCCROWD_AVATAR_NPCAVATARMESHMANAGER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x11945820)
#define NPCCROWD_AVATAR_NPCAVATARMESHMANAGER_ONPRELOADFINISHED_OFFSET UNITYSDK_OFFSET(0x11944050)
#define NPCCROWD_AVATAR_NPCAVATARMESHMANAGER_PRELOADASSETS_OFFSET UNITYSDK_OFFSET(0x11943B20)
#define NPCCROWD_AVATAR_NPCAVATARMESHMANAGER_RELEASERESOURCES_OFFSET UNITYSDK_OFFSET(0x119456D0)
#define NPCCROWD_AVATAR_NPCAVATARMESHMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0x11945A30)
#define NPCCROWD_AVATAR_NPCAVATARMESHMANAGER___BASE_INIT_OFFSET UNITYSDK_OFFSET(0x11945A40)
#define NPCCROWD_AVATAR_NPCAVATARMESHMANAGER___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x11945AD0)
#define NPCCROWD_AVATAR_NPCAVATARMESHMANAGER___BASE_ONPRELOADFINISHED_OFFSET UNITYSDK_OFFSET(0x11945B60)

namespace NPCCrowd::Avatar
{
	inline static constexpr unsigned int NPCAvatarMeshManager_TypeDefinitionIndex = 43021;

	class NPCAvatarMeshManager : public ::NPCCrowd::NPCCrowdModuleManagerBase
	{
	public:
		static ::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>** StaticGet_matAssetsLoaders()
		{
			return (::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>**)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarMeshManager_TypeDefinitionIndex)->GetStaticField(0x45670);
		}
		static ::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>** StaticGet_meshAssetsLoaders()
		{
			return (::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>**)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarMeshManager_TypeDefinitionIndex)->GetStaticField(0x45678);
		}
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::NPCAvatarMeshAssetsSO_FNPCAvatarLodMeshAssets*>* allLodMeshIDDicts; // 0x18
		::System::Collections::Generic::List_1<::NPCAvatarMeshAssetsSO*>* meshConfigSO; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARMESHMANAGER__CTOR_OFFSET))(this);
		}

		static ::NPCCrowd::Avatar::NPCAvatarMeshManager* Get()
		{
			return ((::NPCCrowd::Avatar::NPCAvatarMeshManager*(*)())((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARMESHMANAGER_GET_OFFSET))();
		}

		::System::Void Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARMESHMANAGER_INIT_OFFSET))(this);
		}

		::System::Collections::Generic::Dictionary_2<::System::Int32, ::NPCAvatarMeshAssetsSO_FNPCAvatarLodMeshAssets*>* GetAllLodMesh()
		{
			return ((::System::Collections::Generic::Dictionary_2<::System::Int32, ::NPCAvatarMeshAssetsSO_FNPCAvatarLodMeshAssets*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARMESHMANAGER_GETALLLODMESH_OFFSET))(this);
		}

		static ::System::Void PreloadAssets(::System::String* packedTag, ::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>* waitedRequest)
		{
			return ((::System::Void(*)(::System::String*, ::System::Collections::Generic::List_1<::Foundation::AssetRequestHandle>*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARMESHMANAGER_PRELOADASSETS_OFFSET))(packedTag, waitedRequest);
		}

		::System::Void OnPreloadFinished()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARMESHMANAGER_ONPRELOADFINISHED_OFFSET))(this);
		}

		::System::Boolean GetAvatarMeshConfig(::ENPCAvatarGender gender, ::ENPCAvatarSize size, ::NPCAvatarMeshAssetsSO*& mesh)
		{
			return ((::System::Boolean(*)(::PVOID, ::ENPCAvatarGender, ::ENPCAvatarSize, ::NPCAvatarMeshAssetsSO*&))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARMESHMANAGER_GETAVATARMESHCONFIG_OFFSET))(this, gender, size, mesh);
		}

		::System::Void GetAvatarMeshConfig_1(::FNpcAvatarGenericParams genericParams, ::System::Collections::Generic::List_1<::NPCAvatarMeshAssetsSO_FNPCAvatarLodMeshAssets*>* outAssets)
		{
			return ((::System::Void(*)(::PVOID, ::FNpcAvatarGenericParams, ::System::Collections::Generic::List_1<::NPCAvatarMeshAssetsSO_FNPCAvatarLodMeshAssets*>*))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARMESHMANAGER_GETAVATARMESHCONFIG_1_OFFSET))(this, genericParams, outAssets);
		}

		::System::Void ReleaseResources(::NPCCrowd::EUnloadAssetReason reason)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::EUnloadAssetReason))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARMESHMANAGER_RELEASERESOURCES_OFFSET))(this, reason);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARMESHMANAGER_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_Init()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARMESHMANAGER___BASE_INIT_OFFSET))(this);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARMESHMANAGER___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnPreloadFinished()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_AVATAR_NPCAVATARMESHMANAGER___BASE_ONPRELOADFINISHED_OFFSET))(this);
		}
	};
}
