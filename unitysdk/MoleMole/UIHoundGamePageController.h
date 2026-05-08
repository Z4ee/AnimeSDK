#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3A8D4AF679CBDF1E.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Enum_3_92EDBC2AD8437DA6.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/MiniGame/TartarusHounds/Direction.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_2_60638234271CCDB8_14;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIHoundGame3DModelController; }
namespace MoleMole { class UISoulHoundsIIIInLevelChildWindowController; }
namespace MoleMole::MiniGame { class HoundMiniGameWorld; }
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER_DOINPUT_OFFSET UNITYSDK_OFFSET(0x15A44E10)
#define MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER_GET_UICURSORHIDESTATE_OFFSET UNITYSDK_OFFSET(0x15A439B0)
#define MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x15A439A0)
#define MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER_HIDEGAMEUI_OFFSET UNITYSDK_OFFSET(0x15A44A50)
#define MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER_HIDEIMMEDIATELY_OFFSET UNITYSDK_OFFSET(0x15A44BE0)
#define MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x15A44020)
#define MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER_ONBEFOREUPDATE_OFFSET UNITYSDK_OFFSET(0x15A43CC0)
#define MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15A439C0)
#define MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x15A450F0)
#define MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER_ONLOGICINIT_OFFSET UNITYSDK_OFFSET(0x15A44110)
#define MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER_ONREVCWORLDINITSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x15A46B30)
#define MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER_ONSOULHOUNDBLOCKINPUT_OFFSET UNITYSDK_OFFSET(0x15A449A0)
#define MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER_ONSOULHOUNDSGAMEEND_OFFSET UNITYSDK_OFFSET(0x15A44830)
#define MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER_ONSOULHOUNDUNBLOCKINPUT_OFFSET UNITYSDK_OFFSET(0x15A448F0)
#define MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15A44C40)
#define MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15A43A50)
#define MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15A43B80)
#define MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER_OPENGAMEUI_OFFSET UNITYSDK_OFFSET(0x15A44450)
#define MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER_SETGAMETYPE_OFFSET UNITYSDK_OFFSET(0x15A46AA0)
#define MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER_SETWWISEFOLLOWINGLISTENER_OFFSET UNITYSDK_OFFSET(0x15A44170)
#define MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER_TRYINPUT_OFFSET UNITYSDK_OFFSET(0x15A43EB0)
#define MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15A46B90)
#define MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15A46CA0)
#define MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x15A46D30)
#define MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15A46D60)
#define MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15A46D70)
#define MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15A46D80)

namespace MoleMole
{
	inline static constexpr unsigned int UIHoundGamePageController_TypeDefinitionIndex = 40861;

	class UIHoundGamePageController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_60638234271CCDB8_14* _view; // 0x310
		::MoleMole::UIHoundGame3DModelController* houndGame3dCtrl; // 0x318
		::MoleMole::UISoulHoundsIIIInLevelChildWindowController* inLevelPageCtrl; // 0x320
		::MoleMole::MiniGame::HoundMiniGameWorld* miniGameWorld; // 0x328
		::System::Collections::Generic::HashSet_1<::MoleMole::MiniGame::TartarusHounds::Direction>* pressingDir; // 0x330
		::Il2CppArray<::System::Boolean>* dirPressed; // 0x338
		::Il2CppArray<::System::Boolean>* lastDirPressed; // 0x340

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::Enum_3_92EDBC2AD8437DA6 get_UICursorHideState()
		{
			return ((::Enum_3_92EDBC2AD8437DA6(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER_GET_UICURSORHIDESTATE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnBeforeUpdate(::System::Single obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER_ONBEFOREUPDATE_OFFSET))(this, obj);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void OnLogicInit(::MoleMole::MiniGame::HoundMiniGameWorld* mingGameWorld)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MiniGame::HoundMiniGameWorld*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER_ONLOGICINIT_OFFSET))(this, mingGameWorld);
		}

		::System::Void OpenGameUI(::System::Boolean fade)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER_OPENGAMEUI_OFFSET))(this, fade);
		}

		::System::Void OnSoulHoundsGameEnd(::System::EventArgs* eventArgs)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER_ONSOULHOUNDSGAMEEND_OFFSET))(this, eventArgs);
		}

		::System::Void OnSoulHoundUnBlockInput(::System::EventArgs* eventArgs)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER_ONSOULHOUNDUNBLOCKINPUT_OFFSET))(this, eventArgs);
		}

		::System::Void OnSoulHoundBlockInput(::System::EventArgs* eventArgs)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER_ONSOULHOUNDBLOCKINPUT_OFFSET))(this, eventArgs);
		}

		::System::Void HideGameUI(::System::Action* fadeCB)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER_HIDEGAMEUI_OFFSET))(this, fadeCB);
		}

		::System::Void HideImmediately()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER_HIDEIMMEDIATELY_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void TryInput(::MoleMole::MiniGame::TartarusHounds::Direction dir, ::System::Boolean isDown)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MiniGame::TartarusHounds::Direction, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER_TRYINPUT_OFFSET))(this, dir, isDown);
		}

		::System::Void DoInput(::MoleMole::MiniGame::TartarusHounds::Direction dir, ::System::Boolean isDown)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MiniGame::TartarusHounds::Direction, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER_DOINPUT_OFFSET))(this, dir, isDown);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void SetGameType(::Enum_3_3A8D4AF679CBDF1E gameType)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_3A8D4AF679CBDF1E))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER_SETGAMETYPE_OFFSET))(this, gameType);
		}

		::System::Void OnRevcWorldInitScNotify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER_ONREVCWORLDINITSCNOTIFY_OFFSET))(this);
		}

		::System::Void SetWwiseFollowingListener()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER_SETWWISEFOLLOWINGLISTENER_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
