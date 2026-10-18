#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

class Class_0_16E4307DCC419505_1267;
class Class_1_5F1B5D6380BD40EB;
namespace RPG::Client { class DynamicPrefabLoader; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class IReadOnlyList_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define RPG_CLIENT_TABVIEW_ADD_LOCKEDTABCLICKED_OFFSET UNITYSDK_OFFSET(0xE197E10)
#define RPG_CLIENT_TABVIEW_ADD_OFFSET UNITYSDK_OFFSET(0xE198110)
#define RPG_CLIENT_TABVIEW_ADD_SELECTEDTABCHANGED_OFFSET UNITYSDK_OFFSET(0xE197D10)
#define RPG_CLIENT_TABVIEW_ADD_SELECTEDTABPRECHANGING_OFFSET UNITYSDK_OFFSET(0xE197C10)
#define RPG_CLIENT_TABVIEW_ADD_TABADDED_OFFSET UNITYSDK_OFFSET(0xE197F10)
#define RPG_CLIENT_TABVIEW_ADD_TABREMOVED_OFFSET UNITYSDK_OFFSET(0xE198010)
#define RPG_CLIENT_TABVIEW_AWAKE_OFFSET UNITYSDK_OFFSET(0xE199E20)
#define RPG_CLIENT_TABVIEW_CLEAR_OFFSET UNITYSDK_OFFSET(0xE199000)
#define RPG_CLIENT_TABVIEW_GETTABHEADERPREFAB_OFFSET UNITYSDK_OFFSET(0xE1975E0)
#define RPG_CLIENT_TABVIEW_GETTABHEADER_OFFSET UNITYSDK_OFFSET(0xE1992E0)
#define RPG_CLIENT_TABVIEW_GETTAB_OFFSET UNITYSDK_OFFSET(0xE199250)
#define RPG_CLIENT_TABVIEW_GET_CONTENTROOTS_OFFSET UNITYSDK_OFFSET(0xE197670)
#define RPG_CLIENT_TABVIEW_GET_COUNT_OFFSET UNITYSDK_OFFSET(0xE197420)
#define RPG_CLIENT_TABVIEW_GET_DYNAMICCONTENTPREFABS_OFFSET UNITYSDK_OFFSET(0xE1976B0)
#define RPG_CLIENT_TABVIEW_GET_HEADERCONTAINER_OFFSET UNITYSDK_OFFSET(0xE197470)
#define RPG_CLIENT_TABVIEW_GET_HEADERPREFABS_OFFSET UNITYSDK_OFFSET(0xE1975A0)
#define RPG_CLIENT_TABVIEW_GET_PREVIOUSSELECTEDTABINDEX_OFFSET UNITYSDK_OFFSET(0xE197BD0)
#define RPG_CLIENT_TABVIEW_GET_SELECTEDTABINDEX_OFFSET UNITYSDK_OFFSET(0xE197980)
#define RPG_CLIENT_TABVIEW_GET_SELECTEDTAB_OFFSET UNITYSDK_OFFSET(0xE1976F0)
#define RPG_CLIENT_TABVIEW_GET_TABS_OFFSET UNITYSDK_OFFSET(0xE1973E0)
#define RPG_CLIENT_TABVIEW_INDEXOF_OFFSET UNITYSDK_OFFSET(0xE199370)
#define RPG_CLIENT_TABVIEW_INSERT_OFFSET UNITYSDK_OFFSET(0xE198170)
#define RPG_CLIENT_TABVIEW_METHOD_5_01E5127E7D89F665_OFFSET UNITYSDK_OFFSET(0xE199920)
#define RPG_CLIENT_TABVIEW_METHOD_5_2C95AFAD0256302F_OFFSET UNITYSDK_OFFSET(0xE198650)
#define RPG_CLIENT_TABVIEW_METHOD_5_49B631EF1DEFEC16_OFFSET UNITYSDK_OFFSET(0xE198740)
#define RPG_CLIENT_TABVIEW_METHOD_5_5022DB1DC5AA8CB4_OFFSET UNITYSDK_OFFSET(0xE199400)
#define RPG_CLIENT_TABVIEW_METHOD_5_508D4DD02D3DB74E_OFFSET UNITYSDK_OFFSET(0xE198EE0)
#define RPG_CLIENT_TABVIEW_METHOD_5_7419A88E12AD622B_OFFSET UNITYSDK_OFFSET(0xE197A60)
#define RPG_CLIENT_TABVIEW_METHOD_5_76011EFD234E6FAB_OFFSET UNITYSDK_OFFSET(0xE19A1E0)
#define RPG_CLIENT_TABVIEW_METHOD_5_7BAD540DB351CAF1_OFFSET UNITYSDK_OFFSET(0xE198380)
#define RPG_CLIENT_TABVIEW_METHOD_5_88E73C0ABCC4541C_OFFSET UNITYSDK_OFFSET(0xE1979C0)
#define RPG_CLIENT_TABVIEW_METHOD_5_9681042564541CD6_OFFSET UNITYSDK_OFFSET(0xE197520)
#define RPG_CLIENT_TABVIEW_METHOD_5_D03D35B622266870_OFFSET UNITYSDK_OFFSET(0xE199560)
#define RPG_CLIENT_TABVIEW_METHOD_5_D5F50C9F67A205CE_OFFSET UNITYSDK_OFFSET(0xE19A0C0)
#define RPG_CLIENT_TABVIEW_METHOD_5_FF37EF14CE10C931_OFFSET UNITYSDK_OFFSET(0xE198D40)
#define RPG_CLIENT_TABVIEW_ONDESTROY_OFFSET UNITYSDK_OFFSET(0xE199FA0)
#define RPG_CLIENT_TABVIEW_REMOVEAT_OFFSET UNITYSDK_OFFSET(0xE198AA0)
#define RPG_CLIENT_TABVIEW_REMOVE_LOCKEDTABCLICKED_OFFSET UNITYSDK_OFFSET(0xE197E90)
#define RPG_CLIENT_TABVIEW_REMOVE_OFFSET UNITYSDK_OFFSET(0xE198A00)
#define RPG_CLIENT_TABVIEW_REMOVE_SELECTEDTABCHANGED_OFFSET UNITYSDK_OFFSET(0xE197D90)
#define RPG_CLIENT_TABVIEW_REMOVE_SELECTEDTABPRECHANGING_OFFSET UNITYSDK_OFFSET(0xE197C90)
#define RPG_CLIENT_TABVIEW_REMOVE_TABADDED_OFFSET UNITYSDK_OFFSET(0xE197F90)
#define RPG_CLIENT_TABVIEW_REMOVE_TABREMOVED_OFFSET UNITYSDK_OFFSET(0xE198090)
#define RPG_CLIENT_TABVIEW_REORDERTAB_OFFSET UNITYSDK_OFFSET(0xE199740)
#define RPG_CLIENT_TABVIEW_SELECTNEXT_OFFSET UNITYSDK_OFFSET(0xE1996E0)
#define RPG_CLIENT_TABVIEW_SELECTPREVIOUS_OFFSET UNITYSDK_OFFSET(0xE199500)
#define RPG_CLIENT_TABVIEW_SET_SELECTEDTABINDEX_OFFSET UNITYSDK_OFFSET(0xE197910)
#define RPG_CLIENT_TABVIEW_SET_SELECTEDTAB_OFFSET UNITYSDK_OFFSET(0xE197780)
#define RPG_CLIENT_TABVIEW__CTOR_OFFSET UNITYSDK_OFFSET(0xE19A350)

namespace RPG::Client
{
	inline static constexpr unsigned int TabView_TypeDefinitionIndex = 72676;

