#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/ListView_BackendKind.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_30140422EFA5C485;
namespace RPG::Client { class ListView_Class_1_6749E540A86D641F; }
namespace RPG::Client { class StaticListView; }
namespace SuperScrollView { class LoopFlexibleGridView; }
namespace SuperScrollView { class LoopGridView; }
namespace SuperScrollView { class LoopListView2; }
namespace SuperScrollView { class LoopStaggeredGridView; }
namespace System { class Object; }
namespace System { template <typename T1, typename T2> class Func_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyCollection_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class ScrollRect; }

#define RPG_CLIENT_LISTVIEW_ADD_ONSCROLL_OFFSET UNITYSDK_OFFSET(0xD3FA290)
#define RPG_CLIENT_LISTVIEW_AWAKE_OFFSET UNITYSDK_OFFSET(0xD3FD0A0)
#define RPG_CLIENT_LISTVIEW_CLEARITEMSSOURCE_OFFSET UNITYSDK_OFFSET(0xD3FBFF0)
#define RPG_CLIENT_LISTVIEW_DESTROYINSTANTIATEDCELLS_OFFSET UNITYSDK_OFFSET(0xD3FBB70)
#define RPG_CLIENT_LISTVIEW_GETCONTENTROOT_OFFSET UNITYSDK_OFFSET(0xD3FBAF0)
#define RPG_CLIENT_LISTVIEW_GET_ITEMPREFABS_OFFSET UNITYSDK_OFFSET(0xD3F9EF0)
#define RPG_CLIENT_LISTVIEW_GET_ITEMSSOURCE_OFFSET UNITYSDK_OFFSET(0xD3F9EB0)
#define RPG_CLIENT_LISTVIEW_GET_ITEMTOTALCOUNT_OFFSET UNITYSDK_OFFSET(0xD3F9D60)
#define RPG_CLIENT_LISTVIEW_GET_KIND_OFFSET UNITYSDK_OFFSET(0xD3F9B10)
#define RPG_CLIENT_LISTVIEW_GET_LOOPFLEXIBLEGRIDVIEW_OFFSET UNITYSDK_OFFSET(0xD3F9C70)
#define RPG_CLIENT_LISTVIEW_GET_LOOPGRIDVIEW_OFFSET UNITYSDK_OFFSET(0xD3F9BE0)
#define RPG_CLIENT_LISTVIEW_GET_LOOPLISTVIEW2_OFFSET UNITYSDK_OFFSET(0xD3F9B90)
#define RPG_CLIENT_LISTVIEW_GET_LOOPSTAGGEREDGRIDVIEW_OFFSET UNITYSDK_OFFSET(0xD3F9C20)
#define RPG_CLIENT_LISTVIEW_GET_NORMALIZEDPOSITION_OFFSET UNITYSDK_OFFSET(0xD3F9F80)
#define RPG_CLIENT_LISTVIEW_GET_STATICLISTVIEW_OFFSET UNITYSDK_OFFSET(0xD3F9B50)
#define RPG_CLIENT_LISTVIEW_GET_UNDERLYING_OFFSET UNITYSDK_OFFSET(0xD3F9CC0)
#define RPG_CLIENT_LISTVIEW_INDEXOF_OFFSET UNITYSDK_OFFSET(0xD3FCB30)
#define RPG_CLIENT_LISTVIEW_INIT_OFFSET UNITYSDK_OFFSET(0xD3FA350)
#define RPG_CLIENT_LISTVIEW_METHOD_5_2336D9142759601D_OFFSET UNITYSDK_OFFSET(0xD3FBD60)
#define RPG_CLIENT_LISTVIEW_METHOD_5_2450CFC043E97F54_OFFSET UNITYSDK_OFFSET(0xD3FB5D0)
#define RPG_CLIENT_LISTVIEW_METHOD_5_31B03235195D095F_OFFSET UNITYSDK_OFFSET(0xD3FD260)
#define RPG_CLIENT_LISTVIEW_METHOD_5_3FACDFF84FE98A8A_OFFSET UNITYSDK_OFFSET(0xD3FA0E0)
#define RPG_CLIENT_LISTVIEW_METHOD_5_43ABF258D59483FD_OFFSET UNITYSDK_OFFSET(0xD3FC4D0)
#define RPG_CLIENT_LISTVIEW_METHOD_5_4E66CC6A96439F85_OFFSET UNITYSDK_OFFSET(0xD3FD1F0)
#define RPG_CLIENT_LISTVIEW_METHOD_5_51CFFE2AF748ECD7_OFFSET UNITYSDK_OFFSET(0xD3FB8A0)
#define RPG_CLIENT_LISTVIEW_METHOD_5_64501B5CB67A94C3_OFFSET UNITYSDK_OFFSET(0xD3FAB80)
#define RPG_CLIENT_LISTVIEW_METHOD_5_7AFC74ADCC2A9C7A_OFFSET UNITYSDK_OFFSET(0xD3FB6F0)
#define RPG_CLIENT_LISTVIEW_METHOD_5_89D1F247B9D324EE_OFFSET UNITYSDK_OFFSET(0xD3FD140)
#define RPG_CLIENT_LISTVIEW_MOVETOITEM_OFFSET UNITYSDK_OFFSET(0xD3FC220)
#define RPG_CLIENT_LISTVIEW_NEWITEM_OFFSET UNITYSDK_OFFSET(0xD3FB9A0)
#define RPG_CLIENT_LISTVIEW_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xD3FD0F0)
#define RPG_CLIENT_LISTVIEW_PLAYFADEIN_OFFSET UNITYSDK_OFFSET(0xD3FC040)
#define RPG_CLIENT_LISTVIEW_REFRESHITEMS_OFFSET UNITYSDK_OFFSET(0xD3FBBD0)
#define RPG_CLIENT_LISTVIEW_REMOVE_ONSCROLL_OFFSET UNITYSDK_OFFSET(0xD3FA2F0)
#define RPG_CLIENT_LISTVIEW_SET_NORMALIZEDPOSITION_OFFSET UNITYSDK_OFFSET(0xD3FA220)
#define RPG_CLIENT_LISTVIEW_SNAPTOITEM_OFFSET UNITYSDK_OFFSET(0xD3FC5E0)
#define RPG_CLIENT_LISTVIEW_TRYGETSHOWNITEM_OFFSET UNITYSDK_OFFSET(0xD3FC9B0)
#define RPG_CLIENT_LISTVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0xD3FDC70)

