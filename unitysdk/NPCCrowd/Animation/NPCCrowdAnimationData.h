#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/Foundation/AssetRequestHandle.h"
#include "unitysdk/NPCCrowd/Animation/GPUIAnimationClipData.h"
#include "unitysdk/NPCCrowd/Animation/GPUIRootMotion.h"
#include "unitysdk/UnityEngine/Matrix4x4.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace NPCCrowd::Animation { class ClipTextureEntry; }
namespace NPCCrowd::Animation { class GPUIAnimatorState; }
namespace NPCCrowd::Animation { class GPUIBone; }
namespace NPCCrowd::Animation { class GPUISkinnedMeshData; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Texture2D; }

#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONDATA_BONESETPARENT_OFFSET UNITYSDK_OFFSET(0xFFCAF10)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONDATA_GETBONEBYTRANSFORM_OFFSET UNITYSDK_OFFSET(0xFFCAB20)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONDATA_GETBONEEXPORTINDEXBYBONEID_OFFSET UNITYSDK_OFFSET(0xFFCAE70)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONDATA_GETBONEINDEXBYTRANSFORM_OFFSET UNITYSDK_OFFSET(0xFFCAE10)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONDATA_GETCLIPTEXTUREENTRY_OFFSET UNITYSDK_OFFSET(0xFFCB080)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONDATA_GETCOMPATIBILITYSTATUS_OFFSET UNITYSDK_OFFSET(0xFFCB2F0)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONDATA_GETFALLBACKTEXTURE_OFFSET UNITYSDK_OFFSET(0xFFCB260)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONDATA_GETPROTOTYPEKEY_OFFSET UNITYSDK_OFFSET(0xFFCA4A0)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONDATA_GETSKINNEDMESHDATABYNAME_OFFSET UNITYSDK_OFFSET(0xFFCAF90)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONDATA_GET_ANIMATIONTEXTURE_OFFSET UNITYSDK_OFFSET(0xFFCA4E0)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONDATA_GET_BUSECLIPGRANULARLOADING_OFFSET UNITYSDK_OFFSET(0xFFCA440)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONDATA_GET_HASVALIDBAKEDDATA_OFFSET UNITYSDK_OFFSET(0xFFCA800)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONDATA_GET_ISANIMATIONTEXTURELOADED_OFFSET UNITYSDK_OFFSET(0xFFCA860)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONDATA_HASCLIPTEXTURE_OFFSET UNITYSDK_OFFSET(0xFFCB180)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONDATA_UNLOADEDASSETS_OFFSET UNITYSDK_OFFSET(0xFFCA970)
#define NPCCROWD_ANIMATION_NPCCROWDANIMATIONDATA__CTOR_OFFSET UNITYSDK_OFFSET(0xFFCA690)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int NPCCrowdAnimationData_TypeDefinitionIndex = 42881;

	class NPCCrowdAnimationData : public ::UnityEngine::ScriptableObject
	{
	public:
		::System::Single bakedCAVersion; // 0x18
		::System::Int32 textureLayoutVersion; // 0x1C
		::System::Collections::Generic::List_1<::NPCCrowd::Animation::ClipTextureEntry*>* clipTextures; // 0x20
		::System::Int32 protoTypeKey; // 0x28
		::System::Collections::Generic::List_1<::NPCCrowd::Animation::GPUIAnimationClipData>* clipDataList; // 0x30
		::System::Collections::Generic::List_1<::NPCCrowd::Animation::GPUISkinnedMeshData*>* skinnedMeshDataList; // 0x38
		::System::Collections::Generic::List_1<::NPCCrowd::Animation::GPUIBone*>* bones; // 0x40
		::System::Collections::Generic::List_1<::NPCCrowd::Animation::GPUIAnimatorState*>* states; // 0x48
		::UnityEngine::Texture2D* _animationTexture; // 0x50
		::Foundation::AssetPath animationTextureAssetPath; // 0x58
		::Foundation::AssetRequestHandle animationTextureHandle; // 0x68
		::System::Int32 totalFrameCount; // 0x88
		::System::Int32 totalBoneCount; // 0x8C
		::System::Int32 textureSizeX; // 0x90
		::System::Int32 textureSizeY; // 0x94
		::Il2CppArray<::NPCCrowd::Animation::GPUIRootMotion>* rootMotions; // 0x98
		::System::Boolean bIsApplyBoneUpdates; // 0xA0
		::Il2CppArray<::UnityEngine::Matrix4x4>* bindPoses; // 0xA8
		::Il2CppArray<::System::Int32>* exposedBoneIndexes; // 0xB0
		::System::Int32 asyncBoneUpdateMaxLatency; // 0xB8
		::System::Int32 frameRate; // 0xBC
		::System::Int32 bufferSize; // 0xC0
		::System::Collections::Generic::Dictionary_2<::System::String*, ::NPCCrowd::Animation::GPUIBone*>* boneTransNameDict; // 0xC8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDANIMATIONDATA__CTOR_OFFSET))(this);
		}

		::System::Boolean get_bUseClipGranularLoading()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDANIMATIONDATA_GET_BUSECLIPGRANULARLOADING_OFFSET))(this);
		}

		::System::Int32 GetPrototypeKey()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDANIMATIONDATA_GETPROTOTYPEKEY_OFFSET))(this);
		}

		::UnityEngine::Texture2D* get_animationTexture()
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDANIMATIONDATA_GET_ANIMATIONTEXTURE_OFFSET))(this);
		}

		::System::Boolean get_HasValidBakedData()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDANIMATIONDATA_GET_HASVALIDBAKEDDATA_OFFSET))(this);
		}

		::System::Boolean get_IsAnimationTextureLoaded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDANIMATIONDATA_GET_ISANIMATIONTEXTURELOADED_OFFSET))(this);
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

		::NPCCrowd::Animation::ClipTextureEntry* GetClipTextureEntry(::System::Int32 clipIndex)
		{
			return ((::NPCCrowd::Animation::ClipTextureEntry*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDANIMATIONDATA_GETCLIPTEXTUREENTRY_OFFSET))(this, clipIndex);
		}

		::System::Boolean HasClipTexture(::System::Int32 clipIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDANIMATIONDATA_HASCLIPTEXTURE_OFFSET))(this, clipIndex);
		}

		::UnityEngine::Texture2D* GetFallbackTexture()
		{
			return ((::UnityEngine::Texture2D*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDANIMATIONDATA_GETFALLBACKTEXTURE_OFFSET))(this);
		}

		::System::String* GetCompatibilityStatus()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDANIMATIONDATA_GETCOMPATIBILITYSTATUS_OFFSET))(this);
		}
	};
}