	class TabView : public ::UnityEngine::MonoBehaviour
	{
	public:
		::UnityEngine::RectTransform* _HeaderContainer; // 0x18
		::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* _HeaderPrefabs; // 0x20
		::System::Collections::Generic::List_1<::UnityEngine::Transform*>* _ContentRoots; // 0x28
		::RPG::Client::DynamicPrefabLoader* _DynamicContentPrefabs; // 0x30
		::UnityEngine::GameObject* _EmptyStateNode; // 0x38
		::System::Action_2<::Class_1_5F1B5D6380BD40EB*, ::Class_1_5F1B5D6380BD40EB*>* SelectedTabPreChanging; // 0x40
		::System::Action_2<::Class_1_5F1B5D6380BD40EB*, ::Class_1_5F1B5D6380BD40EB*>* SelectedTabChanged; // 0x48
		::System::Action_1<::Class_1_5F1B5D6380BD40EB*>* LockedTabClicked; // 0x50
		::System::Action_1<::Class_1_5F1B5D6380BD40EB*>* TabAdded; // 0x58
		::System::Action_1<::Class_1_5F1B5D6380BD40EB*>* TabRemoved; // 0x60
		::System::Collections::Generic::List_1<::Class_1_5F1B5D6380BD40EB*>* HEFOLKEGHEM; // 0x68
		::System::Int32 LAKBMOEGNGD; // 0x70
		::System::Int32 CLNHCPBMEEA; // 0x74
		::System::Int32 DPNMLDLLBLA; // 0x78

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

		::Class_1_5F1B5D6380BD40EB* get_SelectedTab()
		{
			return ((::Class_1_5F1B5D6380BD40EB*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABVIEW_GET_SELECTEDTAB_OFFSET))(this);
		}

		::System::Void set_SelectedTab(::Class_1_5F1B5D6380BD40EB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5F1B5D6380BD40EB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABVIEW_SET_SELECTEDTAB_OFFSET))(this, a1);
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