namespace RPG::Client
{
	inline static constexpr unsigned int ListView_TypeDefinitionIndex = 72556;

	class ListView : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::GameObject* _EmptyStateNode; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* _ItemPrefabs; // 0x20
		::System::Action_1<::UnityEngine::Vector2>* OnScroll; // 0x28
		::RPG::Client::ListView_BackendKind CMAOAKMIMLA; // 0x30
		::RPG::Client::StaticListView* PJBPELODMJP; // 0x38
		::SuperScrollView::LoopListView2* LKEGHLOGHDI; // 0x40
		::SuperScrollView::LoopGridView* AMFAHMJGOEE; // 0x48
		::SuperScrollView::LoopStaggeredGridView* LEOKJIBKIKH; // 0x50
		::SuperScrollView::LoopFlexibleGridView* JKMMNGCNCCO; // 0x58
		::RPG::Client::ListView_Class_1_6749E540A86D641F* LOFIPGNCENB; // 0x60
		::System::Collections::Generic::IReadOnlyCollection_1<::System::Object*>* HHBBCEOGOCN; // 0x68
		::System::Int32 CCPEAAMPFCF; // 0x70
		::System::Func_2<::System::Object*, ::System::Int32>* JGHHJCMAOAA; // 0x78
		::UnityEngine::UI::ScrollRect* FHALOPMGLEM; // 0x80
		::Class_1_30140422EFA5C485* LHEEJACPHGF; // 0x88

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

