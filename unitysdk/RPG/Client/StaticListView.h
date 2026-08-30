#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/EventSystems/MoveDirection.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/UI/GridLayoutGroup_RowColumnPair.h"
#include "unitysdk/UnityEngine/UI/ScrollRect_AlignDirection.h"
#include "unitysdk/UnityEngine/Vector2.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_1153;
class Class_1_A0302E9AE0B8A2B9;
namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class PrefabCache; }
namespace RPG::Client { class StaticListViewItem; }
namespace SuperScrollView { class LoopListView2; }
namespace SuperScrollView { class LoopListViewItem2; }
namespace System { template <typename T1, typename T2, typename T3, typename T4> class Func_4; }
namespace System { template <typename T1, typename T2, typename T3> class Func_3; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::Collections::Generic { template <typename T> class Queue_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class ScrollRect; }
namespace XLua { class LuaTable; }

#define RPG_CLIENT_STATICLISTVIEW_CLEARALLNAVI_OFFSET UNITYSDK_OFFSET(0x1A50D3D0)
#define RPG_CLIENT_STATICLISTVIEW_CLEARALL_OFFSET UNITYSDK_OFFSET(0x1A5080E0)
#define RPG_CLIENT_STATICLISTVIEW_CLEARFOCUSCACHE_OFFSET UNITYSDK_OFFSET(0x1A509660)
#define RPG_CLIENT_STATICLISTVIEW_CLEAR_OFFSET UNITYSDK_OFFSET(0x1A509060)
#define RPG_CLIENT_STATICLISTVIEW_CREATEITEM_OFFSET UNITYSDK_OFFSET(0x1A50BB80)
#define RPG_CLIENT_STATICLISTVIEW_DESPAWNED_OFFSET UNITYSDK_OFFSET(0x1A508090)
#define RPG_CLIENT_STATICLISTVIEW_DESTROYALLITEM_OFFSET UNITYSDK_OFFSET(0x1A508740)
#define RPG_CLIENT_STATICLISTVIEW_GETFIRSTITEM_OFFSET UNITYSDK_OFFSET(0x1A50D980)
#define RPG_CLIENT_STATICLISTVIEW_GETLASTITEM_OFFSET UNITYSDK_OFFSET(0x1A50DEA0)
#define RPG_CLIENT_STATICLISTVIEW_GETSHOWNITEMBYITEMINDEX_OFFSET UNITYSDK_OFFSET(0x1A50D8F0)
#define RPG_CLIENT_STATICLISTVIEW_GET_FADEINLENGTH_OFFSET UNITYSDK_OFFSET(0x1A50FB60)
#define RPG_CLIENT_STATICLISTVIEW_GET_FADEINOFFSET_OFFSET UNITYSDK_OFFSET(0x1A50FAB0)
#define RPG_CLIENT_STATICLISTVIEW_GET_ISFORBIDNAVI_OFFSET UNITYSDK_OFFSET(0x1A5072E0)
#define RPG_CLIENT_STATICLISTVIEW_GET_ISIGNORETRANSDIRTYWAIT_OFFSET UNITYSDK_OFFSET(0x1A50FC10)
#define RPG_CLIENT_STATICLISTVIEW_GET_ISVERTIAL_OFFSET UNITYSDK_OFFSET(0x1A50D7C0)
#define RPG_CLIENT_STATICLISTVIEW_GET_ITEMCOUNT_OFFSET UNITYSDK_OFFSET(0x1A507290)
#define RPG_CLIENT_STATICLISTVIEW_GET_ITEMPREVIEWCOUNT_OFFSET UNITYSDK_OFFSET(0x1A507380)
#define RPG_CLIENT_STATICLISTVIEW_GET_MSCROLLRECT_OFFSET UNITYSDK_OFFSET(0x1A50D080)
#define RPG_CLIENT_STATICLISTVIEW_INITPOOL_OFFSET UNITYSDK_OFFSET(0x1A507B40)
#define RPG_CLIENT_STATICLISTVIEW_INIT_1_OFFSET UNITYSDK_OFFSET(0x1A507540)
#define RPG_CLIENT_STATICLISTVIEW_INIT_OFFSET UNITYSDK_OFFSET(0x1A507430)
#define RPG_CLIENT_STATICLISTVIEW_MOVEPANELTOITEMINDEX_OFFSET UNITYSDK_OFFSET(0x1A50D660)
#define RPG_CLIENT_STATICLISTVIEW_NEWLISTVIEWITEM_OFFSET UNITYSDK_OFFSET(0x1A50BF50)
#define RPG_CLIENT_STATICLISTVIEW_ONANIMATORBUTTONSELECTED_OFFSET UNITYSDK_OFFSET(0x1A50D430)
#define RPG_CLIENT_STATICLISTVIEW_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1A509720)
#define RPG_CLIENT_STATICLISTVIEW_ONFINISHALLNAVICONNECT_OFFSET UNITYSDK_OFFSET(0x1A50B0C0)
#define RPG_CLIENT_STATICLISTVIEW_ONLISTVIEWSETDIRECTION_OFFSET UNITYSDK_OFFSET(0x1A50E3D0)
#define RPG_CLIENT_STATICLISTVIEW_ONNEWITEM_OFFSET UNITYSDK_OFFSET(0x1A50A060)
#define RPG_CLIENT_STATICLISTVIEW_ONRECYCLEITEM_OFFSET UNITYSDK_OFFSET(0x1A50C6F0)
#define RPG_CLIENT_STATICLISTVIEW_PLAYFADEINWITHAUTOANIMTIME_OFFSET UNITYSDK_OFFSET(0x1A5102E0)
#define RPG_CLIENT_STATICLISTVIEW_PLAYFADEIN_OFFSET UNITYSDK_OFFSET(0x1A50FCB0)
#define RPG_CLIENT_STATICLISTVIEW_RECYCLEITEM_OFFSET UNITYSDK_OFFSET(0x1A50C4D0)
#define RPG_CLIENT_STATICLISTVIEW_REFRESHALLSHOWNITEM_OFFSET UNITYSDK_OFFSET(0x1A50BAD0)
#define RPG_CLIENT_STATICLISTVIEW_REFRESHLISTNAVI_OFFSET UNITYSDK_OFFSET(0x1A509DB0)
#define RPG_CLIENT_STATICLISTVIEW_SETDIRECTIONREFLISTVIEW_OFFSET UNITYSDK_OFFSET(0x1A50F9B0)
#define RPG_CLIENT_STATICLISTVIEW_SETGAMEOBJECTACTIVE_OFFSET UNITYSDK_OFFSET(0x1A507EF0)
#define RPG_CLIENT_STATICLISTVIEW_SETLISTITEMCOUNT_OFFSET UNITYSDK_OFFSET(0x1A50BB10)
#define RPG_CLIENT_STATICLISTVIEW_SET_FADEINLENGTH_OFFSET UNITYSDK_OFFSET(0x1A50FBB0)
#define RPG_CLIENT_STATICLISTVIEW_SET_FADEINOFFSET_OFFSET UNITYSDK_OFFSET(0x1A50FB00)
#define RPG_CLIENT_STATICLISTVIEW_SET_ISFORBIDNAVI_OFFSET UNITYSDK_OFFSET(0x1A507330)
#define RPG_CLIENT_STATICLISTVIEW_SET_ISIGNORETRANSDIRTYWAIT_OFFSET UNITYSDK_OFFSET(0x1A50FC60)
#define RPG_CLIENT_STATICLISTVIEW_SET_ITEMPREVIEWCOUNT_OFFSET UNITYSDK_OFFSET(0x1A5073D0)
#define RPG_CLIENT_STATICLISTVIEW_SET_MSCROLLRECT_OFFSET UNITYSDK_OFFSET(0x1A50D0D0)
#define RPG_CLIENT_STATICLISTVIEW_SHOW_OFFSET UNITYSDK_OFFSET(0x1A509BA0)
#define RPG_CLIENT_STATICLISTVIEW_SPAWNED_OFFSET UNITYSDK_OFFSET(0x1A509770)
#define RPG_CLIENT_STATICLISTVIEW_UPDATE_OFFSET UNITYSDK_OFFSET(0x1A5097B0)
#define RPG_CLIENT_STATICLISTVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x1A510630)
#define RPG_CLIENT_STATICLISTVIEW__NEWLISTVIEWITEM_OFFSET UNITYSDK_OFFSET(0x1A50C1B0)
#define RPG_CLIENT_STATICLISTVIEW__TICKFADEIN_OFFSET UNITYSDK_OFFSET(0x1A509E80)

namespace RPG::Client
{
	inline static constexpr unsigned int StaticListView_TypeDefinitionIndex = 72581;