		::System::Void add_SelectedTabPreChanging(::System::Action_2<::Class_1_5F1B5D6380BD40EB*, ::Class_1_5F1B5D6380BD40EB*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::Class_1_5F1B5D6380BD40EB*, ::Class_1_5F1B5D6380BD40EB*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABVIEW_ADD_SELECTEDTABPRECHANGING_OFFSET))(this, a1);
		}

		::System::Void remove_SelectedTabPreChanging(::System::Action_2<::Class_1_5F1B5D6380BD40EB*, ::Class_1_5F1B5D6380BD40EB*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::Class_1_5F1B5D6380BD40EB*, ::Class_1_5F1B5D6380BD40EB*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABVIEW_REMOVE_SELECTEDTABPRECHANGING_OFFSET))(this, a1);
		}

		::System::Void add_SelectedTabChanged(::System::Action_2<::Class_1_5F1B5D6380BD40EB*, ::Class_1_5F1B5D6380BD40EB*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::Class_1_5F1B5D6380BD40EB*, ::Class_1_5F1B5D6380BD40EB*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABVIEW_ADD_SELECTEDTABCHANGED_OFFSET))(this, a1);
		}

		::System::Void remove_SelectedTabChanged(::System::Action_2<::Class_1_5F1B5D6380BD40EB*, ::Class_1_5F1B5D6380BD40EB*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_2<::Class_1_5F1B5D6380BD40EB*, ::Class_1_5F1B5D6380BD40EB*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABVIEW_REMOVE_SELECTEDTABCHANGED_OFFSET))(this, a1);
		}

		::System::Void add_LockedTabClicked(::System::Action_1<::Class_1_5F1B5D6380BD40EB*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_1_5F1B5D6380BD40EB*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABVIEW_ADD_LOCKEDTABCLICKED_OFFSET))(this, a1);
		}

		::System::Void remove_LockedTabClicked(::System::Action_1<::Class_1_5F1B5D6380BD40EB*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_1_5F1B5D6380BD40EB*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABVIEW_REMOVE_LOCKEDTABCLICKED_OFFSET))(this, a1);
		}

		::System::Void add_TabAdded(::System::Action_1<::Class_1_5F1B5D6380BD40EB*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_1_5F1B5D6380BD40EB*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABVIEW_ADD_TABADDED_OFFSET))(this, a1);
		}

		::System::Void remove_TabAdded(::System::Action_1<::Class_1_5F1B5D6380BD40EB*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_1_5F1B5D6380BD40EB*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABVIEW_REMOVE_TABADDED_OFFSET))(this, a1);
		}

		::System::Void add_TabRemoved(::System::Action_1<::Class_1_5F1B5D6380BD40EB*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_1_5F1B5D6380BD40EB*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABVIEW_ADD_TABREMOVED_OFFSET))(this, a1);
		}

		::System::Void remove_TabRemoved(::System::Action_1<::Class_1_5F1B5D6380BD40EB*>* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_1_5F1B5D6380BD40EB*>*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABVIEW_REMOVE_TABREMOVED_OFFSET))(this, a1);
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

		::Class_0_16E4307DCC419505_1267* GetTabHeader(::System::Int32 a1)
		{
			return ((::Class_0_16E4307DCC419505_1267*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABVIEW_GETTABHEADER_OFFSET))(this, a1);
		}

		::System::Int32 IndexOf(::Class_1_5F1B5D6380BD40EB* a1)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_1_5F1B5D6380BD40EB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABVIEW_INDEXOF_OFFSET))(this, a1);
		}

		::System::Void Method_5_5022DB1DC5AA8CB4(::Class_1_5F1B5D6380BD40EB* a1)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5F1B5D6380BD40EB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABVIEW_METHOD_5_5022DB1DC5AA8CB4_OFFSET))(this, a1);
		}

		::System::Boolean SelectPrevious(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABVIEW_SELECTPREVIOUS_OFFSET))(this, a1);
		}

		::System::Boolean SelectNext(::System::Boolean a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABVIEW_SELECTNEXT_OFFSET))(this, a1);
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

		::System::Void Method_5_7BAD540DB351CAF1(::Class_1_5F1B5D6380BD40EB* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5F1B5D6380BD40EB*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABVIEW_METHOD_5_7BAD540DB351CAF1_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_01E5127E7D89F665(::Class_1_5F1B5D6380BD40EB* a1, ::System::Int32 a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5F1B5D6380BD40EB*, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABVIEW_METHOD_5_01E5127E7D89F665_OFFSET))(this, a1, a2);
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

		::System::Boolean Method_5_D03D35B622266870(::System::Int32 a1, ::System::Boolean a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABVIEW_METHOD_5_D03D35B622266870_OFFSET))(this, a1, a2);
		}

		::System::Boolean Method_5_88E73C0ABCC4541C(::System::Int32 a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPG_CLIENT_TABVIEW_METHOD_5_88E73C0ABCC4541C_OFFSET))(this, a1);
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
