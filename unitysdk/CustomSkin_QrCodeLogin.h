#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MiHoYo/SDK/PluginUI/MiHoYoSDKUIContainer.h"
#include "unitysdk/QREnterIcon.h"

class Class_2_7B15B3118FE590CD_11;
class Class_2_7B15B3118FE590CD_11_Class_2_FCBF41D0BBD215F7;
namespace MoleMole { class UIGeneralLoginQRCodeDialogPopWindowController; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }

#define CUSTOMSKIN_QRCODELOGIN_GENQRENTERICON_OFFSET UNITYSDK_OFFSET(0x14518D40)
#define CUSTOMSKIN_QRCODELOGIN_INITDYNAMICSHOWELEMENTS_OFFSET UNITYSDK_OFFSET(0x14518420)
#define CUSTOMSKIN_QRCODELOGIN_INITPERSISTENCHECK_OFFSET UNITYSDK_OFFSET(0x14518F40)
#define CUSTOMSKIN_QRCODELOGIN_INIT_OFFSET UNITYSDK_OFFSET(0x145173A0)
#define CUSTOMSKIN_QRCODELOGIN_INSTANCE_OFFSET UNITYSDK_OFFSET(0x14517000)
#define CUSTOMSKIN_QRCODELOGIN_ONCLICKCLOSE_OFFSET UNITYSDK_OFFSET(0x145191B0)
#define CUSTOMSKIN_QRCODELOGIN_ONCLICKFAILREFRESH_OFFSET UNITYSDK_OFFSET(0x145199B0)
#define CUSTOMSKIN_QRCODELOGIN_ONCLICKOVERDUEREFRESH_OFFSET UNITYSDK_OFFSET(0x145198B0)
#define CUSTOMSKIN_QRCODELOGIN_ONCLICKPC_OFFSET UNITYSDK_OFFSET(0x14519230)
#define CUSTOMSKIN_QRCODELOGIN_ONCLICKPERSISTENCHECK_OFFSET UNITYSDK_OFFSET(0x145192B0)
#define CUSTOMSKIN_QRCODELOGIN_ONCLICKSUCCESSSWITCH_OFFSET UNITYSDK_OFFSET(0x14519930)
#define CUSTOMSKIN_QRCODELOGIN_ONCLOSE_OFFSET UNITYSDK_OFFSET(0x14517900)
#define CUSTOMSKIN_QRCODELOGIN_ONELEMENTSTATUSCHANGED_OFFSET UNITYSDK_OFFSET(0x14518320)
#define CUSTOMSKIN_QRCODELOGIN_ONENTERPCSWITCH_OFFSET UNITYSDK_OFFSET(0x14519490)
#define CUSTOMSKIN_QRCODELOGIN_ONEXITPCSWITCH_OFFSET UNITYSDK_OFFSET(0x145195A0)
#define CUSTOMSKIN_QRCODELOGIN_ONHIDEELEMENT_OFFSET UNITYSDK_OFFSET(0x14517DA0)
#define CUSTOMSKIN_QRCODELOGIN_ONSHOWELEMENT_OFFSET UNITYSDK_OFFSET(0x14517A40)
#define CUSTOMSKIN_QRCODELOGIN_ONSHOW_OFFSET UNITYSDK_OFFSET(0x145171C0)
#define CUSTOMSKIN_QRCODELOGIN_REFRESHBTNSTATE_OFFSET UNITYSDK_OFFSET(0x14517E00)
#define CUSTOMSKIN_QRCODELOGIN_SHOWELEMENT_OFFSET UNITYSDK_OFFSET(0x14517AA0)
#define CUSTOMSKIN_QRCODELOGIN_UPDATETEXT_OFFSET UNITYSDK_OFFSET(0x14519600)
#define CUSTOMSKIN_QRCODELOGIN__CTOR_OFFSET UNITYSDK_OFFSET(0x14517130)
#define CUSTOMSKIN_QRCODELOGIN___BASE_ONELEMENTSTATUSCHANGED_OFFSET UNITYSDK_OFFSET(0x14519A30)
#define CUSTOMSKIN_QRCODELOGIN___BASE_ONHIDEELEMENT_OFFSET UNITYSDK_OFFSET(0x14519A40)
#define CUSTOMSKIN_QRCODELOGIN___BASE_ONSHOWELEMENT_OFFSET UNITYSDK_OFFSET(0x14519A50)

inline static constexpr unsigned int CustomSkin_QrCodeLogin_TypeDefinitionIndex = 73596;

