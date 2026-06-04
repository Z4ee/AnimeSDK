#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace SuperScrollView { class LoopListView2; }

#define SUPERSCROLLVIEW_LOOPLISTVIEW2EXTRA_GET_ITEMMINOPACITY_OFFSET UNITYSDK_OFFSET(0xD0D32D0)
#define SUPERSCROLLVIEW_LOOPLISTVIEW2EXTRA_GET_ITEMMINSCALE_OFFSET UNITYSDK_OFFSET(0xD0D32F0)
#define SUPERSCROLLVIEW_LOOPLISTVIEW2EXTRA_GET_ITEMSCALEDISTANCE_OFFSET UNITYSDK_OFFSET(0xD0D3260)
#define SUPERSCROLLVIEW_LOOPLISTVIEW2EXTRA_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0xD0D33B0)
#define SUPERSCROLLVIEW_LOOPLISTVIEW2EXTRA_SET_ITEMMINOPACITY_OFFSET UNITYSDK_OFFSET(0xD0D32E0)
#define SUPERSCROLLVIEW_LOOPLISTVIEW2EXTRA_SET_ITEMMINSCALE_OFFSET UNITYSDK_OFFSET(0xD0D3300)
#define SUPERSCROLLVIEW_LOOPLISTVIEW2EXTRA_SET_ITEMSCALEDISTANCE_OFFSET UNITYSDK_OFFSET(0xD0D3270)
#define SUPERSCROLLVIEW_LOOPLISTVIEW2EXTRA_START_OFFSET UNITYSDK_OFFSET(0xD0D3310)
#define SUPERSCROLLVIEW_LOOPLISTVIEW2EXTRA__CTOR_OFFSET UNITYSDK_OFFSET(0xD0D35F0)

namespace SuperScrollView
{
	inline static constexpr unsigned int LoopListView2Extra_TypeDefinitionIndex = 44957;

	class LoopListView2Extra : public ::UnityEngine::MonoBehaviour
	{
	public:
		::SuperScrollView::LoopListView2* mLoopListView; // 0x18
		::System::Single mItemDistance; // 0x20
		::System::Single mMinScale; // 0x24
		::System::Single mMinOpacity; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEW2EXTRA__CTOR_OFFSET))(this);
		}

		::System::Single get_ItemScaleDistance()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEW2EXTRA_GET_ITEMSCALEDISTANCE_OFFSET))(this);
		}

		::System::Void set_ItemScaleDistance(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEW2EXTRA_SET_ITEMSCALEDISTANCE_OFFSET))(this, a1);
		}

		::System::Single get_ItemMinOpacity()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEW2EXTRA_GET_ITEMMINOPACITY_OFFSET))(this);
		}

		::System::Void set_ItemMinOpacity(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEW2EXTRA_SET_ITEMMINOPACITY_OFFSET))(this, a1);
		}

		::System::Single get_ItemMinScale()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEW2EXTRA_GET_ITEMMINSCALE_OFFSET))(this);
		}

		::System::Void set_ItemMinScale(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEW2EXTRA_SET_ITEMMINSCALE_OFFSET))(this, a1);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEW2EXTRA_START_OFFSET))(this);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SUPERSCROLLVIEW_LOOPLISTVIEW2EXTRA_LATEUPDATE_OFFSET))(this);
		}
	};
}
