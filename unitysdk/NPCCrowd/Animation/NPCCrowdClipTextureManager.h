#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/NPCCrowdClipTextureManager_AtlasStats.h"
#include "unitysdk/NPCCrowd/Animation/NPCCrowdClipTextureManager_LoadedClipInfo.h"
#include "unitysdk/NPCCrowd/Animation/NPCCrowdClipTextureManager_PendingUnloadEntry.h"
#include "unitysdk/System/Object.h"

namespace NPCCrowd::Animation { class ClipTextureEntry; }
namespace NPCCrowd::Animation { class NPCCrowdAnimationData; }
namespace NPCCrowd::Animation { class NPCCrowdVerticalAtlas; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerable_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Texture2D; }
namespace UnityEngine { class Texture; }

#define NPCCROWD_ANIMATION_NPCCROWDCLIPTEXTUREMANAGER_ACQUIRECLIPTEXTURES_OFFSET UNITYSDK_OFFSET(0xD895C40)
#define NPCCROWD_ANIMATION_NPCCROWDCLIPTEXTUREMANAGER_ACQUIRECLIPTEXTURE_OFFSET UNITYSDK_OFFSET(0xD894F60)
#define NPCCROWD_ANIMATION_NPCCROWDCLIPTEXTUREMANAGER_ADDTOPENDINGUNLOAD_OFFSET UNITYSDK_OFFSET(0xD895890)
#define NPCCROWD_ANIMATION_NPCCROWDCLIPTEXTUREMANAGER_CANCELPREFETCHCLIPTEXTURES_OFFSET UNITYSDK_OFFSET(0xD896AE0)
#define NPCCROWD_ANIMATION_NPCCROWDCLIPTEXTUREMANAGER_CANCELPREFETCH_OFFSET UNITYSDK_OFFSET(0xD8968F0)
#define NPCCROWD_ANIMATION_NPCCROWDCLIPTEXTUREMANAGER_DESTROYINSTANCE_OFFSET UNITYSDK_OFFSET(0xD8945E0)
#define NPCCROWD_ANIMATION_NPCCROWDCLIPTEXTUREMANAGER_FORCECOMPACTALLATLASES_OFFSET UNITYSDK_OFFSET(0xD898650)
#define NPCCROWD_ANIMATION_NPCCROWDCLIPTEXTUREMANAGER_GETALLATLASSTATS_OFFSET UNITYSDK_OFFSET(0xD898980)
#define NPCCROWD_ANIMATION_NPCCROWDCLIPTEXTUREMANAGER_GETATLASBYPROTOTYPE_OFFSET UNITYSDK_OFFSET(0xD897E40)
#define NPCCROWD_ANIMATION_NPCCROWDCLIPTEXTUREMANAGER_GETATLASTEXTUREBYPROTOTYPE_OFFSET UNITYSDK_OFFSET(0xD8979B0)
#define NPCCROWD_ANIMATION_NPCCROWDCLIPTEXTUREMANAGER_GETATLASTEXTURE_OFFSET UNITYSDK_OFFSET(0xD894D20)
#define NPCCROWD_ANIMATION_NPCCROWDCLIPTEXTUREMANAGER_GETCLIPATLASOFFSETX_OFFSET UNITYSDK_OFFSET(0xD8976B0)
#define NPCCROWD_ANIMATION_NPCCROWDCLIPTEXTUREMANAGER_GETCLIPATLASOFFSETY_OFFSET UNITYSDK_OFFSET(0xD8973B0)
#define NPCCROWD_ANIMATION_NPCCROWDCLIPTEXTUREMANAGER_GETCLIPREFCOUNT_OFFSET UNITYSDK_OFFSET(0xD897000)
#define NPCCROWD_ANIMATION_NPCCROWDCLIPTEXTUREMANAGER_GETCOMPATIBLETEXTURE_OFFSET UNITYSDK_OFFSET(0xD894B50)
#define NPCCROWD_ANIMATION_NPCCROWDCLIPTEXTUREMANAGER_GETDEBUGINFO_OFFSET UNITYSDK_OFFSET(0xD899150)
#define NPCCROWD_ANIMATION_NPCCROWDCLIPTEXTUREMANAGER_GETORCREATEATLAS_OFFSET UNITYSDK_OFFSET(0xD897AA0)
#define NPCCROWD_ANIMATION_NPCCROWDCLIPTEXTUREMANAGER_GET_ATLASVERSION_OFFSET UNITYSDK_OFFSET(0xD894980)
#define NPCCROWD_ANIMATION_NPCCROWDCLIPTEXTUREMANAGER_GET_INSTANCE_OFFSET UNITYSDK_OFFSET(0xD8942E0)
#define NPCCROWD_ANIMATION_NPCCROWDCLIPTEXTUREMANAGER_ISCLIPGRANULARLOADINGSUPPORTED_OFFSET UNITYSDK_OFFSET(0xD894990)
#define NPCCROWD_ANIMATION_NPCCROWDCLIPTEXTUREMANAGER_ISCLIPLOADEDTOATLAS_OFFSET UNITYSDK_OFFSET(0xD8971D0)
#define NPCCROWD_ANIMATION_NPCCROWDCLIPTEXTUREMANAGER_ISPREFETCHED_OFFSET UNITYSDK_OFFSET(0xD896E10)
#define NPCCROWD_ANIMATION_NPCCROWDCLIPTEXTUREMANAGER_LOADCLIPTOATLAS_OFFSET UNITYSDK_OFFSET(0xD8952B0)
#define NPCCROWD_ANIMATION_NPCCROWDCLIPTEXTUREMANAGER_PREFETCHCLIPTEXTURES_OFFSET UNITYSDK_OFFSET(0xD8965C0)
#define NPCCROWD_ANIMATION_NPCCROWDCLIPTEXTUREMANAGER_PREFETCHCLIPTEXTURE_OFFSET UNITYSDK_OFFSET(0xD8962A0)
#define NPCCROWD_ANIMATION_NPCCROWDCLIPTEXTUREMANAGER_RELEASEALL_OFFSET UNITYSDK_OFFSET(0xD894640)
#define NPCCROWD_ANIMATION_NPCCROWDCLIPTEXTUREMANAGER_RELEASECLIPTEXTURES_OFFSET UNITYSDK_OFFSET(0xD895F70)
#define NPCCROWD_ANIMATION_NPCCROWDCLIPTEXTUREMANAGER_RELEASECLIPTEXTURE_OFFSET UNITYSDK_OFFSET(0xD8957B0)
#define NPCCROWD_ANIMATION_NPCCROWDCLIPTEXTUREMANAGER_REMOVEFROMPENDINGUNLOAD_OFFSET UNITYSDK_OFFSET(0xD895160)
#define NPCCROWD_ANIMATION_NPCCROWDCLIPTEXTUREMANAGER_TICK_OFFSET UNITYSDK_OFFSET(0xD897F20)
#define NPCCROWD_ANIMATION_NPCCROWDCLIPTEXTUREMANAGER_TRYCOMPACTATLAS_OFFSET UNITYSDK_OFFSET(0xD898210)
#define NPCCROWD_ANIMATION_NPCCROWDCLIPTEXTUREMANAGER_UNLOADCLIPFROMATLAS_OFFSET UNITYSDK_OFFSET(0xD8959D0)
#define NPCCROWD_ANIMATION_NPCCROWDCLIPTEXTUREMANAGER_VALIDATECLIPTEXTUREFORATLAS_OFFSET UNITYSDK_OFFSET(0xD8987C0)
#define NPCCROWD_ANIMATION_NPCCROWDCLIPTEXTUREMANAGER__CTOR_OFFSET UNITYSDK_OFFSET(0xD894360)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int NPCCrowdClipTextureManager_TypeDefinitionIndex = 79427;

	class NPCCrowdClipTextureManager : public ::System::Object
	{
	public:
		static ::NPCCrowd::Animation::NPCCrowdClipTextureManager** StaticGet__instance()
		{
			return (::NPCCrowd::Animation::NPCCrowdClipTextureManager**)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdClipTextureManager_TypeDefinitionIndex)->GetStaticField(0x51C10);
		}
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::String*>* _prototypeNameMap; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::NPCCrowd::Animation::NPCCrowdVerticalAtlas*>* _atlasMap; // 0x18
		::System::Collections::Generic::HashSet_1<::System::Int32>* _atlasUnloadedThisTick; // 0x20
		::System::Collections::Generic::List_1<::NPCCrowd::Animation::NPCCrowdClipTextureManager_PendingUnloadEntry>* _pendingUnloadEntries; // 0x28
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* _prototypeBoneCountMap; // 0x30
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::NPCCrowd::Animation::NPCCrowdClipTextureManager_LoadedClipInfo>*>* _loadedClipsPerAtlas; // 0x38
		::System::Boolean bEnableDelayUnload; // 0x40
		::System::Int32 compactionMinSavingRows; // 0x44
		::System::Single compactionWasteThreshold; // 0x48
		::System::Single delayUnloadTime; // 0x4C
		::System::Single prefetchDelayUnloadTime; // 0x50
		::System::Int32 _atlasVersion; // 0x54

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDCLIPTEXTUREMANAGER__CTOR_OFFSET))(this);
		}

		static ::NPCCrowd::Animation::NPCCrowdClipTextureManager* get_Instance()
		{
			return ((::NPCCrowd::Animation::NPCCrowdClipTextureManager*(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDCLIPTEXTUREMANAGER_GET_INSTANCE_OFFSET))();
		}

		static ::System::Void DestroyInstance()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDCLIPTEXTUREMANAGER_DESTROYINSTANCE_OFFSET))();
		}

		::System::Int32 get_atlasVersion()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDCLIPTEXTUREMANAGER_GET_ATLASVERSION_OFFSET))(this);
		}

		::System::Boolean IsClipGranularLoadingSupported(::NPCCrowd::Animation::NPCCrowdAnimationData* data, ::System::Boolean logWarning)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::Animation::NPCCrowdAnimationData*, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDCLIPTEXTUREMANAGER_ISCLIPGRANULARLOADINGSUPPORTED_OFFSET))(this, data, logWarning);
		}

		::UnityEngine::Texture* GetCompatibleTexture(::NPCCrowd::Animation::NPCCrowdAnimationData* data)
		{
			return ((::UnityEngine::Texture*(*)(::PVOID, ::NPCCrowd::Animation::NPCCrowdAnimationData*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDCLIPTEXTUREMANAGER_GETCOMPATIBLETEXTURE_OFFSET))(this, data);
		}

		::System::Boolean AcquireClipTexture(::NPCCrowd::Animation::NPCCrowdAnimationData* data, ::System::Int32 clipIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::Animation::NPCCrowdAnimationData*, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDCLIPTEXTUREMANAGER_ACQUIRECLIPTEXTURE_OFFSET))(this, data, clipIndex);
		}

		::System::Void ReleaseClipTexture(::NPCCrowd::Animation::NPCCrowdAnimationData* data, ::System::Int32 clipIndex)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::NPCCrowdAnimationData*, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDCLIPTEXTUREMANAGER_RELEASECLIPTEXTURE_OFFSET))(this, data, clipIndex);
		}

		::System::Void AcquireClipTextures(::NPCCrowd::Animation::NPCCrowdAnimationData* data, ::System::Collections::Generic::IEnumerable_1<::System::Int32>* clipIndices)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::NPCCrowdAnimationData*, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDCLIPTEXTUREMANAGER_ACQUIRECLIPTEXTURES_OFFSET))(this, data, clipIndices);
		}

		::System::Void ReleaseClipTextures(::NPCCrowd::Animation::NPCCrowdAnimationData* data, ::System::Collections::Generic::IEnumerable_1<::System::Int32>* clipIndices)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::NPCCrowdAnimationData*, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDCLIPTEXTUREMANAGER_RELEASECLIPTEXTURES_OFFSET))(this, data, clipIndices);
		}

		::System::Boolean PrefetchClipTexture(::NPCCrowd::Animation::NPCCrowdAnimationData* data, ::System::Int32 clipIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::Animation::NPCCrowdAnimationData*, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDCLIPTEXTUREMANAGER_PREFETCHCLIPTEXTURE_OFFSET))(this, data, clipIndex);
		}

		::System::Void PrefetchClipTextures(::NPCCrowd::Animation::NPCCrowdAnimationData* data, ::System::Collections::Generic::IEnumerable_1<::System::Int32>* clipIndices)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::NPCCrowdAnimationData*, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDCLIPTEXTUREMANAGER_PREFETCHCLIPTEXTURES_OFFSET))(this, data, clipIndices);
		}

		::System::Void CancelPrefetch(::NPCCrowd::Animation::NPCCrowdAnimationData* data, ::System::Int32 clipIndex)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::NPCCrowdAnimationData*, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDCLIPTEXTUREMANAGER_CANCELPREFETCH_OFFSET))(this, data, clipIndex);
		}

		::System::Void CancelPrefetchClipTextures(::NPCCrowd::Animation::NPCCrowdAnimationData* data, ::System::Collections::Generic::IEnumerable_1<::System::Int32>* clipIndices)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::NPCCrowdAnimationData*, ::System::Collections::Generic::IEnumerable_1<::System::Int32>*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDCLIPTEXTUREMANAGER_CANCELPREFETCHCLIPTEXTURES_OFFSET))(this, data, clipIndices);
		}

		::System::Boolean IsPrefetched(::NPCCrowd::Animation::NPCCrowdAnimationData* data, ::System::Int32 clipIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::Animation::NPCCrowdAnimationData*, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDCLIPTEXTUREMANAGER_ISPREFETCHED_OFFSET))(this, data, clipIndex);
		}

		::System::Int32 GetClipRefCount(::NPCCrowd::Animation::NPCCrowdAnimationData* data, ::System::Int32 clipIndex)
		{
			return ((::System::Int32(*)(::PVOID, ::NPCCrowd::Animation::NPCCrowdAnimationData*, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDCLIPTEXTUREMANAGER_GETCLIPREFCOUNT_OFFSET))(this, data, clipIndex);
		}

		::System::Boolean IsClipLoadedToAtlas(::NPCCrowd::Animation::NPCCrowdAnimationData* data, ::System::Int32 clipIndex)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::Animation::NPCCrowdAnimationData*, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDCLIPTEXTUREMANAGER_ISCLIPLOADEDTOATLAS_OFFSET))(this, data, clipIndex);
		}

		::System::Int32 GetClipAtlasOffsetY(::NPCCrowd::Animation::NPCCrowdAnimationData* data, ::System::Int32 clipIndex)
		{
			return ((::System::Int32(*)(::PVOID, ::NPCCrowd::Animation::NPCCrowdAnimationData*, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDCLIPTEXTUREMANAGER_GETCLIPATLASOFFSETY_OFFSET))(this, data, clipIndex);
		}

		::System::Int32 GetClipAtlasOffsetX(::NPCCrowd::Animation::NPCCrowdAnimationData* data, ::System::Int32 clipIndex)
		{
			return ((::System::Int32(*)(::PVOID, ::NPCCrowd::Animation::NPCCrowdAnimationData*, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDCLIPTEXTUREMANAGER_GETCLIPATLASOFFSETX_OFFSET))(this, data, clipIndex);
		}

		::UnityEngine::RenderTexture* GetAtlasTexture(::NPCCrowd::Animation::NPCCrowdAnimationData* data)
		{
			return ((::UnityEngine::RenderTexture*(*)(::PVOID, ::NPCCrowd::Animation::NPCCrowdAnimationData*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDCLIPTEXTUREMANAGER_GETATLASTEXTURE_OFFSET))(this, data);
		}

		::UnityEngine::RenderTexture* GetAtlasTextureByPrototype(::System::Int32 prototypeKey)
		{
			return ((::UnityEngine::RenderTexture*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDCLIPTEXTUREMANAGER_GETATLASTEXTUREBYPROTOTYPE_OFFSET))(this, prototypeKey);
		}

		::NPCCrowd::Animation::NPCCrowdVerticalAtlas* GetOrCreateAtlas(::NPCCrowd::Animation::NPCCrowdAnimationData* data)
		{
			return ((::NPCCrowd::Animation::NPCCrowdVerticalAtlas*(*)(::PVOID, ::NPCCrowd::Animation::NPCCrowdAnimationData*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDCLIPTEXTUREMANAGER_GETORCREATEATLAS_OFFSET))(this, data);
		}

		::NPCCrowd::Animation::NPCCrowdVerticalAtlas* GetAtlasByPrototype(::System::Int32 prototypeKey)
		{
			return ((::NPCCrowd::Animation::NPCCrowdVerticalAtlas*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDCLIPTEXTUREMANAGER_GETATLASBYPROTOTYPE_OFFSET))(this, prototypeKey);
		}

		::System::Void Tick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDCLIPTEXTUREMANAGER_TICK_OFFSET))(this);
		}

		::System::Void TryCompactAtlas(::System::Int32 prototypeKey)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDCLIPTEXTUREMANAGER_TRYCOMPACTATLAS_OFFSET))(this, prototypeKey);
		}

		::System::Void ForceCompactAllAtlases()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDCLIPTEXTUREMANAGER_FORCECOMPACTALLATLASES_OFFSET))(this);
		}

		::System::Void ReleaseAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDCLIPTEXTUREMANAGER_RELEASEALL_OFFSET))(this);
		}

		::System::Boolean LoadClipToAtlas(::NPCCrowd::Animation::NPCCrowdAnimationData* data, ::NPCCrowd::Animation::ClipTextureEntry* entry)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::Animation::NPCCrowdAnimationData*, ::NPCCrowd::Animation::ClipTextureEntry*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDCLIPTEXTUREMANAGER_LOADCLIPTOATLAS_OFFSET))(this, data, entry);
		}

		::System::Boolean ValidateClipTextureForAtlas(::NPCCrowd::Animation::NPCCrowdAnimationData* data, ::NPCCrowd::Animation::ClipTextureEntry* entry, ::UnityEngine::Texture2D* clipTexture)
		{
			return ((::System::Boolean(*)(::PVOID, ::NPCCrowd::Animation::NPCCrowdAnimationData*, ::NPCCrowd::Animation::ClipTextureEntry*, ::UnityEngine::Texture2D*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDCLIPTEXTUREMANAGER_VALIDATECLIPTEXTUREFORATLAS_OFFSET))(this, data, entry, clipTexture);
		}

		::System::Void UnloadClipFromAtlas(::NPCCrowd::Animation::NPCCrowdAnimationData* data, ::NPCCrowd::Animation::ClipTextureEntry* entry)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::NPCCrowdAnimationData*, ::NPCCrowd::Animation::ClipTextureEntry*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDCLIPTEXTUREMANAGER_UNLOADCLIPFROMATLAS_OFFSET))(this, data, entry);
		}

		::System::Void AddToPendingUnload(::NPCCrowd::Animation::NPCCrowdAnimationData* data, ::NPCCrowd::Animation::ClipTextureEntry* entry)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::NPCCrowdAnimationData*, ::NPCCrowd::Animation::ClipTextureEntry*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDCLIPTEXTUREMANAGER_ADDTOPENDINGUNLOAD_OFFSET))(this, data, entry);
		}

		::System::Void RemoveFromPendingUnload(::NPCCrowd::Animation::NPCCrowdAnimationData* data, ::NPCCrowd::Animation::ClipTextureEntry* entry)
		{
			return ((::System::Void(*)(::PVOID, ::NPCCrowd::Animation::NPCCrowdAnimationData*, ::NPCCrowd::Animation::ClipTextureEntry*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDCLIPTEXTUREMANAGER_REMOVEFROMPENDINGUNLOAD_OFFSET))(this, data, entry);
		}

		::System::Collections::Generic::List_1<::NPCCrowd::Animation::NPCCrowdClipTextureManager_AtlasStats>* GetAllAtlasStats()
		{
			return ((::System::Collections::Generic::List_1<::NPCCrowd::Animation::NPCCrowdClipTextureManager_AtlasStats>*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDCLIPTEXTUREMANAGER_GETALLATLASSTATS_OFFSET))(this);
		}

		::System::String* GetDebugInfo()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDCLIPTEXTUREMANAGER_GETDEBUGINFO_OFFSET))(this);
		}
	};
}
