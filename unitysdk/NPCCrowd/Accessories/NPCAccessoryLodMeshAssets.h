#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/Unreal/FGameplayTagContainer.h"
#include "unitysdk/NPCCrowd/EUnloadAssetReason.h"
#include "unitysdk/NPCCrowd/Lod/ELODLevel.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Mesh; }

#define NPCCROWD_ACCESSORIES_NPCACCESSORYLODMESHASSETS_GETMESH_OFFSET UNITYSDK_OFFSET(0xD4153B0)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYLODMESHASSETS_UNLOADEDASSETS_OFFSET UNITYSDK_OFFSET(0xD415830)
#define NPCCROWD_ACCESSORIES_NPCACCESSORYLODMESHASSETS__CTOR_OFFSET UNITYSDK_OFFSET(0xD415880)

namespace NPCCrowd::Accessories
{
	inline static constexpr unsigned int NPCAccessoryLodMeshAssets_TypeDefinitionIndex = 51876;

	class NPCAccessoryLodMeshAssets : public ::System::Object
	{
	public:
		::System::Int32 id; // 0x10
		::System::UInt16 number; // 0x14
		::Il2CppArray<::System::Int32>* MDBPoses; // 0x18
		::System::Collections::Generic::List_1<::System::Int32>* logicTags; // 0x20
		::Foundation::Unreal::FGameplayTagContainer gameplayTags; // 0x28
		::Foundation::AssetPath meshLod0Path; // 0x98
		::Foundation::AssetPath meshLod1Path; // 0xA8
		::Foundation::AssetPath meshLod2Path; // 0xB8
		::Foundation::AssetPath meshLod3Path; // 0xC8
		::Il2CppArray<::Foundation::AssetPath>* materialsPath; // 0xD8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYLODMESHASSETS__CTOR_OFFSET))(this);
		}

		static ::UnityEngine::Mesh* GetMesh(::UnityEngine::GameObject* fbxGO, ::NPCCrowd::Lod::ELODLevel lod)
		{
			return ((::UnityEngine::Mesh*(*)(::UnityEngine::GameObject*, ::NPCCrowd::Lod::ELODLevel))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYLODMESHASSETS_GETMESH_OFFSET))(fbxGO, lod);
		}

		::System::Void UnLoadedAssets(::NPCCrowd::EUnloadAssetReason reason)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::EUnloadAssetReason))((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYLODMESHASSETS_UNLOADEDASSETS_OFFSET))(this, reason);
		}
	};
}
