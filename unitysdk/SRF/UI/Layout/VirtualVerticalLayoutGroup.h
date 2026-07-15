#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/UI/LayoutGroup.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace SRF { template <typename T> class SRList_1; }
namespace SRF::UI { class StyleSheet; }
namespace SRF::UI::Layout { class VirtualVerticalLayoutGroup_Row; }
namespace SRF::UI::Layout { class VirtualVerticalLayoutGroup_SelectedItemChangedEvent; }
namespace System { class Object; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::EventSystems { class PointerEventData; }
namespace UnityEngine::UI { class ScrollRect; }

#define SRF_UI_LAYOUT_VIRTUALVERTICALLAYOUTGROUP_ADDITEM_OFFSET UNITYSDK_OFFSET(0x1CEDB810)
#define SRF_UI_LAYOUT_VIRTUALVERTICALLAYOUTGROUP_AWAKE_OFFSET UNITYSDK_OFFSET(0x1CEDA280)
#define SRF_UI_LAYOUT_VIRTUALVERTICALLAYOUTGROUP_CALCULATELAYOUTINPUTVERTICAL_OFFSET UNITYSDK_OFFSET(0x1CEDB330)
#define SRF_UI_LAYOUT_VIRTUALVERTICALLAYOUTGROUP_CLEARITEMS_OFFSET UNITYSDK_OFFSET(0x1CEDBC20)
#define SRF_UI_LAYOUT_VIRTUALVERTICALLAYOUTGROUP_CREATEROW_OFFSET UNITYSDK_OFFSET(0x1CEDBD30)
#define SRF_UI_LAYOUT_VIRTUALVERTICALLAYOUTGROUP_GETFIRSTNAVIOBJECT_OFFSET UNITYSDK_OFFSET(0x1CEDA0D0)
#define SRF_UI_LAYOUT_VIRTUALVERTICALLAYOUTGROUP_GETLASTNAVIOBJECT_OFFSET UNITYSDK_OFFSET(0x1CEDA1A0)
#define SRF_UI_LAYOUT_VIRTUALVERTICALLAYOUTGROUP_GETNEXTNAVIOBJECT_OFFSET UNITYSDK_OFFSET(0x1CEDA210)
#define SRF_UI_LAYOUT_VIRTUALVERTICALLAYOUTGROUP_GETROW_OFFSET UNITYSDK_OFFSET(0x1CEDB110)
#define SRF_UI_LAYOUT_VIRTUALVERTICALLAYOUTGROUP_GET_ALIGNBOTTOM_OFFSET UNITYSDK_OFFSET(0x1CEDAF30)
#define SRF_UI_LAYOUT_VIRTUALVERTICALLAYOUTGROUP_GET_ALIGNTOP_OFFSET UNITYSDK_OFFSET(0x1CEDAF40)
#define SRF_UI_LAYOUT_VIRTUALVERTICALLAYOUTGROUP_GET_ITEMHEIGHT_OFFSET UNITYSDK_OFFSET(0x1CED9C20)
#define SRF_UI_LAYOUT_VIRTUALVERTICALLAYOUTGROUP_GET_MINHEIGHT_OFFSET UNITYSDK_OFFSET(0x1CED9B80)
#define SRF_UI_LAYOUT_VIRTUALVERTICALLAYOUTGROUP_GET_SCROLLRECT_OFFSET UNITYSDK_OFFSET(0x1CEDA440)
#define SRF_UI_LAYOUT_VIRTUALVERTICALLAYOUTGROUP_GET_SELECTEDITEMCHANGED_OFFSET UNITYSDK_OFFSET(0x1CED96F0)
#define SRF_UI_LAYOUT_VIRTUALVERTICALLAYOUTGROUP_GET_SELECTEDITEM_OFFSET UNITYSDK_OFFSET(0x1CED9710)
#define SRF_UI_LAYOUT_VIRTUALVERTICALLAYOUTGROUP_INVALIDATEITEM_OFFSET UNITYSDK_OFFSET(0x1CED9870)
#define SRF_UI_LAYOUT_VIRTUALVERTICALLAYOUTGROUP_ONENABLE_OFFSET UNITYSDK_OFFSET(0x1CEDACD0)
#define SRF_UI_LAYOUT_VIRTUALVERTICALLAYOUTGROUP_ONPOINTERCLICK_OFFSET UNITYSDK_OFFSET(0x1CED9EF0)
#define SRF_UI_LAYOUT_VIRTUALVERTICALLAYOUTGROUP_ONSCROLLRECTVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x1CEDA480)
#define SRF_UI_LAYOUT_VIRTUALVERTICALLAYOUTGROUP_POPULATEROW_OFFSET UNITYSDK_OFFSET(0x1CEDBF40)
#define SRF_UI_LAYOUT_VIRTUALVERTICALLAYOUTGROUP_RECYCLEROW_OFFSET UNITYSDK_OFFSET(0x1CEDAF50)
#define SRF_UI_LAYOUT_VIRTUALVERTICALLAYOUTGROUP_REFRESHINDEXCACHE_OFFSET UNITYSDK_OFFSET(0x1CEDB020)
#define SRF_UI_LAYOUT_VIRTUALVERTICALLAYOUTGROUP_REMOVEITEM_OFFSET UNITYSDK_OFFSET(0x1CEDBAB0)
#define SRF_UI_LAYOUT_VIRTUALVERTICALLAYOUTGROUP_SCROLLUPDATE_OFFSET UNITYSDK_OFFSET(0x1CEDA580)
#define SRF_UI_LAYOUT_VIRTUALVERTICALLAYOUTGROUP_SETDIRTY_OFFSET UNITYSDK_OFFSET(0x1CED9B50)
#define SRF_UI_LAYOUT_VIRTUALVERTICALLAYOUTGROUP_SETLAYOUTHORIZONTAL_OFFSET UNITYSDK_OFFSET(0x1CEDB370)
#define SRF_UI_LAYOUT_VIRTUALVERTICALLAYOUTGROUP_SETLAYOUTVERTICAL_OFFSET UNITYSDK_OFFSET(0x1CEDB670)
#define SRF_UI_LAYOUT_VIRTUALVERTICALLAYOUTGROUP_SET_SELECTEDITEMCHANGED_OFFSET UNITYSDK_OFFSET(0x1CED9700)
#define SRF_UI_LAYOUT_VIRTUALVERTICALLAYOUTGROUP_SET_SELECTEDITEM_OFFSET UNITYSDK_OFFSET(0x1CED9720)
#define SRF_UI_LAYOUT_VIRTUALVERTICALLAYOUTGROUP_START_OFFSET UNITYSDK_OFFSET(0x1CEDA570)
#define SRF_UI_LAYOUT_VIRTUALVERTICALLAYOUTGROUP_UPDATE_OFFSET UNITYSDK_OFFSET(0x1CEDAD00)
#define SRF_UI_LAYOUT_VIRTUALVERTICALLAYOUTGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x1CEDC090)

namespace SRF::UI::Layout
{
	inline static constexpr unsigned int VirtualVerticalLayoutGroup_TypeDefinitionIndex = 33968;

