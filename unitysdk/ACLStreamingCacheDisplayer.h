#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/ACLStreamingCacheDisplayer_RowRects.h"
#include "unitysdk/ACLStreamingCacheDisplayer_SortBy.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Rect.h"
#include "unitysdk/UnityEngine/StreamInClipInfo.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Text { class StringBuilder; }
namespace UnityEngine { class GUIStyle; }
namespace UnityEngine { class Texture2D; }

#define ACLSTREAMINGCACHEDISPLAYER_APPLYSORTINPLACE_OFFSET UNITYSDK_OFFSET(0x123CD560)
#define ACLSTREAMINGCACHEDISPLAYER_BUILDLAYOUT_OFFSET UNITYSDK_OFFSET(0x123C9900)
#define ACLSTREAMINGCACHEDISPLAYER_CLAMPPAGE_OFFSET UNITYSDK_OFFSET(0x123CA890)
#define ACLSTREAMINGCACHEDISPLAYER_COMPUTESCALE_OFFSET UNITYSDK_OFFSET(0x123C9880)
#define ACLSTREAMINGCACHEDISPLAYER_DRAWLIST_OFFSET UNITYSDK_OFFSET(0x123CCAE0)
#define ACLSTREAMINGCACHEDISPLAYER_DRAWPAGER_OFFSET UNITYSDK_OFFSET(0x123CD050)
#define ACLSTREAMINGCACHEDISPLAYER_DRAWPROGRESS_OFFSET UNITYSDK_OFFSET(0x123CC380)
#define ACLSTREAMINGCACHEDISPLAYER_DRAWTEX_OFFSET UNITYSDK_OFFSET(0x123CC030)
#define ACLSTREAMINGCACHEDISPLAYER_ENSURESTYLES_OFFSET UNITYSDK_OFFSET(0x123CB340)
#define ACLSTREAMINGCACHEDISPLAYER_FORMATBYTES_OFFSET UNITYSDK_OFFSET(0x123CC830)
#define ACLSTREAMINGCACHEDISPLAYER_GETCLIPS_OFFSET UNITYSDK_OFFSET(0x123CC9F0)
#define ACLSTREAMINGCACHEDISPLAYER_MINIBUTTON_OFFSET UNITYSDK_OFFSET(0x123CC710)
#define ACLSTREAMINGCACHEDISPLAYER_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x123CA470)
#define ACLSTREAMINGCACHEDISPLAYER_ONENABLE_OFFSET UNITYSDK_OFFSET(0x123C9610)
#define ACLSTREAMINGCACHEDISPLAYER_ONGUI_OFFSET UNITYSDK_OFFSET(0x123CA960)
#define ACLSTREAMINGCACHEDISPLAYER_SORTLABEL_OFFSET UNITYSDK_OFFSET(0x123CCA30)
#define ACLSTREAMINGCACHEDISPLAYER_UPDATE_OFFSET UNITYSDK_OFFSET(0x123CA660)
#define ACLSTREAMINGCACHEDISPLAYER__APPLYSORTINPLACE_B__76_0_OFFSET UNITYSDK_OFFSET(0x123CE310)
#define ACLSTREAMINGCACHEDISPLAYER__CCTOR_OFFSET UNITYSDK_OFFSET(0x123CE300)
#define ACLSTREAMINGCACHEDISPLAYER__CTOR_OFFSET UNITYSDK_OFFSET(0x123CE120)

inline static constexpr unsigned int ACLStreamingCacheDisplayer_TypeDefinitionIndex = 95363;

