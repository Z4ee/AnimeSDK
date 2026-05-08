#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_FC3A9C07FC781527_Enum_3_6E0E8267CDDC65CF.h"
#include "unitysdk/Enum_3_0F5D0B7399907DA1_2.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIBaseController_FadeFlag.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/Struct_2_2140EBF640BC9674_Enum_3_542CC61461ECAA81.h"

class Class_1_8289F2785D9AA990;
class Class_2_096CDC88DB8402A1;
class Class_2_79F6D62CE30E3F8E_52;
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

#define MOLEMOLE_UIBANGBOOCOUNTGAMEPOPWINDOWCONTROLLER_GAMEFINISH_OFFSET UNITYSDK_OFFSET(0x16EC5160)
#define MOLEMOLE_UIBANGBOOCOUNTGAMEPOPWINDOWCONTROLLER_GETBUBBLEWIDGET_OFFSET UNITYSDK_OFFSET(0x16EC3940)
#define MOLEMOLE_UIBANGBOOCOUNTGAMEPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x16EC2CC0)
#define MOLEMOLE_UIBANGBOOCOUNTGAMEPOPWINDOWCONTROLLER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x16EC4DF0)
#define MOLEMOLE_UIBANGBOOCOUNTGAMEPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16EC3C30)
#define MOLEMOLE_UIBANGBOOCOUNTGAMEPOPWINDOWCONTROLLER_ONFADEPLAYFINISH_OFFSET UNITYSDK_OFFSET(0x16EC46E0)
#define MOLEMOLE_UIBANGBOOCOUNTGAMEPOPWINDOWCONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0x16EC4900)
#define MOLEMOLE_UIBANGBOOCOUNTGAMEPOPWINDOWCONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x16EC4B50)
#define MOLEMOLE_UIBANGBOOCOUNTGAMEPOPWINDOWCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x16EC4090)
#define MOLEMOLE_UIBANGBOOCOUNTGAMEPOPWINDOWCONTROLLER_ONTIMEOUT_OFFSET UNITYSDK_OFFSET(0x16EC5000)
#define MOLEMOLE_UIBANGBOOCOUNTGAMEPOPWINDOWCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x16EC3CC0)
#define MOLEMOLE_UIBANGBOOCOUNTGAMEPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16EC3EF0)
#define MOLEMOLE_UIBANGBOOCOUNTGAMEPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16EC2CD0)
#define MOLEMOLE_UIBANGBOOCOUNTGAMEPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x16EC33A0)
#define MOLEMOLE_UIBANGBOOCOUNTGAMEPOPWINDOWCONTROLLER_OPENBUBBLEROW_OFFSET UNITYSDK_OFFSET(0x16EC3B00)
#define MOLEMOLE_UIBANGBOOCOUNTGAMEPOPWINDOWCONTROLLER_OPENTIMECOUNTDOWNUI_OFFSET UNITYSDK_OFFSET(0x16EC4300)
#define MOLEMOLE_UIBANGBOOCOUNTGAMEPOPWINDOWCONTROLLER_RECORDGAMETIME_OFFSET UNITYSDK_OFFSET(0x16EC5380)
#define MOLEMOLE_UIBANGBOOCOUNTGAMEPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16EC54C0)
#define MOLEMOLE_UIBANGBOOCOUNTGAMEPOPWINDOWCONTROLLER__GAMEFINISH_B__31_0_OFFSET UNITYSDK_OFFSET(0x16EC5520)
#define MOLEMOLE_UIBANGBOOCOUNTGAMEPOPWINDOWCONTROLLER__GAMEFINISH_B__31_1_OFFSET UNITYSDK_OFFSET(0x16EC55A0)
#define MOLEMOLE_UIBANGBOOCOUNTGAMEPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16EC56B0)
#define MOLEMOLE_UIBANGBOOCOUNTGAMEPOPWINDOWCONTROLLER___BASE_ONFADEPLAYFINISH_OFFSET UNITYSDK_OFFSET(0x16EC5740)
#define MOLEMOLE_UIBANGBOOCOUNTGAMEPOPWINDOWCONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0x16EC5750)
#define MOLEMOLE_UIBANGBOOCOUNTGAMEPOPWINDOWCONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x16EC57E0)
#define MOLEMOLE_UIBANGBOOCOUNTGAMEPOPWINDOWCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x16EC5810)
#define MOLEMOLE_UIBANGBOOCOUNTGAMEPOPWINDOWCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x16EC5820)
#define MOLEMOLE_UIBANGBOOCOUNTGAMEPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16EC58E0)
#define MOLEMOLE_UIBANGBOOCOUNTGAMEPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16EC58F0)
#define MOLEMOLE_UIBANGBOOCOUNTGAMEPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x16EC5900)

namespace MoleMole
{
	inline static constexpr unsigned int UIBangbooCountGamePopWindowController_TypeDefinitionIndex = 50722;

	class UIBangbooCountGamePopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_79F6D62CE30E3F8E_52* _view; // 0x310
		::MoleMole::UIBangbooCountGameContext* _context; // 0x318
		::MoleMole::UIPhotoModePlayerMoveChildWindowController* _joystickCtrl; // 0x320
		::Class_2_096CDC88DB8402A1* _cameraControl; // 0x328
		::MoleMole::UIInLevelCountDownUIChildWindowController* _countDownController; // 0x330
		::System::String* _lastBGMSpecialState; // 0x338
		::Enum_3_0F5D0B7399907DA1_2 _result; // 0x340
		::MoleMole::UIMissionTipsRowWidgetController* _questTipsRowWidget; // 0x348
		::System::Int32 _mainCityGameUIConfigGameID; // 0x350
		::System::Single _gameStartTime; // 0x354
		::MoleMole::UIGeneralKeyPanelWidgetController* _keyPanelWidgetCtrl_Up; // 0x358
		::MoleMole::UIGeneralKeyPanelWidgetController* _keyPanelWidgetCtrl_Down; // 0x360
		::MoleMole::UIGeneralKeyPanelWidgetController* _keyPanelWidgetCtrl_Left; // 0x368
		::MoleMole::UIGeneralKeyPanelWidgetController* _keyPanelWidgetCtrl_Right; // 0x370
		::MoleMole::UIGeneralNewsBubbleWidgetController* _widgetCtrl; // 0x378

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

		::System::Void _GameFinish_b__31_0(::Class_1_FC3A9C07FC781527_Enum_3_6E0E8267CDDC65CF _)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_FC3A9C07FC781527_Enum_3_6E0E8267CDDC65CF))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBANGBOOCOUNTGAMEPOPWINDOWCONTROLLER__GAMEFINISH_B__31_0_OFFSET))(this, _);
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
