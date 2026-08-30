#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ListView_BackendKind.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace RPG::Client { class ListView_Class_1_AD72E0B1916E8FE9; }
namespace RPG::Client { class StaticListView; }
namespace SuperScrollView { class LoopGridView; }
namespace SuperScrollView { class LoopListView2; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyCollection_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI { class ScrollRect; }

#define RPG_CLIENT_LISTVIEW_ADD_ONSCROLL_OFFSET UNITYSDK_OFFSET(0x1C4C2210)
#define RPG_CLIENT_LISTVIEW_AWAKE_OFFSET UNITYSDK_OFFSET(0x1C4C4090)
#define RPG_CLIENT_LISTVIEW_CLEARITEMSSOURCE_OFFSET UNITYSDK_OFFSET(0x1C4C3370)
#define RPG_CLIENT_LISTVIEW_GET_ITEMPREFABS_OFFSET UNITYSDK_OFFSET(0x1C4C1EE0)
#define RPG_CLIENT_LISTVIEW_GET_ITEMSSOURCE_OFFSET UNITYSDK_OFFSET(0x1C4C1EA0)
#define RPG_CLIENT_LISTVIEW_GET_ITEMTOTALCOUNT_OFFSET UNITYSDK_OFFSET(0x1C4C1DF0)
#define RPG_CLIENT_LISTVIEW_GET_KIND_OFFSET UNITYSDK_OFFSET(0x1C4C1C80)
#define RPG_CLIENT_LISTVIEW_GET_LOOPGRIDVIEW_OFFSET UNITYSDK_OFFSET(0x1C4C1D40)
#define RPG_CLIENT_LISTVIEW_GET_LOOPLISTVIEW2_OFFSET UNITYSDK_OFFSET(0x1C4C1D00)
#define RPG_CLIENT_LISTVIEW_GET_NORMALIZEDPOSITION_OFFSET UNITYSDK_OFFSET(0x1C4C1F80)
#define RPG_CLIENT_LISTVIEW_GET_STATICLISTVIEW_OFFSET UNITYSDK_OFFSET(0x1C4C1CC0)
#define RPG_CLIENT_LISTVIEW_GET_UNDERLYING_OFFSET UNITYSDK_OFFSET(0x1C4C1D80)
#define RPG_CLIENT_LISTVIEW_INDEXOF_OFFSET UNITYSDK_OFFSET(0x1C4C3B20)
#define RPG_CLIENT_LISTVIEW_INIT_OFFSET UNITYSDK_OFFSET(0x1C4C22D0)
#define RPG_CLIENT_LISTVIEW_METHOD_5_2439B52C953E2E46_OFFSET UNITYSDK_OFFSET(0x1C4C27E0)
#define RPG_CLIENT_LISTVIEW_METHOD_5_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x1C4C4130)
#define RPG_CLIENT_LISTVIEW_METHOD_5_3ACBDC463BA17370_OFFSET UNITYSDK_OFFSET(0x1C4C3170)
#define RPG_CLIENT_LISTVIEW_METHOD_5_4E66CC6A96439F85_OFFSET UNITYSDK_OFFSET(0x1C4C4210)
#define RPG_CLIENT_LISTVIEW_METHOD_5_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0x1C4C2E10)
#define RPG_CLIENT_LISTVIEW_METHOD_5_85CFBB2F05144F1F_OFFSET UNITYSDK_OFFSET(0x1C4C20E0)
#define RPG_CLIENT_LISTVIEW_METHOD_5_A239DF324AF4215D_OFFSET UNITYSDK_OFFSET(0x1C4C2CD0)
#define RPG_CLIENT_LISTVIEW_MOVETOITEM_OFFSET UNITYSDK_OFFSET(0x1C4C3530)
#define RPG_CLIENT_LISTVIEW_NEWITEM_OFFSET UNITYSDK_OFFSET(0x1C4C2F10)
#define RPG_CLIENT_LISTVIEW_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1C4C40E0)
#define RPG_CLIENT_LISTVIEW_PLAYFADEIN_OFFSET UNITYSDK_OFFSET(0x1C4C33C0)
#define RPG_CLIENT_LISTVIEW_REFRESHITEMS_OFFSET UNITYSDK_OFFSET(0x1C4C2FE0)
#define RPG_CLIENT_LISTVIEW_REMOVE_ONSCROLL_OFFSET UNITYSDK_OFFSET(0x1C4C2270)
#define RPG_CLIENT_LISTVIEW_SET_NORMALIZEDPOSITION_OFFSET UNITYSDK_OFFSET(0x1C4C21A0)
#define RPG_CLIENT_LISTVIEW_SNAPTOITEM_OFFSET UNITYSDK_OFFSET(0x1C4C36F0)
#define RPG_CLIENT_LISTVIEW_TRYGETSHOWNITEM_OFFSET UNITYSDK_OFFSET(0x1C4C3A30)
#define RPG_CLIENT_LISTVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x1C4C4280)

namespace RPG::Client
{
	inline static constexpr unsigned int ListView_TypeDefinitionIndex = 72482;