class ACLStreamingCacheDisplayer : public ::UnityEngine::MonoBehaviour
{
public:
	static ::UnityEngine::Color* StaticGet_colBtnBg()
	{
		return (::UnityEngine::Color*)Il2CppClass::FromTypeDefinitionIndex(ACLStreamingCacheDisplayer_TypeDefinitionIndex)->GetStaticField(0x13550);
	}
	::System::Single baseUiScale; // 0x18
	::System::Single panelWidthRatio; // 0x1C
	::System::Single panelHeightRatio; // 0x20
	::System::Collections::Generic::List_1<::UnityEngine::StreamInClipInfo>* clips; // 0x28
	::System::Text::StringBuilder* sb; // 0x30
	::UnityEngine::Texture2D* tex1x1; // 0x38
	::System::Boolean stylesReady; // 0x40
	::System::Int32 cachedW; // 0x44
	::System::Int32 cachedH; // 0x48
	::System::Single uiScale; // 0x4C
	::System::UInt64 usedBytes; // 0x50
	::System::UInt64 databaseTotalSize; // 0x58
	::System::UInt64 cachedMaxEpoch; // 0x60
	::UnityEngine::Rect panelR; // 0x68
	::UnityEngine::Rect headerR; // 0x78
	::UnityEngine::Rect topRowR; // 0x88
	::UnityEngine::Rect toggleR; // 0x98
	::UnityEngine::Rect progressR; // 0xA8
	::UnityEngine::Rect minusR; // 0xB8
	::UnityEngine::Rect plusR; // 0xC8
	::UnityEngine::Rect closeR; // 0xD8
	::UnityEngine::Rect statsR; // 0xE8
	::UnityEngine::Rect colHeaderR; // 0xF8
	::UnityEngine::Rect headerClickR; // 0x108
	::UnityEngine::Rect hdrNameLocal; // 0x118
	::UnityEngine::Rect hdrSizeLocal; // 0x128
	::UnityEngine::Rect hdrEpochLocal; // 0x138
	::UnityEngine::Rect listR; // 0x148
	::UnityEngine::Rect pagerR; // 0x158
	::UnityEngine::Rect pagerPrevR; // 0x168
	::UnityEngine::Rect pagerLabelR; // 0x178
	::UnityEngine::Rect pagerNextR; // 0x188
	::System::Single listRowH; // 0x198
	::System::Single colPadInner; // 0x19C
	::System::Single colNameX; // 0x1A0
	::System::Single colSizeX; // 0x1A4
	::System::Single colPctX; // 0x1A8
	::System::Single colNameW; // 0x1AC
	::System::Single colSizeW; // 0x1B0
	::System::Single colPctW; // 0x1B4
	::System::Single epochPadPx; // 0x1B8
	::System::Single epochNumOffsetPx; // 0x1BC
	::System::Single sizeTextNudgePx; // 0x1C0
	::Il2CppArray<::ACLStreamingCacheDisplayer_RowRects>* rowRects; // 0x1C8
	::System::Int32 rowsPerPage; // 0x1D0
	::System::Int32 pageIndex; // 0x1D4
	::UnityEngine::Color colPanelBg; // 0x1D8
	::UnityEngine::Color colBand; // 0x1E8
	::UnityEngine::Color colBarBg; // 0x1F8
	::UnityEngine::Color colBlueBar; // 0x208
	::UnityEngine::Color colGreen; // 0x218
	::UnityEngine::Color colRed; // 0x228
	::UnityEngine::Color colHeaderBg; // 0x238
	::UnityEngine::GUIStyle* styleHeader; // 0x248
	::UnityEngine::GUIStyle* styleLabel; // 0x250
	::UnityEngine::GUIStyle* styleRow; // 0x258
	::UnityEngine::GUIStyle* styleRowRight; // 0x260
	::UnityEngine::GUIStyle* styleSmall; // 0x268
	::UnityEngine::GUIStyle* styleSmallLeft; // 0x270
	::UnityEngine::GUIStyle* styleToggle; // 0x278
	::UnityEngine::GUIStyle* styleColHeader; // 0x280
	::UnityEngine::GUIStyle* styleColHeaderRight; // 0x288
	::ACLStreamingCacheDisplayer_SortBy sortBy; // 0x290
	::System::Boolean sortAsc; // 0x294
	::System::Boolean sortDirty; // 0x295

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACLSTREAMINGCACHEDISPLAYER__CTOR_OFFSET))(this);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + ACLSTREAMINGCACHEDISPLAYER__CCTOR_OFFSET))();
	}

	::System::Void OnEnable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACLSTREAMINGCACHEDISPLAYER_ONENABLE_OFFSET))(this);
	}

	::System::Void OnDisable()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACLSTREAMINGCACHEDISPLAYER_ONDISABLE_OFFSET))(this);
	}

	::System::Void Update()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACLSTREAMINGCACHEDISPLAYER_UPDATE_OFFSET))(this);
	}

	::System::Void OnGUI()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACLSTREAMINGCACHEDISPLAYER_ONGUI_OFFSET))(this);
	}

	::System::Void BuildLayout()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACLSTREAMINGCACHEDISPLAYER_BUILDLAYOUT_OFFSET))(this);
	}

	::System::Void ClampPage()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACLSTREAMINGCACHEDISPLAYER_CLAMPPAGE_OFFSET))(this);
	}

	::System::Single ComputeScale()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + ACLSTREAMINGCACHEDISPLAYER_COMPUTESCALE_OFFSET))(this);
	}

	::System::Void DrawProgress(::UnityEngine::Rect r, ::System::UInt64 used, ::System::UInt64 total)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect, ::System::UInt64, ::System::UInt64))((::PBYTE)hIl2Cpp + ACLSTREAMINGCACHEDISPLAYER_DRAWPROGRESS_OFFSET))(this, r, used, total);
	}

	::System::Void ApplySortInPlace(::System::Collections::Generic::List_1<::UnityEngine::StreamInClipInfo>* list)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::UnityEngine::StreamInClipInfo>*))((::PBYTE)hIl2Cpp + ACLSTREAMINGCACHEDISPLAYER_APPLYSORTINPLACE_OFFSET))(this, list);
	}

	::System::String* SortLabel(::System::String* baseName, ::ACLStreamingCacheDisplayer_SortBy col)
	{
		return ((::System::String*(*)(::PVOID, ::System::String*, ::ACLStreamingCacheDisplayer_SortBy))((::PBYTE)hIl2Cpp + ACLSTREAMINGCACHEDISPLAYER_SORTLABEL_OFFSET))(this, baseName, col);
	}

	::System::Void DrawList()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACLSTREAMINGCACHEDISPLAYER_DRAWLIST_OFFSET))(this);
	}

	::System::Void DrawPager()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACLSTREAMINGCACHEDISPLAYER_DRAWPAGER_OFFSET))(this);
	}

	::System::Boolean MiniButton(::UnityEngine::Rect r, ::System::String* label)
	{
		return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Rect, ::System::String*))((::PBYTE)hIl2Cpp + ACLSTREAMINGCACHEDISPLAYER_MINIBUTTON_OFFSET))(this, r, label);
	}

	::System::Void EnsureStyles()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + ACLSTREAMINGCACHEDISPLAYER_ENSURESTYLES_OFFSET))(this);
	}

	::System::Void DrawTex(::UnityEngine::Rect r, ::UnityEngine::Color c)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Rect, ::UnityEngine::Color))((::PBYTE)hIl2Cpp + ACLSTREAMINGCACHEDISPLAYER_DRAWTEX_OFFSET))(this, r, c);
	}

	static ::System::String* FormatBytes(::System::UInt64 bytes)
	{
		return ((::System::String*(*)(::System::UInt64))((::PBYTE)hIl2Cpp + ACLSTREAMINGCACHEDISPLAYER_FORMATBYTES_OFFSET))(bytes);
	}

	::System::Collections::Generic::List_1<::UnityEngine::StreamInClipInfo>* GetClips()
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::StreamInClipInfo>*(*)(::PVOID))((::PBYTE)hIl2Cpp + ACLSTREAMINGCACHEDISPLAYER_GETCLIPS_OFFSET))(this);
	}

	::System::Int32 _ApplySortInPlace_b__76_0(::UnityEngine::StreamInClipInfo a, ::UnityEngine::StreamInClipInfo b)
	{
		return ((::System::Int32(*)(::PVOID, ::UnityEngine::StreamInClipInfo, ::UnityEngine::StreamInClipInfo))((::PBYTE)hIl2Cpp + ACLSTREAMINGCACHEDISPLAYER__APPLYSORTINPLACE_B__76_0_OFFSET))(this, a, b);
	}
};
