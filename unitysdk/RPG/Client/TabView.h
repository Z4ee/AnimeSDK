#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_0_16E4307DCC419505_1154;
class Class_1_5F1B5D6380BD40EB;
namespace RPG::Client { class DynamicPrefabLoader; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_TABVIEW_ADD_ACTIVETABCHANGED_OFFSET UNITYSDK_OFFSET(0x1B401F50)
#define RPG_CLIENT_TABVIEW_ADD_ACTIVETABPRECHANGING_OFFSET UNITYSDK_OFFSET(0x1B401E50)
#define RPG_CLIENT_TABVIEW_ADD_OFFSET UNITYSDK_OFFSET(0x1B402050)
#define RPG_CLIENT_TABVIEW_AWAKE_OFFSET UNITYSDK_OFFSET(0x1B403690)
#define RPG_CLIENT_TABVIEW_CLEAR_OFFSET UNITYSDK_OFFSET(0x1B402EF0)
#define RPG_CLIENT_TABVIEW_GETTABHEADERPREFAB_OFFSET UNITYSDK_OFFSET(0x1B401930)
#define RPG_CLIENT_TABVIEW_GETTABHEADER_OFFSET UNITYSDK_OFFSET(0x1B403200)
#define RPG_CLIENT_TABVIEW_GETTAB_OFFSET UNITYSDK_OFFSET(0x1B403170)
#define RPG_CLIENT_TABVIEW_GET_ACTIVETAB_OFFSET UNITYSDK_OFFSET(0x1B401A40)
#define RPG_CLIENT_TABVIEW_GET_CONTENTROOTS_OFFSET UNITYSDK_OFFSET(0x1B4019C0)
#define RPG_CLIENT_TABVIEW_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1B401770)
#define RPG_CLIENT_TABVIEW_GET_DYNAMICCONTENTPREFABS_OFFSET UNITYSDK_OFFSET(0x1B401A00)
#define RPG_CLIENT_TABVIEW_GET_HEADERCONTAINER_OFFSET UNITYSDK_OFFSET(0x1B4017C0)
#define RPG_CLIENT_TABVIEW_GET_HEADERPREFABS_OFFSET UNITYSDK_OFFSET(0x1B4018F0)
#define RPG_CLIENT_TABVIEW_GET_PREVIOUSSELECTEDTABINDEX_OFFSET UNITYSDK_OFFSET(0x1B401E10)
#define RPG_CLIENT_TABVIEW_GET_SELECTEDTABINDEX_OFFSET UNITYSDK_OFFSET(0x1B401C60)
#define RPG_CLIENT_TABVIEW_GET_TABS_OFFSET UNITYSDK_OFFSET(0x1B401730)
#define RPG_CLIENT_TABVIEW_INDEXOF_OFFSET UNITYSDK_OFFSET(0x1B403290)
#define RPG_CLIENT_TABVIEW_INSERT_OFFSET UNITYSDK_OFFSET(0x1B4020B0)
#define RPG_CLIENT_TABVIEW_METHOD_5_279727DFA5F97519_OFFSET UNITYSDK_OFFSET(0x1B4022B0)
#define RPG_CLIENT_TABVIEW_METHOD_5_2C95AFAD0256302F_OFFSET UNITYSDK_OFFSET(0x1B402570)
#define RPG_CLIENT_TABVIEW_METHOD_5_49B631EF1DEFEC16_OFFSET UNITYSDK_OFFSET(0x1B402660)
#define RPG_CLIENT_TABVIEW_METHOD_5_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0x1B402DD0)
#define RPG_CLIENT_TABVIEW_METHOD_5_7419A88E12AD622B_OFFSET UNITYSDK_OFFSET(0x1B401CA0)
#define RPG_CLIENT_TABVIEW_METHOD_5_76011EFD234E6FAB_OFFSET UNITYSDK_OFFSET(0x1B403A40)
#define RPG_CLIENT_TABVIEW_METHOD_5_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0x1B401870)
#define RPG_CLIENT_TABVIEW_METHOD_5_D5F50C9F67A205CE_OFFSET UNITYSDK_OFFSET(0x1B403920)
#define RPG_CLIENT_TABVIEW_METHOD_5_FF37EF14CE10C931_OFFSET UNITYSDK_OFFSET(0x1B402C30)
#define RPG_CLIENT_TABVIEW_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x1B403810)
#define RPG_CLIENT_TABVIEW_REMOVEAT_OFFSET UNITYSDK_OFFSET(0x1B4029C0)
#define RPG_CLIENT_TABVIEW_REMOVE_ACTIVETABCHANGED_OFFSET UNITYSDK_OFFSET(0x1B401FD0)
#define RPG_CLIENT_TABVIEW_REMOVE_ACTIVETABPRECHANGING_OFFSET UNITYSDK_OFFSET(0x1B401ED0)
#define RPG_CLIENT_TABVIEW_REMOVE_OFFSET UNITYSDK_OFFSET(0x1B402920)
#define RPG_CLIENT_TABVIEW_REORDERTAB_OFFSET UNITYSDK_OFFSET(0x1B403320)
#define RPG_CLIENT_TABVIEW_SET_ACTIVETAB_OFFSET UNITYSDK_OFFSET(0x1B401AD0)
#define RPG_CLIENT_TABVIEW_SET_SELECTEDTABINDEX_OFFSET UNITYSDK_OFFSET(0x1B401C10)
#define RPG_CLIENT_TABVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B403BB0)

namespace RPG::Client
{
	inline static constexpr unsigned int TabView_TypeDefinitionIndex = 72600;

