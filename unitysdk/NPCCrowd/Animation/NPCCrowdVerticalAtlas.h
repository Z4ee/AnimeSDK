#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NPCCrowd/Animation/NPCCrowdVerticalAtlas_FreeRegion.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_2.h"
#include "unitysdk/System/ValueTuple_3.h"

namespace NPCCrowd::Animation { class NPCCrowdVerticalAtlas_ColumnData; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RenderTexture; }
namespace UnityEngine { class Texture2D; }

#define NPCCROWD_ANIMATION_NPCCROWDVERTICALATLAS_ALLOCATE_OFFSET UNITYSDK_OFFSET(0x10A08760)
#define NPCCROWD_ANIMATION_NPCCROWDVERTICALATLAS_COPYTOATLAS_OFFSET UNITYSDK_OFFSET(0x10A096C0)
#define NPCCROWD_ANIMATION_NPCCROWDVERTICALATLAS_CREATEATLASTEXTURE_OFFSET UNITYSDK_OFFSET(0x10A08280)
#define NPCCROWD_ANIMATION_NPCCROWDVERTICALATLAS_FREE_OFFSET UNITYSDK_OFFSET(0x10A090D0)
#define NPCCROWD_ANIMATION_NPCCROWDVERTICALATLAS_GETTOTALALLOCATEDROWS_OFFSET UNITYSDK_OFFSET(0x10A0A550)
#define NPCCROWD_ANIMATION_NPCCROWDVERTICALATLAS_GETUSEDHEIGHT_OFFSET UNITYSDK_OFFSET(0x10A0A610)
#define NPCCROWD_ANIMATION_NPCCROWDVERTICALATLAS_GETWASTERATIO_OFFSET UNITYSDK_OFFSET(0x10A0A660)
#define NPCCROWD_ANIMATION_NPCCROWDVERTICALATLAS_GET_ALLOCATEDHEIGHT_OFFSET UNITYSDK_OFFSET(0x10A07EC0)
#define NPCCROWD_ANIMATION_NPCCROWDVERTICALATLAS_GET_ATLASTEXTURE_OFFSET UNITYSDK_OFFSET(0x10A07E00)
#define NPCCROWD_ANIMATION_NPCCROWDVERTICALATLAS_GET_BISVALID_OFFSET UNITYSDK_OFFSET(0x10A07FD0)
#define NPCCROWD_ANIMATION_NPCCROWDVERTICALATLAS_GET_COLUMNCOUNT_OFFSET UNITYSDK_OFFSET(0x10A07E40)
#define NPCCROWD_ANIMATION_NPCCROWDVERTICALATLAS_GET_COLWIDTH_OFFSET UNITYSDK_OFFSET(0x10A07E20)
#define NPCCROWD_ANIMATION_NPCCROWDVERTICALATLAS_GET_CURRENTTEXTUREHEIGHT_OFFSET UNITYSDK_OFFSET(0x10A07FB0)
#define NPCCROWD_ANIMATION_NPCCROWDVERTICALATLAS_GET_WIDTH_OFFSET UNITYSDK_OFFSET(0x10A07E60)
#define NPCCROWD_ANIMATION_NPCCROWDVERTICALATLAS_REBUILDCOMPACT_OFFSET UNITYSDK_OFFSET(0x10A09A00)
#define NPCCROWD_ANIMATION_NPCCROWDVERTICALATLAS_RELEASE_OFFSET UNITYSDK_OFFSET(0x10A08530)
#define NPCCROWD_ANIMATION_NPCCROWDVERTICALATLAS_SET_ATLASTEXTURE_OFFSET UNITYSDK_OFFSET(0x10A07E10)
#define NPCCROWD_ANIMATION_NPCCROWDVERTICALATLAS_SET_COLWIDTH_OFFSET UNITYSDK_OFFSET(0x10A07E30)
#define NPCCROWD_ANIMATION_NPCCROWDVERTICALATLAS_SET_CURRENTTEXTUREHEIGHT_OFFSET UNITYSDK_OFFSET(0x10A07FC0)
#define NPCCROWD_ANIMATION_NPCCROWDVERTICALATLAS_TRYADDCOLUMN_OFFSET UNITYSDK_OFFSET(0x10A08BD0)
#define NPCCROWD_ANIMATION_NPCCROWDVERTICALATLAS_TRYALLOCATEFROMFREELIST_OFFSET UNITYSDK_OFFSET(0x10A088C0)
#define NPCCROWD_ANIMATION_NPCCROWDVERTICALATLAS_TRYALLOCATEFROMTAIL_OFFSET UNITYSDK_OFFSET(0x10A08AF0)
#define NPCCROWD_ANIMATION_NPCCROWDVERTICALATLAS_TRYCOMPACTTAIL_OFFSET UNITYSDK_OFFSET(0x10A095B0)
#define NPCCROWD_ANIMATION_NPCCROWDVERTICALATLAS_TRYGROWATLAS_OFFSET UNITYSDK_OFFSET(0x10A0A6D0)
#define NPCCROWD_ANIMATION_NPCCROWDVERTICALATLAS_TRYMERGEWITHNEXT_OFFSET UNITYSDK_OFFSET(0x10A09320)
#define NPCCROWD_ANIMATION_NPCCROWDVERTICALATLAS_TRYMERGEWITHPREV_OFFSET UNITYSDK_OFFSET(0x10A09470)
#define NPCCROWD_ANIMATION_NPCCROWDVERTICALATLAS__CCTOR_OFFSET UNITYSDK_OFFSET(0x10A0AB60)
#define NPCCROWD_ANIMATION_NPCCROWDVERTICALATLAS__CTOR_OFFSET UNITYSDK_OFFSET(0x10A08150)

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int NPCCrowdVerticalAtlas_TypeDefinitionIndex = 58126;

	class NPCCrowdVerticalAtlas : public ::System::Object
	{
	public:
		static ::System::Int32* StaticGet_MAX_TEXTURE_SIZE()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NPCCrowdVerticalAtlas_TypeDefinitionIndex)->GetStaticField(0x104E0);
		}
		// static const ::System::Int32 INITIAL_HEIGHT = 0x200; // 0x0
		// static const ::System::Int32 HEIGHT_GROW_STEP = 0x100; // 0x0
		::UnityEngine::RenderTexture* _atlasTexture_k__BackingField; // 0x10
		::System::Collections::Generic::List_1<::NPCCrowd::Animation::NPCCrowdVerticalAtlas_ColumnData*>* _columns; // 0x18
		::System::Int32 _currentTextureHeight_k__BackingField; // 0x20
		::System::Int32 _colWidth_k__BackingField; // 0x24

		::System::Void _ctor(::System::Int32 singleColumnWidth)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDVERTICALATLAS__CTOR_OFFSET))(this, singleColumnWidth);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDVERTICALATLAS__CCTOR_OFFSET))();
		}

		::UnityEngine::RenderTexture* get_atlasTexture()
		{
			return ((::UnityEngine::RenderTexture*(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDVERTICALATLAS_GET_ATLASTEXTURE_OFFSET))(this);
		}

		::System::Void set_atlasTexture(::UnityEngine::RenderTexture* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::RenderTexture*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDVERTICALATLAS_SET_ATLASTEXTURE_OFFSET))(this, value);
		}

		::System::Int32 get_colWidth()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDVERTICALATLAS_GET_COLWIDTH_OFFSET))(this);
		}

		::System::Void set_colWidth(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDVERTICALATLAS_SET_COLWIDTH_OFFSET))(this, value);
		}

		::System::Int32 get_columnCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDVERTICALATLAS_GET_COLUMNCOUNT_OFFSET))(this);
		}

		::System::Int32 get_width()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDVERTICALATLAS_GET_WIDTH_OFFSET))(this);
		}

		::System::Int32 get_allocatedHeight()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDVERTICALATLAS_GET_ALLOCATEDHEIGHT_OFFSET))(this);
		}

		::System::Int32 get_currentTextureHeight()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDVERTICALATLAS_GET_CURRENTTEXTUREHEIGHT_OFFSET))(this);
		}

		::System::Void set_currentTextureHeight(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDVERTICALATLAS_SET_CURRENTTEXTUREHEIGHT_OFFSET))(this, value);
		}

		::System::Boolean get_bIsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDVERTICALATLAS_GET_BISVALID_OFFSET))(this);
		}

		::System::Void Release()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDVERTICALATLAS_RELEASE_OFFSET))(this);
		}

		::System::ValueTuple_2<::System::Int32, ::System::Int32> Allocate(::System::Int32 clipHeight)
		{
			return ((::System::ValueTuple_2<::System::Int32, ::System::Int32>(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDVERTICALATLAS_ALLOCATE_OFFSET))(this, clipHeight);
		}

		::System::Void Free(::System::Int32 columnIndex, ::System::Int32 offsetY, ::System::Int32 height)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDVERTICALATLAS_FREE_OFFSET))(this, columnIndex, offsetY, height);
		}

		::System::Void CopyToAtlas(::UnityEngine::Texture2D* source, ::System::Int32 columnIndex, ::System::Int32 offsetY)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Texture2D*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDVERTICALATLAS_COPYTOATLAS_OFFSET))(this, source, columnIndex, offsetY);
		}

		::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Int32>>* RebuildCompact(::System::Collections::Generic::List_1<::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Int32>>* activeClips)
		{
			return ((::Il2CppArray<::System::ValueTuple_2<::System::Int32, ::System::Int32>>*(*)(::PVOID, ::System::Collections::Generic::List_1<::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Int32>>*))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDVERTICALATLAS_REBUILDCOMPACT_OFFSET))(this, activeClips);
		}

		::System::Int32 GetTotalAllocatedRows()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDVERTICALATLAS_GETTOTALALLOCATEDROWS_OFFSET))(this);
		}

		::System::Int32 GetUsedHeight(::System::Int32 totalActiveClipHeight)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDVERTICALATLAS_GETUSEDHEIGHT_OFFSET))(this, totalActiveClipHeight);
		}

		::System::Single GetWasteRatio(::System::Int32 usedRows)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDVERTICALATLAS_GETWASTERATIO_OFFSET))(this, usedRows);
		}

		::System::Void CreateAtlasTexture(::System::Int32 textureWidth, ::System::Int32 textureHeight)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDVERTICALATLAS_CREATEATLASTEXTURE_OFFSET))(this, textureWidth, textureHeight);
		}

		::System::Int32 TryAllocateFromFreeList(::System::Int32 colIndex, ::System::Int32 clipHeight)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDVERTICALATLAS_TRYALLOCATEFROMFREELIST_OFFSET))(this, colIndex, clipHeight);
		}

		::System::Int32 TryAllocateFromTail(::System::Int32 colIndex, ::System::Int32 clipHeight, ::System::Boolean allowGrow)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDVERTICALATLAS_TRYALLOCATEFROMTAIL_OFFSET))(this, colIndex, clipHeight, allowGrow);
		}

		::System::Boolean TryGrowAtlas(::System::Int32 requiredHeight)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDVERTICALATLAS_TRYGROWATLAS_OFFSET))(this, requiredHeight);
		}

		::System::Boolean TryAddColumn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDVERTICALATLAS_TRYADDCOLUMN_OFFSET))(this);
		}

		static ::System::Void TryMergeWithNext(::System::Collections::Generic::List_1<::NPCCrowd::Animation::NPCCrowdVerticalAtlas_FreeRegion>* freeRegions, ::System::Int32 index)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::NPCCrowd::Animation::NPCCrowdVerticalAtlas_FreeRegion>*, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDVERTICALATLAS_TRYMERGEWITHNEXT_OFFSET))(freeRegions, index);
		}

		static ::System::Void TryMergeWithPrev(::System::Collections::Generic::List_1<::NPCCrowd::Animation::NPCCrowdVerticalAtlas_FreeRegion>* freeRegions, ::System::Int32 index)
		{
			return ((::System::Void(*)(::System::Collections::Generic::List_1<::NPCCrowd::Animation::NPCCrowdVerticalAtlas_FreeRegion>*, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDVERTICALATLAS_TRYMERGEWITHPREV_OFFSET))(freeRegions, index);
		}

		::System::Void TryCompactTail(::System::Int32 colIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + NPCCROWD_ANIMATION_NPCCROWDVERTICALATLAS_TRYCOMPACTTAIL_OFFSET))(this, colIndex);
		}
	};
}
