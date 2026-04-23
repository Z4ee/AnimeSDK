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

#define SRF_UI_LAYOUT_VIRTUALVERTICALLAYOUTGROUP_ADDITEM_OFFSET UNITYSDK_OFFSET(0x19EAE020)
#define SRF_UI_LAYOUT_VIRTUALVERTICALLAYOUTGROUP_AWAKE_OFFSET UNITYSDK_OFFSET(0x19EACF20)
#define SRF_UI_LAYOUT_VIRTUALVERTICALLAYOUTGROUP_CALCULATELAYOUTINPUTVERTICAL_OFFSET UNITYSDK_OFFSET(0x19EADBE0)
#define SRF_UI_LAYOUT_VIRTUALVERTICALLAYOUTGROUP_CLEARITEMS_OFFSET UNITYSDK_OFFSET(0x19EAE3D0)
#define SRF_UI_LAYOUT_VIRTUALVERTICALLAYOUTGROUP_CREATEROW_OFFSET UNITYSDK_OFFSET(0x19EAE4C0)
#define SRF_UI_LAYOUT_VIRTUALVERTICALLAYOUTGROUP_GETFIRSTNAVIOBJECT_OFFSET UNITYSDK_OFFSET(0x19EACDE0)
#define SRF_UI_LAYOUT_VIRTUALVERTICALLAYOUTGROUP_GETLASTNAVIOBJECT_OFFSET UNITYSDK_OFFSET(0x19EACEA0)
#define SRF_UI_LAYOUT_VIRTUALVERTICALLAYOUTGROUP_GETNEXTNAVIOBJECT_OFFSET UNITYSDK_OFFSET(0x19EACEE0)
#define SRF_UI_LAYOUT_VIRTUALVERTICALLAYOUTGROUP_GETROW_OFFSET UNITYSDK_OFFSET(0x19EADA60)
#define SRF_UI_LAYOUT_VIRTUALVERTICALLAYOUTGROUP_GET_ALIGNBOTTOM_OFFSET UNITYSDK_OFFSET(0x19EAD900)
#define SRF_UI_LAYOUT_VIRTUALVERTICALLAYOUTGROUP_GET_ALIGNTOP_OFFSET UNITYSDK_OFFSET(0x19EAD910)
#define SRF_UI_LAYOUT_VIRTUALVERTICALLAYOUTGROUP_GET_ITEMHEIGHT_OFFSET UNITYSDK_OFFSET(0x19EAC9D0)
#define SRF_UI_LAYOUT_VIRTUALVERTICALLAYOUTGROUP_GET_MINHEIGHT_OFFSET UNITYSDK_OFFSET(0x19EAC930)
#define SRF_UI_LAYOUT_VIRTUALVERTICALLAYOUTGROUP_GET_SCROLLRECT_OFFSET UNITYSDK_OFFSET(0x19EAD0D0)
#define SRF_UI_LAYOUT_VIRTUALVERTICALLAYOUTGROUP_GET_SELECTEDITEMCHANGED_OFFSET UNITYSDK_OFFSET(0x19EAC620)
#define SRF_UI_LAYOUT_VIRTUALVERTICALLAYOUTGROUP_GET_SELECTEDITEM_OFFSET UNITYSDK_OFFSET(0x19EAC640)
#define SRF_UI_LAYOUT_VIRTUALVERTICALLAYOUTGROUP_INVALIDATEITEM_OFFSET UNITYSDK_OFFSET(0x19EAC7A0)
#define SRF_UI_LAYOUT_VIRTUALVERTICALLAYOUTGROUP_ONENABLE_OFFSET UNITYSDK_OFFSET(0x19EAD6A0)
#define SRF_UI_LAYOUT_VIRTUALVERTICALLAYOUTGROUP_ONPOINTERCLICK_OFFSET UNITYSDK_OFFSET(0x19EACC30)
#define SRF_UI_LAYOUT_VIRTUALVERTICALLAYOUTGROUP_ONSCROLLRECTVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x19EAD110)
#define SRF_UI_LAYOUT_VIRTUALVERTICALLAYOUTGROUP_POPULATEROW_OFFSET UNITYSDK_OFFSET(0x19EAE6D0)
#define SRF_UI_LAYOUT_VIRTUALVERTICALLAYOUTGROUP_RECYCLEROW_OFFSET UNITYSDK_OFFSET(0x19EAD920)
#define SRF_UI_LAYOUT_VIRTUALVERTICALLAYOUTGROUP_REFRESHINDEXCACHE_OFFSET UNITYSDK_OFFSET(0x19EAD980)
#define SRF_UI_LAYOUT_VIRTUALVERTICALLAYOUTGROUP_REMOVEITEM_OFFSET UNITYSDK_OFFSET(0x19EAE260)
#define SRF_UI_LAYOUT_VIRTUALVERTICALLAYOUTGROUP_SCROLLUPDATE_OFFSET UNITYSDK_OFFSET(0x19EAD1A0)
#define SRF_UI_LAYOUT_VIRTUALVERTICALLAYOUTGROUP_SETDIRTY_OFFSET UNITYSDK_OFFSET(0x19EAC900)
#define SRF_UI_LAYOUT_VIRTUALVERTICALLAYOUTGROUP_SETLAYOUTHORIZONTAL_OFFSET UNITYSDK_OFFSET(0x19EADC20)
#define SRF_UI_LAYOUT_VIRTUALVERTICALLAYOUTGROUP_SETLAYOUTVERTICAL_OFFSET UNITYSDK_OFFSET(0x19EADEC0)
#define SRF_UI_LAYOUT_VIRTUALVERTICALLAYOUTGROUP_SET_SELECTEDITEMCHANGED_OFFSET UNITYSDK_OFFSET(0x19EAC630)
#define SRF_UI_LAYOUT_VIRTUALVERTICALLAYOUTGROUP_SET_SELECTEDITEM_OFFSET UNITYSDK_OFFSET(0x19EAC650)
#define SRF_UI_LAYOUT_VIRTUALVERTICALLAYOUTGROUP_START_OFFSET UNITYSDK_OFFSET(0x19EAD190)
#define SRF_UI_LAYOUT_VIRTUALVERTICALLAYOUTGROUP_UPDATE_OFFSET UNITYSDK_OFFSET(0x19EAD6D0)
#define SRF_UI_LAYOUT_VIRTUALVERTICALLAYOUTGROUP__CTOR_OFFSET UNITYSDK_OFFSET(0x19EAE800)