	class TabView : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::RectTransform* _HeaderContainer; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* _HeaderPrefabs; // 0x20
		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* _ContentRoots; // 0x28
		::RPG::Client::DynamicPrefabLoader* _DynamicContentPrefabs; // 0x30
		::UnityEngine::GameObject* _EmptyStateNode; // 0x38
		::System::Action_2<::Class_1_5F1B5D6380BD40EB*, ::Class_1_5F1B5D6380BD40EB*>* ActiveTabPreChanging; // 0x40
		::System::Action_2<::Class_1_5F1B5D6380BD40EB*, ::Class_1_5F1B5D6380BD40EB*>* ActiveTabChanged; // 0x48
		::System::Collections::Generic::List_1<::Class_1_5F1B5D6380BD40EB*>* HEFOLKEGHEM; // 0x50
		::System::Int32 LAKBMOEGNGD; // 0x58
		::System::Int32 CLNHCPBMEEA; // 0x5C
		::System::Int32 DPNMLDLLBLA; // 0x60

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABVIEW__CTOR_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::Class_1_5F1B5D6380BD40EB*>* get_Tabs()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::Class_1_5F1B5D6380BD40EB*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABVIEW_GET_TABS_OFFSET))(this);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABVIEW_GET_COUNT_OFFSET))(this);
		}

		::UnityEngine::RectTransform* get_HeaderContainer()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABVIEW_GET_HEADERCONTAINER_OFFSET))(this);
		}

		::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::GameObject*>* get_HeaderPrefabs()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::GameObject*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABVIEW_GET_HEADERPREFABS_OFFSET))(this);
		}

		::UnityEngine::GameObject* GetTabHeaderPrefab(::System::Int32 a1)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABVIEW_GETTABHEADERPREFAB_OFFSET))(this, a1);
		}

		::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Transform*>* get_ContentRoots()
		{
			return ((::System::Collections::Generic::IReadOnlyList_1<::UnityEngine::Transform*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABVIEW_GET_CONTENTROOTS_OFFSET))(this);
		}

		::RPG::Client::DynamicPrefabLoader* get_DynamicContentPrefabs()
		{
			return ((::RPG::Client::DynamicPrefabLoader*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABVIEW_GET_DYNAMICCONTENTPREFABS_OFFSET))(this);
		}

		::Class_1_5F1B5D6380BD40EB* get_ActiveTab()
		{
			return ((::Class_1_5F1B5D6380BD40EB*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABVIEW_GET_ACTIVETAB_OFFSET))(this);
		}

		::System::Void set_ActiveTab(::Class_1_5F1B5D6380BD40EB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5F1B5D6380BD40EB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABVIEW_SET_ACTIVETAB_OFFSET))(this, a1);
		}

		::System::Int32 get_SelectedTabIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABVIEW_GET_SELECTEDTABINDEX_OFFSET))(this);
		}

		::System::Void set_SelectedTabIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABVIEW_SET_SELECTEDTABINDEX_OFFSET))(this, a1);
		}

		::System::Int32 get_PreviousSelectedTabIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABVIEW_GET_PREVIOUSSELECTEDTABINDEX_OFFSET))(this);
		}

		::System::Void add_ActiveTabPreChanging(::System::Action_2<::Class_1_5F1B5D6380BD40EB*, ::Class_1_5F1B5D6380BD40EB*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::Class_1_5F1B5D6380BD40EB*, ::Class_1_5F1B5D6380BD40EB*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABVIEW_ADD_ACTIVETABPRECHANGING_OFFSET))(this, a1);
		}

		::System::Void remove_ActiveTabPreChanging(::System::Action_2<::Class_1_5F1B5D6380BD40EB*, ::Class_1_5F1B5D6380BD40EB*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::Class_1_5F1B5D6380BD40EB*, ::Class_1_5F1B5D6380BD40EB*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABVIEW_REMOVE_ACTIVETABPRECHANGING_OFFSET))(this, a1);
		}

		::System::Void add_ActiveTabChanged(::System::Action_2<::Class_1_5F1B5D6380BD40EB*, ::Class_1_5F1B5D6380BD40EB*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::Class_1_5F1B5D6380BD40EB*, ::Class_1_5F1B5D6380BD40EB*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABVIEW_ADD_ACTIVETABCHANGED_OFFSET))(this, a1);
		}

		::System::Void remove_ActiveTabChanged(::System::Action_2<::Class_1_5F1B5D6380BD40EB*, ::Class_1_5F1B5D6380BD40EB*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::Class_1_5F1B5D6380BD40EB*, ::Class_1_5F1B5D6380BD40EB*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABVIEW_REMOVE_ACTIVETABCHANGED_OFFSET))(this, a1);
		}

		::System::Void Add(::Class_1_5F1B5D6380BD40EB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5F1B5D6380BD40EB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABVIEW_ADD_OFFSET))(this, a1);
		}

		::System::Void Insert(::System::Int32 a1, ::Class_1_5F1B5D6380BD40EB* a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_1_5F1B5D6380BD40EB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABVIEW_INSERT_OFFSET))(this, a1, a2);
		}

		::System::Boolean Remove(::Class_1_5F1B5D6380BD40EB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_5F1B5D6380BD40EB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABVIEW_REMOVE_OFFSET))(this, a1);
		}

		::System::Void RemoveAt(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABVIEW_REMOVEAT_OFFSET))(this, a1);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABVIEW_CLEAR_OFFSET))(this);
		}

		::Class_1_5F1B5D6380BD40EB* GetTab(::System::Int32 a1)
		{
			return ((::Class_1_5F1B5D6380BD40EB*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABVIEW_GETTAB_OFFSET))(this, a1);
		}

		::Class_0_16E4307DCC419505_1154* GetTabHeader(::System::Int32 a1)
		{
			return ((::Class_0_16E4307DCC419505_1154*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABVIEW_GETTABHEADER_OFFSET))(this, a1);
		}

		::System::Int32 IndexOf(::Class_1_5F1B5D6380BD40EB* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_5F1B5D6380BD40EB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABVIEW_INDEXOF_OFFSET))(this, a1);
		}

		::System::Void ReorderTab(::System::Int32 a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABVIEW_REORDERTAB_OFFSET))(this, a1, a2);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABVIEW_AWAKE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABVIEW_ONDESTROY_OFFSET))(this);
		}

		::System::Void Method_5_9681042564541CD6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABVIEW_METHOD_5_9681042564541CD6_OFFSET))(this);
		}

		::System::Void Method_5_279727DFA5F97519(::Class_1_5F1B5D6380BD40EB* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5F1B5D6380BD40EB*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABVIEW_METHOD_5_279727DFA5F97519_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_FF37EF14CE10C931(::Class_1_5F1B5D6380BD40EB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5F1B5D6380BD40EB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABVIEW_METHOD_5_FF37EF14CE10C931_OFFSET))(this, a1);
		}

		::System::Void Method_5_D5F50C9F67A205CE(::Class_1_5F1B5D6380BD40EB* a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5F1B5D6380BD40EB*, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABVIEW_METHOD_5_D5F50C9F67A205CE_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_2C95AFAD0256302F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABVIEW_METHOD_5_2C95AFAD0256302F_OFFSET))(this);
		}

		::System::Void Method_5_7419A88E12AD622B(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABVIEW_METHOD_5_7419A88E12AD622B_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_49B631EF1DEFEC16(::System::Boolean a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABVIEW_METHOD_5_49B631EF1DEFEC16_OFFSET))(this, a1);
		}

		::System::Void Method_5_508D4DD02D3DB74E()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABVIEW_METHOD_5_508D4DD02D3DB74E_OFFSET))(this);
		}

		::System::Void Method_5_76011EFD234E6FAB(::Class_1_5F1B5D6380BD40EB* a1, ::System::Boolean a2, ::System::Boolean a3)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5F1B5D6380BD40EB*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABVIEW_METHOD_5_76011EFD234E6FAB_OFFSET))(this, a1, a2, a3);
		}
	};
}
