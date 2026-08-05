#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Enum_3_8E90989A26BC6232.h"
#include "unitysdk/Enum_3_B944D5F0FFA609A4.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_2_79F6D62CE30E3F8E_24;
class MonoUILoopBGText;
namespace MoleMole { class UIBaseController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Action; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI { class Button; }

#define MOLEMOLE_UIROLEDEVELOPPOPWINDOWCONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET UNITYSDK_OFFSET(0x15E73230)
#define MOLEMOLE_UIROLEDEVELOPPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x15E73220)
#define MOLEMOLE_UIROLEDEVELOPPOPWINDOWCONTROLLER_INITCONSUMEITEMID_OFFSET UNITYSDK_OFFSET(0x15E74F50)
#define MOLEMOLE_UIROLEDEVELOPPOPWINDOWCONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0x15E737D0)
#define MOLEMOLE_UIROLEDEVELOPPOPWINDOWCONTROLLER_ONCLICKCONSOLECHECKCONSUMEBTN_OFFSET UNITYSDK_OFFSET(0x15E754C0)
#define MOLEMOLE_UIROLEDEVELOPPOPWINDOWCONTROLLER_ONCLICKCONSUMEICONBTN_OFFSET UNITYSDK_OFFSET(0x15E75420)
#define MOLEMOLE_UIROLEDEVELOPPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15E73B70)
#define MOLEMOLE_UIROLEDEVELOPPOPWINDOWCONTROLLER_ONINFOCLICKHANDLE_OFFSET UNITYSDK_OFFSET(0x15E75200)
#define MOLEMOLE_UIROLEDEVELOPPOPWINDOWCONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x15E75690)
#define MOLEMOLE_UIROLEDEVELOPPOPWINDOWCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x15E75850)
#define MOLEMOLE_UIROLEDEVELOPPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15E758E0)
#define MOLEMOLE_UIROLEDEVELOPPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15E73240)
#define MOLEMOLE_UIROLEDEVELOPPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15E73C00)
#define MOLEMOLE_UIROLEDEVELOPPOPWINDOWCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x15E73F70)
#define MOLEMOLE_UIROLEDEVELOPPOPWINDOWCONTROLLER_SETBTNACTION_OFFSET UNITYSDK_OFFSET(0x15E751A0)
#define MOLEMOLE_UIROLEDEVELOPPOPWINDOWCONTROLLER_SETBUTTONINTERACTABLE_OFFSET UNITYSDK_OFFSET(0x15E755B0)
#define MOLEMOLE_UIROLEDEVELOPPOPWINDOWCONTROLLER_SETROLEDEVELOPCONTENT_OFFSET UNITYSDK_OFFSET(0x15E73CF0)
#define MOLEMOLE_UIROLEDEVELOPPOPWINDOWCONTROLLER_SETTITLE_OFFSET UNITYSDK_OFFSET(0x15E74BB0)
#define MOLEMOLE_UIROLEDEVELOPPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15E75950)
#define MOLEMOLE_UIROLEDEVELOPPOPWINDOWCONTROLLER__REFRESHVIEW_B__19_0_OFFSET UNITYSDK_OFFSET(0x15E759E0)
#define MOLEMOLE_UIROLEDEVELOPPOPWINDOWCONTROLLER__REFRESHVIEW_B__19_1_OFFSET UNITYSDK_OFFSET(0x15E75A00)
#define MOLEMOLE_UIROLEDEVELOPPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15E75A20)
#define MOLEMOLE_UIROLEDEVELOPPOPWINDOWCONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x15E75AB0)
#define MOLEMOLE_UIROLEDEVELOPPOPWINDOWCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x15E75AE0)
#define MOLEMOLE_UIROLEDEVELOPPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15E75BA0)
#define MOLEMOLE_UIROLEDEVELOPPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15E75BB0)
#define MOLEMOLE_UIROLEDEVELOPPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15E75BC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIRoleDevelopPopWindowController_TypeDefinitionIndex = 42262;

	class UIRoleDevelopPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		::Enum_3_B944D5F0FFA609A4 _curDialogType; // 0x318
		::System::Collections::Generic::Dictionary_2<::Enum_3_B944D5F0FFA609A4, ::MoleMole::UIBaseController*>* _subChildControllers; // 0x320
		::MoleMole::UIControllerContextBase* _showContext; // 0x328
		::System::Collections::Generic::List_1<::UnityEngine::UI::Button*>* _generalBtns; // 0x330
		::System::Action* _generalBtn0Act; // 0x338
		::System::Action* _generalBtn1Act; // 0x340
		::Class_2_79F6D62CE30E3F8E_24* _view; // 0x348
		::System::Collections::Generic::List_1<::MonoUILoopBGText*>* _loopTxtList; // 0x350
		::System::Int32 _consumeItemID; // 0x358

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEDEVELOPPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEDEVELOPPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::Enum_3_8E90989A26BC6232 get_HotSwitchRootLayerState()
		{
			return ((::Enum_3_8E90989A26BC6232(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEDEVELOPPOPWINDOWCONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEDEVELOPPOPWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEDEVELOPPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEDEVELOPPOPWINDOWCONTROLLER_INITVIEW_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEDEVELOPPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void SetRoleDevelopContent(::Enum_3_B944D5F0FFA609A4 roleDevelopType)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_B944D5F0FFA609A4))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEDEVELOPPOPWINDOWCONTROLLER_SETROLEDEVELOPCONTENT_OFFSET))(this, roleDevelopType);
		}

		::System::Void InitConsumeItemID()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEDEVELOPPOPWINDOWCONTROLLER_INITCONSUMEITEMID_OFFSET))(this);
		}

		::System::Void SetBtnAction(::System::Action* btn1act, ::System::Action* btn2act)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEDEVELOPPOPWINDOWCONTROLLER_SETBTNACTION_OFFSET))(this, btn1act, btn2act);
		}

		::System::Void SetTitle(::Enum_3_B944D5F0FFA609A4 subType)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_B944D5F0FFA609A4))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEDEVELOPPOPWINDOWCONTROLLER_SETTITLE_OFFSET))(this, subType);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEDEVELOPPOPWINDOWCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void OnInfoClickHandle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEDEVELOPPOPWINDOWCONTROLLER_ONINFOCLICKHANDLE_OFFSET))(this);
		}

		::System::Void OnClickConsumeIconBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEDEVELOPPOPWINDOWCONTROLLER_ONCLICKCONSUMEICONBTN_OFFSET))(this);
		}

		::System::Void OnClickConsoleCheckConsumeBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEDEVELOPPOPWINDOWCONTROLLER_ONCLICKCONSOLECHECKCONSUMEBTN_OFFSET))(this);
		}

		::System::Void SetButtonInteractable(::System::Boolean interactable0, ::System::Boolean interactable1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEDEVELOPPOPWINDOWCONTROLLER_SETBUTTONINTERACTABLE_OFFSET))(this, interactable0, interactable1);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEDEVELOPPOPWINDOWCONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEDEVELOPPOPWINDOWCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEDEVELOPPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void _RefreshView_b__19_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEDEVELOPPOPWINDOWCONTROLLER__REFRESHVIEW_B__19_0_OFFSET))(this);
		}

		::System::Void _RefreshView_b__19_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEDEVELOPPOPWINDOWCONTROLLER__REFRESHVIEW_B__19_1_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEDEVELOPPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEDEVELOPPOPWINDOWCONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEDEVELOPPOPWINDOWCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEDEVELOPPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEDEVELOPPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIROLEDEVELOPPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
