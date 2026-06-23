#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Level/RatingType.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_1_5DA2E7556103D5A3_399;
class Class_1_5DA2E7556103D5A3_414;
class Class_2_468A4FBF2E9F527C;
class Class_2_E0A5D94BBE3C60BB;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIHadalZone_Common_UILineupContext; }
namespace MoleMole { class UIHadalZone_RoomV2_WidgetController; }
namespace MoleMole { class UILinkTermCollector; }
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIHADALZONE_LINEUPV2_WIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x171FD330)
#define MOLEMOLE_UIHADALZONE_LINEUPV2_WIDGETCONTROLLER_ONNOUNBTNCLICKED_OFFSET UNITYSDK_OFFSET(0x171FDDB0)
#define MOLEMOLE_UIHADALZONE_LINEUPV2_WIDGETCONTROLLER_ONSELECTAVATAR_OFFSET UNITYSDK_OFFSET(0x171FDCF0)
#define MOLEMOLE_UIHADALZONE_LINEUPV2_WIDGETCONTROLLER_ONTERMLINKSCHANGED_OFFSET UNITYSDK_OFFSET(0x171FDE10)
#define MOLEMOLE_UIHADALZONE_LINEUPV2_WIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x171FD3C0)
#define MOLEMOLE_UIHADALZONE_LINEUPV2_WIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x171FBEB0)
#define MOLEMOLE_UIHADALZONE_LINEUPV2_WIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x171FC020)
#define MOLEMOLE_UIHADALZONE_LINEUPV2_WIDGETCONTROLLER__BINDBTNS_OFFSET UNITYSDK_OFFSET(0x171FC3B0)
#define MOLEMOLE_UIHADALZONE_LINEUPV2_WIDGETCONTROLLER__BINDGAMEPAD_OFFSET UNITYSDK_OFFSET(0x171FD060)
#define MOLEMOLE_UIHADALZONE_LINEUPV2_WIDGETCONTROLLER__CLOSEPREV_RANKINGWIDGETS_OFFSET UNITYSDK_OFFSET(0x171FD440)
#define MOLEMOLE_UIHADALZONE_LINEUPV2_WIDGETCONTROLLER__CREATERANKINGWIDGET_OFFSET UNITYSDK_OFFSET(0x171FD630)
#define MOLEMOLE_UIHADALZONE_LINEUPV2_WIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x171FDE80)
#define MOLEMOLE_UIHADALZONE_LINEUPV2_WIDGETCONTROLLER__ONCLICKEXCHANGEBTN_OFFSET UNITYSDK_OFFSET(0x171FD720)
#define MOLEMOLE_UIHADALZONE_LINEUPV2_WIDGETCONTROLLER__ONCLICKGOBTNREAL_OFFSET UNITYSDK_OFFSET(0x171FD9B0)
#define MOLEMOLE_UIHADALZONE_LINEUPV2_WIDGETCONTROLLER__ONCLICKGOBTN_OFFSET UNITYSDK_OFFSET(0x171FD900)
#define MOLEMOLE_UIHADALZONE_LINEUPV2_WIDGETCONTROLLER__REFRESHREADYSTATUS_OFFSET UNITYSDK_OFFSET(0x171FD260)
#define MOLEMOLE_UIHADALZONE_LINEUPV2_WIDGETCONTROLLER__UPDATEINFO_OFFSET UNITYSDK_OFFSET(0x171FC570)
#define MOLEMOLE_UIHADALZONE_LINEUPV2_WIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x171FE380)
#define MOLEMOLE_UIHADALZONE_LINEUPV2_WIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x171FE410)
#define MOLEMOLE_UIHADALZONE_LINEUPV2_WIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x171FE4A0)
#define MOLEMOLE_UIHADALZONE_LINEUPV2_WIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x171FE530)
#define MOLEMOLE_UIHADALZONE_LINEUPV2_WIDGETCONTROLLER___BINDGAMEPAD_B__24_1_OFFSET UNITYSDK_OFFSET(0x171FE2C0)
#define MOLEMOLE_UIHADALZONE_LINEUPV2_WIDGETCONTROLLER___BINDGAMEPAD_G___GETSELECTEDROOM_24_0_OFFSET UNITYSDK_OFFSET(0x171FE100)
#define MOLEMOLE_UIHADALZONE_LINEUPV2_WIDGETCONTROLLER___ONCLICKEXCHANGEBTN_B__17_0_OFFSET UNITYSDK_OFFSET(0x171FDFC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHadalZone_LineupV2_WidgetController_TypeDefinitionIndex = 45814;

	class UIHadalZone_LineupV2_WidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::MoleMole::UILinkTermCollector* _termCollector; // 0x2C0
		::Class_2_E0A5D94BBE3C60BB* _view; // 0x2C8
		::MoleMole::UIHadalZone_Common_UILineupContext* _curCtx; // 0x2D0
		::System::Int32 _rankTag; // 0x2D8
		::System::Int32 _isSelectTag; // 0x2DC
		::System::Collections::Generic::List_1<::MoleMole::UIWidgetController*>* _prevRankingRowWidgetControllers; // 0x2E0
		::System::Collections::Generic::List_1<::MoleMole::UIWidgetController*>* _prevRoomWidgetControllers; // 0x2E8
		::Class_1_5DA2E7556103D5A3_414* _curLayerInfo; // 0x2F0
		::Class_2_468A4FBF2E9F527C* _hadalZoneModel; // 0x2F8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LINEUPV2_WIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LINEUPV2_WIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LINEUPV2_WIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LINEUPV2_WIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LINEUPV2_WIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void _UpdateInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LINEUPV2_WIDGETCONTROLLER__UPDATEINFO_OFFSET))(this);
		}

		::System::Void _ClosePrev_RankingWidgets(::System::Collections::Generic::List_1<::MoleMole::UIWidgetController*>* widgetControllers, ::System::Action* finish)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::UIWidgetController*>*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LINEUPV2_WIDGETCONTROLLER__CLOSEPREV_RANKINGWIDGETS_OFFSET))(this, widgetControllers, finish);
		}

		::System::Void _CreateRankingWidget(::MoleMole::Level::RatingType type, ::Class_1_5DA2E7556103D5A3_399* zoneInfo)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Level::RatingType, ::Class_1_5DA2E7556103D5A3_399*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LINEUPV2_WIDGETCONTROLLER__CREATERANKINGWIDGET_OFFSET))(this, type, zoneInfo);
		}

		::System::Void _BindBtns()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LINEUPV2_WIDGETCONTROLLER__BINDBTNS_OFFSET))(this);
		}

		::System::Void _OnClickExchangeBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LINEUPV2_WIDGETCONTROLLER__ONCLICKEXCHANGEBTN_OFFSET))(this);
		}

		::System::Void _OnClickGoBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LINEUPV2_WIDGETCONTROLLER__ONCLICKGOBTN_OFFSET))(this);
		}

		::System::Void _OnClickGoBtnReal()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LINEUPV2_WIDGETCONTROLLER__ONCLICKGOBTNREAL_OFFSET))(this);
		}

		::System::Void OnSelectAvatar(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LINEUPV2_WIDGETCONTROLLER_ONSELECTAVATAR_OFFSET))(this, args);
		}

		::System::Void _RefreshReadyStatus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LINEUPV2_WIDGETCONTROLLER__REFRESHREADYSTATUS_OFFSET))(this);
		}

		::System::Void _BindGamepad()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LINEUPV2_WIDGETCONTROLLER__BINDGAMEPAD_OFFSET))(this);
		}

		::System::Void OnNounBtnClicked()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LINEUPV2_WIDGETCONTROLLER_ONNOUNBTNCLICKED_OFFSET))(this);
		}

		::System::Void OnTermLinksChanged(::System::Boolean active)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LINEUPV2_WIDGETCONTROLLER_ONTERMLINKSCHANGED_OFFSET))(this, active);
		}

		::System::Void __OnClickExchangeBtn_b__17_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LINEUPV2_WIDGETCONTROLLER___ONCLICKEXCHANGEBTN_B__17_0_OFFSET))(this);
		}

		::MoleMole::UIHadalZone_RoomV2_WidgetController* __BindGamepad_g___GetSelectedRoom_24_0()
		{
			return ((::MoleMole::UIHadalZone_RoomV2_WidgetController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LINEUPV2_WIDGETCONTROLLER___BINDGAMEPAD_G___GETSELECTEDROOM_24_0_OFFSET))(this);
		}

		::System::Void __BindGamepad_b__24_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LINEUPV2_WIDGETCONTROLLER___BINDGAMEPAD_B__24_1_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LINEUPV2_WIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LINEUPV2_WIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LINEUPV2_WIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LINEUPV2_WIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
