#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/EventSystems/MoveDirection.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/UI/GridLayoutGroup_RowColumnPair.h"
#include "unitysdk/UnityEngine/UI/ScrollRect_AlignDirection.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_1003;
class Class_1_A0302E9AE0B8A2B9;
namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class PrefabCache; }
namespace RPG::Client { class StaticListViewItem; }
namespace SuperScrollView { class LoopListView2; }
namespace SuperScrollView { class LoopListViewItem2; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Func_4; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class ScrollRect; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_STATICLISTVIEW_CLEARALLNAVI_OFFSET UNITYSDK_OFFSET(0xB1D72B0)
#define RPG_CLIENT_STATICLISTVIEW_CLEARALL_OFFSET UNITYSDK_OFFSET(0xB1D28C0)
#define RPG_CLIENT_STATICLISTVIEW_CLEARFOCUSCACHE_OFFSET UNITYSDK_OFFSET(0xB1D3AA0)
#define RPG_CLIENT_STATICLISTVIEW_CLEAR_OFFSET UNITYSDK_OFFSET(0xB1D35C0)
#define RPG_CLIENT_STATICLISTVIEW_CREATEITEM_OFFSET UNITYSDK_OFFSET(0xB1D5E50)
#define RPG_CLIENT_STATICLISTVIEW_DESPAWNED_OFFSET UNITYSDK_OFFSET(0xB1D2870)
#define RPG_CLIENT_STATICLISTVIEW_DESTROYALLITEM_OFFSET UNITYSDK_OFFSET(0xB1D2D60)
#define RPG_CLIENT_STATICLISTVIEW_GETFIRSTITEM_OFFSET UNITYSDK_OFFSET(0xB1D77F0)
#define RPG_CLIENT_STATICLISTVIEW_GETLASTITEM_OFFSET UNITYSDK_OFFSET(0xB1D7CF0)
#define RPG_CLIENT_STATICLISTVIEW_GETSHOWNITEMBYITEMINDEX_OFFSET UNITYSDK_OFFSET(0xB1D7770)
#define RPG_CLIENT_STATICLISTVIEW_GET_FADEINLENGTH_OFFSET UNITYSDK_OFFSET(0xB1D96C0)
#define RPG_CLIENT_STATICLISTVIEW_GET_FADEINOFFSET_OFFSET UNITYSDK_OFFSET(0xB1D96A0)
#define RPG_CLIENT_STATICLISTVIEW_GET_ISFORBIDNAVI_OFFSET UNITYSDK_OFFSET(0xB1D1DC0)
#define RPG_CLIENT_STATICLISTVIEW_GET_ISIGNORETRANSDIRTYWAIT_OFFSET UNITYSDK_OFFSET(0xB1D96E0)
#define RPG_CLIENT_STATICLISTVIEW_GET_ISVERTIAL_OFFSET UNITYSDK_OFFSET(0xB1D7680)
#define RPG_CLIENT_STATICLISTVIEW_GET_ITEMCOUNT_OFFSET UNITYSDK_OFFSET(0xB1D1DB0)
#define RPG_CLIENT_STATICLISTVIEW_GET_ITEMPREVIEWCOUNT_OFFSET UNITYSDK_OFFSET(0xB1D1DE0)
#define RPG_CLIENT_STATICLISTVIEW_GET_MSCROLLRECT_OFFSET UNITYSDK_OFFSET(0xB1D6FE0)
#define RPG_CLIENT_STATICLISTVIEW_INITPOOL_OFFSET UNITYSDK_OFFSET(0xB1D2460)
#define RPG_CLIENT_STATICLISTVIEW_INIT_OFFSET UNITYSDK_OFFSET(0xB1D1E50)
#define RPG_CLIENT_STATICLISTVIEW_MOVEPANELTOITEMINDEX_OFFSET UNITYSDK_OFFSET(0xB1D7540)
#define RPG_CLIENT_STATICLISTVIEW_NEWLISTVIEWITEM_OFFSET UNITYSDK_OFFSET(0xB1D6200)
#define RPG_CLIENT_STATICLISTVIEW_ONANIMATORBUTTONSELECTED_OFFSET UNITYSDK_OFFSET(0xB1D7310)
#define RPG_CLIENT_STATICLISTVIEW_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xB1D3B10)
#define RPG_CLIENT_STATICLISTVIEW_ONFINISHALLNAVICONNECT_OFFSET UNITYSDK_OFFSET(0xB1D5280)
#define RPG_CLIENT_STATICLISTVIEW_ONLISTVIEWSETDIRECTION_OFFSET UNITYSDK_OFFSET(0xB1D8200)
#define RPG_CLIENT_STATICLISTVIEW_ONNEWITEM_OFFSET UNITYSDK_OFFSET(0xB1D41C0)
#define RPG_CLIENT_STATICLISTVIEW_ONRECYCLEITEM_OFFSET UNITYSDK_OFFSET(0xB1D6760)
#define RPG_CLIENT_STATICLISTVIEW_PLAYFADEINWITHAUTOANIMTIME_OFFSET UNITYSDK_OFFSET(0xB1D9B90)
#define RPG_CLIENT_STATICLISTVIEW_PLAYFADEIN_OFFSET UNITYSDK_OFFSET(0xB1D9700)
#define RPG_CLIENT_STATICLISTVIEW_RECYCLEITEM_OFFSET UNITYSDK_OFFSET(0xB1D6670)
#define RPG_CLIENT_STATICLISTVIEW_REFRESHALLSHOWNITEM_OFFSET UNITYSDK_OFFSET(0xB1D5DA0)
#define RPG_CLIENT_STATICLISTVIEW_REFRESHLISTNAVI_OFFSET UNITYSDK_OFFSET(0xB1D4020)
#define RPG_CLIENT_STATICLISTVIEW_SETDIRECTIONREFLISTVIEW_OFFSET UNITYSDK_OFFSET(0xB1D95A0)
#define RPG_CLIENT_STATICLISTVIEW_SETGAMEOBJECTACTIVE_OFFSET UNITYSDK_OFFSET(0xB1D26D0)
#define RPG_CLIENT_STATICLISTVIEW_SETLISTITEMCOUNT_OFFSET UNITYSDK_OFFSET(0xB1D5DE0)
#define RPG_CLIENT_STATICLISTVIEW_SET_FADEINLENGTH_OFFSET UNITYSDK_OFFSET(0xB1D96D0)
#define RPG_CLIENT_STATICLISTVIEW_SET_FADEINOFFSET_OFFSET UNITYSDK_OFFSET(0xB1D96B0)
#define RPG_CLIENT_STATICLISTVIEW_SET_ISFORBIDNAVI_OFFSET UNITYSDK_OFFSET(0xB1D1DD0)
#define RPG_CLIENT_STATICLISTVIEW_SET_ISIGNORETRANSDIRTYWAIT_OFFSET UNITYSDK_OFFSET(0xB1D96F0)
#define RPG_CLIENT_STATICLISTVIEW_SET_ITEMPREVIEWCOUNT_OFFSET UNITYSDK_OFFSET(0xB1D1DF0)
#define RPG_CLIENT_STATICLISTVIEW_SET_MSCROLLRECT_OFFSET UNITYSDK_OFFSET(0xB1D6FF0)
#define RPG_CLIENT_STATICLISTVIEW_SHOW_OFFSET UNITYSDK_OFFSET(0xB1D3E90)
#define RPG_CLIENT_STATICLISTVIEW_SPAWNED_OFFSET UNITYSDK_OFFSET(0xB1D3B60)
#define RPG_CLIENT_STATICLISTVIEW_UPDATE_OFFSET UNITYSDK_OFFSET(0xB1D3BA0)
#define RPG_CLIENT_STATICLISTVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0xB1D9D20)
#define RPG_CLIENT_STATICLISTVIEW__NEWLISTVIEWITEM_OFFSET UNITYSDK_OFFSET(0xB1D6430)
#define RPG_CLIENT_STATICLISTVIEW__TICKFADEIN_OFFSET UNITYSDK_OFFSET(0xB1D40F0)

namespace RPG::Client
{
	inline static constexpr unsigned int StaticListView_TypeDefinitionIndex = 66947;

