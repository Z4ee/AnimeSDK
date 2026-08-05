#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ENPCAvatarGender.h"
#include "unitysdk/ENPCAvatarSize.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/NPCCrowd/Animation/BlendShapeData.h"
#include "unitysdk/NPCCrowd/Animation/ENPCAnimationAvatarMaskType.h"
#include "unitysdk/NPCCrowd/EUnloadAssetReason.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

class NPCAvatarMeshAssetsSO_FMonoFeaturePointSettings;
class NPCAvatarMeshAssetsSO_FMonoInteractionPointSettings;
class NPCAvatarMeshAssetsSO_FMonoItemStateSettings;
namespace NPCCrowd::Animation { class BlendShapeNameData; }
namespace NPCCrowd::Animation { class ExposeBoneInfo; }
namespace NPCCrowd::Animation { class NPCBlendShapeMaskAsset; }
namespace NPCCrowd::Animation { class NPCCPUAnimationClipInfo; }
namespace NPCCrowd::Animation { class NPCCPUAnimationLookAtIKInfo; }
namespace NPCCrowd::Animation { class NPCCPUAnimationSlotInfo; }
namespace NPCCrowd::Animation { class NPCTurningParameters; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class AnimationClip; }
namespace UnityEngine { class Avatar; }
namespace UnityEngine { class AvatarMask; }
namespace UnityEngine { class GameObject; }

