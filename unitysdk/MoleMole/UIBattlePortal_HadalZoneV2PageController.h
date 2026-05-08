#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Enum_3_8E90989A26BC6232.h"
#include "unitysdk/MoleMole/UIBaseController_FadeFlag.h"
#include "unitysdk/MoleMole/UIBattlePortal_HadalZoneV2PageController_CurrentStatus.h"
#include "unitysdk/MoleMole/UIMainCityStorePageController.h"

class Class_1_5DA2E7556103D5A3_336;
class Class_1_E9529ED64113E4E9;
class Class_2_468A4FBF2E9F527C;
class Class_2_BE97744DE3DEF97D;
namespace MoleMole { class UIBattlePortal_HadalZoneV2PageController_UIBattlePortal_HadalZoneV2PageContext; }
namespace MoleMole { class UIBossChallengeBadgeRowWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIHadalZone_BgVideoConfig; }
namespace MoleMole { class UIHadalZone_Common_HadalRoomSelectContext; }
namespace MoleMole { class UIHadalZone_ImpactBattleInfo_WidgetController; }
namespace MoleMole { class UIHadalZone_ImpactBattle_LineupWidgetController; }
namespace MoleMole { class UIHadalZone_LayerV2WidgetController; }
namespace MoleMole { class UIHadalZone_LineupV2_WidgetController; }
namespace System { class String; }

#define MOLEMOLE_UIBATTLEPORTAL_HADALZONEV2PAGECONTROLLER_ENTERLAYERROOM_OFFSET UNITYSDK_OFFSET(0x14EBE980)
#define MOLEMOLE_UIBATTLEPORTAL_HADALZONEV2PAGECONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET UNITYSDK_OFFSET(0x14EBDA70)
#define MOLEMOLE_UIBATTLEPORTAL_HADALZONEV2PAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x14EBDA80)
#define MOLEMOLE_UIBATTLEPORTAL_HADALZONEV2PAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x14EBDA90)
#define MOLEMOLE_UIBATTLEPORTAL_HADALZONEV2PAGECONTROLLER_ONFADEPLAYFINISH_OFFSET UNITYSDK_OFFSET(0x14EBF360)
#define MOLEMOLE_UIBATTLEPORTAL_HADALZONEV2PAGECONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x14EBE5B0)
#define MOLEMOLE_UIBATTLEPORTAL_HADALZONEV2PAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x14EBE610)
#define MOLEMOLE_UIBATTLEPORTAL_HADALZONEV2PAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x14EBDB20)
#define MOLEMOLE_UIBATTLEPORTAL_HADALZONEV2PAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x14EBDC20)
#define MOLEMOLE_UIBATTLEPORTAL_HADALZONEV2PAGECONTROLLER_OPENHISTORYPOPWINDOW_OFFSET UNITYSDK_OFFSET(0x14EBFBF0)
#define MOLEMOLE_UIBATTLEPORTAL_HADALZONEV2PAGECONTROLLER_OPENSPECIALLAYERROOMLINEUPWIDGET_OFFSET UNITYSDK_OFFSET(0x14EBFA90)
#define MOLEMOLE_UIBATTLEPORTAL_HADALZONEV2PAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x14EBFDF0)
#define MOLEMOLE_UIBATTLEPORTAL_HADALZONEV2PAGECONTROLLER__ONCLICKBACKBTN_OFFSET UNITYSDK_OFFSET(0x14EBF4D0)
#define MOLEMOLE_UIBATTLEPORTAL_HADALZONEV2PAGECONTROLLER__ONCLICKENTERTOLAYERROOM_OFFSET UNITYSDK_OFFSET(0x14EBF470)
#define MOLEMOLE_UIBATTLEPORTAL_HADALZONEV2PAGECONTROLLER__ONSWITCHZONE_OFFSET UNITYSDK_OFFSET(0x14EBF410)
#define MOLEMOLE_UIBATTLEPORTAL_HADALZONEV2PAGECONTROLLER__PLAYBACKGROUNDVIDEO_OFFSET UNITYSDK_OFFSET(0x14EBE6F0)
#define MOLEMOLE_UIBATTLEPORTAL_HADALZONEV2PAGECONTROLLER__REFRESHMEDALANDHISTORYFORZONE_OFFSET UNITYSDK_OFFSET(0x14EBF130)
#define MOLEMOLE_UIBATTLEPORTAL_HADALZONEV2PAGECONTROLLER__UPDATECONTENTS_OFFSET UNITYSDK_OFFSET(0x14EBDF70)
#define MOLEMOLE_UIBATTLEPORTAL_HADALZONEV2PAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x14EC0340)
#define MOLEMOLE_UIBATTLEPORTAL_HADALZONEV2PAGECONTROLLER___BASE_ONFADEPLAYFINISH_OFFSET UNITYSDK_OFFSET(0x14EC03D0)
#define MOLEMOLE_UIBATTLEPORTAL_HADALZONEV2PAGECONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x14EC03E0)
#define MOLEMOLE_UIBATTLEPORTAL_HADALZONEV2PAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x14EC03F0)
#define MOLEMOLE_UIBATTLEPORTAL_HADALZONEV2PAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x14EC0400)
#define MOLEMOLE_UIBATTLEPORTAL_HADALZONEV2PAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x14EC0410)
#define MOLEMOLE_UIBATTLEPORTAL_HADALZONEV2PAGECONTROLLER___ONCLICKBACKBTN_B__27_0_OFFSET UNITYSDK_OFFSET(0x14EBFF00)
#define MOLEMOLE_UIBATTLEPORTAL_HADALZONEV2PAGECONTROLLER___ONCLICKBACKBTN_B__27_1_OFFSET UNITYSDK_OFFSET(0x14EC00D0)
#define MOLEMOLE_UIBATTLEPORTAL_HADALZONEV2PAGECONTROLLER___ONCLICKBACKBTN_B__27_2_OFFSET UNITYSDK_OFFSET(0x14EC0170)
#define MOLEMOLE_UIBATTLEPORTAL_HADALZONEV2PAGECONTROLLER___UPDATECONTENTS_B__22_0_OFFSET UNITYSDK_OFFSET(0x14EBFE00)

