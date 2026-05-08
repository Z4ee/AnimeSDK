#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_205B03D40B9BD873.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Enum_3_7BB13037D7F77E90.h"
#include "unitysdk/Enum_3_8E90989A26BC6232.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_2_79F6D62CE30E3F8E_149;
class Class_2_80AC63F59C5E376B;
namespace MoleMole { class MonoGamepadBaseList; }
namespace MoleMole { class MonoGamepadCustomList; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralLoginTipsDialogPopWindowController; }
namespace MoleMole { class UILoginAgeEjectDialogPopWindowController; }
namespace MoleMole { class UIResourceLoadWidgetContext; }
namespace MoleMole { class UIResourceLoadWidgetController; }
namespace MoleMole { class UISDKLoginContext; }
namespace MoleMole { class UISDKLoginWidgetController; }
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UILOGINPAGECONTROLLER_CANCELLOGIN_OFFSET UNITYSDK_OFFSET(0x148316D0)
#define MOLEMOLE_UILOGINPAGECONTROLLER_CLOSELOGIN2_OFFSET UNITYSDK_OFFSET(0x148329E0)
#define MOLEMOLE_UILOGINPAGECONTROLLER_CLOSELOGIN_OFFSET UNITYSDK_OFFSET(0x148326C0)
#define MOLEMOLE_UILOGINPAGECONTROLLER_COLOSESDKTIPS_OFFSET UNITYSDK_OFFSET(0x14832E40)
#define MOLEMOLE_UILOGINPAGECONTROLLER_ENABLELOGININPUTBLOCK_OFFSET UNITYSDK_OFFSET(0x148339F0)
#define MOLEMOLE_UILOGINPAGECONTROLLER_GAMEPADSETDEFAULTSELECT_OFFSET UNITYSDK_OFFSET(0x1482EC80)
#define MOLEMOLE_UILOGINPAGECONTROLLER_GETLOGINKEY_OFFSET UNITYSDK_OFFSET(0x1482E4D0)
#define MOLEMOLE_UILOGINPAGECONTROLLER_GETTIPSROOTWIDGET_OFFSET UNITYSDK_OFFSET(0x1482C0C0)
#define MOLEMOLE_UILOGINPAGECONTROLLER_GETTIPSROOT_OFFSET UNITYSDK_OFFSET(0x1482C040)
#define MOLEMOLE_UILOGINPAGECONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET UNITYSDK_OFFSET(0x1482BEE0)
#define MOLEMOLE_UILOGINPAGECONTROLLER_GET_MESSAGEMATCHPAGE_OFFSET UNITYSDK_OFFSET(0x1482BEB0)
#define MOLEMOLE_UILOGINPAGECONTROLLER_GET_SDKWIGETROOT_OFFSET UNITYSDK_OFFSET(0x1482BEC0)
#define MOLEMOLE_UILOGINPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x1482BEA0)
#define MOLEMOLE_UILOGINPAGECONTROLLER_INITLOGIN_OFFSET UNITYSDK_OFFSET(0x1482F170)
#define MOLEMOLE_UILOGINPAGECONTROLLER_INITSEVERLIST_OFFSET UNITYSDK_OFFSET(0x1482FB60)
#define MOLEMOLE_UILOGINPAGECONTROLLER_ISDISPATCHFREQUENTATTEMPTS_OFFSET UNITYSDK_OFFSET(0x14830A70)
#define MOLEMOLE_UILOGINPAGECONTROLLER_LOGININDISPATCH_OFFSET UNITYSDK_OFFSET(0x148308D0)
#define MOLEMOLE_UILOGINPAGECONTROLLER_LOGININGAMESERVER_OFFSET UNITYSDK_OFFSET(0x14830D50)
#define MOLEMOLE_UILOGINPAGECONTROLLER_ONBEFOREWORLDUPDATE_OFFSET UNITYSDK_OFFSET(0x14830290)
#define MOLEMOLE_UILOGINPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1482C110)
#define MOLEMOLE_UILOGINPAGECONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x1482E140)
#define MOLEMOLE_UILOGINPAGECONTROLLER_ONLOGINERROR_OFFSET UNITYSDK_OFFSET(0x148321C0)
#define MOLEMOLE_UILOGINPAGECONTROLLER_ONLOGINGAMESERVER_OFFSET UNITYSDK_OFFSET(0x14832320)
#define MOLEMOLE_UILOGINPAGECONTROLLER_ONSDKENTERGAMESUCCESS_OFFSET UNITYSDK_OFFSET(0x14832530)
#define MOLEMOLE_UILOGINPAGECONTROLLER_ONSDKLOGINSUCCESS_OFFSET UNITYSDK_OFFSET(0x14831080)
#define MOLEMOLE_UILOGINPAGECONTROLLER_ONSETLANGUAGEVOICE_OFFSET UNITYSDK_OFFSET(0x14833690)
#define MOLEMOLE_UILOGINPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1482BF30)
#define MOLEMOLE_UILOGINPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1482D6E0)
#define MOLEMOLE_UILOGINPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1482C1A0)
#define MOLEMOLE_UILOGINPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x14833A50)
#define MOLEMOLE_UILOGINPAGECONTROLLER_OPENAGEDAILOG_OFFSET UNITYSDK_OFFSET(0x14833530)
#define MOLEMOLE_UILOGINPAGECONTROLLER_OPENCLOUDPRELOGIN_OFFSET UNITYSDK_OFFSET(0x148331D0)
#define MOLEMOLE_UILOGINPAGECONTROLLER_OPENDEBUGLOGIN_OFFSET UNITYSDK_OFFSET(0x14832EC0)
#define MOLEMOLE_UILOGINPAGECONTROLLER_OPENRESOURCELOAD_OFFSET UNITYSDK_OFFSET(0x14833860)
#define MOLEMOLE_UILOGINPAGECONTROLLER_OPENSDKLOGIN_OFFSET UNITYSDK_OFFSET(0x14832F50)
#define MOLEMOLE_UILOGINPAGECONTROLLER_OPENSELECTSERVER_OFFSET UNITYSDK_OFFSET(0x14830700)
#define MOLEMOLE_UILOGINPAGECONTROLLER_REFRESHSERVERTEXT_OFFSET UNITYSDK_OFFSET(0x14832D70)
#define MOLEMOLE_UILOGINPAGECONTROLLER_REQUESTSERVERLIST_OFFSET UNITYSDK_OFFSET(0x1482F940)
#define MOLEMOLE_UILOGINPAGECONTROLLER_RESETFOCUS_OFFSET UNITYSDK_OFFSET(0x148320B0)
#define MOLEMOLE_UILOGINPAGECONTROLLER_RESETLOGIN_OFFSET UNITYSDK_OFFSET(0x14831AE0)
#define MOLEMOLE_UILOGINPAGECONTROLLER_SETBESTSERVER_OFFSET UNITYSDK_OFFSET(0x14830190)
#define MOLEMOLE_UILOGINPAGECONTROLLER_SETIGNORECUSTOMLISTNAVIGATESTATE_OFFSET UNITYSDK_OFFSET(0x14831E30)
#define MOLEMOLE_UILOGINPAGECONTROLLER_SETLOGINMODE_OFFSET UNITYSDK_OFFSET(0x14832980)
#define MOLEMOLE_UILOGINPAGECONTROLLER_SETLOGINREADY_OFFSET UNITYSDK_OFFSET(0x14831340)
#define MOLEMOLE_UILOGINPAGECONTROLLER_SETMESSAGEKEY_OFFSET UNITYSDK_OFFSET(0x1482E7C0)
#define MOLEMOLE_UILOGINPAGECONTROLLER_SETRESOURCEVERSION_OFFSET UNITYSDK_OFFSET(0x1482EFB0)
#define MOLEMOLE_UILOGINPAGECONTROLLER_SETSERVERBYNAME_OFFSET UNITYSDK_OFFSET(0x1482FFB0)
#define MOLEMOLE_UILOGINPAGECONTROLLER_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x1482D650)
#define MOLEMOLE_UILOGINPAGECONTROLLER_SETVERSIONINFO_OFFSET UNITYSDK_OFFSET(0x1482D450)
#define MOLEMOLE_UILOGINPAGECONTROLLER_SETXBOXIDTAG_OFFSET UNITYSDK_OFFSET(0x1482EF40)
#define MOLEMOLE_UILOGINPAGECONTROLLER_SHOWSERVERLISTVIEW_OFFSET UNITYSDK_OFFSET(0x14830750)
#define MOLEMOLE_UILOGINPAGECONTROLLER_STARTLOGINANDLOADRESOURCE_OFFSET UNITYSDK_OFFSET(0x14831B70)
#define MOLEMOLE_UILOGINPAGECONTROLLER_STARTLOGINPROCESS_OFFSET UNITYSDK_OFFSET(0x1482D510)
#define MOLEMOLE_UILOGINPAGECONTROLLER_STARTLOGIN_OFFSET UNITYSDK_OFFSET(0x1482F6A0)
#define MOLEMOLE_UILOGINPAGECONTROLLER_START_OFFSET UNITYSDK_OFFSET(0x1482F900)
#define MOLEMOLE_UILOGINPAGECONTROLLER__CCTOR_OFFSET UNITYSDK_OFFSET(0x14833BA0)
#define MOLEMOLE_UILOGINPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x14833B80)
#define MOLEMOLE_UILOGINPAGECONTROLLER__LOGININGAMESERVER_B__30_0_OFFSET UNITYSDK_OFFSET(0x14833E30)
#define MOLEMOLE_UILOGINPAGECONTROLLER__ONUIINIT_B__13_0_OFFSET UNITYSDK_OFFSET(0x14833BB0)
#define MOLEMOLE_UILOGINPAGECONTROLLER__ONUIOPEN_B__58_0_OFFSET UNITYSDK_OFFSET(0x14833FE0)
#define MOLEMOLE_UILOGINPAGECONTROLLER__ONUIOPEN_B__58_1_OFFSET UNITYSDK_OFFSET(0x14833FF0)
#define MOLEMOLE_UILOGINPAGECONTROLLER__STARTLOGINPROCESS_B__20_0_OFFSET UNITYSDK_OFFSET(0x14833D00)
#define MOLEMOLE_UILOGINPAGECONTROLLER__STARTLOGIN_B__21_0_OFFSET UNITYSDK_OFFSET(0x14833D10)
#define MOLEMOLE_UILOGINPAGECONTROLLER___BASE_GET_HOTSWITCHROOTLAYERSTATE_OFFSET UNITYSDK_OFFSET(0x14834000)
#define MOLEMOLE_UILOGINPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x14834010)
#define MOLEMOLE_UILOGINPAGECONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x148340A0)
#define MOLEMOLE_UILOGINPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x14834130)
#define MOLEMOLE_UILOGINPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x14834140)
#define MOLEMOLE_UILOGINPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x14834150)
#define MOLEMOLE_UILOGINPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x14834160)
#define MOLEMOLE_UILOGINPAGECONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x148341F0)

