#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Enum_3_8E90989A26BC6232.h"
#include "unitysdk/Foundation/AssetPath.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/System/Nullable_1.h"

class Class_2_79F6D62CE30E3F8E_13;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Action; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UILOGINMESSAGEBOXPOPWINDOWCONTROLLER_BTNCONFIRMACTION_OFFSET UNITYSDK_OFFSET(0x18323810)
#define MOLEMOLE_UILOGINMESSAGEBOXPOPWINDOWCONTROLLER_BTNCONFIRM_OFFSET UNITYSDK_OFFSET(0x18323890)
#define MOLEMOLE_UILOGINMESSAGEBOXPOPWINDOWCONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET UNITYSDK_OFFSET(0x18321B40)
#define MOLEMOLE_UILOGINMESSAGEBOXPOPWINDOWCONTROLLER_GET_ISFORCEIGNORESDKPANEL_OFFSET UNITYSDK_OFFSET(0x18321B60)
#define MOLEMOLE_UILOGINMESSAGEBOXPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x18321B50)
#define MOLEMOLE_UILOGINMESSAGEBOXPOPWINDOWCONTROLLER_HIDECANCEL_OFFSET UNITYSDK_OFFSET(0x18323650)
#define MOLEMOLE_UILOGINMESSAGEBOXPOPWINDOWCONTROLLER_HIDECONFIRM_OFFSET UNITYSDK_OFFSET(0x183236C0)
#define MOLEMOLE_UILOGINMESSAGEBOXPOPWINDOWCONTROLLER_MASKCLOSE_OFFSET UNITYSDK_OFFSET(0x183222F0)
#define MOLEMOLE_UILOGINMESSAGEBOXPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18322000)
#define MOLEMOLE_UILOGINMESSAGEBOXPOPWINDOWCONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x18322260)
#define MOLEMOLE_UILOGINMESSAGEBOXPOPWINDOWCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x18322100)
#define MOLEMOLE_UILOGINMESSAGEBOXPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18322090)
#define MOLEMOLE_UILOGINMESSAGEBOXPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18321B70)
#define MOLEMOLE_UILOGINMESSAGEBOXPOPWINDOWCONTROLLER_SETCANCELBTNTEXT_OFFSET UNITYSDK_OFFSET(0x18323270)
#define MOLEMOLE_UILOGINMESSAGEBOXPOPWINDOWCONTROLLER_SETCANCELINTERACT_OFFSET UNITYSDK_OFFSET(0x18323730)
#define MOLEMOLE_UILOGINMESSAGEBOXPOPWINDOWCONTROLLER_SETCONFIRMINTERACT_OFFSET UNITYSDK_OFFSET(0x183237A0)
#define MOLEMOLE_UILOGINMESSAGEBOXPOPWINDOWCONTROLLER_SETOKBTN_OFFSET UNITYSDK_OFFSET(0x18323030)
#define MOLEMOLE_UILOGINMESSAGEBOXPOPWINDOWCONTROLLER_SETTITLECONTENTTEXT_OFFSET UNITYSDK_OFFSET(0x183234B0)
#define MOLEMOLE_UILOGINMESSAGEBOXPOPWINDOWCONTROLLER_SHOWERRORCODE_OFFSET UNITYSDK_OFFSET(0x183224A0)
#define MOLEMOLE_UILOGINMESSAGEBOXPOPWINDOWCONTROLLER_SHOWMESSAGEBOX_OFFSET UNITYSDK_OFFSET(0x183227A0)
#define MOLEMOLE_UILOGINMESSAGEBOXPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18323960)
#define MOLEMOLE_UILOGINMESSAGEBOXPOPWINDOWCONTROLLER__ONUIINIT_B__10_0_OFFSET UNITYSDK_OFFSET(0x18323970)
#define MOLEMOLE_UILOGINMESSAGEBOXPOPWINDOWCONTROLLER__ONUIINIT_B__10_1_OFFSET UNITYSDK_OFFSET(0x18323990)
#define MOLEMOLE_UILOGINMESSAGEBOXPOPWINDOWCONTROLLER___BASE_MASKCLOSE_OFFSET UNITYSDK_OFFSET(0x183239B0)
#define MOLEMOLE_UILOGINMESSAGEBOXPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18323A40)
#define MOLEMOLE_UILOGINMESSAGEBOXPOPWINDOWCONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x18323AD0)
#define MOLEMOLE_UILOGINMESSAGEBOXPOPWINDOWCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x18323B00)
#define MOLEMOLE_UILOGINMESSAGEBOXPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18323B10)
#define MOLEMOLE_UILOGINMESSAGEBOXPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18323B20)

namespace MoleMole
{
	inline static constexpr unsigned int UILoginMessageBoxPopWindowController_TypeDefinitionIndex = 41233;

