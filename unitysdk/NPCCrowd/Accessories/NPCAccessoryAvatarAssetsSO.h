#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/NPCCrowd/Accessories/ENPCAccessoryItemType.h"
#include "unitysdk/NPCCrowd/Accessories/ENPCAccessoryMeshType.h"
#include "unitysdk/NPCCrowd/EUnloadAssetReason.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace NPCCrowd::Accessories { class NPCAccessoryAnimationAssetsSO; }
namespace NPCCrowd::Accessories { class NPCAccessoryAttachInfo; }
namespace NPCCrowd::Accessories { class NPCAccessoryLodMeshAssets; }
namespace NPCCrowd::Accessories { class NPCAccessoryMDBPose; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCCROWD_ACCESSORIES_NPCACCESSORYAVATARASSETSSO_GET_BNEEDREADGPUSLOTDATA_OFFSET UNITYSDK_OFFSET(0xD23F250)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYAVATARASSETSSO_REFRESHASSETS_OFFSET UNITYSDK_OFFSET(0xD23F210)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYAVATARASSETSSO_UNLOADEDASSETS_OFFSET UNITYSDK_OFFSET(0xD23F2C0)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYAVATARASSETSSO__CTOR_OFFSET UNITYSDK_OFFSET(0xD23F510)

namespace NPCCrowd::Accessories
{
	inline static constexpr unsigned int NPCAccessoryAvatarAssetsSO_TypeDefinitionIndex = 74836;

	class NPCAccessoryAvatarAssetsSO : public ::UnityEngine::ScriptableObject
	{
	public:
		::NPCCrowd::Accessories::ENPCAccessoryItemType itemType; // 0x18
		::NPCCrowd::Accessories::ENPCAccessoryMeshType meshType; // 0x1C
		::NPCCrowd::Accessories::NPCAccessoryAttachInfo* attach; // 0x20
		::System::Collections::Generic::List_1<::NPCCrowd::Accessories::NPCAccessoryMDBPose*>* accMDBPoses; // 0x28
		::System::Collections::Generic::List_1<::NPCCrowd::Accessories::NPCAccessoryLodMeshAssets*>* meshAssets; // 0x30
		::System::Boolean bHasAnimation; // 0x38
		::NPCCrowd::Accessories::NPCAccessoryAnimationAssetsSO* animation; // 0x40
		::Foundation::AssetPath avatarAssetPath; // 0x48
		::System::Boolean useDitherMaterial; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYAVATARASSETSSO__CTOR_OFFSET))(this);
		}

		::System::Void RefreshAssets()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYAVATARASSETSSO_REFRESHASSETS_OFFSET))(this);
		}

		::System::Boolean get_bNeedReadGpuSlotData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYAVATARASSETSSO_GET_BNEEDREADGPUSLOTDATA_OFFSET))(this);
		}

		::System::Void UnLoadedAssets(::NPCCrowd::EUnloadAssetReason reason)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::EUnloadAssetReason))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYAVATARASSETSSO_UNLOADEDASSETS_OFFSET))(this, reason);
		}
	};
}
