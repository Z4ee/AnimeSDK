#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Level/RatingType.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_1_5DA2E7556103D5A3_344;
class Class_1_5DA2E7556103D5A3_446;
class Class_2_468A4FBF2E9F527C;
class Class_2_E0A5D94BBE3C60BB;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIHadalZone_Common_UILineupContext; }
namespace MoleMole { class UIHadalZone_RoomV2_WidgetController; }
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIHADALZONE_LINEUPV2_WIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x185C2080)
#define MOLEMOLE_UIHADALZONE_LINEUPV2_WIDGETCONTROLLER_ONSELECTAVATAR_OFFSET UNITYSDK_OFFSET(0x185C2A40)
#define MOLEMOLE_UIHADALZONE_LINEUPV2_WIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x185C2110)
#define MOLEMOLE_UIHADALZONE_LINEUPV2_WIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x185C0C30)
#define MOLEMOLE_UIHADALZONE_LINEUPV2_WIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x185C0D80)
#define MOLEMOLE_UIHADALZONE_LINEUPV2_WIDGETCONTROLLER__BINDBTNS_OFFSET UNITYSDK_OFFSET(0x185C1110)
#define MOLEMOLE_UIHADALZONE_LINEUPV2_WIDGETCONTROLLER__BINDGAMEPAD_OFFSET UNITYSDK_OFFSET(0x185C1DB0)
#define MOLEMOLE_UIHADALZONE_LINEUPV2_WIDGETCONTROLLER__CLOSEPREV_RANKINGWIDGETS_OFFSET UNITYSDK_OFFSET(0x185C2190)
#define MOLEMOLE_UIHADALZONE_LINEUPV2_WIDGETCONTROLLER__CREATERANKINGWIDGET_OFFSET UNITYSDK_OFFSET(0x185C2390)
#define MOLEMOLE_UIHADALZONE_LINEUPV2_WIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x185C2B00)
#define MOLEMOLE_UIHADALZONE_LINEUPV2_WIDGETCONTROLLER__ONCLICKEXCHANGEBTN_OFFSET UNITYSDK_OFFSET(0x185C2480)
#define MOLEMOLE_UIHADALZONE_LINEUPV2_WIDGETCONTROLLER__ONCLICKGOBTNREAL_OFFSET UNITYSDK_OFFSET(0x185C2700)
#define MOLEMOLE_UIHADALZONE_LINEUPV2_WIDGETCONTROLLER__ONCLICKGOBTN_OFFSET UNITYSDK_OFFSET(0x185C2650)
#define MOLEMOLE_UIHADALZONE_LINEUPV2_WIDGETCONTROLLER__REFRESHREADYSTATUS_OFFSET UNITYSDK_OFFSET(0x185C1FB0)
#define MOLEMOLE_UIHADALZONE_LINEUPV2_WIDGETCONTROLLER__UPDATEINFO_OFFSET UNITYSDK_OFFSET(0x185C12D0)
#define MOLEMOLE_UIHADALZONE_LINEUPV2_WIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x185C3000)
#define MOLEMOLE_UIHADALZONE_LINEUPV2_WIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x185C3090)
#define MOLEMOLE_UIHADALZONE_LINEUPV2_WIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x185C3120)
#define MOLEMOLE_UIHADALZONE_LINEUPV2_WIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x185C31B0)
#define MOLEMOLE_UIHADALZONE_LINEUPV2_WIDGETCONTROLLER___BINDGAMEPAD_B__23_1_OFFSET UNITYSDK_OFFSET(0x185C2F40)
#define MOLEMOLE_UIHADALZONE_LINEUPV2_WIDGETCONTROLLER___BINDGAMEPAD_G___GETSELECTEDROOM_23_0_OFFSET UNITYSDK_OFFSET(0x185C2D80)
#define MOLEMOLE_UIHADALZONE_LINEUPV2_WIDGETCONTROLLER___ONCLICKEXCHANGEBTN_B__16_0_OFFSET UNITYSDK_OFFSET(0x185C2C40)

namespace MoleMole
{
	inline static constexpr unsigned int UIHadalZone_LineupV2_WidgetController_TypeDefinitionIndex = 63836;

	class UIHadalZone_LineupV2_WidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_E0A5D94BBE3C60BB* _view; // 0x2C0
		::MoleMole::UIHadalZone_Common_UILineupContext* _curCtx; // 0x2C8
		::System::Int32 _rankTag; // 0x2D0
		::System::Int32 _isSelectTag; // 0x2D4
		::System::Collections::Generic::List_1<::MoleMole::UIWidgetController*>* _prevRankingRowWidgetControllers; // 0x2D8
		::System::Collections::Generic::List_1<::MoleMole::UIWidgetController*>* _prevRoomWidgetControllers; // 0x2E0
		::Class_1_5DA2E7556103D5A3_344* _curLayerInfo; // 0x2E8
		::Class_2_468A4FBF2E9F527C* _hadalZoneModel; // 0x2F0

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

		::System::Void _CreateRankingWidget(::MoleMole::Level::RatingType type, ::Class_1_5DA2E7556103D5A3_446* zoneInfo)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Level::RatingType, ::Class_1_5DA2E7556103D5A3_446*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LINEUPV2_WIDGETCONTROLLER__CREATERANKINGWIDGET_OFFSET))(this, type, zoneInfo);
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

		::System::Void __OnClickExchangeBtn_b__16_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LINEUPV2_WIDGETCONTROLLER___ONCLICKEXCHANGEBTN_B__16_0_OFFSET))(this);
		}

		::MoleMole::UIHadalZone_RoomV2_WidgetController* __BindGamepad_g___GetSelectedRoom_23_0()
		{
			return ((::MoleMole::UIHadalZone_RoomV2_WidgetController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LINEUPV2_WIDGETCONTROLLER___BINDGAMEPAD_G___GETSELECTEDROOM_23_0_OFFSET))(this);
		}

		::System::Void __BindGamepad_b__23_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONE_LINEUPV2_WIDGETCONTROLLER___BINDGAMEPAD_B__23_1_OFFSET))(this);
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
