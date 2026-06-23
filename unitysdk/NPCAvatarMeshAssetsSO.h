#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENPCAvatarGender.h"
#include "unitysdk/ENPCAvatarSize.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/NPCAvatarMeshAssetsSO_FNPCAvatarCapsuleCollider.h"
#include "unitysdk/NPCAvatarMeshAssetsSO_FNPCAvatarNavMeshObstacle.h"
#include "unitysdk/NPCAvatarMeshAssetsSO_FNpcLodSettings.h"
#include "unitysdk/NPCCrowd/EUnloadAssetReason.h"
#include "unitysdk/Sirenix/OdinInspector/SerializedScriptableObject.h"
#include "unitysdk/UnityEngine/Bounds.h"

class NPCAvatarAudioAssetsSO;
class NPCAvatarEmotionParamsSO;
class NPCAvatarMeshAssetsSO_FNPCAvatarLodMeshAssets;
class NPCAvatarMeshAssetsSO_FPathGraphPointRegionTypeMaskTagConfig;
class NPCAvatarMeshAssetsSO_GameplayTagActionConfig;
class NPCAvatarMeshAssetsSO_SequenceFrameHidePartMapping;
namespace MoleMole { class SkillCharacterAnimatorZoneData; }
namespace MoleMole::Config { class ConfigAnimatorEventPattern; }
namespace NPCCrowd { class NPCSoftMaterialPath; }
namespace NPCCrowd { class NPCSoftMeshPath; }
namespace NPCCrowd::Ability { class NPCAbilityParameters; }
namespace NPCCrowd::Animation { class AnimationControllerData; }
namespace NPCCrowd::Animation { class NPCCPUAnimationGraphDataset; }
namespace NPCCrowd::Animation { class NPCCrowdAnimationData; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define NPCAVATARMESHASSETSSO_ADDMESHASSETS_OFFSET UNITYSDK_OFFSET(0xA65AF10)
#define NPCAVATARMESHASSETSSO_CLEARMESHASSETS_OFFSET UNITYSDK_OFFSET(0xA65AE50)
#define NPCAVATARMESHASSETSSO_GETAVATARSLOTMESHASSETS_OFFSET UNITYSDK_OFFSET(0xA65AEC0)
#define NPCAVATARMESHASSETSSO_UNLOADEDASSETS_OFFSET UNITYSDK_OFFSET(0xA65AC40)
#define NPCAVATARMESHASSETSSO__CTOR_OFFSET UNITYSDK_OFFSET(0xA65B0C0)

inline static constexpr unsigned int NPCAvatarMeshAssetsSO_TypeDefinitionIndex = 67198;

class NPCAvatarMeshAssetsSO : public ::Sirenix::OdinInspector::SerializedScriptableObject
{
public:
	::ENPCAvatarGender gender; // 0x58
	::ENPCAvatarSize size; // 0x5C
	::NPCCrowd::Animation::NPCCPUAnimationGraphDataset* animationGraphDataset; // 0x60
	::NPCCrowd::Animation::NPCCrowdAnimationData* animationProtoTypeData; // 0x68
	::MoleMole::Config::ConfigAnimatorEventPattern* animationEventPattenAudio; // 0x70
	::MoleMole::Config::ConfigAnimatorEventPattern* animationEventPattenBattle; // 0x78
	::MoleMole::Config::ConfigAnimatorEventPattern* animationEventPattenEffect; // 0x80
	::MoleMole::SkillCharacterAnimatorZoneData* animationZoneData; // 0x88
	::NPCCrowd::Ability::NPCAbilityParameters* abilityParameters; // 0x90
	::System::Collections::Generic::List_1<::NPCAvatarMeshAssetsSO_FPathGraphPointRegionTypeMaskTagConfig*>* pathGraphPointRegionTypeMaskTags; // 0x98
	::System::Collections::Generic::List_1<::NPCAvatarMeshAssetsSO_GameplayTagActionConfig*>* gameplayTagMaskActions; // 0xA0
	::System::Collections::Generic::List_1<::NPCAvatarMeshAssetsSO_SequenceFrameHidePartMapping*>* sequenceFrameHidePartMappings; // 0xA8
	::System::Collections::Generic::List_1<::NPCAvatarMeshAssetsSO_FNPCAvatarLodMeshAssets*>* avatarSlotMeshDatas; // 0xB0
	::NPCCrowd::NPCSoftMeshPath* commonGPULod3SimpleMeshRef; // 0xB8
	::NPCCrowd::NPCSoftMeshPath* commonGPULod3SimpleFrontMeshRef; // 0xC0
	::NPCCrowd::NPCSoftMeshPath* commonGPULod3SimpleSideMeshRef; // 0xC8
	::NPCCrowd::NPCSoftMaterialPath* commonGPULod3SimpleMaterialRef; // 0xD0
	::NPCCrowd::NPCSoftMaterialPath* commonGPULod3SimpleDitherMaterialRef; // 0xD8
	::NPCCrowd::NPCSoftMeshPath* shadowProxySimpleGPUMeshPathRef; // 0xE0
	::NPCCrowd::NPCSoftMeshPath* shadowProxySimpleMeshPathRef; // 0xE8
	::NPCCrowd::NPCSoftMeshPath* shadowProxyCapsuleMeshPathRef; // 0xF0
	::NPCCrowd::NPCSoftMaterialPath* shadowProxyMaterialRef; // 0xF8
	::NPCAvatarEmotionParamsSO* emotionParams; // 0x100
	::System::Collections::Generic::List_1<::NPCAvatarMeshAssetsSO_FNPCAvatarCapsuleCollider>* colliders; // 0x108
	::NPCAvatarMeshAssetsSO_FNPCAvatarNavMeshObstacle navObstacle; // 0x110
	::NPCCrowd::Animation::AnimationControllerData* controllerData; // 0x130
	::NPCAvatarMeshAssetsSO_FNpcLodSettings lodSettings; // 0x138
	::NPCAvatarAudioAssetsSO* audioAssetSo; // 0x140
	::UnityEngine::Bounds rootBounds; // 0x148
	::System::Collections::Generic::List_1<::Foundation::AssetPath>* shadowProxySkinnedMeshes; // 0x160

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
