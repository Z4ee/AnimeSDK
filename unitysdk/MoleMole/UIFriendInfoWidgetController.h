#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_1_BE6BF7909AD9D940;
class Class_2_2F3C7D4EFC74D485;
class Class_2_79F6D62CE30E3F8E_6;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIFriendCardContext; }
namespace System { class EventArgs; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIFRIENDINFOWIDGETCONTROLLER_INITFRIENDINFOPAGE_OFFSET UNITYSDK_OFFSET(0x155AA9A0)
#define MOLEMOLE_UIFRIENDINFOWIDGETCONTROLLER_ONCLICKCONSOLEFRIENDTAB_OFFSET UNITYSDK_OFFSET(0x155ACC60)
#define MOLEMOLE_UIFRIENDINFOWIDGETCONTROLLER_ONCLICKINGAMEFRIENDTAB_OFFSET UNITYSDK_OFFSET(0x155ACCB0)
#define MOLEMOLE_UIFRIENDINFOWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x155AB5C0)
#define MOLEMOLE_UIFRIENDINFOWIDGETCONTROLLER_ONFRIENDINFOGAMEPADMODULEFOCUS_OFFSET UNITYSDK_OFFSET(0x155AB6D0)
#define MOLEMOLE_UIFRIENDINFOWIDGETCONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0x155AB540)
#define MOLEMOLE_UIFRIENDINFOWIDGETCONTROLLER_ONRECEIVEFRIENDLIST_OFFSET UNITYSDK_OFFSET(0x155ABBF0)
#define MOLEMOLE_UIFRIENDINFOWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x155AB330)
#define MOLEMOLE_UIFRIENDINFOWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x155AB650)
#define MOLEMOLE_UIFRIENDINFOWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x155AA7A0)
#define MOLEMOLE_UIFRIENDINFOWIDGETCONTROLLER_PLATFORM_ONRECEIVEFRIENDLIST_OFFSET UNITYSDK_OFFSET(0x155AC470)
#define MOLEMOLE_UIFRIENDINFOWIDGETCONTROLLER_SETUPONCLICKSENDMSGBTNACTION_OFFSET UNITYSDK_OFFSET(0x155AB2E0)
#define MOLEMOLE_UIFRIENDINFOWIDGETCONTROLLER_UPDATEFRIENDINFOPAGE_OFFSET UNITYSDK_OFFSET(0x155AB470)
#define MOLEMOLE_UIFRIENDINFOWIDGETCONTROLLER_UPDATEFRIENDINFO_OFFSET UNITYSDK_OFFSET(0x155AB770)
#define MOLEMOLE_UIFRIENDINFOWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x155ACD60)
#define MOLEMOLE_UIFRIENDINFOWIDGETCONTROLLER__INITFRIENDINFOPAGE_B__10_1_OFFSET UNITYSDK_OFFSET(0x155ACE40)
#define MOLEMOLE_UIFRIENDINFOWIDGETCONTROLLER__INITFRIENDINFOPAGE_B__10_2_OFFSET UNITYSDK_OFFSET(0x155ACE70)
#define MOLEMOLE_UIFRIENDINFOWIDGETCONTROLLER__INITFRIENDINFOPAGE_B__10_3_OFFSET UNITYSDK_OFFSET(0x155ACED0)
#define MOLEMOLE_UIFRIENDINFOWIDGETCONTROLLER__INITFRIENDINFOPAGE_B__10_4_OFFSET UNITYSDK_OFFSET(0x155ACF30)
#define MOLEMOLE_UIFRIENDINFOWIDGETCONTROLLER__INITFRIENDINFOPAGE_B__10_5_OFFSET UNITYSDK_OFFSET(0x155ACF40)
#define MOLEMOLE_UIFRIENDINFOWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x155ACF90)
#define MOLEMOLE_UIFRIENDINFOWIDGETCONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0x155AD020)
#define MOLEMOLE_UIFRIENDINFOWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x155AD0B0)
#define MOLEMOLE_UIFRIENDINFOWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x155AD150)
#define MOLEMOLE_UIFRIENDINFOWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x155AD1E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIFriendInfoWidgetController_TypeDefinitionIndex = 38303;