	class StaticListView : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Func_4<::XLua::LuaTable*, ::RPG::Client::StaticListView*, ::System::Int32, ::RPG::Client::StaticListViewItem*>* mOnGetItemByIndex; // 0x18
		::UnityEngine::GameObject* mItemPrefab; // 0x20
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* mItemPrefabList; // 0x28
		::System::Collections::Generic::List_1<::RPG::Client::StaticListViewItem*>* mList; // 0x30
		::System::Collections::Generic::Queue_1<::RPG::Client::StaticListViewItem*>* itemPoolList; // 0x38
		::System::Collections::Generic::List_1<::System::Collections::Generic::Queue_1<::RPG::Client::StaticListViewItem*>*>* itemPoolDict; // 0x40
		::Class_0_16E4307DCC419505_1153* layoutGroup; // 0x48
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

		::System::Void set_IsForbidNavi(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEW_SET_ISFORBIDNAVI_OFFSET))(this, a1);
		}

		::System::Int32 get_ItemPreviewCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEW_GET_ITEMPREVIEWCOUNT_OFFSET))(this);
		}

		::System::Void set_ItemPreviewCount(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEW_SET_ITEMPREVIEWCOUNT_OFFSET))(this, a1);
		}

		::System::Void Init(::System::Int32 a1, ::System::Func_3<::RPG::Client::StaticListView*, ::System::Int32, ::RPG::Client::StaticListViewItem*>* a2, ::System::Int32 a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Func_3<::RPG::Client::StaticListView*, ::System::Int32, ::RPG::Client::StaticListViewItem*>*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEW_INIT_OFFSET))(this, a1, a2, a3);
		}

		::System::Void init_1(::XLua::LuaTable* a1, ::System::Int32 a2, ::System::Func_4<::XLua::LuaTable*, ::RPG::Client::StaticListView*, ::System::Int32, ::RPG::Client::StaticListViewItem*>* a3, ::System::Int32 a4)
		{
			return ((::System::Void(*)(::PVOID, ::XLua::LuaTable*, ::System::Int32, ::System::Func_4<::XLua::LuaTable*, ::RPG::Client::StaticListView*, ::System::Int32, ::RPG::Client::StaticListViewItem*>*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEW_INIT_1_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Void InitPool()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEW_INITPOOL_OFFSET))(this);
		}

		::System::Void SetGameObjectActive(::UnityEngine::GameObject* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEW_SETGAMEOBJECTACTIVE_OFFSET))(this, a1, a2);
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

		::System::Void SetListItemCount(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEW_SETLISTITEMCOUNT_OFFSET))(this, a1, a2);
		}

		::RPG::Client::StaticListViewItem* CreateItem(::System::Int32 a1)
		{
			return ((::RPG::Client::StaticListViewItem*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEW_CREATEITEM_OFFSET))(this, a1);
		}

		::RPG::Client::StaticListViewItem* NewListViewItem(::System::Int32 a1)
		{
			return ((::RPG::Client::StaticListViewItem*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEW_NEWLISTVIEWITEM_OFFSET))(this, a1);
		}

		::RPG::Client::StaticListViewItem* _NewListViewItem(::System::Int32 a1)
		{
			return ((::RPG::Client::StaticListViewItem*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEW__NEWLISTVIEWITEM_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEW_CLEAR_OFFSET))(this);
		}

		::System::Void RecycleItem(::RPG::Client::StaticListViewItem* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::StaticListViewItem*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEW_RECYCLEITEM_OFFSET))(this, a1, a2);
		}

		::UnityEngine::UI::ScrollRect* get_mScrollRect()
		{
			return ((::UnityEngine::UI::ScrollRect*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEW_GET_MSCROLLRECT_OFFSET))(this);
		}

		::System::Void set_mScrollRect(::UnityEngine::UI::ScrollRect* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::ScrollRect*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEW_SET_MSCROLLRECT_OFFSET))(this, a1);
		}

		::System::Void ClearFocusCache()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEW_CLEARFOCUSCACHE_OFFSET))(this);
		}

		::System::Void OnNewItem(::RPG::Client::StaticListViewItem* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::StaticListViewItem*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEW_ONNEWITEM_OFFSET))(this, a1);
		}

		::System::Void OnRecycleItem(::RPG::Client::StaticListViewItem* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::StaticListViewItem*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEW_ONRECYCLEITEM_OFFSET))(this, a1, a2);
		}

		::System::Void ClearAllNavi()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEW_CLEARALLNAVI_OFFSET))(this);
		}

		::System::Void OnAnimatorButtonSelected(::RPG::Client::AnimatorButton* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::AnimatorButton*))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEW_ONANIMATORBUTTONSELECTED_OFFSET))(this, a1);
		}

		::System::Void MovePanelToItemIndex(::System::Int32 a1, ::System::Single a2, ::UnityEngine::UI::ScrollRect_AlignDirection a3, ::System::Boolean a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::UnityEngine::UI::ScrollRect_AlignDirection, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEW_MOVEPANELTOITEMINDEX_OFFSET))(this, a1, a2, a3, a4);
		}

		::System::Boolean get_IsVertial()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEW_GET_ISVERTIAL_OFFSET))(this);
		}

		::System::Void OnFinishAllNaviConnect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEW_ONFINISHALLNAVICONNECT_OFFSET))(this);
		}

		::RPG::Client::StaticListViewItem* GetShownItemByItemIndex(::System::Int32 a1)
		{
			return ((::RPG::Client::StaticListViewItem*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEW_GETSHOWNITEMBYITEMINDEX_OFFSET))(this, a1);
		}

		::RPG::Client::StaticListViewItem* GetFirstItem(::System::Int32 a1)
		{
			return ((::RPG::Client::StaticListViewItem*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEW_GETFIRSTITEM_OFFSET))(this, a1);
		}

		::RPG::Client::StaticListViewItem* GetLastItem(::System::Int32 a1)
		{
			return ((::RPG::Client::StaticListViewItem*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEW_GETLASTITEM_OFFSET))(this, a1);
		}

		::System::Void RefreshListNavi()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEW_REFRESHLISTNAVI_OFFSET))(this);
		}

		::System::Void SetDirectionRefListview(::RPG::Client::StaticListView* a1, ::UnityEngine::EventSystems::MoveDirection a2)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::StaticListView*, ::UnityEngine::EventSystems::MoveDirection))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEW_SETDIRECTIONREFLISTVIEW_OFFSET))(this, a1, a2);
		}

		::System::Void OnListViewSetDirection(::UnityEngine::EventSystems::MoveDirection a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::MoveDirection, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEW_ONLISTVIEWSETDIRECTION_OFFSET))(this, a1, a2);
		}

		::System::Single get_FadeInOffset()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEW_GET_FADEINOFFSET_OFFSET))(this);
		}

		::System::Void set_FadeInOffset(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEW_SET_FADEINOFFSET_OFFSET))(this, a1);
		}

		::System::Single get_FadeInLength()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEW_GET_FADEINLENGTH_OFFSET))(this);
		}

		::System::Void set_FadeInLength(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEW_SET_FADEINLENGTH_OFFSET))(this, a1);
		}

		::System::Boolean get_IsIgnoreTransDirtyWait()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEW_GET_ISIGNORETRANSDIRTYWAIT_OFFSET))(this);
		}

		::System::Void set_IsIgnoreTransDirtyWait(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEW_SET_ISIGNORETRANSDIRTYWAIT_OFFSET))(this, a1);
		}

		::System::Void PlayFadeIn(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_STATICLISTVIEW_PLAYFADEIN_OFFSET))(this, a1);
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
