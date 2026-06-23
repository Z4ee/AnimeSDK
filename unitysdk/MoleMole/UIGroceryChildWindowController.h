#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_1_7A0999DD62F5BF03;
class Class_1_9631DA8CB6F86BD4;
class Class_1_C8489A0F22314D2F;
class Class_1_F57D00757009D1EB;
class Class_2_8FC1A7735F246865;
class Class_2_A3D4B0969489E4FC;
class Class_2_A3D4B0969489E4FC_Class_2_024E742EE0CA8F62;
class Class_2_A3D4B0969489E4FC_Class_2_CBE3775889953650;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGroceryChildContext; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define MOLEMOLE_UIGROCERYCHILDWINDOWCONTROLLER_COUNTDOWN_OFFSET UNITYSDK_OFFSET(0x186CBC10)
#define MOLEMOLE_UIGROCERYCHILDWINDOWCONTROLLER_DOBUY_OFFSET UNITYSDK_OFFSET(0x186CA6B0)
#define MOLEMOLE_UIGROCERYCHILDWINDOWCONTROLLER_GETITEMGAMEPADLIST_OFFSET UNITYSDK_OFFSET(0x186CC3F0)
#define MOLEMOLE_UIGROCERYCHILDWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x186C9930)
#define MOLEMOLE_UIGROCERYCHILDWINDOWCONTROLLER_INITSCROLLVIEW_OFFSET UNITYSDK_OFFSET(0x186CA2E0)
#define MOLEMOLE_UIGROCERYCHILDWINDOWCONTROLLER_INITTABBTNGROUP_OFFSET UNITYSDK_OFFSET(0x186C9EB0)
#define MOLEMOLE_UIGROCERYCHILDWINDOWCONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0x186C9A70)
#define MOLEMOLE_UIGROCERYCHILDWINDOWCONTROLLER_ONCLICKTABLEFT_OFFSET UNITYSDK_OFFSET(0x186CAB70)
#define MOLEMOLE_UIGROCERYCHILDWINDOWCONTROLLER_ONCLICKTABRIGHT_OFFSET UNITYSDK_OFFSET(0x186CAD00)
#define MOLEMOLE_UIGROCERYCHILDWINDOWCONTROLLER_ONCLICKTAB_OFFSET UNITYSDK_OFFSET(0x186CABD0)
#define MOLEMOLE_UIGROCERYCHILDWINDOWCONTROLLER_ONCOSTREFRESHSHOP_OFFSET UNITYSDK_OFFSET(0x186CBD10)
#define MOLEMOLE_UIGROCERYCHILDWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x186CA170)
#define MOLEMOLE_UIGROCERYCHILDWINDOWCONTROLLER_ONTABDATAUPDATE_OFFSET UNITYSDK_OFFSET(0x186CAD70)
#define MOLEMOLE_UIGROCERYCHILDWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x186CA200)
#define MOLEMOLE_UIGROCERYCHILDWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x186C9940)
#define MOLEMOLE_UIGROCERYCHILDWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x186C9D60)
#define MOLEMOLE_UIGROCERYCHILDWINDOWCONTROLLER_REQUESTNEWTIME_OFFSET UNITYSDK_OFFSET(0x186CBCA0)
#define MOLEMOLE_UIGROCERYCHILDWINDOWCONTROLLER_SELECTEDGOODS_OFFSET UNITYSDK_OFFSET(0x186CA5B0)
#define MOLEMOLE_UIGROCERYCHILDWINDOWCONTROLLER_SETCURGOODSLIST_OFFSET UNITYSDK_OFFSET(0x186CB100)
#define MOLEMOLE_UIGROCERYCHILDWINDOWCONTROLLER_SETLOCK_OFFSET UNITYSDK_OFFSET(0x186CA4B0)
#define MOLEMOLE_UIGROCERYCHILDWINDOWCONTROLLER_SHOWCOUNTDOWN_OFFSET UNITYSDK_OFFSET(0x186CB850)
#define MOLEMOLE_UIGROCERYCHILDWINDOWCONTROLLER_SHOWGOODSLOCKTIPS_OFFSET UNITYSDK_OFFSET(0x186CA8C0)
#define MOLEMOLE_UIGROCERYCHILDWINDOWCONTROLLER_SHOWREFRESH_OFFSET UNITYSDK_OFFSET(0x186CB5F0)
#define MOLEMOLE_UIGROCERYCHILDWINDOWCONTROLLER_SHOWTABLOCKTIPS_OFFSET UNITYSDK_OFFSET(0x186CAED0)
#define MOLEMOLE_UIGROCERYCHILDWINDOWCONTROLLER_SHOWTAB_OFFSET UNITYSDK_OFFSET(0x186CB3F0)
#define MOLEMOLE_UIGROCERYCHILDWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x186CC450)
#define MOLEMOLE_UIGROCERYCHILDWINDOWCONTROLLER__INITSCROLLVIEW_B__20_0_OFFSET UNITYSDK_OFFSET(0x186CC5D0)
#define MOLEMOLE_UIGROCERYCHILDWINDOWCONTROLLER__INITVIEW_B__19_0_OFFSET UNITYSDK_OFFSET(0x186CC4D0)
#define MOLEMOLE_UIGROCERYCHILDWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x186CC6B0)
#define MOLEMOLE_UIGROCERYCHILDWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x186CC740)
#define MOLEMOLE_UIGROCERYCHILDWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x186CC750)
#define MOLEMOLE_UIGROCERYCHILDWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x186CC760)

