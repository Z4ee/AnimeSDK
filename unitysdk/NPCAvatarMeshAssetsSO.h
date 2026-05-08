#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENPCAvatarGender.h"
#include "unitysdk/ENPCAvatarSize.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/NPCAvatarMeshAssetsSO_FNPCAvatarCapsuleCollider.h"
#include "unitysdk/NPCAvatarMeshAssetsSO_FNPCAvatarNavMeshObstacle.h"
#include "unitysdk/NPCAvatarMeshAssetsSO_FNpcAudioSettings.h"
#include "unitysdk/NPCAvatarMeshAssetsSO_FNpcLodSettings.h"
#include "unitysdk/NPCCrowd/EUnloadAssetReason.h"
#include "unitysdk/UnityEngine/Bounds.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

class NPCAvatarMeshAssetsSO_FNPCAvatarLodMeshAssets;
class NPCSoftMaterialPath;
class NPCSoftMeshPath;
namespace MoleMole { class SkillCharacterAnimatorZoneData; }
namespace MoleMole::Config { class ConfigAnimatorEventPattern; }
namespace NPCCrowd::Ability { class NPCAbilityParameters; }
namespace NPCCrowd::Animation { class AnimationControllerData; }
namespace NPCCrowd::Animation { class NPCCPUAnimationGraphDataset; }
namespace NPCCrowd::Animation { class NPCCrowdAnimationData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCAVATARMESHASSETSSO_ADDMESHASSETS_OFFSET UNITYSDK_OFFSET(0xD226550)
#define NPCAVATARMESHASSETSSO_CLEARMESHASSETS_OFFSET UNITYSDK_OFFSET(0xD2264A0)
#define NPCAVATARMESHASSETSSO_GETAVATARSLOTMESHASSETS_OFFSET UNITYSDK_OFFSET(0xD226510)
#define NPCAVATARMESHASSETSSO_UNLOADEDASSETS_OFFSET UNITYSDK_OFFSET(0xD2262C0)
#define NPCAVATARMESHASSETSSO__CTOR_OFFSET UNITYSDK_OFFSET(0xD226700)

inline static constexpr unsigned int NPCAvatarMeshAssetsSO_TypeDefinitionIndex = 56635;

class NPCAvatarMeshAssetsSO : public ::UnityEngine::ScriptableObject
{
public:
	::ENPCAvatarGender gender; // 0x18
	::ENPCAvatarSize size; // 0x1C
	::NPCCrowd::Animation::NPCCPUAnimationGraphDataset* animationGraphDataset; // 0x20
	::NPCCrowd::Animation::NPCCrowdAnimationData* animationProtoTypeData; // 0x28
	::MoleMole::Config::ConfigAnimatorEventPattern* animationEventPattenAudio; // 0x30
	::MoleMole::Config::ConfigAnimatorEventPattern* animationEventPattenBattle; // 0x38
	::MoleMole::Config::ConfigAnimatorEventPattern* animationEventPattenEffect; // 0x40
	::MoleMole::SkillCharacterAnimatorZoneData* animationZoneData; // 0x48
	::NPCCrowd::Ability::NPCAbilityParameters* abilityParameters; // 0x50
	::System::Collections::Generic::List_1<::NPCAvatarMeshAssetsSO_FNPCAvatarLodMeshAssets*>* avatarSlotMeshDatas; // 0x58
	::NPCSoftMeshPath* commonGPULod3SimpleMeshRef; // 0x60
	::NPCSoftMeshPath* commonGPULod3SimpleFrontMeshRef; // 0x68
	::NPCSoftMeshPath* commonGPULod3SimpleSideMeshRef; // 0x70
	::NPCSoftMaterialPath* commonGPULod3SimpleMaterialRef; // 0x78
	::NPCSoftMaterialPath* commonGPULod3SimpleDitherMaterialRef; // 0x80
	::NPCSoftMeshPath* shadowProxySimpleGPUMeshPathRef; // 0x88
	::NPCSoftMeshPath* shadowProxySimpleMeshPathRef; // 0x90
	::NPCSoftMeshPath* shadowProxyCapsuleMeshPathRef; // 0x98
	::NPCSoftMaterialPath* shadowProxyMaterialRef; // 0xA0
	::System::Collections::Generic::List_1<::NPCAvatarMeshAssetsSO_FNPCAvatarCapsuleCollider>* colliders; // 0xA8
	::NPCAvatarMeshAssetsSO_FNPCAvatarNavMeshObstacle navObstacle; // 0xB0
	::NPCCrowd::Animation::AnimationControllerData* controllerData; // 0xD0
	::NPCAvatarMeshAssetsSO_FNpcLodSettings lodSettings; // 0xD8
	::NPCAvatarMeshAssetsSO_FNpcAudioSettings audioSettings; // 0xE0
	::UnityEngine::Bounds rootBounds; // 0x108
	::System::Collections::Generic::List_1<::Foundation::AssetPath>* shadowProxySkinnedMeshes; // 0x120

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCAVATARMESHASSETSSO__CTOR_OFFSET))(this);
	}

	::System::Void UnLoadedAssets(::NPCCrowd::EUnloadAssetReason reason)
	{
		return ((::System::Void(*)(::PVOID, ::NPCCrowd::EUnloadAssetReason))((::PBYTE)hIl2Cpp + NPCAVATARMESHASSETSSO_UNLOADEDASSETS_OFFSET))(this, reason);
	}

	::System::Void ClearMeshAssets()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCAVATARMESHASSETSSO_CLEARMESHASSETS_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::NPCAvatarMeshAssetsSO_FNPCAvatarLodMeshAssets*>* GetAvatarSlotMeshAssets()
	{
		return ((::System::Collections::Generic::List_1<::NPCAvatarMeshAssetsSO_FNPCAvatarLodMeshAssets*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCAVATARMESHASSETSSO_GETAVATARSLOTMESHASSETS_OFFSET))(this);
	}

	::System::Void AddMeshAssets(::NPCAvatarMeshAssetsSO_FNPCAvatarLodMeshAssets* meshAsset)
	{
		return ((::System::Void(*)(::PVOID, ::NPCAvatarMeshAssetsSO_FNPCAvatarLodMeshAssets*))((::PBYTE)hIl2Cpp + NPCAVATARMESHASSETSSO_ADDMESHASSETS_OFFSET))(this, meshAsset);
	}
};
