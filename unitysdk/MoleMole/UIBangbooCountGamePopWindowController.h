#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_7D59F735ACB38970_Enum_3_6E0E8267CDDC65CF.h"
#include "unitysdk/Enum_3_0F5D0B7399907DA1_1.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIBaseController_FadeFlag.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/Struct_2_2140EBF640BC9674_Enum_3_542CC61461ECAA81.h"

class Class_1_8289F2785D9AA990;
class Class_2_096CDC88DB8402A1;
class Class_2_79F6D62CE30E3F8E_124;
namespace MoleMole { class UIBangbooCountGameContext; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralKeyPanelWidgetController; }
namespace MoleMole { class UIGeneralNewsBubbleRowWidgetController; }
namespace MoleMole { class UIGeneralNewsBubbleWidgetController; }
namespace MoleMole { class UIInLevelCountDownUIChildWindowController; }
namespace MoleMole { class UIMissionTipsRowWidgetController; }
namespace MoleMole { class UIPhotoModePlayerMoveChildWindowController; }
namespace System { class String; }

#define MOLEMOLE_UIBANGBOOCOUNTGAMEPOPWINDOWCONTROLLER_GAMEFINISH_OFFSET UNITYSDK_OFFSET(0x1868D240)
#define MOLEMOLE_UIBANGBOOCOUNTGAMEPOPWINDOWCONTROLLER_GETBUBBLEWIDGET_OFFSET UNITYSDK_OFFSET(0x1868BA00)
#define MOLEMOLE_UIBANGBOOCOUNTGAMEPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x1868AD70)
#define MOLEMOLE_UIBANGBOOCOUNTGAMEPOPWINDOWCONTROLLER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x1868CED0)
#define MOLEMOLE_UIBANGBOOCOUNTGAMEPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1868BCF0)
#define MOLEMOLE_UIBANGBOOCOUNTGAMEPOPWINDOWCONTROLLER_ONFADEPLAYFINISH_OFFSET UNITYSDK_OFFSET(0x1868C7C0)
#define MOLEMOLE_UIBANGBOOCOUNTGAMEPOPWINDOWCONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0x1868C9E0)
#define MOLEMOLE_UIBANGBOOCOUNTGAMEPOPWINDOWCONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x1868CC30)
#define MOLEMOLE_UIBANGBOOCOUNTGAMEPOPWINDOWCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1868C150)
#define MOLEMOLE_UIBANGBOOCOUNTGAMEPOPWINDOWCONTROLLER_ONTIMEOUT_OFFSET UNITYSDK_OFFSET(0x1868D0E0)
#define MOLEMOLE_UIBANGBOOCOUNTGAMEPOPWINDOWCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x1868BD80)
#define MOLEMOLE_UIBANGBOOCOUNTGAMEPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1868BFB0)
#define MOLEMOLE_UIBANGBOOCOUNTGAMEPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1868AD80)
#define MOLEMOLE_UIBANGBOOCOUNTGAMEPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1868B450)
#define MOLEMOLE_UIBANGBOOCOUNTGAMEPOPWINDOWCONTROLLER_OPENBUBBLEROW_OFFSET UNITYSDK_OFFSET(0x1868BBC0)
#define MOLEMOLE_UIBANGBOOCOUNTGAMEPOPWINDOWCONTROLLER_OPENTIMECOUNTDOWNUI_OFFSET UNITYSDK_OFFSET(0x1868C3C0)
#define MOLEMOLE_UIBANGBOOCOUNTGAMEPOPWINDOWCONTROLLER_RECORDGAMETIME_OFFSET UNITYSDK_OFFSET(0x1868D470)
#define MOLEMOLE_UIBANGBOOCOUNTGAMEPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1868D5B0)
#define MOLEMOLE_UIBANGBOOCOUNTGAMEPOPWINDOWCONTROLLER__GAMEFINISH_B__31_0_OFFSET UNITYSDK_OFFSET(0x1868D610)
#define MOLEMOLE_UIBANGBOOCOUNTGAMEPOPWINDOWCONTROLLER__GAMEFINISH_B__31_1_OFFSET UNITYSDK_OFFSET(0x1868D690)
#define MOLEMOLE_UIBANGBOOCOUNTGAMEPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1868D7A0)
#define MOLEMOLE_UIBANGBOOCOUNTGAMEPOPWINDOWCONTROLLER___BASE_ONFADEPLAYFINISH_OFFSET UNITYSDK_OFFSET(0x1868D830)
#define MOLEMOLE_UIBANGBOOCOUNTGAMEPOPWINDOWCONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0x1868D840)
#define MOLEMOLE_UIBANGBOOCOUNTGAMEPOPWINDOWCONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x1868D8D0)
#define MOLEMOLE_UIBANGBOOCOUNTGAMEPOPWINDOWCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1868D900)
#define MOLEMOLE_UIBANGBOOCOUNTGAMEPOPWINDOWCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x1868D910)
#define MOLEMOLE_UIBANGBOOCOUNTGAMEPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1868D9D0)
#define MOLEMOLE_UIBANGBOOCOUNTGAMEPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1868D9E0)
#define MOLEMOLE_UIBANGBOOCOUNTGAMEPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1868D9F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangbooCountGamePopWindowController_TypeDefinitionIndex = 58818;

	class UIBangbooCountGamePopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_79F6D62CE30E3F8E_124* _view; // 0x318
		::MoleMole::UIBangbooCountGameContext* _context; // 0x320
		::MoleMole::UIPhotoModePlayerMoveChildWindowController* _joystickCtrl; // 0x328
		::Class_2_096CDC88DB8402A1* _cameraControl; // 0x330
		::MoleMole::UIInLevelCountDownUIChildWindowController* _countDownController; // 0x338
		::System::String* _lastBGMSpecialState; // 0x340
		::Enum_3_0F5D0B7399907DA1_1 _result; // 0x348
		::MoleMole::UIMissionTipsRowWidgetController* _questTipsRowWidget; // 0x350
		::System::Int32 _mainCityGameUIConfigGameID; // 0x358
		::System::Single _gameStartTime; // 0x35C
		::MoleMole::UIGeneralKeyPanelWidgetController* _keyPanelWidgetCtrl_Up; // 0x360
		::MoleMole::UIGeneralKeyPanelWidgetController* _keyPanelWidgetCtrl_Down; // 0x368
		::MoleMole::UIGeneralKeyPanelWidgetController* _keyPanelWidgetCtrl_Left; // 0x370
		::MoleMole::UIGeneralKeyPanelWidgetController* _keyPanelWidgetCtrl_Right; // 0x378
		::MoleMole::UIGeneralNewsBubbleWidgetController* _widgetCtrl; // 0x380

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOCOUNTGAMEPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOCOUNTGAMEPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOCOUNTGAMEPOPWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOCOUNTGAMEPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::MoleMole::UIGeneralNewsBubbleWidgetController* GetBubbleWidget()
		{
			return ((::MoleMole::UIGeneralNewsBubbleWidgetController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOCOUNTGAMEPOPWINDOWCONTROLLER_GETBUBBLEWIDGET_OFFSET))(this);
		}

		::MoleMole::UIGeneralNewsBubbleRowWidgetController* OpenBubbleRow()
		{
			return ((::MoleMole::UIGeneralNewsBubbleRowWidgetController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOCOUNTGAMEPOPWINDOWCONTROLLER_OPENBUBBLEROW_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOCOUNTGAMEPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOCOUNTGAMEPOPWINDOWCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOCOUNTGAMEPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOCOUNTGAMEPOPWINDOWCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnFadePlayFinish(::MoleMole::UIBaseController_FadeFlag flag, ::System::String* animName)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController_FadeFlag, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOCOUNTGAMEPOPWINDOWCONTROLLER_ONFADEPLAYFINISH_OFFSET))(this, flag, animName);
		}

		::System::Boolean OpenTimeCountDownUI(::Struct_2_2140EBF640BC9674_Enum_3_542CC61461ECAA81 op, ::System::Single totalSeconds)
		{
			return ((::System::Boolean(*)(::PVOID, ::Struct_2_2140EBF640BC9674_Enum_3_542CC61461ECAA81, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOCOUNTGAMEPOPWINDOWCONTROLLER_OPENTIMECOUNTDOWNUI_OFFSET))(this, op, totalSeconds);
		}

		::System::Void OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOCOUNTGAMEPOPWINDOWCONTROLLER_ONHIDE_OFFSET))(this);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOCOUNTGAMEPOPWINDOWCONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOCOUNTGAMEPOPWINDOWCONTROLLER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void OnTimeout(::Class_1_8289F2785D9AA990* entityTimer)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_8289F2785D9AA990*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOCOUNTGAMEPOPWINDOWCONTROLLER_ONTIMEOUT_OFFSET))(this, entityTimer);
		}

		::System::Void GameFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOCOUNTGAMEPOPWINDOWCONTROLLER_GAMEFINISH_OFFSET))(this);
		}

		::System::Void RecordGameTime()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOCOUNTGAMEPOPWINDOWCONTROLLER_RECORDGAMETIME_OFFSET))(this);
		}

		::System::Void _GameFinish_b__31_0(::Class_1_7D59F735ACB38970_Enum_3_6E0E8267CDDC65CF _)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7D59F735ACB38970_Enum_3_6E0E8267CDDC65CF))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOCOUNTGAMEPOPWINDOWCONTROLLER__GAMEFINISH_B__31_0_OFFSET))(this, _);
		}

		::System::Void _GameFinish_b__31_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOCOUNTGAMEPOPWINDOWCONTROLLER__GAMEFINISH_B__31_1_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOCOUNTGAMEPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnFadePlayFinish(::MoleMole::UIBaseController_FadeFlag P0, ::System::String* P1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIBaseController_FadeFlag, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOCOUNTGAMEPOPWINDOWCONTROLLER___BASE_ONFADEPLAYFINISH_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOCOUNTGAMEPOPWINDOWCONTROLLER___BASE_ONHIDE_OFFSET))(this);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOCOUNTGAMEPOPWINDOWCONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOCOUNTGAMEPOPWINDOWCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOCOUNTGAMEPOPWINDOWCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOCOUNTGAMEPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOCOUNTGAMEPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOCOUNTGAMEPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