	class VirtualVerticalLayoutGroup : public ::UnityEngine::UI::LayoutGroup
	{
	public:
		::SRF::SRList_1<::System::Object*>* _itemList; // 0x60
		::SRF::SRList_1<::System::Int32>* _visibleItemList; // 0x68
		::System::Boolean _isDirty; // 0x70
		::SRF::SRList_1<::SRF::UI::Layout::VirtualVerticalLayoutGroup_Row*>* _rowCache; // 0x78
		::UnityEngine::UI::ScrollRect* _scrollRect; // 0x80
		::System::Int32 _selectedIndex; // 0x88
		::System::Object* _selectedItem; // 0x90
		::SRF::UI::Layout::VirtualVerticalLayoutGroup_SelectedItemChangedEvent* _selectedItemChanged; // 0x98
		::System::Int32 _visibleItemCount; // 0xA0
		::SRF::SRList_1<::SRF::UI::Layout::VirtualVerticalLayoutGroup_Row*>* _visibleRows; // 0xA8
		::SRF::UI::StyleSheet* AltRowStyleSheet; // 0xB0
		::System::Boolean EnableSelection; // 0xB8
		::UnityEngine::RectTransform* ItemPrefab; // 0xC0
		::System::Int32 RowPadding; // 0xC8
		::SRF::UI::StyleSheet* RowStyleSheet; // 0xD0
		::SRF::UI::StyleSheet* SelectedRowStyleSheet; // 0xD8
		::System::Single Spacing; // 0xE0
		::System::Boolean StickToBottom; // 0xE4
		::System::Single _itemHeight; // 0xE8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_LAYOUT_VIRTUALVERTICALLAYOUTGROUP__CTOR_OFFSET))(this);
		}