	class UILoginMessageBoxPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_79F6D62CE30E3F8E_13* _view; // 0x318
		::System::Action* okBtnCb; // 0x320
		::System::Action* cancelBtnCb; // 0x328
		::System::Boolean _isClicked; // 0x330

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINMESSAGEBOXPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_8E90989A26BC6232 get_HotSwitchRootLayerState()
		{
			return ((::Enum_3_8E90989A26BC6232(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINMESSAGEBOXPOPWINDOWCONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINMESSAGEBOXPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Boolean get_IsForceIgnoreSDKPanel()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINMESSAGEBOXPOPWINDOWCONTROLLER_GET_ISFORCEIGNORESDKPANEL_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINMESSAGEBOXPOPWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINMESSAGEBOXPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINMESSAGEBOXPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINMESSAGEBOXPOPWINDOWCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINMESSAGEBOXPOPWINDOWCONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void MaskClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINMESSAGEBOXPOPWINDOWCONTROLLER_MASKCLOSE_OFFSET))(this);
		}

		::System::Void ShowErrorCode(::System::Int32 errorCode, ::System::Collections::Generic::List_1<::System::String*>* errorCodeParams, ::System::Action* okBtnCb, ::System::Action* cancelBtnCb, ::System::String* okText, ::System::String* cancelText)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Action*, ::System::Action*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINMESSAGEBOXPOPWINDOWCONTROLLER_SHOWERRORCODE_OFFSET))(this, errorCode, errorCodeParams, okBtnCb, cancelBtnCb, okText, cancelText);
		}

		::System::Void ShowMessageBox(::System::String* content, ::System::String* okText, ::System::Action* okBtnCb, ::System::String* cancelText, ::System::Action* cancelBtnCb, ::System::String* titleText, ::System::Nullable_1<::Foundation::AssetPath> okBtnIcon, ::System::Nullable_1<::Foundation::AssetPath> cancelBtnIcon)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::Action*, ::System::String*, ::System::Action*, ::System::String*, ::System::Nullable_1<::Foundation::AssetPath>, ::System::Nullable_1<::Foundation::AssetPath>))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINMESSAGEBOXPOPWINDOWCONTROLLER_SHOWMESSAGEBOX_OFFSET))(this, content, okText, okBtnCb, cancelText, cancelBtnCb, titleText, okBtnIcon, cancelBtnIcon);
		}

		::System::Void SetOkBtn(::System::String* text, ::System::Action* okBtnCb, ::System::Nullable_1<::Foundation::AssetPath> okBtnIcon)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*, ::System::Nullable_1<::Foundation::AssetPath>))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINMESSAGEBOXPOPWINDOWCONTROLLER_SETOKBTN_OFFSET))(this, text, okBtnCb, okBtnIcon);
		}

		::System::Void SetCancelBtnText(::System::String* text, ::System::Action* cancelBtnCb, ::System::Nullable_1<::Foundation::AssetPath> cancelBtnIcon)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Action*, ::System::Nullable_1<::Foundation::AssetPath>))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINMESSAGEBOXPOPWINDOWCONTROLLER_SETCANCELBTNTEXT_OFFSET))(this, text, cancelBtnCb, cancelBtnIcon);
		}

		::System::Void SetTitleContentText(::System::String* content, ::System::String* titleText)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINMESSAGEBOXPOPWINDOWCONTROLLER_SETTITLECONTENTTEXT_OFFSET))(this, content, titleText);
		}

		::System::Void HideCancel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINMESSAGEBOXPOPWINDOWCONTROLLER_HIDECANCEL_OFFSET))(this);
		}

		::System::Void HideConfirm()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINMESSAGEBOXPOPWINDOWCONTROLLER_HIDECONFIRM_OFFSET))(this);
		}

		::System::Void SetCancelInteract(::System::Boolean interactable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINMESSAGEBOXPOPWINDOWCONTROLLER_SETCANCELINTERACT_OFFSET))(this, interactable);
		}

		::System::Void SetConfirmInteract(::System::Boolean interactable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINMESSAGEBOXPOPWINDOWCONTROLLER_SETCONFIRMINTERACT_OFFSET))(this, interactable);
		}

		::System::Void BtnConfirmAction(::System::Boolean isOk)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINMESSAGEBOXPOPWINDOWCONTROLLER_BTNCONFIRMACTION_OFFSET))(this, isOk);
		}

		::System::Void BtnConfirm(::System::Boolean isOk)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINMESSAGEBOXPOPWINDOWCONTROLLER_BTNCONFIRM_OFFSET))(this, isOk);
		}

		::System::Void _OnUIInit_b__10_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINMESSAGEBOXPOPWINDOWCONTROLLER__ONUIINIT_B__10_0_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__10_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINMESSAGEBOXPOPWINDOWCONTROLLER__ONUIINIT_B__10_1_OFFSET))(this);
		}

		::System::Void __base_MaskClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINMESSAGEBOXPOPWINDOWCONTROLLER___BASE_MASKCLOSE_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINMESSAGEBOXPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINMESSAGEBOXPOPWINDOWCONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINMESSAGEBOXPOPWINDOWCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINMESSAGEBOXPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINMESSAGEBOXPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