	class UIFriendInfoWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_79F6D62CE30E3F8E_6* _view; // 0x2B8
		::Class_2_2F3C7D4EFC74D485* _model; // 0x2C0
		::System::Collections::Generic::List_1<::MoleMole::UIFriendCardContext*>* _contextList; // 0x2C8
		::System::Boolean _otherPlatformEnable; // 0x2D0
		::System::Boolean _isShowingPlatform; // 0x2D1
		::System::Boolean _isSelectingInGameTab; // 0x2D2
		::System::Boolean _showInGameFriendListOnly; // 0x2D3
		::System::Action_1<::Class_1_BE6BF7909AD9D940*>* _onClickSendMsgBtn; // 0x2D8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDINFOWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDINFOWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void SetupOnClickSendMsgBtnAction(::System::Action_1<::Class_1_BE6BF7909AD9D940*>* onClickSendMsgBtn)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::Class_1_BE6BF7909AD9D940*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDINFOWIDGETCONTROLLER_SETUPONCLICKSENDMSGBTNACTION_OFFSET))(this, onClickSendMsgBtn);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDINFOWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDINFOWIDGETCONTROLLER_ONHIDE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDINFOWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDINFOWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnFriendInfoGamepadModuleFocus(::MoleMole::MonoGamepadModule* gamepadModule)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDINFOWIDGETCONTROLLER_ONFRIENDINFOGAMEPADMODULEFOCUS_OFFSET))(this, gamepadModule);
		}

		::System::Void InitFriendInfoPage()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDINFOWIDGETCONTROLLER_INITFRIENDINFOPAGE_OFFSET))(this);
		}

		::System::Void UpdateFriendInfoPage(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDINFOWIDGETCONTROLLER_UPDATEFRIENDINFOPAGE_OFFSET))(this, args);
		}

		::System::Void UpdateFriendInfo(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDINFOWIDGETCONTROLLER_UPDATEFRIENDINFO_OFFSET))(this, obj);
		}

		::System::Void OnReceiveFriendList(::System::Collections::Generic::List_1<::Class_1_BE6BF7909AD9D940*>* friendList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_BE6BF7909AD9D940*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDINFOWIDGETCONTROLLER_ONRECEIVEFRIENDLIST_OFFSET))(this, friendList);
		}

		::System::Void Platform_OnReceiveFriendList(::System::Collections::Generic::List_1<::Class_1_BE6BF7909AD9D940*>* friendList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_BE6BF7909AD9D940*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDINFOWIDGETCONTROLLER_PLATFORM_ONRECEIVEFRIENDLIST_OFFSET))(this, friendList);
		}

		::System::Void OnClickConsoleFriendTab()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDINFOWIDGETCONTROLLER_ONCLICKCONSOLEFRIENDTAB_OFFSET))(this);
		}

		::System::Void OnClickInGameFriendTab()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDINFOWIDGETCONTROLLER_ONCLICKINGAMEFRIENDTAB_OFFSET))(this);
		}

		::System::Void _InitFriendInfoPage_b__10_1(::System::Boolean isFocusing)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDINFOWIDGETCONTROLLER__INITFRIENDINFOPAGE_B__10_1_OFFSET))(this, isFocusing);
		}

		::System::Void _InitFriendInfoPage_b__10_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDINFOWIDGETCONTROLLER__INITFRIENDINFOPAGE_B__10_2_OFFSET))(this);
		}

		::System::Void _InitFriendInfoPage_b__10_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDINFOWIDGETCONTROLLER__INITFRIENDINFOPAGE_B__10_3_OFFSET))(this);
		}

		::System::Void _InitFriendInfoPage_b__10_4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDINFOWIDGETCONTROLLER__INITFRIENDINFOPAGE_B__10_4_OFFSET))(this);
		}

		::System::Void _InitFriendInfoPage_b__10_5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDINFOWIDGETCONTROLLER__INITFRIENDINFOPAGE_B__10_5_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDINFOWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDINFOWIDGETCONTROLLER___BASE_ONHIDE_OFFSET))(this);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDINFOWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDINFOWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDINFOWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
