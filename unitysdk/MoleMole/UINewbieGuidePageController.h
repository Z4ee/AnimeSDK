#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_2BDDF3B9890D9994.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_1_216863A8423A8A1B;
class Class_1_DAC1867109EF892E;
class Class_2_1CE79B1B60CBE0D6;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIWidgetController; }
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UINEWBIEGUIDEPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x184F7F10)
#define MOLEMOLE_UINEWBIEGUIDEPAGECONTROLLER_ONCLICKBACKBTN_OFFSET UNITYSDK_OFFSET(0x1842E080)
#define MOLEMOLE_UINEWBIEGUIDEPAGECONTROLLER_ONCLICKJUMPLEVELREWARDPAGE_OFFSET UNITYSDK_OFFSET(0x1842DB60)
#define MOLEMOLE_UINEWBIEGUIDEPAGECONTROLLER_ONCLICKOPENEXPSTRONGERDIALOG_OFFSET UNITYSDK_OFFSET(0x1842DEA0)
#define MOLEMOLE_UINEWBIEGUIDEPAGECONTROLLER_ONCLICKOPENFILMSTRONGERDIALOG_OFFSET UNITYSDK_OFFSET(0x1842DCC0)
#define MOLEMOLE_UINEWBIEGUIDEPAGECONTROLLER_ONCLICKSWITCHROLE_OFFSET UNITYSDK_OFFSET(0x184F9600)
#define MOLEMOLE_UINEWBIEGUIDEPAGECONTROLLER_ONCLICKSWTICHMISSION_OFFSET UNITYSDK_OFFSET(0x184F97F0)
#define MOLEMOLE_UINEWBIEGUIDEPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x184F7F20)
#define MOLEMOLE_UINEWBIEGUIDEPAGECONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0x184F8AE0)
#define MOLEMOLE_UINEWBIEGUIDEPAGECONTROLLER_ONNEWBIEGUIDEWELFARE_OFFSET UNITYSDK_OFFSET(0x184F9450)
#define MOLEMOLE_UINEWBIEGUIDEPAGECONTROLLER_ONQUESTREWARDGET_OFFSET UNITYSDK_OFFSET(0x184F9590)
#define MOLEMOLE_UINEWBIEGUIDEPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x184F8A90)
#define MOLEMOLE_UINEWBIEGUIDEPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x184F8B40)
#define MOLEMOLE_UINEWBIEGUIDEPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x184F7FB0)
#define MOLEMOLE_UINEWBIEGUIDEPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x184F86A0)
#define MOLEMOLE_UINEWBIEGUIDEPAGECONTROLLER_OPENINITSELECTITEM_OFFSET UNITYSDK_OFFSET(0x184F88D0)
#define MOLEMOLE_UINEWBIEGUIDEPAGECONTROLLER_REFRESHNOWSHOWWIDGET_OFFSET UNITYSDK_OFFSET(0x184F9520)
#define MOLEMOLE_UINEWBIEGUIDEPAGECONTROLLER_SETCONSOLEBTNSTATE_OFFSET UNITYSDK_OFFSET(0x1842E100)
#define MOLEMOLE_UINEWBIEGUIDEPAGECONTROLLER_SWITCHSHOWMISSIONLIST_OFFSET UNITYSDK_OFFSET(0x184F8BB0)
#define MOLEMOLE_UINEWBIEGUIDEPAGECONTROLLER_SWITCHSHOWROLECHOOSE_OFFSET UNITYSDK_OFFSET(0x184F9020)
#define MOLEMOLE_UINEWBIEGUIDEPAGECONTROLLER_TRYRESTORESELECTPAGE_OFFSET UNITYSDK_OFFSET(0x1842DA70)
#define MOLEMOLE_UINEWBIEGUIDEPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1842E1E0)
#define MOLEMOLE_UINEWBIEGUIDEPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1842E1F0)
#define MOLEMOLE_UINEWBIEGUIDEPAGECONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0x1842E280)
#define MOLEMOLE_UINEWBIEGUIDEPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1842E310)
#define MOLEMOLE_UINEWBIEGUIDEPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1842E320)
#define MOLEMOLE_UINEWBIEGUIDEPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1842E330)
#define MOLEMOLE_UINEWBIEGUIDEPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1842E340)

namespace MoleMole
{
	inline static constexpr unsigned int UINewbieGuidePageController_TypeDefinitionIndex = 58883;

	class UINewbieGuidePageController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_1CE79B1B60CBE0D6* _view; // 0x318
		::System::Collections::Generic::List_1<::Class_1_DAC1867109EF892E*>* tabDataList; // 0x320
		::MoleMole::UIWidgetController* nowShowWidget; // 0x328
		::System::Collections::Generic::Dictionary_2<::Enum_3_2BDDF3B9890D9994, ::Class_1_216863A8423A8A1B*>* widgetDict; // 0x330
		::Enum_3_2BDDF3B9890D9994 nowShowType; // 0x338
		::System::Int32 _returnRoleIndex; // 0x33C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDEPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDEPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDEPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDEPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDEPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDEPAGECONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDEPAGECONTROLLER_ONHIDE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDEPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OpenInitSelectItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDEPAGECONTROLLER_OPENINITSELECTITEM_OFFSET))(this);
		}

		::System::Void OnNewbieGuideWelfare(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDEPAGECONTROLLER_ONNEWBIEGUIDEWELFARE_OFFSET))(this, args);
		}

		::System::Void OnQuestRewardGet(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDEPAGECONTROLLER_ONQUESTREWARDGET_OFFSET))(this, args);
		}

		::System::Void RefreshNowShowWidget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDEPAGECONTROLLER_REFRESHNOWSHOWWIDGET_OFFSET))(this);
		}

		::System::Void OnClickSwitchRole()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDEPAGECONTROLLER_ONCLICKSWITCHROLE_OFFSET))(this);
		}

		::System::Void OnClickSwtichMission()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDEPAGECONTROLLER_ONCLICKSWTICHMISSION_OFFSET))(this);
		}

		::System::Void SwitchShowRoleChoose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDEPAGECONTROLLER_SWITCHSHOWROLECHOOSE_OFFSET))(this);
		}

		::System::Void SwitchShowMissionList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDEPAGECONTROLLER_SWITCHSHOWMISSIONLIST_OFFSET))(this);
		}

		::System::Void TryRestoreSelectPage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDEPAGECONTROLLER_TRYRESTORESELECTPAGE_OFFSET))(this);
		}

		::System::Void OnClickJumpLevelRewardPage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDEPAGECONTROLLER_ONCLICKJUMPLEVELREWARDPAGE_OFFSET))(this);
		}

		::System::Void OnClickOpenFilmStrongerDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDEPAGECONTROLLER_ONCLICKOPENFILMSTRONGERDIALOG_OFFSET))(this);
		}

		::System::Void OnClickOpenExpStrongerDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDEPAGECONTROLLER_ONCLICKOPENEXPSTRONGERDIALOG_OFFSET))(this);
		}

		::System::Void OnClickBackBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDEPAGECONTROLLER_ONCLICKBACKBTN_OFFSET))(this);
		}

		::System::Void SetConsoleBtnState(::System::Boolean consolAState, ::System::Boolean closeState, ::System::Boolean cancelState)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDEPAGECONTROLLER_SETCONSOLEBTNSTATE_OFFSET))(this, consolAState, closeState, cancelState);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDEPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDEPAGECONTROLLER___BASE_ONHIDE_OFFSET))(this);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDEPAGECONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDEPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDEPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UINEWBIEGUIDEPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
