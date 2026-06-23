#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Enum_3_EB7B205902C1E1AA.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_2_1C00730466C60BCB_3;
class Class_2_F8FDA7DB08D27C5C;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralNewsBubbleWidgetController; }
namespace MoleMole { class UIHollowChessboard3DModelController; }
namespace MoleMole { class UIPushBoxPlayWidgetController; }
namespace System { class Action; }

#define MOLEMOLE_UIHOLLOWMINIGAMEPOPWINDOWCONTROLLER_CHESSBOARDHANDLEMINIGAMEMOVE_OFFSET UNITYSDK_OFFSET(0x172170A0)
#define MOLEMOLE_UIHOLLOWMINIGAMEPOPWINDOWCONTROLLER_DEFAULTHANDLEMINIGAMEMOVE_OFFSET UNITYSDK_OFFSET(0x17217270)
#define MOLEMOLE_UIHOLLOWMINIGAMEPOPWINDOWCONTROLLER_GETBUBBLEWIDGET_OFFSET UNITYSDK_OFFSET(0x17216160)
#define MOLEMOLE_UIHOLLOWMINIGAMEPOPWINDOWCONTROLLER_GETCURCLICKINTERVALTIME_OFFSET UNITYSDK_OFFSET(0x172173E0)
#define MOLEMOLE_UIHOLLOWMINIGAMEPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x17216150)
#define MOLEMOLE_UIHOLLOWMINIGAMEPOPWINDOWCONTROLLER_HANDLEMINIGAMEMOVE_OFFSET UNITYSDK_OFFSET(0x17216E30)
#define MOLEMOLE_UIHOLLOWMINIGAMEPOPWINDOWCONTROLLER_ISINCLICKPROTECTTIME_OFFSET UNITYSDK_OFFSET(0x17216FD0)
#define MOLEMOLE_UIHOLLOWMINIGAMEPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17216720)
#define MOLEMOLE_UIHOLLOWMINIGAMEPOPWINDOWCONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x17216940)
#define MOLEMOLE_UIHOLLOWMINIGAMEPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x172167B0)
#define MOLEMOLE_UIHOLLOWMINIGAMEPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x172161B0)
#define MOLEMOLE_UIHOLLOWMINIGAMEPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17216520)
#define MOLEMOLE_UIHOLLOWMINIGAMEPOPWINDOWCONTROLLER_PERFORMPUSHBOXGAMEFINISH_OFFSET UNITYSDK_OFFSET(0x172174B0)
#define MOLEMOLE_UIHOLLOWMINIGAMEPOPWINDOWCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x172163C0)
#define MOLEMOLE_UIHOLLOWMINIGAMEPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17217640)
#define MOLEMOLE_UIHOLLOWMINIGAMEPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17217650)
#define MOLEMOLE_UIHOLLOWMINIGAMEPOPWINDOWCONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x172176E0)
#define MOLEMOLE_UIHOLLOWMINIGAMEPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17217710)
#define MOLEMOLE_UIHOLLOWMINIGAMEPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17217720)
#define MOLEMOLE_UIHOLLOWMINIGAMEPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17217730)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowMiniGamePopWindowController_TypeDefinitionIndex = 78732;

	class UIHollowMiniGamePopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_1C00730466C60BCB_3* _view; // 0x318
		::MoleMole::UIPushBoxPlayWidgetController* _pushBoxPlayWidgetCtrl; // 0x320
		::MoleMole::UIGeneralNewsBubbleWidgetController* _bubbleWidgetCtrl; // 0x328
		::MoleMole::UIHollowChessboard3DModelController* _chessboardCtrl; // 0x330
		::Class_2_F8FDA7DB08D27C5C* _hollowMiniGameModel; // 0x338
		::System::Single _clickTimeStamp; // 0x340
		::System::Boolean _isFirstClickInterval; // 0x344
		::System::Boolean _isFirstClick; // 0x345

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMINIGAMEPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMINIGAMEPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::MoleMole::UIGeneralNewsBubbleWidgetController* GetBubbleWidget()
		{
			return ((::MoleMole::UIGeneralNewsBubbleWidgetController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMINIGAMEPOPWINDOWCONTROLLER_GETBUBBLEWIDGET_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMINIGAMEPOPWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMINIGAMEPOPWINDOWCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMINIGAMEPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMINIGAMEPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMINIGAMEPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMINIGAMEPOPWINDOWCONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void HandleMiniGameMove(::Enum_3_EB7B205902C1E1AA inputType, ::System::Boolean isPressDown)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_EB7B205902C1E1AA, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMINIGAMEPOPWINDOWCONTROLLER_HANDLEMINIGAMEMOVE_OFFSET))(this, inputType, isPressDown);
		}

		::System::Void ChessboardHandleMiniGameMove(::Enum_3_EB7B205902C1E1AA inputType, ::System::Boolean isPressDown)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_EB7B205902C1E1AA, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMINIGAMEPOPWINDOWCONTROLLER_CHESSBOARDHANDLEMINIGAMEMOVE_OFFSET))(this, inputType, isPressDown);
		}

		::System::Void DefaultHandleMiniGameMove(::Enum_3_EB7B205902C1E1AA inputType, ::System::Boolean isPressDown)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_EB7B205902C1E1AA, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMINIGAMEPOPWINDOWCONTROLLER_DEFAULTHANDLEMINIGAMEMOVE_OFFSET))(this, inputType, isPressDown);
		}

		::System::Boolean IsInClickProtectTime(::System::Boolean firstClick)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMINIGAMEPOPWINDOWCONTROLLER_ISINCLICKPROTECTTIME_OFFSET))(this, firstClick);
		}

		::System::Single GetCurClickIntervalTime(::System::Boolean isFirstClickInterval)
		{
			return ((::System::Single(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMINIGAMEPOPWINDOWCONTROLLER_GETCURCLICKINTERVALTIME_OFFSET))(this, isFirstClickInterval);
		}

		::System::Void PerformPushBoxGameFinish(::System::Boolean isSuccess, ::System::Action* onEnd)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMINIGAMEPOPWINDOWCONTROLLER_PERFORMPUSHBOXGAMEFINISH_OFFSET))(this, isSuccess, onEnd);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMINIGAMEPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMINIGAMEPOPWINDOWCONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMINIGAMEPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMINIGAMEPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWMINIGAMEPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