	class StaticListView : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Func_4<::XLua::LuaTable*, ::RPG::Client::StaticListView*, ::System::Int32, ::RPG::Client::StaticListViewItem*>* mOnGetItemByIndex; // 0x18
		::UnityEngine::GameObject* mItemPrefab; // 0x20
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* mItemPrefabList; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::StaticListViewItem*>* mList; // 0x30
		::System::Collections::Generic::Queue_1<::RPG::Client::StaticListViewItem*>* itemPoolList; // 0x38
		::System::Collections::Generic::List_1<::System::Collections::Generic::Queue_1<::RPG::Client::StaticListViewItem*>*>* itemPoolDict; // 0x40
		::Class_0_16E4307DCC419505_1003* layoutGroup; // 0x48
		::XLua::LuaTable* mLuaTable; // 0x50
		::RPG::Client::PrefabCache* prefabCache; // 0x58
		::Class_1_A0302E9AE0B8A2B9* mPool; // 0x60
		::System::Collections::Generic::List_1<::Class_1_A0302E9AE0B8A2B9*>* mPools; // 0x68
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::RPG::Client::StaticListViewItem*>* instanceMap; // 0x70
		::UnityEngine::Transform* mTransform; // 0x78
		::UnityEngine::RectTransform* mRecTransform; // 0x80
		::System::Int32 Count; // 0x88
		::System::Boolean UseWeakActive; // 0x8C
		::System::Int32 naviCoulmn; // 0x90
		::System::Int32 naviRow; // 0x94
		::System::Boolean isForbidNavi; // 0x98
		::System::Int32 mItemPreviewCount; // 0x9C
		::System::Boolean isInProfile; // 0xA0
		::System::Boolean inited; // 0xA1
		::System::Boolean lastDirty; // 0xA2
		::System::Collections::Generic::List_1<::RPG::Client::StaticListViewItem*>* tmpItemPoolList; // 0xA8
		::System::Collections::Generic::List_1<::System::Collections::Generic::List_1<::RPG::Client::StaticListViewItem*>*>* tmpItemPoolListDict; // 0xB0
		::System::Boolean cachedFocused; // 0xB8
		::UnityEngine::UI::ScrollRect* m_ScrollRect; // 0xC0
		::UnityEngine::UI::GridLayoutGroup_RowColumnPair focusedRowColumn; // 0xC8
		::System::Int32 focusedInstanceID; // 0xD0
		::SuperScrollView::LoopListView2* parentList; // 0xD8
		::SuperScrollView::LoopListViewItem2* parentItem; // 0xE0
		::Il2CppArray<::UnityEngine::Vector3>* tempPoints; // 0xE8
		::System::Func_2<::RPG::Client::StaticListViewItem*, ::UnityEngine::Vector2>* OnGetAlignOffset; // 0xF0
		::RPG::Client::StaticListView* topList; // 0xF8
		::RPG::Client::StaticListView* bottomList; // 0x100
		::RPG::Client::StaticListView* leftList; // 0x108
		::RPG::Client::StaticListView* rightList; // 0x110
		::System::Single _fadeInBeginStamp; // 0x118
		::System::Single _fadeInEndStamp; // 0x11C
		::System::Single _fadeInOffset; // 0x120
		::System::Single _fadeInLength; // 0x124
		::System::Boolean isIgnoreTransDirtyWait; // 0x128
		::System::Boolean m_isRowNaviLoop; // 0x129

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEW__CTOR_OFFSET))(this);
		}

		::System::Int32 get_ItemCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEW_GET_ITEMCOUNT_OFFSET))(this);
		}

		::System::Boolean get_IsForbidNavi()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEW_GET_ISFORBIDNAVI_OFFSET))(this);
		}

		::System::Void set_IsForbidNavi(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEW_SET_ISFORBIDNAVI_OFFSET))(this, value);
		}

		::System::Int32 get_ItemPreviewCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEW_GET_ITEMPREVIEWCOUNT_OFFSET))(this);
		}

		::System::Void set_ItemPreviewCount(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEW_SET_ITEMPREVIEWCOUNT_OFFSET))(this, value);
		}

		::System::Void init(::XLua::LuaTable* table, ::System::Int32 count, ::System::Func_4<::XLua::LuaTable*, ::RPG::Client::StaticListView*, ::System::Int32, ::RPG::Client::StaticListViewItem*>* onNewItem, ::System::Int32 prefabIndex)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::System::Int32, ::System::Func_4<::XLua::LuaTable*, ::RPG::Client::StaticListView*, ::System::Int32, ::RPG::Client::StaticListViewItem*>*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEW_INIT_OFFSET))(this, table, count, onNewItem, prefabIndex);
		}

		::System::Void InitPool()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEW_INITPOOL_OFFSET))(this);
		}

		::System::Void SetGameObjectActive(::UnityEngine::GameObject* obj, ::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEW_SETGAMEOBJECTACTIVE_OFFSET))(this, obj, value);
		}

		::System::Void Despawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEW_DESPAWNED_OFFSET))(this);
		}

		::System::Void DestroyAllItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEW_DESTROYALLITEM_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEW_ONDESTROY_OFFSET))(this);
		}

		::System::Void Spawned()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEW_SPAWNED_OFFSET))(this);
		}

		::System::Void ClearAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEW_CLEARALL_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEW_UPDATE_OFFSET))(this);
		}

		::System::Void Show()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEW_SHOW_OFFSET))(this);
		}

		::System::Void RefreshAllShownItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEW_REFRESHALLSHOWNITEM_OFFSET))(this);
		}

		::System::Void SetListItemCount(::System::Int32 count, ::System::Boolean resetPos)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEW_SETLISTITEMCOUNT_OFFSET))(this, count, resetPos);
		}

		::RPG::Client::StaticListViewItem* CreateItem(::System::Int32 prefabIndex)
		{
			return ((::RPG::Client::StaticListViewItem*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEW_CREATEITEM_OFFSET))(this, prefabIndex);
		}

		::RPG::Client::StaticListViewItem* NewListViewItem(::System::Int32 prefabIndex)
		{
			return ((::RPG::Client::StaticListViewItem*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEW_NEWLISTVIEWITEM_OFFSET))(this, prefabIndex);
		}

		::RPG::Client::StaticListViewItem* _NewListViewItem(::System::Int32 prefabIndex)
		{
			return ((::RPG::Client::StaticListViewItem*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEW__NEWLISTVIEWITEM_OFFSET))(this, prefabIndex);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEW_CLEAR_OFFSET))(this);
		}

		::System::Void RecycleItem(::RPG::Client::StaticListViewItem* item, ::System::Boolean isForce)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::StaticListViewItem*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEW_RECYCLEITEM_OFFSET))(this, item, isForce);
		}

		::UnityEngine::UI::ScrollRect* get_mScrollRect()
		{
			return ((::UnityEngine::UI::ScrollRect*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEW_GET_MSCROLLRECT_OFFSET))(this);
		}

		::System::Void set_mScrollRect(::UnityEngine::UI::ScrollRect* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::ScrollRect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEW_SET_MSCROLLRECT_OFFSET))(this, value);
		}

		::System::Void ClearFocusCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEW_CLEARFOCUSCACHE_OFFSET))(this);
		}

		::System::Void OnNewItem(::RPG::Client::StaticListViewItem* item)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::StaticListViewItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEW_ONNEWITEM_OFFSET))(this, item);
		}

		::System::Void OnRecycleItem(::RPG::Client::StaticListViewItem* item, ::System::Boolean isForce)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::StaticListViewItem*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEW_ONRECYCLEITEM_OFFSET))(this, item, isForce);
		}

		::System::Void ClearAllNavi()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEW_CLEARALLNAVI_OFFSET))(this);
		}

		::System::Void OnAnimatorButtonSelected(::RPG::Client::AnimatorButton* button)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AnimatorButton*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEW_ONANIMATORBUTTONSELECTED_OFFSET))(this, button);
		}

		::System::Void MovePanelToItemIndex(::System::Int32 itemIndex, ::System::Single offset, ::UnityEngine::UI::ScrollRect_AlignDirection direction, ::System::Boolean ignoreMoveIfInView)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::UnityEngine::UI::ScrollRect_AlignDirection, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEW_MOVEPANELTOITEMINDEX_OFFSET))(this, itemIndex, offset, direction, ignoreMoveIfInView);
		}

		::System::Boolean get_IsVertial()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEW_GET_ISVERTIAL_OFFSET))(this);
		}

		::System::Void OnFinishAllNaviConnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEW_ONFINISHALLNAVICONNECT_OFFSET))(this);
		}

		::RPG::Client::StaticListViewItem* GetShownItemByItemIndex(::System::Int32 itemIndex)
		{
			return ((::RPG::Client::StaticListViewItem*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEW_GETSHOWNITEMBYITEMINDEX_OFFSET))(this, itemIndex);
		}

		::RPG::Client::StaticListViewItem* GetFirstItem(::System::Int32 rowOrColumn)
		{
			return ((::RPG::Client::StaticListViewItem*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEW_GETFIRSTITEM_OFFSET))(this, rowOrColumn);
		}

		::RPG::Client::StaticListViewItem* GetLastItem(::System::Int32 rowOrColumn)
		{
			return ((::RPG::Client::StaticListViewItem*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEW_GETLASTITEM_OFFSET))(this, rowOrColumn);
		}

		::System::Void RefreshListNavi()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEW_REFRESHLISTNAVI_OFFSET))(this);
		}

		::System::Void SetDirectionRefListview(::RPG::Client::StaticListView* listView, ::UnityEngine::EventSystems::MoveDirection direction)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::StaticListView*, ::UnityEngine::EventSystems::MoveDirection))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEW_SETDIRECTIONREFLISTVIEW_OFFSET))(this, listView, direction);
		}

		::System::Void OnListViewSetDirection(::UnityEngine::EventSystems::MoveDirection direction, ::System::Boolean isAuto)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::MoveDirection, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEW_ONLISTVIEWSETDIRECTION_OFFSET))(this, direction, isAuto);
		}

		::System::Single get_FadeInOffset()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEW_GET_FADEINOFFSET_OFFSET))(this);
		}

		::System::Void set_FadeInOffset(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEW_SET_FADEINOFFSET_OFFSET))(this, value);
		}

		::System::Single get_FadeInLength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEW_GET_FADEINLENGTH_OFFSET))(this);
		}

		::System::Void set_FadeInLength(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEW_SET_FADEINLENGTH_OFFSET))(this, value);
		}

		::System::Boolean get_IsIgnoreTransDirtyWait()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEW_GET_ISIGNORETRANSDIRTYWAIT_OFFSET))(this);
		}

		::System::Void set_IsIgnoreTransDirtyWait(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEW_SET_ISIGNORETRANSDIRTYWAIT_OFFSET))(this, value);
		}

		::System::Void PlayFadeIn(::System::Single animTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEW_PLAYFADEIN_OFFSET))(this, animTime);
		}

		::System::Void PlayFadeInWithAutoAnimTime()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEW_PLAYFADEINWITHAUTOANIMTIME_OFFSET))(this);
		}

		::System::Void _TickFadeIn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEW__TICKFADEIN_OFFSET))(this);
		}
	};
}