#define NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHDATASET_GETAVATARMASK_OFFSET UNITYSDK_OFFSET(0xE578A40)
#define NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHDATASET_GETBLENDSHAPEATTRIBUTECOUNT_OFFSET UNITYSDK_OFFSET(0xE579150)
#define NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHDATASET_GETBLENDSHAPEMASKTYPEBYLAYER_OFFSET UNITYSDK_OFFSET(0xE578AD0)
#define NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHDATASET_GETBLENDSHAPEMASK_OFFSET UNITYSDK_OFFSET(0xE578B20)
#define NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHDATASET_GET_AVATAR_OFFSET UNITYSDK_OFFSET(0xE5782A0)
#define NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHDATASET_GET_BLENDSHAPEMASKTYPECOUNT_OFFSET UNITYSDK_OFFSET(0xE578AC0)
#define NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHDATASET_NPCCROWD_ANIMATION_IANIMATIONLIB_GETANIMATIONS_OFFSET UNITYSDK_OFFSET(0xE5792B0)
#define NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHDATASET_NPCCROWD_ANIMATION_ICPUANIMATIONLIB_GETAVATAR_OFFSET UNITYSDK_OFFSET(0xE579870)
#define NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHDATASET_NPCCROWD_ANIMATION_ICPUANIMATIONLIB_GETGENDER_OFFSET UNITYSDK_OFFSET(0xE5798C0)
#define NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHDATASET_NPCCROWD_ANIMATION_ICPUANIMATIONLIB_GETSIZE_OFFSET UNITYSDK_OFFSET(0xE579900)
#define NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHDATASET_NPCCROWD_ANIMATION_ICPUANIMATIONLIB_ISANIMATIONCLIP_OFFSET UNITYSDK_OFFSET(0xE579640)
#define NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHDATASET_NPCCROWD_ANIMATION_ICPUANIMATIONLIB_RESOLVE_OFFSET UNITYSDK_OFFSET(0xE5793E0)
#define NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHDATASET_REFRESHANIMDATA_OFFSET UNITYSDK_OFFSET(0xE578BB0)
#define NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHDATASET_UNLOADEDASSETS_OFFSET UNITYSDK_OFFSET(0xE5786B0)
#define NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHDATASET__CTOR_OFFSET UNITYSDK_OFFSET(0xE579940)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int NPCCPUAnimationGraphDataset_TypeDefinitionIndex = 45771;

	class NPCCPUAnimationGraphDataset : public ::UnityEngine::ScriptableObject
	{
	public:
		::ENPCAvatarGender gender; // 0x18
		::ENPCAvatarSize size; // 0x1C
		::UnityEngine::GameObject* _fbxGameobj; // 0x20
		::UnityEngine::Avatar* _avatar; // 0x28
		::Foundation::AssetRequestHandle avatarHandle; // 0x30
		::Foundation::AssetPath avatarAssetPath; // 0x50
		::UnityEngine::AvatarMask* maskType1; // 0x60
		::UnityEngine::AvatarMask* maskType2; // 0x68
		::UnityEngine::AvatarMask* maskType3; // 0x70
		::UnityEngine::AvatarMask* maskType4; // 0x78
		::NPCCrowd::Animation::NPCBlendShapeMaskAsset* blendShapeMaskType1; // 0x80
		::NPCCrowd::Animation::NPCBlendShapeMaskAsset* blendShapeMaskType2; // 0x88
		::NPCCrowd::Animation::NPCBlendShapeMaskAsset* blendShapeMaskType3; // 0x90
		::NPCCrowd::Animation::NPCBlendShapeMaskAsset* blendShapeMaskType4; // 0x98
		::System::Collections::Generic::List_1<::NPCCrowd::Animation::NPCCPUAnimationSlotInfo*>* otherSlotInfos; // 0xA0
		::System::Collections::Generic::List_1<::NPCCrowd::Animation::ExposeBoneInfo*>* beardRelatedBoneInfos; // 0xA8
		::System::Int32 fallbackAnimationID; // 0xB0
		::System::Boolean allowNoAnimation; // 0xB4
		::System::Collections::Generic::List_1<::NPCCrowd::Animation::NPCCPUAnimationClipInfo*>* animationInfos; // 0xB8
		::System::Collections::Generic::List_1<::NPCCrowd::Animation::NPCCPUAnimationClipInfo*>* facialAnimationInfoList; // 0xC0
		::NPCCrowd::Animation::NPCCPUAnimationClipInfo* facialAnimationInfo; // 0xC8
		::System::Collections::Generic::List_1<::NPCCrowd::Animation::BlendShapeData>* blendShapeAttributes; // 0xD0
		::System::Collections::Generic::List_1<::NPCCrowd::Animation::BlendShapeNameData*>* blendshapeNames; // 0xD8
		::System::Collections::Generic::List_1<::Foundation::AssetPath>* montageAssets; // 0xE0
		::System::Boolean bIsInited; // 0xE8
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::NPCCrowd::Animation::NPCCPUAnimationClipInfo*>* animationDict; // 0xF0
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::NPCCrowd::Animation::NPCCPUAnimationSlotInfo*>* slotInfosDict; // 0xF8
		::NPCCrowd::Animation::NPCCPUAnimationLookAtIKInfo* lookAtIK; // 0x100
		::NPCCrowd::Animation::NPCTurningParameters* turningConfig; // 0x108
		::System::Collections::Generic::List_1<::NPCAvatarMeshAssetsSO_FMonoFeaturePointSettings*>* featurePoints; // 0x110
		::System::Collections::Generic::List_1<::NPCAvatarMeshAssetsSO_FMonoInteractionPointSettings*>* interactionPoints; // 0x118
		::System::Collections::Generic::List_1<::NPCAvatarMeshAssetsSO_FMonoItemStateSettings*>* photoItemStates; // 0x120

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHDATASET__CTOR_OFFSET))(this);
		}

		::UnityEngine::Avatar* get_avatar()
		{
			return ((::UnityEngine::Avatar*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHDATASET_GET_AVATAR_OFFSET))(this);
		}

		::System::Void UnLoadedAssets(::NPCCrowd::EUnloadAssetReason reason)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::EUnloadAssetReason))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHDATASET_UNLOADEDASSETS_OFFSET))(this, reason);
		}

		::UnityEngine::AvatarMask* GetAvatarMask(::NPCCrowd::Animation::ENPCAnimationAvatarMaskType type)
		{
			return ((::UnityEngine::AvatarMask*(*)(::PVOID, ::NPCCrowd::Animation::ENPCAnimationAvatarMaskType))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHDATASET_GETAVATARMASK_OFFSET))(this, type);
		}

		static ::System::Int32 get_BlendShapeMaskTypeCount()
		{
			return ((::System::Int32(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHDATASET_GET_BLENDSHAPEMASKTYPECOUNT_OFFSET))();
		}

		static ::NPCCrowd::Animation::ENPCAnimationAvatarMaskType GetBlendShapeMaskTypeByLayer(::System::Int32 layer)
		{
			return ((::NPCCrowd::Animation::ENPCAnimationAvatarMaskType(*)(::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHDATASET_GETBLENDSHAPEMASKTYPEBYLAYER_OFFSET))(layer);
		}

		::NPCCrowd::Animation::NPCBlendShapeMaskAsset* GetBlendShapeMask(::NPCCrowd::Animation::ENPCAnimationAvatarMaskType type)
		{
			return ((::NPCCrowd::Animation::NPCBlendShapeMaskAsset*(*)(::PVOID, ::NPCCrowd::Animation::ENPCAnimationAvatarMaskType))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHDATASET_GETBLENDSHAPEMASK_OFFSET))(this, type);
		}

		::System::Void RefreshAnimData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHDATASET_REFRESHANIMDATA_OFFSET))(this);
		}

		::System::Int32 GetBlendShapeAttributeCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHDATASET_GETBLENDSHAPEATTRIBUTECOUNT_OFFSET))(this);
		}

		::System::Collections::Generic::IEnumerable_1<::System::Int32>* NPCCrowd_Animation_IAnimationLib_GetAnimations()
		{
			return ((::System::Collections::Generic::IEnumerable_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHDATASET_NPCCROWD_ANIMATION_IANIMATIONLIB_GETANIMATIONS_OFFSET))(this);
		}

		::UnityEngine::AnimationClip* NPCCrowd_Animation_ICPUAnimationLib_Resolve(::System::Int32 animationId)
		{
			return ((::UnityEngine::AnimationClip*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHDATASET_NPCCROWD_ANIMATION_ICPUANIMATIONLIB_RESOLVE_OFFSET))(this, animationId);
		}

		::System::Boolean NPCCrowd_Animation_ICPUAnimationLib_IsAnimationClip(::System::Int32 animationId)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHDATASET_NPCCROWD_ANIMATION_ICPUANIMATIONLIB_ISANIMATIONCLIP_OFFSET))(this, animationId);
		}

		::UnityEngine::Avatar* NPCCrowd_Animation_ICPUAnimationLib_GetAvatar()
		{
			return ((::UnityEngine::Avatar*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHDATASET_NPCCROWD_ANIMATION_ICPUANIMATIONLIB_GETAVATAR_OFFSET))(this);
		}

		::ENPCAvatarGender NPCCrowd_Animation_ICPUAnimationLib_GetGender()
		{
			return ((::ENPCAvatarGender(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHDATASET_NPCCROWD_ANIMATION_ICPUANIMATIONLIB_GETGENDER_OFFSET))(this);
		}

		::ENPCAvatarSize NPCCrowd_Animation_ICPUAnimationLib_GetSize()
		{
			return ((::ENPCAvatarSize(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCPUANIMATIONGRAPHDATASET_NPCCROWD_ANIMATION_ICPUANIMATIONLIB_GETSIZE_OFFSET))(this);
		}
	};
}