class CustomSkin_QrCodeLogin : public ::MiHoYo::SDK::PluginUI::MiHoYoSDKUIContainer
{
public:
	static ::CustomSkin_QrCodeLogin** StaticGet__instance()
	{
		return (::CustomSkin_QrCodeLogin**)Il2CppClass::FromTypeDefinitionIndex(CustomSkin_QrCodeLogin_TypeDefinitionIndex)->GetStaticField(0x2E460);
	}
	::System::Collections::Generic::Dictionary_2<::System::String*, ::QREnterIcon>* enterIconDict; // 0x18
	::MoleMole::UIGeneralLoginQRCodeDialogPopWindowController* _qrDialog; // 0x20
	::System::Collections::Generic::Dictionary_2<::System::String*, ::UnityEngine::GameObject*>* dynamicElementDict; // 0x28
	::Class_2_7B15B3118FE590CD_11* _view; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_QRCODELOGIN__CTOR_OFFSET))(this);
	}

	static ::CustomSkin_QrCodeLogin* Instance()
	{
		return ((::CustomSkin_QrCodeLogin*(*)())((::PBYTE)hIl2Cpp + CUSTOMSKIN_QRCODELOGIN_INSTANCE_OFFSET))();
	}

	::System::Void OnShow()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_QRCODELOGIN_ONSHOW_OFFSET))(this);
	}

	::System::Void OnClose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_QRCODELOGIN_ONCLOSE_OFFSET))(this);
	}

	::System::Void OnShowElement(::System::Collections::Generic::List_1<::System::String*>* lstElementIds)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CUSTOMSKIN_QRCODELOGIN_ONSHOWELEMENT_OFFSET))(this, lstElementIds);
	}

	::System::Void OnHideElement(::System::Collections::Generic::List_1<::System::String*>* lstElementIds)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CUSTOMSKIN_QRCODELOGIN_ONHIDEELEMENT_OFFSET))(this, lstElementIds);
	}

	::System::Void ShowElement(::System::Collections::Generic::List_1<::System::String*>* lstElementIds, ::System::Boolean bIsVisible)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + CUSTOMSKIN_QRCODELOGIN_SHOWELEMENT_OFFSET))(this, lstElementIds, bIsVisible);
	}

	::System::Void OnElementStatusChanged(::System::String* strElementID, ::System::String* strStatusName, ::System::String* strStatusValue)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CUSTOMSKIN_QRCODELOGIN_ONELEMENTSTATUSCHANGED_OFFSET))(this, strElementID, strStatusName, strStatusValue);
	}

	::System::Void Init()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_QRCODELOGIN_INIT_OFFSET))(this);
	}

	::System::Void InitPersistenCheck()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_QRCODELOGIN_INITPERSISTENCHECK_OFFSET))(this);
	}

	::QREnterIcon GenQREnterIcon(::System::String* elementName, ::Class_2_7B15B3118FE590CD_11_Class_2_FCBF41D0BBD215F7* appIconView, ::System::Boolean created, ::System::String* tipTextKey)
	{
		return ((::QREnterIcon(*)(::PVOID, ::System::String*, ::Class_2_7B15B3118FE590CD_11_Class_2_FCBF41D0BBD215F7*, ::System::Boolean, ::System::String*))((::PBYTE)hIl2Cpp + CUSTOMSKIN_QRCODELOGIN_GENQRENTERICON_OFFSET))(this, elementName, appIconView, created, tipTextKey);
	}

	::System::Void OnClickClose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_QRCODELOGIN_ONCLICKCLOSE_OFFSET))(this);
	}

	::System::Void OnClickPC()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_QRCODELOGIN_ONCLICKPC_OFFSET))(this);
	}

	::System::Void OnClickPersistenCheck()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_QRCODELOGIN_ONCLICKPERSISTENCHECK_OFFSET))(this);
	}

	::System::Void OnEnterPCSwitch()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_QRCODELOGIN_ONENTERPCSWITCH_OFFSET))(this);
	}

	::System::Void OnExitPCSwitch()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_QRCODELOGIN_ONEXITPCSWITCH_OFFSET))(this);
	}

	::System::Void UpdateText()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_QRCODELOGIN_UPDATETEXT_OFFSET))(this);
	}

	::System::Void RefreshBtnState(::System::String* elementID, ::System::Boolean bIsVisible)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + CUSTOMSKIN_QRCODELOGIN_REFRESHBTNSTATE_OFFSET))(this, elementID, bIsVisible);
	}

	::System::Void OnClickOverdueRefresh()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_QRCODELOGIN_ONCLICKOVERDUEREFRESH_OFFSET))(this);
	}

	::System::Void OnClickSuccessSwitch()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_QRCODELOGIN_ONCLICKSUCCESSSWITCH_OFFSET))(this);
	}

	::System::Void OnClickFailRefresh()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_QRCODELOGIN_ONCLICKFAILREFRESH_OFFSET))(this);
	}

	::System::Void InitDynamicShowElements()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CUSTOMSKIN_QRCODELOGIN_INITDYNAMICSHOWELEMENTS_OFFSET))(this);
	}

	::System::Void __base_OnElementStatusChanged(::System::String* P0, ::System::String* P1, ::System::String* P2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + CUSTOMSKIN_QRCODELOGIN___BASE_ONELEMENTSTATUSCHANGED_OFFSET))(this, P0, P1, P2);
	}

	::System::Void __base_OnHideElement(::System::Collections::Generic::List_1<::System::String*>* P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CUSTOMSKIN_QRCODELOGIN___BASE_ONHIDEELEMENT_OFFSET))(this, P0);
	}

	::System::Void __base_OnShowElement(::System::Collections::Generic::List_1<::System::String*>* P0)
	{
		return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::String*>*))((::PBYTE)hIl2Cpp + CUSTOMSKIN_QRCODELOGIN___BASE_ONSHOWELEMENT_OFFSET))(this, P0);
	}
};