		::SRF::UI::Layout::VirtualVerticalLayoutGroup_SelectedItemChangedEvent* get_SelectedItemChanged()
		{
			return ((::SRF::UI::Layout::VirtualVerticalLayoutGroup_SelectedItemChangedEvent*(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_LAYOUT_VIRTUALVERTICALLAYOUTGROUP_GET_SELECTEDITEMCHANGED_OFFSET))(this);
		}

		::System::Void set_SelectedItemChanged(::SRF::UI::Layout::VirtualVerticalLayoutGroup_SelectedItemChangedEvent* a1)
		{
			return ((::System::Void(*)(::PVOID, ::SRF::UI::Layout::VirtualVerticalLayoutGroup_SelectedItemChangedEvent*))((::PBYTE)hIl2Cpp + SRF_UI_LAYOUT_VIRTUALVERTICALLAYOUTGROUP_SET_SELECTEDITEMCHANGED_OFFSET))(this, a1);
		}

		::System::Object* get_SelectedItem()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_LAYOUT_VIRTUALVERTICALLAYOUTGROUP_GET_SELECTEDITEM_OFFSET))(this);
		}

		::System::Void set_SelectedItem(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SRF_UI_LAYOUT_VIRTUALVERTICALLAYOUTGROUP_SET_SELECTEDITEM_OFFSET))(this, a1);
		}

		::System::Single get_minHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_LAYOUT_VIRTUALVERTICALLAYOUTGROUP_GET_MINHEIGHT_OFFSET))(this);
		}

		::System::Void OnPointerClick(::UnityEngine::EventSystems::PointerEventData* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + SRF_UI_LAYOUT_VIRTUALVERTICALLAYOUTGROUP_ONPOINTERCLICK_OFFSET))(this, a1);
		}

		::System::Object* GetFirstNaviObject()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_LAYOUT_VIRTUALVERTICALLAYOUTGROUP_GETFIRSTNAVIOBJECT_OFFSET))(this);
		}

		::System::Object* GetLastNaviObject()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_LAYOUT_VIRTUALVERTICALLAYOUTGROUP_GETLASTNAVIOBJECT_OFFSET))(this);
		}

		::System::Object* GetNextNaviObject()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_LAYOUT_VIRTUALVERTICALLAYOUTGROUP_GETNEXTNAVIOBJECT_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_LAYOUT_VIRTUALVERTICALLAYOUTGROUP_AWAKE_OFFSET))(this);
		}

		::System::Void OnScrollRectValueChanged(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + SRF_UI_LAYOUT_VIRTUALVERTICALLAYOUTGROUP_ONSCROLLRECTVALUECHANGED_OFFSET))(this, a1);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_LAYOUT_VIRTUALVERTICALLAYOUTGROUP_START_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_LAYOUT_VIRTUALVERTICALLAYOUTGROUP_ONENABLE_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_LAYOUT_VIRTUALVERTICALLAYOUTGROUP_UPDATE_OFFSET))(this);
		}

		::System::Void InvalidateItem(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SRF_UI_LAYOUT_VIRTUALVERTICALLAYOUTGROUP_INVALIDATEITEM_OFFSET))(this, a1);
		}

		::System::Void RefreshIndexCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_LAYOUT_VIRTUALVERTICALLAYOUTGROUP_REFRESHINDEXCACHE_OFFSET))(this);
		}

		::System::Void ScrollUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_LAYOUT_VIRTUALVERTICALLAYOUTGROUP_SCROLLUPDATE_OFFSET))(this);
		}

		::System::Void CalculateLayoutInputVertical()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_LAYOUT_VIRTUALVERTICALLAYOUTGROUP_CALCULATELAYOUTINPUTVERTICAL_OFFSET))(this);
		}

		::System::Void SetLayoutHorizontal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_LAYOUT_VIRTUALVERTICALLAYOUTGROUP_SETLAYOUTHORIZONTAL_OFFSET))(this);
		}

		::System::Void SetLayoutVertical()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_LAYOUT_VIRTUALVERTICALLAYOUTGROUP_SETLAYOUTVERTICAL_OFFSET))(this);
		}

		::System::Void SetDirty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_LAYOUT_VIRTUALVERTICALLAYOUTGROUP_SETDIRTY_OFFSET))(this);
		}

		::System::Void AddItem(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SRF_UI_LAYOUT_VIRTUALVERTICALLAYOUTGROUP_ADDITEM_OFFSET))(this, a1);
		}

		::System::Void RemoveItem(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SRF_UI_LAYOUT_VIRTUALVERTICALLAYOUTGROUP_REMOVEITEM_OFFSET))(this, a1);
		}

		::System::Void ClearItems()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_LAYOUT_VIRTUALVERTICALLAYOUTGROUP_CLEARITEMS_OFFSET))(this);
		}

		::UnityEngine::UI::ScrollRect* get_ScrollRect()
		{
			return ((::UnityEngine::UI::ScrollRect*(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_LAYOUT_VIRTUALVERTICALLAYOUTGROUP_GET_SCROLLRECT_OFFSET))(this);
		}

		::System::Boolean get_AlignBottom()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_LAYOUT_VIRTUALVERTICALLAYOUTGROUP_GET_ALIGNBOTTOM_OFFSET))(this);
		}

		::System::Boolean get_AlignTop()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_LAYOUT_VIRTUALVERTICALLAYOUTGROUP_GET_ALIGNTOP_OFFSET))(this);
		}

		::System::Single get_ItemHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_LAYOUT_VIRTUALVERTICALLAYOUTGROUP_GET_ITEMHEIGHT_OFFSET))(this);
		}

		::SRF::UI::Layout::VirtualVerticalLayoutGroup_Row* GetRow(::System::Int32 a1)
		{
			return ((::SRF::UI::Layout::VirtualVerticalLayoutGroup_Row*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SRF_UI_LAYOUT_VIRTUALVERTICALLAYOUTGROUP_GETROW_OFFSET))(this, a1);
		}

		::System::Void RecycleRow(::SRF::UI::Layout::VirtualVerticalLayoutGroup_Row* a1)
		{
			return ((::System::Void(*)(::PVOID, ::SRF::UI::Layout::VirtualVerticalLayoutGroup_Row*))((::PBYTE)hIl2Cpp + SRF_UI_LAYOUT_VIRTUALVERTICALLAYOUTGROUP_RECYCLEROW_OFFSET))(this, a1);
		}

		::System::Void PopulateRow(::System::Int32 a1, ::SRF::UI::Layout::VirtualVerticalLayoutGroup_Row* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::SRF::UI::Layout::VirtualVerticalLayoutGroup_Row*))((::PBYTE)hIl2Cpp + SRF_UI_LAYOUT_VIRTUALVERTICALLAYOUTGROUP_POPULATEROW_OFFSET))(this, a1, a2);
		}

		::SRF::UI::Layout::VirtualVerticalLayoutGroup_Row* CreateRow()
		{
			return ((::SRF::UI::Layout::VirtualVerticalLayoutGroup_Row*(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_LAYOUT_VIRTUALVERTICALLAYOUTGROUP_CREATEROW_OFFSET))(this);
		}
	};
}
