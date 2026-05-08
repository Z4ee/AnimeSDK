#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/NPCCrowd/Animation/GPUIAnimationClipData.h"
#include "unitysdk/NPCCrowd/Animation/GPUIRootMotion.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace NPCCrowd::Animation { class GPUIAnimatorState; }
namespace NPCCrowd::Animation { class GPUIBone; }
namespace NPCCrowd::Animation { class GPUISkinnedMeshData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Texture2D; }

#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONDATA_BONESETPARENT_OFFSET UNITYSDK_OFFSET(0xFC150C0)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONDATA_GETBONEBYTRANSFORM_OFFSET UNITYSDK_OFFSET(0xFC14CD0)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONDATA_GETBONEEXPORTINDEXBYBONEID_OFFSET UNITYSDK_OFFSET(0xFC15020)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONDATA_GETBONEINDEXBYTRANSFORM_OFFSET UNITYSDK_OFFSET(0xFC14FC0)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONDATA_GETSKINNEDMESHDATABYNAME_OFFSET UNITYSDK_OFFSET(0xFC15140)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONDATA_GET_ANIMATIONTEXTURE_OFFSET UNITYSDK_OFFSET(0xFC14800)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONDATA_UNLOADEDASSETS_OFFSET UNITYSDK_OFFSET(0xFC14B20)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xFC149B0)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int NPCCrowdAnimationData_TypeDefinitionIndex = 70241;

	class NPCCrowdAnimationData : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Single bakedCAVersion; // 0x18
		::System::Collections::Generic::List_1<::NPCCrowd::Animation::GPUIAnimationClipData>* clipDataList; // 0x20
		::System::Collections::Generic::List_1<::NPCCrowd::Animation::GPUISkinnedMeshData*>* skinnedMeshDataList; // 0x28
		::System::Collections::Generic::List_1<::NPCCrowd::Animation::GPUIBone*>* bones; // 0x30
		::System::Collections::Generic::List_1<::NPCCrowd::Animation::GPUIAnimatorState*>* states; // 0x38
		::UnityEngine::Texture2D* _animationTexture; // 0x40
		::Foundation::AssetPath animationTextureAssetPath; // 0x48
		::Foundation::AssetRequestHandle animationTextureHandle; // 0x58
		::System::Int32 totalFrameCount; // 0x78
		::System::Int32 totalBoneCount; // 0x7C
		::System::Int32 textureSizeX; // 0x80
		::System::Int32 textureSizeY; // 0x84
		::Il2CppArray<::NPCCrowd::Animation::GPUIRootMotion>* rootMotions; // 0x88
		::System::Boolean bIsApplyBoneUpdates; // 0x90
		::Il2CppArray<::UnityEngine::Matrix4x4>* bindPoses; // 0x98
		::Il2CppArray<::System::Int32>* exposedBoneIndexes; // 0xA0
		::System::Int32 asyncBoneUpdateMaxLatency; // 0xA8
		::System::Int32 frameRate; // 0xAC
		::System::Int32 bufferSize; // 0xB0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::NPCCrowd::Animation::GPUIBone*>* boneTransNameDict; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDANIMATIONDATA__CTOR_OFFSET))(this);
		}

		::UnityEngine::Texture2D* get_animationTexture()
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDANIMATIONDATA_GET_ANIMATIONTEXTURE_OFFSET))(this);
		}

		::System::Void UnLoadedAssets()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDANIMATIONDATA_UNLOADEDASSETS_OFFSET))(this);
		}

		::NPCCrowd::Animation::GPUIBone* GetBoneByTransform(::System::String* boneTransformName)
		{
			return ((::NPCCrowd::Animation::GPUIBone*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDANIMATIONDATA_GETBONEBYTRANSFORM_OFFSET))(this, boneTransformName);
		}

		::System::Int32 GetBoneIndexByTransform(::System::String* boneTransformName)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDANIMATIONDATA_GETBONEINDEXBYTRANSFORM_OFFSET))(this, boneTransformName);
		}

		::System::Int32 GetBoneExportIndexByBoneID(::System::Int32 boneID)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDANIMATIONDATA_GETBONEEXPORTINDEXBYBONEID_OFFSET))(this, boneID);
		}

		::System::Void BoneSetParent(::NPCCrowd::Animation::GPUIBone* child, ::NPCCrowd::Animation::GPUIBone* parent)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::GPUIBone*, ::NPCCrowd::Animation::GPUIBone*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDANIMATIONDATA_BONESETPARENT_OFFSET))(this, child, parent);
		}

		::NPCCrowd::Animation::GPUISkinnedMeshData* GetSkinnedMeshDataByName(::System::String* transformName)
		{
			return ((::NPCCrowd::Animation::GPUISkinnedMeshData*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDANIMATIONDATA_GETSKINNEDMESHDATABYNAME_OFFSET))(this, transformName);
		}
	};
}