namespace MoleMole
{
	inline static constexpr unsigned int UILoginPageController_TypeDefinitionIndex = 76789;

	class UILoginPageController : public ::MoleMole::UIWindowController
	{
	public:
		static ::System::Boolean* StaticGet_Hide_Code_Login()
		{
			return (::System::Boolean*)Il2CppClass::FromTypeDefinitionIndex(UILoginPageController_TypeDefinitionIndex)->GetStaticField(0xF5C0);
		}
		// static const ::System::String* _RESOURCES_DESCRIPTION_TITLE; // 0x0
		// static const ::System::Int32 _Frequent_attempts_Count = 0x5; // 0x0
		// static const ::System::Single _Frequent_attempts_Time; // 0x0
		::System::Single _maxProgressValue; // 0x310
		::System::Single _progressOffset; // 0x314
		::System::Boolean _enableHotSwitch; // 0x318
		::Class_2_79F6D62CE30E3F8E_149* _view; // 0x320
		::Class_2_80AC63F59C5E376B* _loginModel; // 0x328
		::UnityEngine::Animation* mhyLogoPlay; // 0x330
		::UnityEngine::Animation* gameLogoPlay; // 0x338
		::UnityEngine::Animation* warningLogoPlay; // 0x340
		::MoleMole::UISDKLoginWidgetController* _sdkLogin; // 0x348
		::MoleMole::UIResourceLoadWidgetController* _resourceLoadWidget; // 0x350
		::MoleMole::UILoginAgeEjectDialogPopWindowController* ageDialog; // 0x358
		::MoleMole::UIGeneralLoginTipsDialogPopWindowController* _logintTipsParent; // 0x360
		::MoleMole::MonoGamepadBaseList* MonoGamepadModule_Left; // 0x368
		::MoleMole::MonoGamepadCustomList* MonoGamepadModule_Center; // 0x370
		::MoleMole::MonoGamepadBaseList* MonoGamepadModule_Right; // 0x378
		::Enum_3_7BB13037D7F77E90 _loginPageState; // 0x380
		::System::Boolean Disable_Frequent_attempts; // 0x384
		::System::Collections::Generic::List_1<::System::Single>* attempts_Time; // 0x388

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER__CCTOR_OFFSET))();
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::Enum_3_205B03D40B9BD873 get_MessageMatchPage()
		{
			return ((::Enum_3_205B03D40B9BD873(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_GET_MESSAGEMATCHPAGE_OFFSET))(this);
		}

		::UnityEngine::Transform* get_SDKWigetRoot()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_GET_SDKWIGETROOT_OFFSET))(this);
		}

		::Enum_3_8E90989A26BC6232 get_HotSwitchRootLayerState()
		{
			return ((::Enum_3_8E90989A26BC6232(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::UnityEngine::Transform* GetTipsRoot()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_GETTIPSROOT_OFFSET))(this);
		}

		::MoleMole::UIGeneralLoginTipsDialogPopWindowController* GetTipsRootWidget()
		{
			return ((::MoleMole::UIGeneralLoginTipsDialogPopWindowController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_GETTIPSROOTWIDGET_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_SETUIWINDOWSETTING_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void SetXboxIdTag()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_SETXBOXIDTAG_OFFSET))(this);
		}

		::System::Void SetResourceVersion()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_SETRESOURCEVERSION_OFFSET))(this);
		}

		::System::Void SetMessageKey(::System::String* key, ::System::Boolean needLoppAni, ::System::Boolean showGamePadHint)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_SETMESSAGEKEY_OFFSET))(this, key, needLoppAni, showGamePadHint);
		}

		::System::Void StartLoginProcess()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_STARTLOGINPROCESS_OFFSET))(this);
		}

		::System::Void StartLogin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_STARTLOGIN_OFFSET))(this);
		}

		::System::Void Start()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_START_OFFSET))(this);
		}

		::System::Void RequestServerList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_REQUESTSERVERLIST_OFFSET))(this);
		}

		::System::Void InitSeverList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_INITSEVERLIST_OFFSET))(this);
		}

		::System::Void SetServerByName(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_SETSERVERBYNAME_OFFSET))(this, name);
		}

		::System::Void SetBestServer(::System::Action* success)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_SETBESTSERVER_OFFSET))(this, success);
		}

		::System::Void OnBeforeWorldUpdate(::System::Single time)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_ONBEFOREWORLDUPDATE_OFFSET))(this, time);
		}

		::System::Void OpenSelectServer()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_OPENSELECTSERVER_OFFSET))(this);
		}

		::System::Void LoginInDispatch(::System::EventArgs* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_LOGININDISPATCH_OFFSET))(this, arg);
		}

		::System::Void LoginInGameServer(::System::EventArgs* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_LOGININGAMESERVER_OFFSET))(this, arg);
		}

		::System::Void OnSDKLoginSuccess(::System::EventArgs* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_ONSDKLOGINSUCCESS_OFFSET))(this, arg);
		}

		::System::Void SetLoginReady(::System::EventArgs* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_SETLOGINREADY_OFFSET))(this, arg);
		}

		::System::Void CancelLogin(::System::EventArgs* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_CANCELLOGIN_OFFSET))(this, arg);
		}

		::System::String* GetLoginKey()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_GETLOGINKEY_OFFSET))(this);
		}

		::System::Void ResetLogin(::System::EventArgs* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_RESETLOGIN_OFFSET))(this, arg);
		}

		::System::Void StartLoginAndLoadResource(::MoleMole::UIResourceLoadWidgetContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIResourceLoadWidgetContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_STARTLOGINANDLOADRESOURCE_OFFSET))(this, context);
		}

		::System::Void ResetFocus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_RESETFOCUS_OFFSET))(this);
		}

		::System::Void OnLoginError(::System::EventArgs* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_ONLOGINERROR_OFFSET))(this, arg);
		}

		::System::Void OnLoginGameServer(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_ONLOGINGAMESERVER_OFFSET))(this, args);
		}

		::System::Void OnSDKEnterGameSuccess(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_ONSDKENTERGAMESUCCESS_OFFSET))(this, args);
		}

		::System::Void CloseLogin(::System::Action_1<::System::Boolean>* cb)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_CLOSELOGIN_OFFSET))(this, cb);
		}

		::System::Void CloseLogin2(::System::Action_1<::System::Boolean>* cb)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_CLOSELOGIN2_OFFSET))(this, cb);
		}

		::System::Void ShowServerListView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_SHOWSERVERLISTVIEW_OFFSET))(this);
		}

		::System::Void RefreshServerText()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_REFRESHSERVERTEXT_OFFSET))(this);
		}

		::System::Void ColoseSDKTips()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_COLOSESDKTIPS_OFFSET))(this);
		}

		::System::Void InitLogin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_INITLOGIN_OFFSET))(this);
		}

		::System::Void SetLoginMode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_SETLOGINMODE_OFFSET))(this);
		}

		::System::Void SetVersionInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_SETVERSIONINFO_OFFSET))(this);
		}

		::System::Void OpenAgeDailog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_OPENAGEDAILOG_OFFSET))(this);
		}

		::System::Void OpenCloudPreLogin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_OPENCLOUDPRELOGIN_OFFSET))(this);
		}

		::System::Void OnSetLanguageVoice(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_ONSETLANGUAGEVOICE_OFFSET))(this, args);
		}

		::System::Void OpenSDKLogin(::MoleMole::UISDKLoginContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UISDKLoginContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_OPENSDKLOGIN_OFFSET))(this, context);
		}

		::System::Void OpenDebugLogin()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_OPENDEBUGLOGIN_OFFSET))(this);
		}

		::System::Void OpenResourceLoad(::MoleMole::UIResourceLoadWidgetContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIResourceLoadWidgetContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_OPENRESOURCELOAD_OFFSET))(this, context);
		}

		::System::Void EnableLoginInputBlock(::System::EventArgs* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_ENABLELOGININPUTBLOCK_OFFSET))(this, arg);
		}

		::System::Void SetIgnoreCustomListNavigateState(::System::Boolean ignoreNavigate)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_SETIGNORECUSTOMLISTNAVIGATESTATE_OFFSET))(this, ignoreNavigate);
		}

		::System::Void GamePadSetDefaultSelect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_GAMEPADSETDEFAULTSELECT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Boolean IsDispatchFrequentAttempts()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER_ISDISPATCHFREQUENTATTEMPTS_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__13_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER__ONUIINIT_B__13_0_OFFSET))(this);
		}

		::System::Void _StartLoginProcess_b__20_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER__STARTLOGINPROCESS_B__20_0_OFFSET))(this);
		}

		::System::Void _StartLogin_b__21_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER__STARTLOGIN_B__21_0_OFFSET))(this);
		}

		::System::Void _LoginInGameServer_b__30_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER__LOGININGAMESERVER_B__30_0_OFFSET))(this);
		}

		::System::Void _OnUIOpen_b__58_0(::System::EventArgs* _)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER__ONUIOPEN_B__58_0_OFFSET))(this, _);
		}

		::System::Void _OnUIOpen_b__58_1(::System::EventArgs* _)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER__ONUIOPEN_B__58_1_OFFSET))(this, _);
		}

		::Enum_3_8E90989A26BC6232 __base_get_HotSwitchRootLayerState()
		{
			return ((::Enum_3_8E90989A26BC6232(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER___BASE_GET_HOTSWITCHROOTLAYERSTATE_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void __base_SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILOGINPAGECONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET))(this);
		}
	};
}