		::SuperScrollView::LoopStaggeredGridView* get_LoopStaggeredGridView()
		{
			return ((::SuperScrollView::LoopStaggeredGridView*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LISTVIEW_GET_LOOPSTAGGEREDGRIDVIEW_OFFSET))(this);
		}

		::SuperScrollView::LoopFlexibleGridView* get_LoopFlexibleGridView()
		{
			return ((::SuperScrollView::LoopFlexibleGridView*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LISTVIEW_GET_LOOPFLEXIBLEGRIDVIEW_OFFSET))(this);
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

		::System::Void Init(::System::Collections::Generic::IReadOnlyCollection_1<::System::Object*>* a1, ::System::Func_2<::System::Int32, ::UnityEngine::GameObject*>* a2, ::System::Action_1<::UnityEngine::GameObject*>* a3, ::System::Func_2<::System::Object*, ::System::Int32>* a4)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::IReadOnlyCollection_1<::System::Object*>*, ::System::Func_2<::System::Int32, ::UnityEngine::GameObject*>*, ::System::Action_1<::UnityEngine::GameObject*>*, ::System::Func_2<::System::Object*, ::System::Int32>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_LISTVIEW_INIT_OFFSET))(this, a1, a2, a3, a4);
		}

		::UnityEngine::GameObject* NewItem(::System::Int32 a1)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_LISTVIEW_NEWITEM_OFFSET))(this, a1);
		}

		::UnityEngine::Transform* GetContentRoot()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LISTVIEW_GETCONTENTROOT_OFFSET))(this);
		}

		::System::Void DestroyInstantiatedCells()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LISTVIEW_DESTROYINSTANTIATEDCELLS_OFFSET))(this);
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

		::System::Void MoveToItem(::System::Int32 a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LISTVIEW_MOVETOITEM_OFFSET))(this, a1, a2, a3);
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

		::UnityEngine::UI::ScrollRect* Method_5_3FACDFF84FE98A8A()
		{
			return ((::UnityEngine::UI::ScrollRect*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LISTVIEW_METHOD_5_3FACDFF84FE98A8A_OFFSET))(this);
		}

		::System::Boolean Method_5_43ABF258D59483FD(::System::Int32 a1, ::System::Single a2, ::System::Single a3)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + RPG_CLIENT_LISTVIEW_METHOD_5_43ABF258D59483FD_OFFSET))(this, a1, a2, a3);
		}

		::System::Void Method_5_2450CFC043E97F54()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LISTVIEW_METHOD_5_2450CFC043E97F54_OFFSET))(this);
		}

		::System::Void Method_5_89D1F247B9D324EE()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LISTVIEW_METHOD_5_89D1F247B9D324EE_OFFSET))(this);
		}

		::System::Void Method_5_4E66CC6A96439F85(::UnityEngine::Vector2 a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Vector2))((::PBYTE)hIl2Cpp + RPG_CLIENT_LISTVIEW_METHOD_5_4E66CC6A96439F85_OFFSET))(this, a1);
		}

		::System::Void Method_5_2336D9142759601D(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LISTVIEW_METHOD_5_2336D9142759601D_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_7AFC74ADCC2A9C7A(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_LISTVIEW_METHOD_5_7AFC74ADCC2A9C7A_OFFSET))(this, a1);
		}

		::System::Collections::Generic::List_1<::System::Int32>* Method_5_31B03235195D095F()
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LISTVIEW_METHOD_5_31B03235195D095F_OFFSET))(this);
		}

		::System::Void Method_5_51CFFE2AF748ECD7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LISTVIEW_METHOD_5_51CFFE2AF748ECD7_OFFSET))(this);
		}

		::System::Void Method_5_64501B5CB67A94C3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_LISTVIEW_METHOD_5_64501B5CB67A94C3_OFFSET))(this);
		}
	};
}