namespace MoleMole
{
	inline static constexpr unsigned int UIBattlePortal_HadalZoneV2PageController_TypeDefinitionIndex = 65972;

	class UIBattlePortal_HadalZoneV2PageController : public ::MoleMole::UIMainCityStorePageController
	{
	public:
		::Class_1_E9529ED64113E4E9* _playerHelper; // 0x320
		::Class_2_BE97744DE3DEF97D* _view; // 0x328
		::MoleMole::UIBattlePortal_HadalZoneV2PageController_CurrentStatus _currentStatus; // 0x330
		::MoleMole::UIHadalZone_BgVideoConfig* _uiVideoConfig; // 0x338
		::MoleMole::UIBattlePortal_HadalZoneV2PageController_UIBattlePortal_HadalZoneV2PageContext* _uiCtx; // 0x340
		::Class_2_468A4FBF2E9F527C* _hadalZoneModel; // 0x348
		::MoleMole::UIHadalZone_LayerV2WidgetController* _layerCtrl; // 0x350
		::MoleMole::UIHadalZone_LineupV2_WidgetController* _lineupCtrl; // 0x358
		::MoleMole::UIHadalZone_ImpactBattleInfo_WidgetController* _impactBattleInfoCtrl; // 0x360
		::MoleMole::UIHadalZone_ImpactBattle_LineupWidgetController* _impactBattleLineupCtrl; // 0x368
		::MoleMole::UIBossChallengeBadgeRowWidgetController* _badgeRow; // 0x370

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBATTLEPORTAL_HADALZONEV2PAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_8E90989A26BC6232 get_HotSwitchRootLayerState()
		{
			return ((::Enum_3_8E90989A26BC6232(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBATTLEPORTAL_HADALZONEV2PAGECONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBATTLEPORTAL_HADALZONEV2PAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBATTLEPORTAL_HADALZONEV2PAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBATTLEPORTAL_HADALZONEV2PAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBATTLEPORTAL_HADALZONEV2PAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBATTLEPORTAL_HADALZONEV2PAGECONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBATTLEPORTAL_HADALZONEV2PAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void _PlayBackgroundVideo(::System::Int32 zoneID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBATTLEPORTAL_HADALZONEV2PAGECONTROLLER__PLAYBACKGROUNDVIDEO_OFFSET))(this, zoneID);
		}

		::System::Void _UpdateContents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBATTLEPORTAL_HADALZONEV2PAGECONTROLLER__UPDATECONTENTS_OFFSET))(this);
		}