namespace SRF::UI::Layout
{
	inline static constexpr unsigned int VirtualVerticalLayoutGroup_TypeDefinitionIndex = 33315;

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

		::System::Void set_SelectedItemChanged(::SRF::UI::Layout::VirtualVerticalLayoutGroup_SelectedItemChangedEvent* value)
		{
			return ((::System::Void(*)(::PVOID, ::SRF::UI::Layout::VirtualVerticalLayoutGroup_SelectedItemChangedEvent*))((::PBYTE)hIl2Cpp + SRF_UI_LAYOUT_VIRTUALVERTICALLAYOUTGROUP_SET_SELECTEDITEMCHANGED_OFFSET))(this, value);
		}

		::System::Object* get_SelectedItem()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_LAYOUT_VIRTUALVERTICALLAYOUTGROUP_GET_SELECTEDITEM_OFFSET))(this);
		}

		::System::Void set_SelectedItem(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SRF_UI_LAYOUT_VIRTUALVERTICALLAYOUTGROUP_SET_SELECTEDITEM_OFFSET))(this, value);
		}

		::System::Single get_minHeight()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_LAYOUT_VIRTUALVERTICALLAYOUTGROUP_GET_MINHEIGHT_OFFSET))(this);
		}

		::System::Void OnPointerClick(::UnityEngine::EventSystems::PointerEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::PointerEventData*))((::PBYTE)hIl2Cpp + SRF_UI_LAYOUT_VIRTUALVERTICALLAYOUTGROUP_ONPOINTERCLICK_OFFSET))(this, eventData);
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

		::System::Void OnScrollRectValueChanged(::UnityEngine::Vector2 d)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + SRF_UI_LAYOUT_VIRTUALVERTICALLAYOUTGROUP_ONSCROLLRECTVALUECHANGED_OFFSET))(this, d);
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

		::System::Void InvalidateItem(::System::Int32 itemIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SRF_UI_LAYOUT_VIRTUALVERTICALLAYOUTGROUP_INVALIDATEITEM_OFFSET))(this, itemIndex);
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

		::System::Void AddItem(::System::Object* item)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SRF_UI_LAYOUT_VIRTUALVERTICALLAYOUTGROUP_ADDITEM_OFFSET))(this, item);
		}

		::System::Void RemoveItem(::System::Object* item)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SRF_UI_LAYOUT_VIRTUALVERTICALLAYOUTGROUP_REMOVEITEM_OFFSET))(this, item);
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

		::SRF::UI::Layout::VirtualVerticalLayoutGroup_Row* GetRow(::System::Int32 forIndex)
		{
			return ((::SRF::UI::Layout::VirtualVerticalLayoutGroup_Row*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SRF_UI_LAYOUT_VIRTUALVERTICALLAYOUTGROUP_GETROW_OFFSET))(this, forIndex);
		}

		::System::Void RecycleRow(::SRF::UI::Layout::VirtualVerticalLayoutGroup_Row* row)
		{
			return ((::System::Void(*)(::PVOID, ::SRF::UI::Layout::VirtualVerticalLayoutGroup_Row*))((::PBYTE)hIl2Cpp + SRF_UI_LAYOUT_VIRTUALVERTICALLAYOUTGROUP_RECYCLEROW_OFFSET))(this, row);
		}

		::System::Void PopulateRow(::System::Int32 index, ::SRF::UI::Layout::VirtualVerticalLayoutGroup_Row* row)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::SRF::UI::Layout::VirtualVerticalLayoutGroup_Row*))((::PBYTE)hIl2Cpp + SRF_UI_LAYOUT_VIRTUALVERTICALLAYOUTGROUP_POPULATEROW_OFFSET))(this, index, row);
		}

		::SRF::UI::Layout::VirtualVerticalLayoutGroup_Row* CreateRow()
		{
			return ((::SRF::UI::Layout::VirtualVerticalLayoutGroup_Row*(*)(::PVOID))((::PBYTE)hIl2Cpp + SRF_UI_LAYOUT_VIRTUALVERTICALLAYOUTGROUP_CREATEROW_OFFSET))(this);
		}
	};
}