	class ListView : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::GameObject* _EmptyStateNode; // 0x18
		::System::Action_1<::UnityEngine::Vector2>* OnScroll; // 0x20
		::RPG::Client::ListView_BackendKind CMAOAKMIMLA; // 0x28
		::RPG::Client::StaticListView* PJBPELODMJP; // 0x30
		::SuperScrollView::LoopListView2* LKEGHLOGHDI; // 0x38
		::SuperScrollView::LoopGridView* AMFAHMJGOEE; // 0x40
		::RPG::Client::ListView_Class_1_AD72E0B1916E8FE9* PDBBLINALFI; // 0x48
		::System::Collections::Generic::IReadOnlyCollection_1<::System::Object*>* HHBBCEOGOCN; // 0x50
		::UnityEngine::UI::ScrollRect* FHALOPMGLEM; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LISTVIEW__CTOR_OFFSET))(this);
		}

		::RPG::Client::ListView_BackendKind get_Kind()
		{
			return ((::RPG::Client::ListView_BackendKind(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LISTVIEW_GET_KIND_OFFSET))(this);
		}

		::RPG::Client::StaticListView* get_StaticListView()
		{
			return ((::RPG::Client::StaticListView*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LISTVIEW_GET_STATICLISTVIEW_OFFSET))(this);
		}

		::SuperScrollView::LoopListView2* get_LoopListView2()
		{
			return ((::SuperScrollView::LoopListView2*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LISTVIEW_GET_LOOPLISTVIEW2_OFFSET))(this);
		}

		::SuperScrollView::LoopGridView* get_LoopGridView()
		{
			return ((::SuperScrollView::LoopGridView*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LISTVIEW_GET_LOOPGRIDVIEW_OFFSET))(this);
		}

		::UnityEngine::MonoBehaviour* get_Underlying()
		{
			return ((::UnityEngine::MonoBehaviour*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LISTVIEW_GET_UNDERLYING_OFFSET))(this);
		}

		::System::Int32 get_ItemTotalCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LISTVIEW_GET_ITEMTOTALCOUNT_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyCollection_1<::System::Object*>* get_ItemsSource()
		{
			return ((::System::Collections::Generic::IReadOnlyCollection_1<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LISTVIEW_GET_ITEMSSOURCE_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::GameObject*>* get_ItemPrefabs()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::GameObject*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LISTVIEW_GET_ITEMPREFABS_OFFSET))(this);
		}

		::UnityEngine::Vector2 get_NormalizedPosition()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LISTVIEW_GET_NORMALIZEDPOSITION_OFFSET))(this);
		}

		::System::Void set_NormalizedPosition(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_LISTVIEW_SET_NORMALIZEDPOSITION_OFFSET))(this, a1);
		}

		::System::Void add_OnScroll(::System::Action_1<::UnityEngine::Vector2>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LISTVIEW_ADD_ONSCROLL_OFFSET))(this, a1);
		}

		::System::Void remove_OnScroll(::System::Action_1<::UnityEngine::Vector2>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::UnityEngine::Vector2>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LISTVIEW_REMOVE_ONSCROLL_OFFSET))(this, a1);
		}

		::System::Void Init(::System::Collections::Generic::IReadOnlyCollection_1<::System::Object*>* a1, ::System::Func_2<::System::Int32, ::UnityEngine::GameObject*>* a2, ::System::Action_1<::UnityEngine::GameObject*>* a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyCollection_1<::System::Object*>*, ::System::Func_2<::System::Int32, ::UnityEngine::GameObject*>*, ::System::Action_1<::UnityEngine::GameObject*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LISTVIEW_INIT_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::GameObject* NewItem(::System::Int32 a1)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LISTVIEW_NEWITEM_OFFSET))(this, a1);
		}

		::System::Void RefreshItems(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LISTVIEW_REFRESHITEMS_OFFSET))(this, a1);
		}

		::System::Void ClearItemsSource()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LISTVIEW_CLEARITEMSSOURCE_OFFSET))(this);
		}

		::System::Void PlayFadeIn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LISTVIEW_PLAYFADEIN_OFFSET))(this);
		}

		::System::Void MoveToItem(::System::Int32 a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LISTVIEW_MOVETOITEM_OFFSET))(this, a1, a2);
		}

		::System::Void SnapToItem(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LISTVIEW_SNAPTOITEM_OFFSET))(this, a1);
		}

		::System::Boolean TryGetShownItem(::System::Int32 a1, ::UnityEngine::GameObject*& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::UnityEngine::GameObject*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_LISTVIEW_TRYGETSHOWNITEM_OFFSET))(this, a1, a2);
		}

		::System::Int32 IndexOf(::System::Object* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LISTVIEW_INDEXOF_OFFSET))(this, a1);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LISTVIEW_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LISTVIEW_ONDESTROY_OFFSET))(this);
		}

		::UnityEngine::UI::ScrollRect* Method_5_85CFBB2F05144F1F()
		{
			return ((::UnityEngine::UI::ScrollRect*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LISTVIEW_METHOD_5_85CFBB2F05144F1F_OFFSET))(this);
		}

		::System::Void Method_5_A239DF324AF4215D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LISTVIEW_METHOD_5_A239DF324AF4215D_OFFSET))(this);
		}

		::System::Void Method_5_33ACA6CB2ABC73F7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LISTVIEW_METHOD_5_33ACA6CB2ABC73F7_OFFSET))(this);
		}

		::System::Void Method_5_4E66CC6A96439F85(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_LISTVIEW_METHOD_5_4E66CC6A96439F85_OFFSET))(this, a1);
		}

		::System::Void Method_5_3ACBDC463BA17370(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LISTVIEW_METHOD_5_3ACBDC463BA17370_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_51CFFE2AF748ECD7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LISTVIEW_METHOD_5_51CFFE2AF748ECD7_OFFSET))(this);
		}

		::System::Void Method_5_2439B52C953E2E46()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LISTVIEW_METHOD_5_2439B52C953E2E46_OFFSET))(this);
		}
	};
}