		::System::Void OnFadePlayFinish(::MoleMole::UIBaseController_FadeFlag flag, ::System::String* animName)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController_FadeFlag, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBATTLEPORTAL_HADALZONEV2PAGECONTROLLER_ONFADEPLAYFINISH_OFFSET))(this, flag, animName);
		}

		::System::Void _OnSwitchZone(::System::Int32 zoneID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBATTLEPORTAL_HADALZONEV2PAGECONTROLLER__ONSWITCHZONE_OFFSET))(this, zoneID);
		}

		::System::Void _OnClickEnterToLayerRoom(::Class_1_5DA2E7556103D5A3_336* zoneInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5DA2E7556103D5A3_336*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBATTLEPORTAL_HADALZONEV2PAGECONTROLLER__ONCLICKENTERTOLAYERROOM_OFFSET))(this, zoneInfo);
		}

		::System::Void EnterLayerRoom(::Class_1_5DA2E7556103D5A3_336* zoneInfo)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_5DA2E7556103D5A3_336*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBATTLEPORTAL_HADALZONEV2PAGECONTROLLER_ENTERLAYERROOM_OFFSET))(this, zoneInfo);
		}

		::System::Void _OnClickBackBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBATTLEPORTAL_HADALZONEV2PAGECONTROLLER__ONCLICKBACKBTN_OFFSET))(this);
		}

		::System::Void OpenSpecialLayerRoomLineUpWidget(::MoleMole::UIHadalZone_Common_HadalRoomSelectContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIHadalZone_Common_HadalRoomSelectContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBATTLEPORTAL_HADALZONEV2PAGECONTROLLER_OPENSPECIALLAYERROOMLINEUPWIDGET_OFFSET))(this, context);
		}

		::System::Void _RefreshMedalAndHistoryForZone(::System::Int32 zoneID, ::System::Boolean show)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBATTLEPORTAL_HADALZONEV2PAGECONTROLLER__REFRESHMEDALANDHISTORYFORZONE_OFFSET))(this, zoneID, show);
		}

		::System::Void OpenHistoryPopWindow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBATTLEPORTAL_HADALZONEV2PAGECONTROLLER_OPENHISTORYPOPWINDOW_OFFSET))(this);
		}

		::System::Void __UpdateContents_b__22_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBATTLEPORTAL_HADALZONEV2PAGECONTROLLER___UPDATECONTENTS_B__22_0_OFFSET))(this);
		}

		::System::Void __OnClickBackBtn_b__27_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBATTLEPORTAL_HADALZONEV2PAGECONTROLLER___ONCLICKBACKBTN_B__27_0_OFFSET))(this);
		}

		::System::Void __OnClickBackBtn_b__27_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBATTLEPORTAL_HADALZONEV2PAGECONTROLLER___ONCLICKBACKBTN_B__27_1_OFFSET))(this);
		}

		::System::Void __OnClickBackBtn_b__27_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBATTLEPORTAL_HADALZONEV2PAGECONTROLLER___ONCLICKBACKBTN_B__27_2_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBATTLEPORTAL_HADALZONEV2PAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnFadePlayFinish(::MoleMole::UIBaseController_FadeFlag P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController_FadeFlag, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBATTLEPORTAL_HADALZONEV2PAGECONTROLLER___BASE_ONFADEPLAYFINISH_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBATTLEPORTAL_HADALZONEV2PAGECONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBATTLEPORTAL_HADALZONEV2PAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBATTLEPORTAL_HADALZONEV2PAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBATTLEPORTAL_HADALZONEV2PAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