namespace MoleMole
{
	inline static constexpr unsigned int UIGroceryChildWindowController_TypeDefinitionIndex = 76221;

	class UIGroceryChildWindowController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_8FC1A7735F246865* _shopModel; // 0x318
		::Class_1_C8489A0F22314D2F* _shopEntity; // 0x320
		::System::Collections::Generic::List_1<::Class_1_7A0999DD62F5BF03*>* _shopTabList; // 0x328
		::System::Collections::Generic::List_1<::Class_1_F57D00757009D1EB*>* _curGoodsList; // 0x330
		::System::Int32 _curIndex; // 0x338
		::System::Int32 _curGoodsCount; // 0x33C
		::System::Int32 _curSelectGoodsIndex; // 0x340
		::Class_2_A3D4B0969489E4FC* _view; // 0x348
		::Class_2_A3D4B0969489E4FC_Class_2_024E742EE0CA8F62* _refreshView; // 0x350
		::Class_2_A3D4B0969489E4FC_Class_2_CBE3775889953650* _tabBtnView; // 0x358
		::UnityEngine::UI::Extension::UITimeWidget* _timeWidget; // 0x360
		::Foundation::Coroutine::CoroutineHandle _coroutine; // 0x368
		::MoleMole::UIGroceryChildContext* _context; // 0x370

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGROCERYCHILDWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGROCERYCHILDWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGROCERYCHILDWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGROCERYCHILDWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGROCERYCHILDWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGROCERYCHILDWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGROCERYCHILDWINDOWCONTROLLER_INITVIEW_OFFSET))(this);
		}

		::System::Void InitScrollView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGROCERYCHILDWINDOWCONTROLLER_INITSCROLLVIEW_OFFSET))(this);
		}

		::System::Void InitTabBtnGroup(::System::Collections::Generic::List_1<::Class_1_7A0999DD62F5BF03*>* tabDataList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_7A0999DD62F5BF03*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGROCERYCHILDWINDOWCONTROLLER_INITTABBTNGROUP_OFFSET))(this, tabDataList);
		}

		::System::Void SelectedGoods(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGROCERYCHILDWINDOWCONTROLLER_SELECTEDGOODS_OFFSET))(this, index);
		}

		::System::Void DoBuy(::Class_1_9631DA8CB6F86BD4* param)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_9631DA8CB6F86BD4*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGROCERYCHILDWINDOWCONTROLLER_DOBUY_OFFSET))(this, param);
		}

		::System::Void ShowGoodsLockTips(::Class_1_F57D00757009D1EB* goods)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F57D00757009D1EB*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGROCERYCHILDWINDOWCONTROLLER_SHOWGOODSLOCKTIPS_OFFSET))(this, goods);
		}

		::System::Void OnClickTabLeft()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGROCERYCHILDWINDOWCONTROLLER_ONCLICKTABLEFT_OFFSET))(this);
		}

		::System::Void OnClickTabRight()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGROCERYCHILDWINDOWCONTROLLER_ONCLICKTABRIGHT_OFFSET))(this);
		}

		::System::Void OnClickTab(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGROCERYCHILDWINDOWCONTROLLER_ONCLICKTAB_OFFSET))(this, index);
		}

		::System::Void SetCurGoodsList(::Class_1_7A0999DD62F5BF03* tabData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7A0999DD62F5BF03*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGROCERYCHILDWINDOWCONTROLLER_SETCURGOODSLIST_OFFSET))(this, tabData);
		}

		::System::Void ShowTab(::Class_1_7A0999DD62F5BF03* tabData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7A0999DD62F5BF03*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGROCERYCHILDWINDOWCONTROLLER_SHOWTAB_OFFSET))(this, tabData);
		}

		::System::Void ShowTabLockTips(::Class_1_7A0999DD62F5BF03* tabData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7A0999DD62F5BF03*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGROCERYCHILDWINDOWCONTROLLER_SHOWTABLOCKTIPS_OFFSET))(this, tabData);
		}

		::System::Void ShowRefresh(::Class_1_7A0999DD62F5BF03* tabData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7A0999DD62F5BF03*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGROCERYCHILDWINDOWCONTROLLER_SHOWREFRESH_OFFSET))(this, tabData);
		}

		::System::Void ShowCountDown(::Class_1_7A0999DD62F5BF03* tabData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7A0999DD62F5BF03*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGROCERYCHILDWINDOWCONTROLLER_SHOWCOUNTDOWN_OFFSET))(this, tabData);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Single>* CountDown(::Class_1_7A0999DD62F5BF03* tabData)
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::Class_1_7A0999DD62F5BF03*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGROCERYCHILDWINDOWCONTROLLER_COUNTDOWN_OFFSET))(this, tabData);
		}

		::System::Void RequestNewTime(::Class_1_7A0999DD62F5BF03* tabData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7A0999DD62F5BF03*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGROCERYCHILDWINDOWCONTROLLER_REQUESTNEWTIME_OFFSET))(this, tabData);
		}

		::System::Void SetLock(::System::Int32 index, ::Class_1_7A0999DD62F5BF03* tabData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Class_1_7A0999DD62F5BF03*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGROCERYCHILDWINDOWCONTROLLER_SETLOCK_OFFSET))(this, index, tabData);
		}

		::System::Void OnTabDataUpdate(::Class_1_7A0999DD62F5BF03* tabData, ::System::Boolean refreshScrollView)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7A0999DD62F5BF03*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGROCERYCHILDWINDOWCONTROLLER_ONTABDATAUPDATE_OFFSET))(this, tabData, refreshScrollView);
		}

		::System::Void OnCostRefreshShop()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGROCERYCHILDWINDOWCONTROLLER_ONCOSTREFRESHSHOP_OFFSET))(this);
		}

		::MoleMole::MonoGamepadModule* GetItemGamepadList()
		{
			return ((::MoleMole::MonoGamepadModule*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGROCERYCHILDWINDOWCONTROLLER_GETITEMGAMEPADLIST_OFFSET))(this);
		}

		::System::Void _InitView_b__19_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGROCERYCHILDWINDOWCONTROLLER__INITVIEW_B__19_0_OFFSET))(this);
		}

		::MoleMole::ScrollViewItemWidgetController* _InitScrollView_b__20_0(::System::Func_1<::MoleMole::UIControlReference*>* reference)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGROCERYCHILDWINDOWCONTROLLER__INITSCROLLVIEW_B__20_0_OFFSET))(this, reference);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGROCERYCHILDWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGROCERYCHILDWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGROCERYCHILDWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGROCERYCHILDWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
